// Test ultra-minimal ASM that just writes to UART in loop

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class UltraMinimalTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Ultra Minimal UART Test")

  it should "blast UART with letter A continuously" in {
    test(new FreeRTOSTestTop("ultra.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 70)
      println("ULTRA MINIMAL TEST: Pure ASM UART blast + bus_address debug")
      println("=" * 70)
      println("Program: while(1) UART_SEND = 'A';")
      println()
      
      // Wait for ROM loading
      println("Waiting 5000 cycles for ROM load...")
      dut.clock.step(5000)
      
      println("Monitoring bus_address and UART...")
      var uartTransitions = 0
      var lastUartState = true
      val busAddressSamples = scala.collection.mutable.ListBuffer[BigInt]()
      
      for (i <- 0 until 10000) {
        dut.clock.step(1)
        
        // Sample bus_address (first 50 cycles)
        if (i < 50) {
          val busAddr = dut.io.bus_address.peekInt()
          busAddressSamples.append(busAddr)
        }
        
        val currentUartState = dut.io.uart_tx.peekBoolean()
        if (currentUartState != lastUartState) {
          uartTransitions += 1
        }
        lastUartState = currentUartState
      }
      
      println()
      println("bus_address samples (first 50 cycles):")
      busAddressSamples.zipWithIndex.foreach { case (addr, i) =>
        if (i < 20) {
          println(f"  Cycle $i%3d: 0x${addr}%08x  -> slave ${(addr >> 29) & 0x7} (${if ((addr >> 29) == 2) "UART" else if ((addr >> 29) == 0) "Memory" else "Other"})")
        }
      }
      
      println()
      println(s"Total UART transitions: $uartTransitions")
      
      if (uartTransitions > 0) {
        println("✓ UART hardware WORKS!")
      } else {
        println("✗ UART hardware BROKEN - bus_address issue?")
        
        // Check CPU registers
        println()
        println("Checking CPU registers...")
        dut.io.regs_debug_read_address.poke(5.U) // t0
        dut.clock.step(1)
        val t0 = dut.io.regs_debug_read_data.peekInt()
        println(f"  t0 (x5) = 0x${t0}%08x  (expected 0x40000000)")
        
        if (t0 == 0x40000000L) {
          println("  ✓ CPU has correct UART address in t0")
          println("  ✗ BUT bus_address never changed to 0x40000000!")
          println()
          println("**ROOT CAUSE**: bus_address_reg in CPU wrapper is stuck")
          println("                It doesn't update to reflect UART writes")
          println("                BusSwitch routes everything to slave 0 (Memory)")
        }
      }
      
      println("=" * 70)
    }
  }
}
