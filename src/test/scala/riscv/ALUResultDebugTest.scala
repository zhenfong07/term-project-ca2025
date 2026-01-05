// Debug: Monitor ALU result in EX stage vs bus_address in MEM stage

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class ALUResultDebugTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("ALU Result Debug")

  it should "trace alu_result propagation through pipeline" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("TRACING ALU RESULT vs BUS ADDRESS")
      println("=" * 80)
      println("Looking for PC=0x1054 (UART write instruction)")
      println()
      
      // Wait for ROM load
      dut.clock.step(5000)
      
      var found_count = 0
      
      println("Cycle | PC     | a3 (x13)  | bus_addr  | Note")
      println("-" * 70)
      
      for (cycle <- 1 to 10000 if found_count < 20) {
        val pc = dut.io.instruction_address.peekInt()
        val bus_addr = dut.io.bus_address.peekInt()
        
        // Read a3 (register x13)
        dut.io.regs_debug_read_address.poke(13.U)
        dut.clock.step(1)
        val a3 = dut.io.regs_debug_read_data.peekInt()
        
        if (pc == 0x1054) {
          found_count += 1
          val note = if (bus_addr == 0x40000010) {
            "✓ CORRECT"
          } else if (bus_addr == a3) {
            "✓ bus=a3"
          } else {
            f"✗ BUG! Expected 0x40000010, got 0x${bus_addr}%08x"
          }
          
          println(f"$cycle%5d | 0x${pc}%04x | 0x${a3}%08x | 0x${bus_addr}%08x | $note")
        }
        
        dut.clock.step(1)
      }
      
      println()
      println(s"Found $found_count occurrences of PC=0x1054")
      println("=" * 80)
    }
  }
}
