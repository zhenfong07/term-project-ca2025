// Count UART transitions for FreeRTOS

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FreeRTOSUARTCountTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("FreeRTOS UART Count")

  it should "count UART transitions for FreeRTOS" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("COUNTING UART TRANSITIONS FOR FreeRTOS")
      println("=" * 80)
      
      var uart_transitions = 0
      var last_uart_tx = dut.io.uart_tx.peekBoolean()
      
      println("Running for 100000 cycles...")
      for (cycle <- 1 to 100000) {
        dut.clock.step(1)
        val uart_tx = dut.io.uart_tx.peekBoolean()
        
        if (uart_tx != last_uart_tx) {
          uart_transitions += 1
          println(f"Transition $uart_transitions at cycle $cycle: $last_uart_tx → $uart_tx")
          last_uart_tx = uart_tx
        }
        
        if (cycle % 20000 == 0) {
          println(s"Cycle $cycle: $uart_transitions transitions so far...")
        }
      }
      
      println()
      println(s"TOTAL UART TRANSITIONS: $uart_transitions")
      println("=" * 80)
      
      assert(uart_transitions > 0, "FreeRTOS should produce UART transitions!")
    }
  }
}
