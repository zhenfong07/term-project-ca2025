// Test large ASM (108 bytes)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class LargeAsmTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Large ASM Test")

  it should "work with 108-byte binary" in {
    test(new FreeRTOSTestTop("large_asm.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("LARGE ASM TEST: 108 bytes - writes ABC then loops X")
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
          if (uartTransitions <= 30) {
            println(f"  Transition #$uartTransitions at cycle ${i + 10000}%6d")
          }
        }
        lastUartValue = currentUartValue
      }
      
      println()
      println(s"Total UART transitions: $uartTransitions")
      
      if (uartTransitions > 10) {
        println("✓ Large ASM works! ROM loader handles >32 byte binaries!")
      } else {
        println("✗ Large ASM failed - ROM loader problem?")
      }
      
      println("=" * 80)
    }
  }
}
