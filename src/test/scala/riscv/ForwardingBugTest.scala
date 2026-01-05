package riscv

import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import chisel3._

class ForwardingBugTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Forwarding Bug"

  it should "trace forwarding signals to find why it forwards incorrectly" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(Seq(VerilatorBackendAnnotation)) { dut =>
      // Reset
      dut.clock.setTimeout(0)
      dut.reset.poke(true.B)
      dut.clock.step(10)
      dut.reset.poke(false.B)

      // Run and find occurrences of PC=0x1054
      var cycles_run = 0
      val max_cycles = 150
      var occurrences = 0
      
      println("\n=== FORWARDING BUG INVESTIGATION ===")
      println("Tracing forwarding signals when PC=0x1054")
      println("Instruction: sw a2,0(a3)  →  rs1=x13 (a3)")
      println("Expected: ALU calculates a3+0 = 0x40000010")
      println("Actual: ALU calculates sp+12 = 0x7FFC (WRONG!)")
      println()

      while (cycles_run < max_cycles && occurrences < 3) {
        dut.clock.step(1)
        cycles_run += 1

        val pc = dut.io.instruction_address.peekInt()

        if (pc == 0x1054) {
          occurrences += 1
          
          val alu_result = dut.io.alu_result_mem.peekInt()
          val reg1_forward = dut.io.debug_reg1_forward_ex.peekInt()
          val rs1_ex = dut.io.debug_rs1_ex.peekInt()
          val rd_mem = dut.io.debug_rd_mem.peekInt()
          val reg_write_enable_mem = dut.io.debug_reg_write_enable_mem.peekBoolean()
          
          println(f"=== Occurrence $occurrences at Cycle $cycles_run ===")
          println(f"PC = 0x$pc%04x (sw a2,0(a3))")
          println(f"ALU result = 0x$alu_result%08x (should be 0x40000010)")
          println()
          println("Forwarding Unit Inputs:")
          println(f"  rs1_ex = x$rs1_ex%d (a3 = x13)")
          println(f"  rd_mem = x$rd_mem%d")
          println(f"  reg_write_enable_mem = $reg_write_enable_mem")
          println()
          println("Forwarding Decision:")
          println(f"  reg1_forward_ex = $reg1_forward")
          if (reg1_forward == 0) {
            println("    → NoForward (use register file)")
          } else if (reg1_forward == 1) {
            println("    → ForwardFromMEM (WRONG! Using previous instruction's ALU result!)")
          } else if (reg1_forward == 2) {
            println("    → ForwardFromWB")
          } else {
            println("    → UNKNOWN")
          }
          println()
          
          // Analyze the bug
          if (reg1_forward == 1) {
            println("✗ BUG FOUND: Forwarding is ACTIVE when it should be OFF!")
            println("  Forwarding condition: (rs1_ex == rd_mem) && (rd_mem != 0) && reg_write_enable_mem")
            println(f"  Check: (x$rs1_ex%d == x$rd_mem%d) = ${rs1_ex == rd_mem}")
            println(f"  Check: (x$rd_mem%d != 0) = ${rd_mem != 0}")
            println(f"  Check: reg_write_enable_mem = $reg_write_enable_mem")
            println()
            if (rs1_ex != rd_mem) {
              println("  → rs1_ex != rd_mem, so forwarding SHOULD NOT activate!")
            }
            if (rd_mem == 0) {
              println("  → rd_mem == 0 (no destination), so forwarding SHOULD NOT activate!")
            }
            if (!reg_write_enable_mem) {
              println("  → reg_write_enable_mem = false, so forwarding SHOULD NOT activate!")
            }
          } else {
            println("✓ Forwarding is OFF (correct)")
            println("  But ALU still calculates wrong result!")
            println("  This means the bug is NOT in the forwarding logic!")
            println("  Investigate: id2ex.io.output_reg1_data or Execute stage reg1_data selection")
          }
          println()
        }
      }

      println(s"\nTotal occurrences found: $occurrences in $cycles_run cycles")
    }
  }
}
