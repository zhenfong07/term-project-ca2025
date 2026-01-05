// Trace bus writes for minimal_c to verify UART address

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalCBusTraceTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal C Bus Trace")

  it should "trace bus_address for UART writes" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MINIMAL C BUS ADDRESS TRACE")
      println("=" * 80)
      
      println("Waiting 10000 cycles for ROM load...")
      dut.clock.step(10000)
      
      println()
      println("Monitoring PC and bus_address for 200 cycles:")
      println("Cycle | PC     | bus_address | Instruction | Note")
      println("-" * 80)
      
      var uart_write_count = 0
      
      for (cycle <- 1 to 200) {
        val pc = dut.io.instruction_address.peekInt()
        val bus_addr = dut.io.bus_address.peekInt()
        
        dut.io.mem_debug_read_address.poke(pc.U)
        dut.clock.step(1)
        val inst = dut.io.mem_debug_read_data.peekInt()
        
        var note = ""
        if (pc == 0x1054) {
          note = "← UART WRITE INSTRUCTION"
          if (bus_addr == 0x40000010) {
            uart_write_count += 1
            note += f" ✓ (bus=0x${bus_addr}%08x) COUNT=$uart_write_count"
          } else {
            note += f" ✗ WRONG ADDR: 0x${bus_addr}%08x"
          }
        }
        
        if (pc == 0x1054 || bus_addr != 0) {
          println(f"$cycle%5d | 0x${pc}%04x | 0x${bus_addr}%08x  | 0x${inst}%08x | $note")
        }
        
        dut.clock.step(1)
      }
      
      println()
      println(s"Total UART writes to 0x40000010: $uart_write_count")
      println("=" * 80)
    }
  }
}
