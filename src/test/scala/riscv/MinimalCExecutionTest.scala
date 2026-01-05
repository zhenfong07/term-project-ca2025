// Trace execution of minimal_c to see if CPU runs it

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MinimalCExecutionTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Minimal C Execution Trace")

  it should "trace PC and registers for minimal_c" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MINIMAL C EXECUTION TRACE")
      println("=" * 80)
      
      // Wait for ROM loading
      println("Waiting for ROM load (10000 cycles)...")
      dut.clock.step(10000)
      
      println()
      println("Tracing PC (instruction_address) and sp (x2) for 100 cycles:")
      println("Cycle | PC     | sp       | instruction")
      println("-" * 60)
      
      for (cycle <- 1 to 100) {
        val pc = dut.io.instruction_address.peekInt()
        
        // Read sp (x2)
        dut.io.regs_debug_read_address.poke(2.U)
        dut.clock.step(1)
        val sp = dut.io.regs_debug_read_data.peekInt()
        
        // Read instruction at PC
        dut.io.mem_debug_read_address.poke(pc.U)
        dut.clock.step(1)
        val inst = dut.io.mem_debug_read_data.peekInt()
        
        println(f"$cycle%5d | 0x${pc}%04x | 0x${sp}%08x | 0x${inst}%08x")
        
        // Check key points
        if (pc == 0x1000) {
          println("  → _start: auipc sp,0x7")
        } else if (pc == 0x1008) {
          println("  → andi sp,sp,-16")
        } else if (pc == 0x100c) {
          println("  → jal c_main")
        } else if (pc == 0x1014) {
          println("  → c_main entry")
        } else if (pc == 0x1028) {
          println("  → First UART write (sw a5,0(a3))")
        }
        
        dut.clock.step(1)
      }
      
      println("=" * 80)
    }
  }
}
