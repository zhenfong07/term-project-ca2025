// FreeRTOS Test Harness - Full system with MachineTimer and UART
// Created by Van Nguyen Thi Thao

package riscv

import bus.{AXI4LiteSlave, BusSwitch}
import chisel3._
import chisel3.util._
import peripheral.{InstructionROM, Memory, ROMLoader, MachineTimer, Uart}
import riscv.core.CPU

// Full test harness for FreeRTOS testing
// Includes: CPU + Memory + MachineTimer + UART
// Matches 4-soc architecture but simplified for testing
class FreeRTOSTestTop(exeFilename: String) extends Module {
  val io = IO(new Bundle {
    // Debug interfaces
    val regs_debug_read_address = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val mem_debug_read_address  = Input(UInt(Parameters.AddrWidth))
    val regs_debug_read_data    = Output(UInt(Parameters.DataWidth))
    val mem_debug_read_data     = Output(UInt(Parameters.DataWidth))
    val csr_debug_read_address  = Input(UInt(Parameters.CSRRegisterAddrWidth))
    val csr_debug_read_data     = Output(UInt(Parameters.DataWidth))
    
    // Bus debug outputs
    val bus_address = Output(UInt(Parameters.AddrWidth))
    
    // CPU PC debug output
    val instruction_address = Output(UInt(Parameters.AddrWidth))
    
    // ALU result debug (for store address debugging)
    val alu_result_mem = Output(UInt(Parameters.DataWidth))
    
    // Register file debug outputs
    val cpu_pc      = Output(UInt(Parameters.AddrWidth))
    val debug_reg_sp = Output(UInt(Parameters.DataWidth))
    val debug_reg_a2 = Output(UInt(Parameters.DataWidth))
    val debug_reg_a3 = Output(UInt(Parameters.DataWidth))
    val debug_reg_a5 = Output(UInt(Parameters.DataWidth))
    
    // Forwarding debug signals
    val debug_reg1_forward_ex = Output(UInt(2.W))
    val debug_rs1_ex = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val debug_rd_mem = Output(UInt(Parameters.PhysicalRegisterAddrWidth))
    val debug_reg_write_enable_mem = Output(Bool())
    
    // Pipeline stall debug
    val mem_stall_flag = Output(Bool())
    
    // Timer debug outputs
    val timer_mtip     = Output(Bool())
    val timer_mtime    = Output(UInt(64.W))
    val timer_mtimecmp = Output(UInt(64.W))
    
    // UART outputs for monitoring
    val uart_tx = Output(Bool())
  })

  // ========================================================================
  // Peripherals
  // ========================================================================
  
  val mem             = Module(new Memory(32768))  // 32KB memory (matches link.lds RAM size)
  val instruction_rom = Module(new InstructionROM(exeFilename))
  val rom_loader      = Module(new ROMLoader(instruction_rom.capacity))
  val machine_timer   = Module(new MachineTimer)
  val uart            = Module(new Uart(frequency = 50000000, baudRate = 115200))

  rom_loader.io.rom_data     := instruction_rom.io.data
  rom_loader.io.load_address := Parameters.EntryAddress
  instruction_rom.io.address := rom_loader.io.rom_address

  // ========================================================================
  // CPU (NO clock divider for testing - run at full speed)
  // ========================================================================
  
  val cpu = Module(new CPU)

    // ========================================================================
    // Bus Switch for routing CPU to peripherals
    // ========================================================================
    
    val bus_switch = Module(new BusSwitch)
    
    // Memory slave
    val mem_slave = Module(new AXI4LiteSlave(Parameters.AddrBits, Parameters.DataBits))
    
    // Connect CPU to bus switch
    bus_switch.io.master  <> cpu.io.axi4_channels
    bus_switch.io.address := cpu.io.bus_address
    
    // Connect slaves to bus switch
    // Slave 0: Memory (0x0000_0000 - 0x1FFF_FFFF)
    bus_switch.io.slaves(0) <> mem_slave.io.channels
    
    // Slave 1: VGA - not used, connect to dummy (0x2000_0000 - 0x3FFF_FFFF)
    val dummy_vga = Module(new peripheral.DummySlave)
    bus_switch.io.slaves(1) <> dummy_vga.io.channels
    
    // Slave 2: UART (0x4000_0000 - 0x5FFF_FFFF)
    bus_switch.io.slaves(2) <> uart.io.channels
    
    // Slave 3: MachineTimer (0x6000_0000 - 0x7FFF_FFFF)
    bus_switch.io.slaves(3) <> machine_timer.io.channels
    
