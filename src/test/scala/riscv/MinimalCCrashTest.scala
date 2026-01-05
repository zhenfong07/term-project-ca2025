// Trace PC after 3rd UART write to see where code goes

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalCCrashTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal C Crash Investigation")

  it should "trace PC after 3rd UART write" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("TRACING minimal_c AFTER 3RD UART WRITE")
      println("=" * 80)
      
      var uart_transitions = 0
      var last_uart_tx = dut.io.uart_tx.peekBoolean()
      var trace_mode = false
      var done = false
      
      println("Waiting for 3rd UART transition...")
      for (cycle <- 1 to 10000 if !done) {
        dut.clock.step(1)
        val uart_tx = dut.io.uart_tx.peekBoolean()
        
        if (uart_tx != last_uart_tx) {
          uart_transitions += 1
          println(f"Transition $uart_transitions at cycle $cycle: $last_uart_tx → $uart_tx")
          last_uart_tx = uart_tx
          
          if (uart_transitions == 6) {
            println()
            println("=" * 80)
            println("REACHED 6 TRANSITIONS (3 writes) - NOW TRACING PC")
            println("=" * 80)
            trace_mode = true
          }
        }
        
        if (trace_mode) {
          val pc = dut.io.instruction_address.peekInt()
          
          // Read a few registers
          dut.io.regs_debug_read_address.poke(2.U)  // sp
          dut.clock.step(1)
          val sp = dut.io.regs_debug_read_data.peekInt()
          
          dut.io.regs_debug_read_address.poke(13.U)  // a3
          dut.clock.step(1)
          val a3 = dut.io.regs_debug_read_data.peekInt()
          
          // Read mcause CSR (CSR address 0x342)
          dut.io.csr_debug_read_address.poke(0x342.U)
          dut.clock.step(1)
          val mcause = dut.io.csr_debug_read_data.peekInt()
          
          println(f"Cycle $cycle%5d | PC=0x${pc}%04x | sp=0x${sp}%08x | a3=0x${a3}%08x | mcause=0x${mcause}%08x")
          
          if (cycle > uart_transitions * 1000 + 10000) {
            println()
            println("No more writes after 5000 cycles - CODE STUCK OR CRASHED")
            println("=" * 80)
            done = true
          }
        }
      }
      
      println()
      println(s"Final transitions: $uart_transitions")
      println("=" * 80)
    }
  }
}
