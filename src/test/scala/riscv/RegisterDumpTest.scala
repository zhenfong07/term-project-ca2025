package riscv

import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import chisel3._

class RegisterDumpTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Register Dump Investigation"

  it should "analyze ALU result pattern to identify source of incrementing values" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(Seq(VerilatorBackendAnnotation, WriteFstAnnotation)) { dut =>
      // Reset
      dut.clock.setTimeout(0)
      dut.reset.poke(true.B)
      dut.clock.step(10)
      dut.reset.poke(false.B)

      // Run and collect data
      var cycles_run = 0
      val max_cycles = 400
      var occurrences = 0
      var alu_results = List[BigInt]()
      
      println("\n=== ALU RESULT ANALYSIS WHEN PC=0x1054 ===")
      println("Collecting ALU results to identify pattern...")
      println()

      while (cycles_run < max_cycles && occurrences < 20) {
        dut.clock.step(1)
        cycles_run += 1

        val pc = dut.io.instruction_address.peekInt()
        val alu_result = dut.io.alu_result_mem.peekInt()
        val bus_address = dut.io.bus_address.peekInt()

        if (pc == 0x1054) {
          occurrences += 1
          alu_results = alu_results :+ alu_result
          
          println(f"Cycle $cycles_run%3d: PC=0x$pc%04x | alu_result=0x$alu_result%08x | bus_addr=0x$bus_address%08x")
        }
      }

      println(s"\nCollected $occurrences ALU results:")
      println()
      
      // Analyze the pattern
      if (alu_results.length >= 2) {
        val diffs = alu_results.sliding(2).map { case List(a, b) => b - a }.toList
        val all_same_diff = diffs.forall(_ == diffs.head)
        
        println(f"First ALU result:  0x${alu_results.head}%08x (${alu_results.head}%d)")
        println(f"Last ALU result:   0x${alu_results.last}%08x (${alu_results.last}%d)")
        println(f"Total increment:   ${alu_results.last - alu_results.head}%d")
        println(f"Number of steps:   ${alu_results.length - 1}%d")
        if (all_same_diff && diffs.nonEmpty) {
          println(f"Pattern: UNIFORM INCREMENT of ${diffs.head}%d per iteration")
        } else {
          println(f"Pattern: NON-UNIFORM increments: $diffs")
        }
        println()
        
        // Check specific patterns
        val first = alu_results.head
        println("Pattern Analysis:")
        
        // Check if it matches sp+12 pattern (0x7FFC after adjustment)
        if ((first & 0xFFF0) == 0x7FF0) {
          println(f"  → ALU result 0x$first%08x is in sp range (0x7FF0-0x7FFF)")
          println(f"     This suggests using stack pointer instead of a3!")
        }
        
        // Check if it's an incrementing counter
        if (all_same_diff && diffs.nonEmpty && diffs.head == 4) {
          println(f"  → Incrementing by 4 each time - this is a WORD-ALIGNED ADDRESS")
          println(f"     Likely using loop counter 'i' instead of peripheral address!")
        }
        
        // Expected value
        val expected = 0x40000010L
        println(f"\n  Expected ALU result: 0x$expected%08x (UART TX register)")
        println(f"  Actual ALU results:  0x${alu_results.head}%08x - 0x${alu_results.last}%08x")
        println(f"  MISMATCH: {alu_results.head != expected}")
        
        println()
        println("CONCLUSION:")
        if (first < 0x10000) {
          println("  ✗ ALU is calculating an address in LOW memory (< 0x10000)")
          println("  ✗ This is NOT the UART peripheral address (0x40000010)")
          println("  ✗ Likely forwarding or operand selection is BROKEN")
          println("  → Instruction at 0x1054: sw a2,0(a3)")
          println("  → ALU should calculate: a3 + 0 = 0x40000010")
          println(f"  → ALU actually calculates: 0x${first}%08x (WRONG!)")
        }
      }
    }
  }
}
