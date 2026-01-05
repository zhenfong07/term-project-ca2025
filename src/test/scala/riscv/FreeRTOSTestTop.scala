// SPDX-License-Identifier: MIT
// Complete Test Module with all peripherals for FreeRTOS testing
//
// This module mirrors Top.scala but includes ROM loading for simulation.
// It has: CPU, Memory, MachineTimer, UART, BusSwitch
//
// Memory Map (same as Top.scala via BusSwitch):
//   0x0000_0000 - 0x1FFF_FFFF : Memory (Slave 0)
//   0x2000_0000 - 0x3FFF_FFFF : VGA (Slave 1) - DummySlave in this test
//   0x4000_0000 - 0x5FFF_FFFF : UART (Slave 2)
//   0x6000_0000 - 0x7FFF_FFFF : MachineTimer (Slave 3)

package riscv

import bus.AXI4LiteSlave
import bus.BusSwitch
import chisel3._
import chisel3.util._
import peripheral.InstructionROM
import peripheral.Memory
import peripheral.ROMLoader
import peripheral.MachineTimer
import peripheral.Uart
import peripheral.DummySlave
import riscv.core.CPU

class FreeRTOSTestTop(exeFilename: String) extends Module {
  val io = IO(new Bundle {
    // Debug interfaces
    val regs_debug_read_address = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val mem_debug_read_address  = Input(UInt(Parameters.AddrWidth))
    val regs_debug_read_data    = Output(UInt(Parameters.DataWidth))
    val mem_debug_read_data     = Output(UInt(Parameters.DataWidth))
    val csr_debug_read_address  = Input(UInt(Parameters.CSRRegisterAddrWidth))
    val csr_debug_read_data     = Output(UInt(Parameters.DataWidth))
    
    // Timer debug outputs
    val timer_mtime    = Output(UInt(64.W))
    val timer_mtimecmp = Output(UInt(64.W))
    val timer_mtip     = Output(Bool())
    
    // UART output
    val uart_txd = Output(UInt(1.W))
    
    // External interrupt input
    val external_interrupt = Input(Bool())
  })

  // ========== Modules ==========
  val mem             = Module(new Memory(8192)) // 32KB
  val instruction_rom = Module(new InstructionROM(exeFilename))
  val rom_loader      = Module(new ROMLoader(instruction_rom.capacity))
  val machine_timer   = Module(new MachineTimer)
  val uart            = Module(new Uart(frequency = 50000000, baudRate = 115200))
  val dummy           = Module(new DummySlave)
  val cpu             = Module(new CPU)
  val bus_switch      = Module(new BusSwitch)
  val mem_slave       = Module(new AXI4LiteSlave(Parameters.AddrBits, Parameters.DataBits))

  // ========== ROM Loading ==========
  rom_loader.io.rom_data     := instruction_rom.io.data
  rom_loader.io.load_address := Parameters.EntryAddress
  instruction_rom.io.address := rom_loader.io.rom_address

  // ========== CPU Connections ==========
  // Instruction fetch from memory
  mem.io.instruction_address := cpu.io.instruction_address
  cpu.io.instruction         := mem.io.instruction
  cpu.io.instruction_valid   := rom_loader.io.load_finished

  // Interrupt vector: MTIP at bit 0, MEIP at bit 11 (same as Top.scala)
  val interrupt_vector = WireDefault(0.U(32.W))
  interrupt_vector := Cat(
    0.U(20.W),                     // Bits 31-12
    io.external_interrupt,         // Bit 11: MEIP
    0.U(10.W),                     // Bits 10-1
    machine_timer.io.mtip          // Bit 0: MTIP
  )
  cpu.io.interrupt_flag := interrupt_vector

  // Unused memory_bundle (using AXI4 instead)
  cpu.io.memory_bundle.read_data           := 0.U
  cpu.io.memory_bundle.read_valid          := false.B
  cpu.io.memory_bundle.write_valid         := false.B
  cpu.io.memory_bundle.write_data_accepted := false.B
  cpu.io.memory_bundle.busy                := false.B
  cpu.io.memory_bundle.granted             := false.B

  // Debug interfaces
  cpu.io.debug_read_address     := io.regs_debug_read_address
  io.regs_debug_read_data       := cpu.io.debug_read_data
  cpu.io.csr_debug_read_address := io.csr_debug_read_address
  io.csr_debug_read_data        := cpu.io.csr_debug_read_data

  // ========== Bus Switch ==========
  // Connect CPU to BusSwitch (this routes to different slaves based on address)
  bus_switch.io.master  <> cpu.io.axi4_channels
  bus_switch.io.address := cpu.io.bus_address
  
  // Slave 0: Memory (0x00000000 - 0x1FFFFFFF)
  bus_switch.io.slaves(0) <> mem_slave.io.channels
  
  // Slave 1: VGA placeholder (0x20000000 - 0x3FFFFFFF) - use dummy
  bus_switch.io.slaves(1) <> dummy.io.channels
  
  // Slave 2: UART (0x40000000 - 0x5FFFFFFF)
  bus_switch.io.slaves(2) <> uart.io.channels
  
  // Slave 3: MachineTimer (0x60000000 - 0x7FFFFFFF)
  bus_switch.io.slaves(3) <> machine_timer.io.channels
  
  // Remaining slaves: dummy
  for (i <- 4 until Parameters.SlaveDeviceCount) {
    bus_switch.io.slaves(i) <> dummy.io.channels
  }

  // ========== Memory Connections ==========
  val loading = !rom_loader.io.load_finished

  mem.io.bundle.address      := Mux(loading, rom_loader.io.bundle.address, mem_slave.io.bundle.address)
  mem.io.bundle.write_data   := Mux(loading, rom_loader.io.bundle.write_data, mem_slave.io.bundle.write_data)
  mem.io.bundle.write_enable := Mux(loading, rom_loader.io.bundle.write_enable, mem_slave.io.bundle.write)
  mem.io.bundle.write_strobe := Mux(loading, rom_loader.io.bundle.write_strobe, mem_slave.io.bundle.write_strobe)

  rom_loader.io.bundle.read_data := mem.io.bundle.read_data

  // Memory read response (1-cycle latency)
  val read_pending = RegNext(mem_slave.io.bundle.read && !loading, false.B)
  mem_slave.io.bundle.read_data  := mem.io.bundle.read_data
  mem_slave.io.bundle.read_valid := read_pending

  // Memory debug - need to handle addresses in different regions
  // For addresses < 0x20000000, read from Memory
  // For timer addresses (0x60000000+), expose timer debug signals
  mem.io.debug_read_address := io.mem_debug_read_address
  io.mem_debug_read_data    := mem.io.debug_read_data

  // ========== Peripheral Connections ==========
  // UART
  uart.io.rxd  := 1.U  // Idle high
  io.uart_txd  := uart.io.txd

  // Timer debug outputs
  io.timer_mtime    := machine_timer.io.debug_mtime
  io.timer_mtimecmp := machine_timer.io.debug_mtimecmp
  io.timer_mtip     := machine_timer.io.mtip
}
