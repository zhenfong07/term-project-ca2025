// Monitor first UART write at 0x1028 to see if it works

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FirstUARTWriteTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("First UART Write")

  it should "execute first UART write at 0x1028 correctly" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MONITORING FIRST UART WRITE AT 0x1028")
      println("=" * 80)
      
      println()
      println("Tracing from start, looking for c_main (0x1014) and first UART write (0x1028)...")
      println("Cycle | PC     | a3 (x13)  | a5 (x15)  | bus_address | uart_tx | Note")
      println("-" * 90)
      
      var found_1014 = false
      var found_1028 = false
      var uart_transitions = 0
      var last_uart_tx = dut.io.uart_tx.peekBoolean()
      
      var max_cycles = 15000
      for (cycle <- 1 to max_cycles) {
        val pc = dut.io.instruction_address.peekInt()
        val bus_addr = dut.io.bus_address.peekInt()
        val uart_tx = dut.io.uart_tx.peekBoolean()
        
        // Read a3 and a5
        dut.io.regs_debug_read_address.poke(13.U)
        dut.clock.step(1)
        val a3 = dut.io.regs_debug_read_data.peekInt()
        
        dut.io.regs_debug_read_address.poke(15.U)
        dut.clock.step(1)
        val a5 = dut.io.regs_debug_read_data.peekInt()
        
        if (uart_tx != last_uart_tx) {
          uart_transitions += 1
          last_uart_tx = uart_tx
        }
        
        var note = ""
        if (pc == 0x1000) {
          note = "← _start"
        } else if (pc == 0x1014) {
          note = "← c_main entry"
          found_1014 = true
        } else if (pc == 0x1018) {
          note = f"← a3 = 0x40000010 set here"
        } else if (pc == 0x1020) {
          note = "← a5 = 'X' (0x58)"
        } else if (pc == 0x1024) {
          note = "← sp -= 16"
        } else if (pc == 0x1028) {
          note = f"← FIRST UART WRITE! bus=${ if (bus_addr == 0x40000010) "✓ UART" else f"✗ WRONG:0x${bus_addr}%08x" }"
          found_1028 = true
          max_cycles = cycle + 10  // Stop 10 cycles after 0x1028
        }
        
        // Print if we're in interesting range OR if we just found c_main
        if ((found_1014 && pc >= 0x1000 && pc <= 0x1030) || pc == 0x1014) {
          println(f"$cycle%5d | 0x${pc}%04x | 0x${a3}%08x | 0x${a5}%08x | 0x${bus_addr}%08x  | $uart_tx%-5s | $note")
        }
        
        dut.clock.step(1)
      }
      
      println()
      println(s"Total UART transitions: $uart_transitions")
      println("=" * 80)
    }
  }
}
