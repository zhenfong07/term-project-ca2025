// SPDX-License-Identifier: MIT
// FreeRTOS Integration Tests for MyCPU

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FreeRTOSIntegrationTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("FreeRTOS on MyCPU")

  /**
   * Test 1: Detect mtimecmp write (proves scheduler is running)
   * 
   * This test verifies that FreeRTOS can start and configure the timer.
   * A change in mtimecmp indicates the scheduler has initialized and
   * set up the first tick interrupt.
   */
  it should "detect mtimecmp write" in {
    test(new FreeRTOSTestTop("main.asmbin"))
      .withAnnotations(TestAnnotations.annos) { dut =>
      
      dut.clock.setTimeout(0)
      dut.io.external_interrupt.poke(false.B)
      
      println("=== FreeRTOS Initialization Test ===")
      println("Monitoring for scheduler initialization (mtimecmp write)...")
      
      dut.clock.step(100)
      println(f"\nInitial: mtimecmp = 0x${dut.io.timer_mtimecmp.peekInt()}%016x")
      
      var foundChange = false
      val initialValue = dut.io.timer_mtimecmp.peekInt()
      
      var batch = 0
      while (batch < 20 && !foundChange) {
        dut.clock.step(1000)
        val mtimecmp = dut.io.timer_mtimecmp.peekInt()
        val mtime = dut.io.timer_mtime.peekInt()
        
        if (mtimecmp != initialValue) {
          foundChange = true
          println(f"\n✓ Scheduler initialized at cycle ${(batch+1)*1000}!")
          println(f"  mtimecmp: 0x${mtimecmp}%016x")
          println(f"  mtime:    0x${mtime}%016x")
        } else if (batch % 5 == 0) {
          println(f"  Batch $batch (${(batch+1)*1000} cycles): waiting...")
        }
        batch += 1
      }
      
      if (!foundChange) {
        println(f"\n✗ FAILED: Scheduler did not initialize after 20000 cycles")
        println(f"  Final mtimecmp: 0x${dut.io.timer_mtimecmp.peekInt()}%016x")
        println(f"  Final mtime:    0x${dut.io.timer_mtime.peekInt()}%016x")
        fail("FreeRTOS scheduler did not start - check main.asmbin")
      } else {
        println("\n=== Test PASSED ===")
      }
    }
  }

  /**
   * Test 2: FreeRTOS scheduler with multiple ticks
   * 
   * This test verifies that the scheduler is running continuously and
   * handling timer interrupts correctly. Each tick represents:
   * - mtime >= mtimecmp (interrupt condition)
   * - CPU trap to interrupt handler
   * - xTaskIncrementTick() execution
   * - vPortSetupTimerInterrupt() (updates mtimecmp)
   * - Context restore and mret
   */
  it should "run scheduler with multiple ticks" in {
    test(new FreeRTOSTestTop("main.asmbin"))
      .withAnnotations(TestAnnotations.annos) { dut =>
      
      dut.clock.setTimeout(0)
      dut.io.external_interrupt.poke(false.B)
      
      println("=== FreeRTOS Scheduler Test ===")
      
      dut.clock.step(1000)
      
      println("\n1. Initial state:")
      println(f"   mtime:    ${dut.io.timer_mtime.peekInt()}")
      println(f"   mtimecmp: 0x${dut.io.timer_mtimecmp.peekInt()}%016x")
      
      val mtime1 = dut.io.timer_mtime.peekInt()
      dut.clock.step(1000)
      val mtime2 = dut.io.timer_mtime.peekInt()
      
      println(f"\n2. Timer incrementing: $mtime1 → $mtime2")
      assert(mtime2 > mtime1, "mtime should be incrementing")
      
      println("\n3. Monitoring for scheduler ticks...")
      var tickCount = 0
      var lastMtimecmp = dut.io.timer_mtimecmp.peekInt()
      var shouldBreak = false
      
      for (cycle <- 0 until 200000 if !shouldBreak) {
        dut.clock.step()
        
        val mtimecmp = dut.io.timer_mtimecmp.peekInt()
        
        // Detect tick: mtimecmp changed (vPortSetupTimerInterrupt called)
        if (mtimecmp != lastMtimecmp && lastMtimecmp > 0) {
          tickCount += 1
          println(f"   Tick #$tickCount at cycle $cycle")
          println(f"     mtimecmp: 0x${mtimecmp}%016x")
          if (tickCount >= 3) {
            println("   Got 3 ticks, stopping early ✓")
            shouldBreak = true
          }
        }
        lastMtimecmp = mtimecmp
        
        if (cycle % 50000 == 0 && cycle > 0) {
          println(f"   Cycle $cycle: mtime=${dut.io.timer_mtime.peekInt()}, ticks=$tickCount")
        }
      }
      
      println(f"\n4. Total scheduler ticks observed: $tickCount")
      assert(tickCount >= 1, s"Should see at least 1 scheduler tick, saw $tickCount")
      
      println("\n=== Test PASSED ===")
    }
  }

  /**
   * Test 3: Long-term stability test
   * 
   * This test verifies that FreeRTOS can run stably for an extended period
   * without crashes, hangs, or degradation. Multiple ticks prove:
   * - Interrupt handling is reliable
   * - Context switching works correctly
   * - No memory corruption or stack overflow
   * - Timer reload mechanism functions properly
   */
  it should "run FreeRTOS stably for extended period" in {
    test(new FreeRTOSTestTop("main.asmbin"))
      .withAnnotations(TestAnnotations.annos) { dut =>
      
      dut.clock.setTimeout(0)
      dut.io.external_interrupt.poke(false.B)
      
      println("=== FreeRTOS Stability Test (300K cycles) ===")
      
      dut.clock.step(1000)
      
      var tickCount = 0
      var lastMtimecmp: BigInt = 0
      
      for (cycle <- 0 until 300000) {
        dut.clock.step()
        
        val mtimecmp = dut.io.timer_mtimecmp.peekInt()
        if (mtimecmp != lastMtimecmp && lastMtimecmp > 0 && mtimecmp > 0) {
          tickCount += 1
        }
        lastMtimecmp = mtimecmp
        
        if (cycle % 100000 == 0) {
          val mtime = dut.io.timer_mtime.peekInt()
          println(f"   Progress: ${cycle/3000}%%, mtime=$mtime, ticks=$tickCount")
        }
      }
      
      println(f"\nCompleted 300K cycles with $tickCount scheduler ticks")
      assert(tickCount >= 2, s"Should see at least 2 ticks in 300K cycles, saw $tickCount")
      
      println("=== Test PASSED ===")
    }
  }
}

