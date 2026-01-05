// Trace a3 register AND bus_address simultaneously

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalCSyncTraceTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal C Sync Trace")

  it should "trace a3 and bus_address simultaneously" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MINIMAL C: a3 vs bus_address SYNC TRACE")
      println("=" * 80)
      
      println("Waiting 10000 cycles for ROM load...")
      dut.clock.step(10000)
      
      println()
      println("Cycle | PC     | a3 (x13)  | bus_address | uart_tx | Note")
      println("-" * 80)
      
      var uart_transitions = 0
      var last_uart_tx = false
      
      for (cycle <- 1 to 200) {
        val pc = dut.io.instruction_address.peekInt()
        val bus_addr = dut.io.bus_address.peekInt()
        val uart_tx = dut.io.uart_tx.peekBoolean()
        
        // Read a3 (x13)
        dut.io.regs_debug_read_address.poke(13.U)
        dut.clock.step(1)
        val a3 = dut.io.regs_debug_read_data.peekInt()
        
        // Track UART transitions
        if (uart_tx != last_uart_tx) {
          uart_transitions += 1
          last_uart_tx = uart_tx
        }
        
        var note = ""
        if (pc == 0x1054) {
          note = "← UART WRITE INST"
          if (bus_addr == 0x40000010) {
            note += " ✓ bus=UART"
          } else if (bus_addr == a3) {
            note += f" ✓ bus=a3"
          } else {
            note += f" ✗ MISMATCH!"
          }
        }
        
        if (bus_addr == 0x40000010) {
          note += " [BUS→UART]"
        }
        
        if (pc == 0x1054 || bus_addr == 0x40000010 || bus_addr != 0) {
          println(f"$cycle%5d | 0x${pc}%04x | 0x${a3}%08x | 0x${bus_addr}%08x  | $uart_tx%-5s | $note")
        }
        
        dut.clock.step(1)
      }
      
      println()
      println(s"Total UART transitions: $uart_transitions")
      println("=" * 80)
    }
  }
}
