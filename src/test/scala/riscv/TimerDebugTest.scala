// Simple Debug Test - Just verify timer_test.asmbin loads and starts executing

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class TimerDebugTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Timer Test Debug")

  it should "load timer_test.asmbin and verify execution" in {
    test(new TestTopModule("timer_test.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)

      // Check that program is loaded at 0x1000
      println("\n=== Checking program loading ===")
      for (addr <- 0x1000 to 0x1020 by 4) {
        dut.io.mem_debug_read_address.poke(addr.U)
        dut.clock.step()
        val inst = dut.io.mem_debug_read_data.peekInt()
        println(f"  0x$addr%08X: 0x${inst.toLong}%08X")
      }

      // Step a few cycles and check PC progression
      println("\n=== Stepping through execution ===")
      for (cycle <- 1 to 20) {
        dut.clock.step()
        if (cycle % 5 == 0) {
          // Read instruction at current PC (not easily accessible in this testbench)
          println(s"  Cycle $cycle")
        }
      }

      // Check memory at TEST_DONE_FLAG and TEST_RESULT
      println("\n=== Checking test harness registers ===")
      dut.io.mem_debug_read_address.poke(0x100.U)
      dut.clock.step()
      val testDone = dut.io.mem_debug_read_data.peekInt()
      println(f"  TEST_DONE_FLAG (0x100): 0x${testDone.toLong}%08X")

      dut.io.mem_debug_read_address.poke(0x104.U)
      dut.clock.step()
      val testResult = dut.io.mem_debug_read_data.peekInt()
      println(f"  TEST_RESULT (0x104):    0x${testResult.toLong}%08X")

      // Check timer registers
      println("\n=== Checking timer registers ===")
      dut.io.mem_debug_read_address.poke(0x60000000L.U)
      dut.clock.step()
      val mtimeLow = dut.io.mem_debug_read_data.peekInt()
      println(f"  MTIME_LOW (0x60000000):  0x${mtimeLow.toLong}%08X ($mtimeLow)")

      dut.io.mem_debug_read_address.poke(0x60000008L.U)
      dut.clock.step()
      val mtimecmpLow = dut.io.mem_debug_read_data.peekInt()
      println(f"  MTIMECMP_LOW (0x60000008): 0x${mtimecmpLow.toLong}%08X ($mtimecmpLow)")

      println("\n=== Test complete ===")
    }
  }
}
