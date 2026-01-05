// Test the minimal bare-metal binary (no FreeRTOS)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal Bare Metal Test")

  it should "test uart.asmbin in FreeRTOSTestTop" in {
    test(new FreeRTOSTestTop("uart.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 70)
      println("TEST: uart.asmbin in FreeRTOSTestTop (should work)")
      println("=" * 70)
      println("Waiting for ROM loading (10000 cycles)...")
      dut.clock.step(10000)
      
      println()
      println("Monitoring UART for activity...")
      var uartTransitions = 0
      var lastUartState = true
      
      for (i <- 0 until 100000) {
        dut.clock.step(1)
        val currentUartState = dut.io.uart_tx.peekBoolean()
        if (currentUartState != lastUartState) {
          uartTransitions += 1
          if (uartTransitions <= 20) {
            println(s"  UART transition #$uartTransitions at cycle $i (state: $currentUartState)")
          }
        }
        lastUartState = currentUartState
        
        if (i % 25000 == 0 && i > 0) {
          println(s"  ... $i cycles, $uartTransitions transitions so far")
        }
      }
      
      println()
      println(s"Total UART transitions: $uartTransitions")
      
      if (uartTransitions > 0) {
        println("✓ SUCCESS: uart.asmbin works in FreeRTOSTestTop!")
      } else {
        println("✗ FAIL: uart.asmbin also doesn't work - testbench broken!")
      }
      
      println("=" * 70)
    }
  }

  it should "print to UART without FreeRTOS" in {
    test(new FreeRTOSTestTop("minimal.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 70)
      println("MINIMAL TEST: Bare metal UART (no FreeRTOS)")
      println("=" * 70)
      
      // Wait for ROM loading (need 4x cycles because of clock divider!)
      println("Waiting for ROM loading (10000 cycles)...")
      dut.clock.step(10000)
      
      println()
      println("Monitoring UART for activity...")
      var uartTransitions = 0
      var lastUartState = true
      
      for (i <- 0 until 100000) {
        dut.clock.step(1)
        val currentUartState = dut.io.uart_tx.peekBoolean()
        if (currentUartState != lastUartState) {
          uartTransitions += 1
          if (uartTransitions <= 20) {
            println(s"  UART transition #$uartTransitions at cycle $i (state: $currentUartState)")
          }
        }
        lastUartState = currentUartState
        
        if (i % 25000 == 0 && i > 0) {
          println(s"  ... $i cycles, $uartTransitions transitions so far")
        }
      }
      
      println()
      println(s"Total UART transitions: $uartTransitions")
      
      if (uartTransitions > 0) {
        println("✓ SUCCESS: UART is working!")
      } else {
        println("✗ FAIL: No UART activity")
      }
      
      println("=" * 70)
    }
  }
}
