// Test ultra-minimal with TestTopModule (the working one)

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class UltraMinimalTestTopTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Ultra Minimal with TestTopModule")

  it should "work with TestTopModule" in {
    test(new TestTopModule("ultra.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 70)
      println("TEST: Ultra minimal with TestTopModule (should work)")
      println("=" * 70)
      
      // Wait for execution
      println("Running for 10000 cycles...")
      
      var uartLow = 0
      var uartHigh = 0
      
      for (i <- 0 until 10000) {
        dut.clock.step(1)
        
        // TestTopModule doesn't expose uart_tx, so we check memory/registers
        if (i % 2000 == 0) {
          dut.io.regs_debug_read_address.poke(5.U) // x5
          dut.clock.step(1)
          val reg5 = dut.io.regs_debug_read_data.peekInt()
          println(f"  Cycle $i%5d: x5 = 0x$reg5%08x")
        }
      }
      
      // Check if CPU executed
      dut.io.regs_debug_read_address.poke(5.U)
      dut.clock.step(1)
      val t0 = dut.io.regs_debug_read_data.peekInt()
      
      println()
      if (t0 == 0x40000000L) {
        println("✓ CPU executed! t0 = 0x40000000 (UART_BASE loaded)")
      } else {
        println(f"✗ Unexpected t0 = 0x$t0%08x")
      }
      
      println("=" * 70)
    }
  }
}
