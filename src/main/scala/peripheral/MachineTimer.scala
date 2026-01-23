// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package peripheral

import bus.AXI4LiteChannels
import bus.AXI4LiteSlave
import chisel3._
import chisel3.util._
import riscv.Parameters

// Machine Timer: RISC-V standard mtime/mtimecmp for FreeRTOS tick interrupts
//
// Memory map:
//   0x00: mtime[31:0]    - Lower 32 bits of time counter (RW)
//   0x04: mtime[63:32]   - Upper 32 bits of time counter (RW)
//   0x08: mtimecmp[31:0] - Lower 32 bits of compare value (RW)
//   0x0C: mtimecmp[63:32] - Upper 32 bits of compare value (RW)
//
// Interrupt: mtip asserted when mtime >= mtimecmp
class MachineTimer(addrWidth: Int = 32, dataWidth: Int = Parameters.DataBits) extends Module {
  val io = IO(new Bundle {
    val channels = Flipped(new AXI4LiteChannels(addrWidth, dataWidth))
    val mtip     = Output(Bool())
    
    val debug_mtime    = Output(UInt(64.W))
    val debug_mtimecmp = Output(UInt(64.W))
  })

  //64 bit reg
  val mtime    = RegInit(0.U(64.W))

  val mtimecmp = RegInit("hffffffffffffffff".U(64.W))

  // timer’s clock domain assumption:
  // timer increments at the rate of CPU clock frequency (1 tick per CPU cycle)
  // for exemple 3.4GHz system clock (my cpu rate), mtime increments 3 400 000 000 times per second
  // FreeRTOS need to know CPU clock frequency when calculating timeouts to convert to real time.
  //  this is why FreeRTOS can acces the tick rate in the FreeRTOSConfig.h file to 
  mtime := mtime + 1.U

  //interruption
  io.mtip := mtime >= mtimecmp

  //interface
  val slave = Module(new AXI4LiteSlave(addrWidth, dataWidth))
  slave.io.channels <> io.channels

  //decoding
  val addr = slave.io.bundle.address & 0xF.U

  //reading
  slave.io.bundle.read_valid := true.B
  slave.io.bundle.read_data := MuxLookup(addr, 0.U)(
    Seq(
      0x0.U -> mtime(31, 0),
      0x4.U -> mtime(63, 32),
      0x8.U -> mtimecmp(31, 0),
      0xC.U -> mtimecmp(63, 32)
    )
  )

  //writing
  when(slave.io.bundle.write) {
    switch(addr) {
      is(0x0.U) { mtime := Cat(mtime(63, 32), slave.io.bundle.write_data) }
      is(0x4.U) { mtime := Cat(slave.io.bundle.write_data, mtime(31, 0)) }
      is(0x8.U) { mtimecmp := Cat(mtimecmp(63, 32), slave.io.bundle.write_data) }
      is(0xC.U) { mtimecmp := Cat(slave.io.bundle.write_data, mtimecmp(31, 0)) }
    }
  }

  io.debug_mtime    := mtime
  io.debug_mtimecmp := mtimecmp
}
