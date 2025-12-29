// SPDX-License-Identifier: MIT
// Timer Interrupt Integration Test
//
// This test validates the complete timer interrupt flow end-to-end:
// 1. Load timer_test.asmbin into TestTopModule
// 2. Execute test program (configures CSRs, sets mtimecmp, waits for interrupt)
// 3. Verify interrupt handler executes
// 4. Check TEST_RESULT for success status
//
// Expected TEST_RESULT values:
//   0x3 = SUCCESS (interrupt fired + MIP.MTIP verified)
//   0x1 = Interrupt fired but MIP check failed
//   0xF = TIMEOUT (interrupt never fired)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class TimerInterruptTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Timer Interrupt Integration Test")

  it should "trigger timer interrupt and execute handler correctly" in {
    test(new TestTopModule("timer_test.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)

      // Initial state: verify program loaded
      dut.io.mem_debug_read_address.poke(0x1000.U)
      dut.clock.step()
      val inst0 = dut.io.mem_debug_read_data.peekInt()
      assert(inst0 != 0, "Program area should have timer_test instructions loaded")

      // Run test program - needs enough time for:
      // 1. CSR setup (mstatus, mie, mtvec)
      // 2. Timer config (write mtimecmp)
      // 3. Wait for mtime >= mtimecmp
      // 4. Interrupt trigger + handler execution
      // 5. Return and write TEST_RESULT
      //
      // Estimated cycles:
      // - Setup: ~50 cycles
      // - Wait for interrupt: ~100 cycles (mtimecmp = mtime + 100)
      // - Handler execution: ~100 cycles
      // - Total: ~300 cycles + margin
      // 
      // IMPORTANT: Timer test may take longer due to:
      // - AXI4-Lite bus latency for timer register access
      // - Pipeline stalls and hazards
      // - Interrupt handling overhead
      // Using 100,000 cycles to be safe
      println("Running timer interrupt test (this may take up to 100,000 cycles)...")
      dut.clock.step(100000)

      // Read TEST_DONE_FLAG (address 0x100) to verify test completed
      dut.io.mem_debug_read_address.poke(0x100.U)
      dut.clock.step()
      val testDone = dut.io.mem_debug_read_data.peekInt()
      val expectedMagic = 0xCAFEF00DL
      assert(
        testDone == expectedMagic,
        f"Test should complete and write magic value. Expected 0x$expectedMagic%X, got 0x$testDone%X"
      )

      // Read TEST_RESULT (address 0x104) to check test outcome
      dut.io.mem_debug_read_address.poke(0x104.U)
      dut.clock.step()
      val testResult = dut.io.mem_debug_read_data.peekInt()

      // Decode result
      if (testResult == 0x3) {
        println("✓ SUCCESS: Timer interrupt fired and MIP.MTIP verified")
      } else if (testResult == 0x1) {
        fail("Timer interrupt fired but MIP.MTIP check failed (bit 7 not set)")
      } else if (testResult == 0xF) {
        fail("TIMEOUT: Timer interrupt never fired (mtime never reached mtimecmp)")
      } else {
        fail(f"Unexpected test result: 0x${testResult.toLong}%X")
      }

      // Additional verification: Check timer registers via debug interface
      // Machine Timer is at 0x60000000 in memory map
      println("\nTimer Register State at test completion:")
      
      // Read mtime_low (0x60000000)
      dut.io.mem_debug_read_address.poke(0x60000000L.U)
      dut.clock.step()
      val mtimeLow = dut.io.mem_debug_read_data.peekInt()
      println(f"  mtime_low:    0x$mtimeLow%08X ($mtimeLow%d)")

      // Read mtime_high (0x60000004)
      dut.io.mem_debug_read_address.poke(0x60000004L.U)
      dut.clock.step()
      val mtimeHigh = dut.io.mem_debug_read_data.peekInt()
      println(f"  mtime_high:   0x$mtimeHigh%08X ($mtimeHigh%d)")

      // Read mtimecmp_low (0x60000008)
      dut.io.mem_debug_read_address.poke(0x60000008L.U)
      dut.clock.step()
      val mtimecmpLow = dut.io.mem_debug_read_data.peekInt()
      println(f"  mtimecmp_low: 0x$mtimecmpLow%08X ($mtimecmpLow%d)")

      // Read mtimecmp_high (0x6000000C)
      dut.io.mem_debug_read_address.poke(0x6000000CL.U)
      dut.clock.step()
      val mtimecmpHigh = dut.io.mem_debug_read_data.peekInt()
      println(f"  mtimecmp_high: 0x$mtimecmpHigh%08X ($mtimecmpHigh%d)")

      // After interrupt handler, mtimecmp should be set to max (0xFFFFFFFF)
      // to prevent re-triggering
      assert(
        mtimecmpLow == 0xFFFFFFFFL && mtimecmpHigh == 0xFFFFFFFFL,
        "Handler should clear interrupt by setting mtimecmp to max value"
      )

      // Verify mtime has incremented beyond original target
      // (should be > 100 cycles from initial value)
      assert(mtimeLow > 200, s"mtime should have incremented significantly (got $mtimeLow)")

      println("\n✓ All checks passed: Timer interrupt system working correctly")
    }
  }
}
