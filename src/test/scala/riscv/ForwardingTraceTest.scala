package riscv

import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import chisel3._

class ForwardingTraceTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Forwarding Trace"

  it should "trace forwarding signals when PC=0x1054 to find bug" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(Seq(VerilatorBackendAnnotation, WriteFstAnnotation)) { dut =>
      // Reset
      dut.clock.setTimeout(0)
      dut.reset.poke(true.B)
      dut.clock.step(10)
      dut.reset.poke(false.B)

      // Helper to read register using debug interface
      def readReg(regNum: Int): BigInt = {
        val addr_before = dut.io.regs_debug_read_address.peekInt()
        dut.io.regs_debug_read_address.poke(regNum.U)
        dut.clock.step(1) 
        val value = dut.io.regs_debug_read_data.peekInt()
        dut.io.regs_debug_read_address.poke(addr_before.U)
        value
      }

      // Run and find first few occurrences of PC=0x1054
      var cycles_run = 0
      val max_cycles = 200
      var occurrences = 0
      
      println("\n=== FORWARDING TRACE WHEN PC=0x1054 ===")
      println("Instruction at 0x1054: sw a2,0(a3)")
      println("Expected: rs1=x13 (a3), should contain 0x40000010")
      println("ALU should calculate: a3 + 0 = 0x40000010")
      println()

      while (cycles_run < max_cycles && occurrences < 5) {
        dut.clock.step(1)
        cycles_run += 1

        val pc = dut.io.instruction_address.peekInt()

        // When we're at 0x1054, read the registers
        if (pc == 0x1054) {
          occurrences += 1
          
          // Read key registers
          val a2 = readReg(12)  // x12 = a2 (data to write)
          val a3 = readReg(13)  // x13 = a3 (address register)
          val a5 = readReg(15)  // x15 = a5 (loop counter)
          
          val alu_result = dut.io.alu_result_mem.peekInt()
          val bus_addr = dut.io.bus_address.peekInt()
          
          println(f"=== Occurrence $occurrences at Cycle $cycles_run ===")
          println(f"PC = 0x$pc%04x")
          println(f"Registers:")
          println(f"  a2 (x12) = 0x$a2%08x  (data to write: 'Y')")
          println(f"  a3 (x13) = 0x$a3%08x  (should be UART address 0x40000010)")
          println(f"  a5 (x15) = 0x$a5%08x  (loop counter 'i')")
          println(f"ALU result = 0x$alu_result%08x  (SHOULD be a3+0 = 0x40000010)")
          println(f"Bus addr   = 0x$bus_addr%08x")
          println()
          
          // Check if ALU result matches any register
          if (alu_result == a2) println("  ⚠️  ALU result MATCHES a2!")
          if (alu_result == a3) println("  ✓  ALU result MATCHES a3! (CORRECT)")
          if (alu_result == a5) println("  ✗  ALU result MATCHES a5! (WRONG - forwarding a5 instead of a3!)")
          if (alu_result == (a5 * 2)) println(f"  ✗  ALU result is a5*2 = ${a5*2}%d (loop counter doubled!)")
          
          // Check expected value
          if (a3 == 0x40000010L) {
            println("  ✓  a3 contains correct UART address")
          } else {
            println(f"  ✗  a3 is WRONG (expected 0x40000010, got 0x$a3%08x)")
          }
          
          if (alu_result == 0x40000010L) {
            println("  ✓  ALU calculated CORRECT address!")
          } else {
            println(f"  ✗  ALU calculated WRONG address (expected 0x40000010, got 0x$alu_result%08x)")
          }
          
          println()
        }
      }

      println(s"\nTotal occurrences found: $occurrences in $cycles_run cycles")
      println()
      println("DIAGNOSIS:")
      println("If ALU result matches a5 or a5*2 → Forwarding unit forwarding a5 instead of a3")
      println("If ALU result doesn't match a3 → Register read or forwarding path broken")
    }
  }
}
