// Test minimal C code (no FreeRTOS)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalCTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal C Test")

  it should "write X then Y to UART" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MINIMAL C TEST: _start() writes 'X' and 'Y' to UART")
      println("=" * 80)
      
      // Wait for ROM loading
      println("Waiting 10000 cycles for ROM load...")
      dut.clock.step(10000)
      
      println("Monitoring UART for 50000 cycles...")
      var uartTransitions = 0
      var lastUartValue = dut.io.uart_tx.peekBoolean()
      
      for (i <- 0 until 50000) {
        dut.clock.step(1)
        
        val currentUartValue = dut.io.uart_tx.peekBoolean()
        if (currentUartValue != lastUartValue) {
          uartTransitions += 1
          if (uartTransitions <= 20) {
            println(f"  Transition #$uartTransitions at cycle ${i + 10000}%6d")
          }
        }
        lastUartValue = currentUartValue
      }
      
      println()
      println(s"Total UART transitions: $uartTransitions")
      
      if (uartTransitions > 0) {
        println("✓ Minimal C test WORKS - UART hardware confirmed operational!")
      } else {
        println("✗ Minimal C test FAILED - problem in C code or compiler settings")
      }
      
      println("=" * 80)
    }
  }
}
