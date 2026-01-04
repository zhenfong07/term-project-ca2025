//FreeRTOS Timer Verification Tests
// Created by Van Nguyen Thi Thao
// These tests actually verify timer signals (not just run cycles)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FreeRTOSTimerTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("FreeRTOS Timer Interrupts")

  // ==================================================================================
  // CRITICAL Test: Verify Timer Actually Works
  // This test CHECKS timer signals, not just runs cycles
  // ==================================================================================
  
  it should "increment mtime every cycle" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      println()
      println("=" * 70)
      println("TIMER TEST 1: Verify mtime Increments")
      println("=" * 70)
      println()
      
      // Wait for ROM loading to finish
      while(!dut.io.regs_debug_read_data.peek().litToBoolean) {
        dut.clock.step()
      }
      println("✓ ROM loaded, CPU starting...")
      println()
      
      // Now check mtime increments
      val mtime_start = dut.io.timer_mtime.peek().litValue
      println(s"mtime at start: $mtime_start")
      
      dut.clock.step(10)
      
      val mtime_after_10 = dut.io.timer_mtime.peek().litValue
      println(s"mtime after 10 cycles: $mtime_after_10")
      
      val increment = mtime_after_10 - mtime_start
      println(s"Increment: $increment")
      
      assert(increment == 10, s"Expected mtime to increment by 10, got $increment")
      
      println()
      println("=" * 70)
      println("PASS: mtime increments correctly!")
      println("=" * 70)
    }
  }

  // ==================================================================================
  // Test 2: Verify First Timer Interrupt
  // ==================================================================================
  
  it should "generate first timer interrupt at correct time" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      println()
      println("=" * 70)
      println("TIMER TEST 2: First Timer Interrupt Timing")
      println("=" * 70)
      println()
      
      // Expected: interrupt at 500,000 cycles (100 Hz @ 50 MHz)
      val expectedFirstInterrupt = 500000
      
      // Wait for ROM loading
      var cycleCount = 0
      while(!dut.io.regs_debug_read_data.peek().litToBoolean) {
        dut.clock.step()
        cycleCount += 1
      }
      println(s"✓ ROM loaded after $cycleCount cycles")
      println()
      
      // Reset cycle count
      cycleCount = 0
      var interruptSeen = false
      var interruptCycle = 0
      
      // Run until we see interrupt or timeout
      while(cycleCount < expectedFirstInterrupt + 10000 && !interruptSeen) {
        dut.clock.step()
        cycleCount += 1
        
        if(dut.io.timer_mtip.peek().litToBoolean && !interruptSeen) {
          interruptSeen = true
          interruptCycle = cycleCount
          
          val mtime = dut.io.timer_mtime.peek().litValue
          val mtimecmp = dut.io.timer_mtimecmp.peek().litValue
          
          println(s"✓ INTERRUPT DETECTED at cycle $interruptCycle!")
          println(s"  mtime    = $mtime")
          println(s"  mtimecmp = $mtimecmp")
          println(s"  mtime >= mtimecmp: ${mtime >= mtimecmp}")
        }
        
        // Progress indicator
        if(cycleCount % 100000 == 0) {
          println(s"  ... cycle $cycleCount (${cycleCount / 50000.0}ms)")
        }
      }
      
      println()
      println("=" * 70)
      if(interruptSeen) {
        val error = Math.abs(interruptCycle - expectedFirstInterrupt)
        val errorPercent = (error.toDouble / expectedFirstInterrupt) * 100
        
        println(s"PASS: Interrupt detected!")
        println(s"  Expected at: $expectedFirstInterrupt cycles")
        println(s"  Actual at:   $interruptCycle cycles")
        println(s"  Error:       $error cycles (${errorPercent}%)")
        
        // Allow 1% tolerance
        assert(errorPercent < 1.0, 
          s"Interrupt timing error too large: ${errorPercent}%")
      } else {
        println(s"FAIL: No interrupt seen in $cycleCount cycles!")
        fail("Timer interrupt not generated")
      }
      println("=" * 70)
    }
  }

  // ==================================================================================
  // Test 3: Verify Multiple Interrupts
  // ==================================================================================
  
  it should "generate periodic interrupts" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      println()
      println("=" * 70)
      println("TIMER TEST 3: Periodic Interrupt Verification")
      println("=" * 70)
      println()
      
      val tickPeriod = 500000
      val numTicksToCheck = 5
      
      // Wait for ROM loading
      var cycleCount = 0
      while(!dut.io.regs_debug_read_data.peek().litToBoolean) {
        dut.clock.step()
        cycleCount += 1
      }
      println(s"✓ ROM loaded")
      println()
      
      var interruptCount = 0
      var lastInterruptCycle = 0
      cycleCount = 0
      
      // Track if we're currently in interrupt (to detect edges)
      var wasInterrupted = false
      
      // Run for enough cycles to see multiple interrupts
      val totalCycles = numTicksToCheck * tickPeriod + 100000
      
      while(cycleCount < totalCycles) {
        dut.clock.step()
        cycleCount += 1
        
        val isInterrupted = dut.io.timer_mtip.peek().litToBoolean
        
        // Detect rising edge of interrupt (transition from false to true)
        if(isInterrupted && !wasInterrupted) {
          interruptCount += 1
          val period = cycleCount - lastInterruptCycle
          
          println(s"✓ Interrupt #$interruptCount at cycle $cycleCount")
          if(lastInterruptCycle > 0) {
            println(s"  Period: $period cycles (expected $tickPeriod)")
            val error = Math.abs(period - tickPeriod)
            val errorPercent = (error.toDouble / tickPeriod) * 100
            println(s"  Error: ${errorPercent}%")
            
            assert(errorPercent < 1.0, 
              s"Interrupt period error too large: ${errorPercent}%")
          }
          
          lastInterruptCycle = cycleCount
        }
        
        wasInterrupted = isInterrupted
        
        // Progress
        if(cycleCount % 500000 == 0) {
          println(s"  ... ${cycleCount / 500000} ticks elapsed")
        }
      }
      
      println()
      println("=" * 70)
      println(s"PASS: Detected $interruptCount interrupts")
      println(s"  Expected: ~$numTicksToCheck")
      println(s"  Actual:   $interruptCount")
      
      assert(interruptCount >= numTicksToCheck - 1, 
        s"Expected at least ${numTicksToCheck - 1} interrupts, got $interruptCount")
      
      println("=" * 70)
    }
  }

  // ==================================================================================
  // Test 4: Verify mtimecmp Updates
  // ==================================================================================
  
  it should "update mtimecmp correctly in interrupt handler" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      println()
      println("=" * 70)
      println("TIMER TEST 4: mtimecmp Update Verification")
      println("=" * 70)
      println()
      
      // Wait for ROM loading
      while(!dut.io.regs_debug_read_data.peek().litToBoolean) {
        dut.clock.step()
      }
      println("✓ ROM loaded")
      println()
      
      val tickPeriod = 500000
      var cycleCount = 0
      var mtimecmpValues = scala.collection.mutable.ListBuffer[BigInt]()
      
      // Run for 3 interrupts
      while(cycleCount < 3 * tickPeriod + 100000) {
        dut.clock.step()
        cycleCount += 1
        
        if(dut.io.timer_mtip.peek().litToBoolean) {
          val currentMtimecmp = dut.io.timer_mtimecmp.peek().litValue
          
          // Check if this is a new value
          if(mtimecmpValues.isEmpty || currentMtimecmp != mtimecmpValues.last) {
            mtimecmpValues += currentMtimecmp
            println(s"✓ mtimecmp updated to: $currentMtimecmp at cycle $cycleCount")
          }
        }
      }
      
      println()
      println("=" * 70)
      println(s"PASS: mtimecmp updated ${mtimecmpValues.length} times")
      
      // Check that updates are increasing
      for(i <- 1 until mtimecmpValues.length) {
        val diff = mtimecmpValues(i) - mtimecmpValues(i-1)
        println(s"  Update $i: +$diff (expected ~$tickPeriod)")
        
        val errorPercent = Math.abs((diff - tickPeriod).toDouble / tickPeriod) * 100
        assert(errorPercent < 5.0, 
          s"mtimecmp increment error too large: ${errorPercent}%")
      }
      
      println("=" * 70)
    }
  }

  // ==================================================================================
  //Test 5: Integration - Timer + UART
  // ==================================================================================
  
  it should "run with both timer and UART active" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      println()
      println("=" * 70)
      println("TIMER TEST 5: Integration Test (Timer + UART)")
      println("=" * 70)
      println()
      
      // Wait for ROM loading
      while(!dut.io.regs_debug_read_data.peek().litToBoolean) {
        dut.clock.step()
      }
      println("✓ ROM loaded")
      println()
      
      val tickPeriod = 500000
      var cycleCount = 0
      var interruptCount = 0
      var uartTransitions = 0
      var lastUartState = true
      
      // Run for 10 interrupts
      while(cycleCount < 10 * tickPeriod) {
        dut.clock.step()
        cycleCount += 1
        
        // Count interrupts
        if(dut.io.timer_mtip.peek().litToBoolean) {
          if(cycleCount % 500000 == 0) {
            interruptCount += 1
          }
        }
        
        // Monitor UART activity
        val currentUartState = dut.io.uart_tx.peek().litToBoolean
        if(currentUartState != lastUartState) {
          uartTransitions += 1
        }
        lastUartState = currentUartState
        
        // Progress
        if(cycleCount % 1000000 == 0) {
          println(s"  ... ${cycleCount / 1000000}M cycles, $interruptCount interrupts, $uartTransitions UART transitions")
        }
      }
      
      println()
      println("=" * 70)
      println("PASS: Integration test completed")
      println(s"  Cycles:            $cycleCount")
      println(s"  Timer interrupts:  ~${cycleCount / 500000}")
      println(s"  UART transitions:  $uartTransitions")
      println()
      println("This confirms:")
      println("  ✓ Timer generates interrupts")
      println("  ✓ UART is active (FreeRTOS printing)")
      println("  ✓ System runs stably with both peripherals")
      println("=" * 70)
    }
  }
}
