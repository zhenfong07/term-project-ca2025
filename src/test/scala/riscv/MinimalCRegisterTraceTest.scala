// Trace register a3 (x13) to see when it gets corrupted

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalCRegisterTraceTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal C Register Trace")

  it should "trace a3 register corruption" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MINIMAL C REGISTER a3 TRACE")
      println("=" * 80)
      
      println("Waiting 10000 cycles for ROM load...")
      dut.clock.step(10000)
      
      println()
      println("Cycle | PC     | a3 (x13)  | a4 (x14)  | a5 (x15)  | Instruction")
      println("-" * 80)
      
      for (cycle <- 1 to 100) {
        val pc = dut.io.instruction_address.peekInt()
        
        // Read a3 (x13), a4 (x14), a5 (x15)
        dut.io.regs_debug_read_address.poke(13.U)
        dut.clock.step(1)
        val a3 = dut.io.regs_debug_read_data.peekInt()
        
        dut.io.regs_debug_read_address.poke(14.U)
        dut.clock.step(1)
        val a4 = dut.io.regs_debug_read_data.peekInt()
        
        dut.io.regs_debug_read_address.poke(15.U)
        dut.clock.step(1)
        val a5 = dut.io.regs_debug_read_data.peekInt()
        
        dut.io.mem_debug_read_address.poke(pc.U)
        dut.clock.step(1)
        val inst = dut.io.mem_debug_read_data.peekInt()
        
        // Print key instructions
        if (pc >= 0x1014 && pc <= 0x1058) {
          println(f"$cycle%5d | 0x${pc}%04x | 0x${a3}%08x | 0x${a4}%08x | 0x${a5}%08x | 0x${inst}%08x")
          
          if (pc == 0x1018 && a3 == 0x40000010L) {
            println("       → a3 correctly set to UART address!")
          }
          if (pc == 0x1054 && a3 != 0x40000010L) {
            println(f"       → BUG! a3 corrupted to 0x${a3}%08x instead of 0x40000010!")
          }
        }
        
        dut.clock.step(1)
      }
      
      println("=" * 80)
    }
  }
}
