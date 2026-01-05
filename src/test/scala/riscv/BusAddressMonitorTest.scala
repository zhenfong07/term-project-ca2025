// Monitor bus_address from cycle 0 to find routing problem

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class BusAddressMonitorTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Bus Address Monitor")

  it should "track bus_address evolution from start" in {
    test(new FreeRTOSTestTop("ultra.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("BUS ADDRESS MONITOR: Track routing from cycle 0")
      println("=" * 80)
      
      val busHistory = scala.collection.mutable.ListBuffer[(Int, BigInt)]()
      var lastBusAddr = BigInt(0)
      
      // Monitor first 15000 cycles
      for (cycle <- 0 until 15000) {
        dut.clock.step(1)
        
        val busAddr = dut.io.bus_address.peekInt()
        
        // Record address changes
        if (busAddr != lastBusAddr) {
          busHistory.append((cycle, busAddr))
          lastBusAddr = busAddr
        }
      }
      
      println()
      println(s"Total bus_address changes: ${busHistory.size}")
      println()
      println("bus_address timeline (first 30 changes):")
      busHistory.take(30).foreach { case (cycle, addr) =>
        val slave = (addr >> 29).toInt & 0x7
        val slaveName = slave match {
          case 0 => "Memory"
          case 1 => "VGA"
          case 2 => "UART"
          case 3 => "Timer"
          case _ => "Unused"
        }
        println(f"  Cycle $cycle%6d: 0x${addr}%08x -> slave $slave ($slaveName)")
      }
      
      // Count how many cycles spent on each slave
      println()
      println("Slave access distribution:")
      val slaveMap = busHistory.groupBy { case (_, addr) => (addr >> 29).toInt & 0x7 }
      slaveMap.toSeq.sortBy(_._1).foreach { case (slave, accesses) =>
        val slaveName = slave match {
          case 0 => "Memory"
          case 1 => "VGA"
          case 2 => "UART"
          case 3 => "Timer"
          case _ => "Unused"
        }
        println(f"  Slave $slave ($slaveName%-8s): ${accesses.size} transactions")
      }
      
      // Check for UART activity
      val uartAccesses = busHistory.count { case (_, addr) => ((addr >> 29).toInt & 0x7) == 2 }
      println()
      if (uartAccesses > 0) {
        println(f"✓ UART slave selected $uartAccesses times")
        
        // Now check if UART actually transmitted
        println()
        println("Checking UART output...")
        
        var uartTransitions = 0
        var lastUart = dut.io.uart_tx.peekBoolean()
        
        for (i <- 0 until 5000) {
          dut.clock.step(1)
          val currentUart = dut.io.uart_tx.peekBoolean()
          if (currentUart != lastUart) {
            uartTransitions += 1
          }
          lastUart = currentUart
        }
        
        println(s"UART transitions: $uartTransitions")
        if (uartTransitions > 0) {
          println("✓ UART HARDWARE WORKS!")
        } else {
          println("✗ UART selected but no output - slave connection problem?")
        }
      } else {
        println("✗ UART never selected - bus_address routing problem")
      }
      
      println("=" * 80)
    }
  }
}
