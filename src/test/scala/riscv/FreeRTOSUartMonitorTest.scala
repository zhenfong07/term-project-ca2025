// Monitor FreeRTOS UART writes to understand execution flow

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FreeRTOSUartMonitorTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("FreeRTOS UART Monitor")

  it should "track when FreeRTOS writes to UART" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("FREERTOS UART MONITOR: Track UART writes and bus_address")
      println("=" * 80)
      
      // Monitor for 20000 cycles
      val uartWrites = scala.collection.mutable.ListBuffer[(Int, BigInt)]()
      var lastBusAddr = BigInt(0)
      var uartTransitions = 0
      var lastUartValue = true
      
      for (cycle <- 0 until 20000) {
        dut.clock.step(1)
        
        val busAddr = dut.io.bus_address.peekInt()
        
        // Detect UART TX writes (0x40000010)
        if (busAddr == 0x40000010L && busAddr != lastBusAddr) {
          uartWrites.append((cycle, busAddr))
        }
        lastBusAddr = busAddr
        
        // Count UART TX transitions
        val currentUart = dut.io.uart_tx.peekBoolean()
        if (currentUart != lastUartValue) {
          uartTransitions += 1
        }
        lastUartValue = currentUart
      }
      
      println()
      println(s"UART TX register writes (0x40000010): ${uartWrites.size}")
      if (uartWrites.nonEmpty) {
        println("Write timeline (first 20):")
        uartWrites.take(20).foreach { case (cycle, addr) =>
          println(f"  Cycle $cycle%6d: CPU wrote to 0x${addr}%08x")
        }
      }
      
      println()
      println(s"UART TX pin transitions: $uartTransitions")
      
      // Check CPU execution
      println()
      println("Checking CPU state...")
      dut.io.regs_debug_read_address.poke(2.U) // sp
      dut.clock.step(1)
      val sp = dut.io.regs_debug_read_data.peekInt()
      println(f"  sp (x2) = 0x${sp}%08x")
      
      dut.io.regs_debug_read_address.poke(1.U) // ra
      dut.clock.step(1)
      val ra = dut.io.regs_debug_read_data.peekInt()
      println(f"  ra (x1) = 0x${ra}%08x")
      
      // Check timer
      val mtimecmp = dut.io.timer_mtimecmp.peekInt()
      println(f"  mtimecmp = $mtimecmp%d")
      
      println()
      if (mtimecmp == BigInt("FFFFFFFFFFFFFFFF", 16)) {
        println("✗ main() never ran (mtimecmp still at MAX)")
        println("  FreeRTOS likely stuck in initialization or exception loop")
      } else {
        println("✓ main() executed and configured timer")
      }
      
      if (uartWrites.size > 0) {
        println(f"✓ FreeRTOS wrote to UART ${uartWrites.size} times")
        if (uartTransitions == 0) {
          println("✗ But UART TX pin never changed - UART hardware issue?")
        }
      } else {
        println("✗ FreeRTOS never wrote to UART register")
        println("  Likely stuck before main() or uart_puts()")
      }
      
      println("=" * 80)
    }
  }
}
