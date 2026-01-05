// Compare alu_result (from EX2MEM) vs bus_address (calculated in MEM)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class ALUvsBusAddressTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("ALU Result vs Bus Address")

  it should "compare alu_result and bus_address at PC=0x1054" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("ALU RESULT vs BUS ADDRESS COMPARISON")
      println("=" * 80)
      println("Looking for PC=0x1054 (UART write: sw a2,0(a3))")
      println()
      
      // Wait for ROM load
      dut.clock.step(5000)
      
      var found_count = 0
      
      println("Cycle | PC     | a3 (x13)  | alu_result | bus_addr  | Status")
      println("-" * 80)
      
      for (cycle <- 1 to 10000 if found_count < 15) {
        val pc = dut.io.instruction_address.peekInt()
        val alu_result = dut.io.alu_result_mem.peekInt()
        val bus_addr = dut.io.bus_address.peekInt()
        
        // Read a3 (register x13)
        dut.io.regs_debug_read_address.poke(13.U)
        dut.clock.step(1)
        val a3 = dut.io.regs_debug_read_data.peekInt()
        
        if (pc == 0x1054) {
          found_count += 1
          val status = if (alu_result == 0x40000010 && bus_addr == 0x40000010) {
            "✓ BOTH CORRECT"
          } else if (alu_result != 0x40000010) {
            f"✗ ALU WRONG (should be 0x40000010)"
          } else {
            f"✗ BUS_ADDR WRONG (alu is correct)"
          }
          
          println(f"$cycle%5d | 0x${pc}%04x | 0x${a3}%08x | 0x${alu_result}%08x | 0x${bus_addr}%08x | $status")
        }
        
        dut.clock.step(1)
      }
      
      println()
      println(s"Found $found_count occurrences of PC=0x1054")
      println("=" * 80)
      println()
      println("ANALYSIS:")
      println("- If a3 is correct but alu_result is wrong → EX stage calculates wrong address")
      println("- If alu_result is correct but bus_addr is wrong → MEM stage corrupts it")
      println("=" * 80)
    }
  }
}