    // Connect unused slaves (4-7) to prevent hanging
    for (i <- 4 until Parameters.SlaveDeviceCount) {
      val dummy = Module(new peripheral.DummySlave)
      bus_switch.io.slaves(i) <> dummy.io.channels
    }

    // ========================================================================
    // Instruction Fetch
    // ========================================================================
    
    cpu.io.instruction_valid := rom_loader.io.load_finished
    mem.io.instruction_address := cpu.io.instruction_address
    cpu.io.instruction := mem.io.instruction

    // ========================================================================
    // Interrupt Routing
    // ========================================================================
    
    // Create interrupt vector
    // Bit 0: MTIP (Machine Timer Interrupt)
    // Bit 11: MEIP (Machine External Interrupt) - not used in this test
    val interrupt_vector = WireDefault(0.U(32.W))
    interrupt_vector := Cat(
      0.U(20.W),                    // Bits 31-12: reserved
      uart.io.signal_interrupt,     // Bit 11: MEIP (UART interrupt)
      0.U(10.W),                    // Bits 10-1: reserved
      machine_timer.io.mtip         // Bit 0: MTIP (timer interrupt)
    )
    cpu.io.interrupt_flag := interrupt_vector

    // ========================================================================
    // Memory Connections
    // ========================================================================
    
    val loading = !rom_loader.io.load_finished

    // Memory bundle connections (mux between ROMLoader and CPU)
    mem.io.bundle.address      := Mux(loading, rom_loader.io.bundle.address, mem_slave.io.bundle.address)
    mem.io.bundle.write_data   := Mux(loading, rom_loader.io.bundle.write_data, mem_slave.io.bundle.write_data)
    mem.io.bundle.write_enable := Mux(loading, rom_loader.io.bundle.write_enable, mem_slave.io.bundle.write)
    mem.io.bundle.write_strobe := Mux(loading, rom_loader.io.bundle.write_strobe, mem_slave.io.bundle.write_strobe)

    rom_loader.io.bundle.read_data := mem.io.bundle.read_data

    // AXI slave read responses (1 cycle latency for SyncReadMem)
    val read_pending = RegNext(mem_slave.io.bundle.read && !loading, false.B)
    mem_slave.io.bundle.read_data  := mem.io.bundle.read_data
    mem_slave.io.bundle.read_valid := read_pending

    // ========================================================================
    // Debug Interfaces
    // ========================================================================
    
    cpu.io.debug_read_address     := io.regs_debug_read_address
    io.regs_debug_read_data       := cpu.io.debug_read_data
    cpu.io.csr_debug_read_address := io.csr_debug_read_address
    io.csr_debug_read_data        := cpu.io.csr_debug_read_data
    
    io.instruction_address        := cpu.io.instruction_address

    // Drive unused memory_bundle inputs
    cpu.io.memory_bundle.read_data           := DontCare
    cpu.io.memory_bundle.read_valid          := false.B
    cpu.io.memory_bundle.write_valid         := false.B
    cpu.io.memory_bundle.write_data_accepted := false.B
    cpu.io.memory_bundle.busy                := false.B
    cpu.io.memory_bundle.granted             := true.B

  // ========================================================================
  // External Outputs
  // ========================================================================
  
  mem.io.debug_read_address := io.mem_debug_read_address
  io.mem_debug_read_data    := mem.io.debug_read_data
  
  // Bus address debug output
  io.bus_address := cpu.io.bus_address
  io.alu_result_mem := cpu.io.alu_result_debug
  io.cpu_pc := cpu.io.instruction_address
  io.debug_reg_sp := cpu.io.debug_reg_sp
  io.debug_reg_a2 := cpu.io.debug_reg_a2
  io.debug_reg_a3 := cpu.io.debug_reg_a3
  io.debug_reg_a5 := cpu.io.debug_reg_a5
  io.debug_reg1_forward_ex := cpu.io.debug_reg1_forward_ex
  io.debug_rs1_ex := cpu.io.debug_rs1_ex
  io.debug_rd_mem := cpu.io.debug_rd_mem
  io.debug_reg_write_enable_mem := cpu.io.debug_reg_write_enable_mem
  io.mem_stall_flag := false.B  // TODO: connect to actual stall signal if needed
  
  // Timer debug outputs
  io.timer_mtip     := machine_timer.io.mtip
  io.timer_mtime    := machine_timer.io.debug_mtime
  io.timer_mtimecmp := machine_timer.io.debug_mtimecmp
  
  // UART output
  io.uart_tx := uart.io.txd
  
  // UART input (tie to 1 for idle)
  uart.io.rxd := true.B
}
