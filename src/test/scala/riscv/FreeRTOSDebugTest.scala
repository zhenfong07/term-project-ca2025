// Simple FreeRTOS Debug Test
// Purpose: Check if CPU executes ANY instructions at all

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class FreeRTOSDebugTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("FreeRTOS CPU Execution Debug")

  it should "show CPU executing instructions" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 70)
      println("DEBUG TEST: Check if CPU executes instructions")
      println("=" * 70)
      
      // CHECK: Is ROM loader finished?
      println()
      println("Checking ROM loader status...")
      for (cycle <- Seq(10, 100, 1000, 10000)) {
        dut.clock.step(cycle)
        val instValid = dut.io.regs_debug_read_address.peek() // Dummy read to advance
        println(s"  After $cycle cycles: instruction_valid = ???")
      }
      
      // Monitor bus_address to see if it changes (sign of memory access)
      println()
      println("Monitoring bus_address for memory transactions...")
      
      val busAddresses = scala.collection.mutable.Set[BigInt]()
      for (i <- 0 until 1000) {
        dut.clock.step(1)
        val busAddr = dut.io.bus_address.peekInt()
        if (busAddr != 0) {
          busAddresses += busAddr
        }
      }
      
      println(s"  Unique bus_address values seen: ${busAddresses.size}")
      if (busAddresses.nonEmpty) {
        println("  Sample addresses:")
        busAddresses.take(10).foreach { addr =>
          println(f"    0x${addr}%08x")
        }
      } else {
        println("  WARNING: bus_address stuck at 0x00000000!")
      }
      
      // Monitor registers for ANY activity (sign of execution)
      dut.clock.step(100)
      
      println()
      println("Checking register file for activity...")
      
      // Read registers x1-x10 to see if ANY changed from 0
      var registersChanged = 0
      for (reg <- 1 to 10) {
        dut.io.regs_debug_read_address.poke(reg.U)
        dut.clock.step(1)
        val value = dut.io.regs_debug_read_data.peekInt()
        if (value != 0) {
          println(f"  x$reg = 0x${value}%08x")
          registersChanged += 1
        }
      }
      
      println()
      if (registersChanged > 0) {
        println(s"✓ CPU IS EXECUTING! Found $registersChanged non-zero registers")
      } else {
        println(s"✗ CPU NOT EXECUTING! All registers are 0")
      }
      
      // Check if UART transmitted anything
      println()
      println("Monitoring UART for 200000 cycles...")
      var uartActivityCount = 0
      var lastUartState = true
      
      for (i <- 0 until 200000) {
        dut.clock.step(1)
        val currentUartState = dut.io.uart_tx.peekBoolean()
        if (currentUartState != lastUartState) {
          uartActivityCount += 1
          if (uartActivityCount == 1) {
            println(s"  ✓ First UART transition at cycle $i")
          }
          if (uartActivityCount <= 10) {
            println(s"    UART transition #$uartActivityCount at cycle $i")
          }
        }
        lastUartState = currentUartState
        
        // Progress indicator
        if (i % 50000 == 0 && i > 0) {
          println(s"    ... $i cycles elapsed")
        }
      }
      
      println()
      println(s"UART transitions: $uartActivityCount")
      if (uartActivityCount > 0) {
        println("✓ UART IS ACTIVE - FreeRTOS is printing!")
      } else {
        println("✗ UART IS SILENT - FreeRTOS not running")
      }
      
      // Check mtimecmp
      val mtimecmp = dut.io.timer_mtimecmp.peek().litValue
      val mtime = dut.io.timer_mtime.peek().litValue
      println()
      println(s"Timer state:")
      println(s"  mtime    = $mtime")
      println(s"  mtimecmp = $mtimecmp")
      
      if (mtimecmp == BigInt("FFFFFFFFFFFFFFFF", 16)) {
        println("  ✗ mtimecmp still at MAX - main() never ran")
      } else {
        println("  ✓ mtimecmp was configured - main() executed!")
      }
      
      println("=" * 70)
    }
  }
  
  it should "check memory content at entry point" in {
    test(new FreeRTOSTestTop("freertos.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 70)
      println("DEBUG TEST: Check memory at entry point 0x1000")
      println("=" * 70)
      
      dut.clock.step(100) // Let ROM loader finish
      
      // Read first 16 words from 0x1000 (entry point)
      println()
      println("Memory at 0x1000 (entry point):")
      for (addr <- 0x1000 until 0x1040 by 4) {
        dut.io.mem_debug_read_address.poke(addr.U)
        dut.clock.step(1)
        val value = dut.io.mem_debug_read_data.peekInt()
        println(f"  0x$addr%04x: 0x${value.toLong}%08x")
      }
      
      // Check if instructions are loaded
      dut.io.mem_debug_read_address.poke(0x1000.U)
      dut.clock.step(1)
      val firstInst = dut.io.mem_debug_read_data.peekInt()
      
      println()
      if (firstInst != 0) {
        println(f"✓ Instructions loaded at entry point (first = 0x${firstInst}%08x)")
      } else {
        println("✗ Entry point is ZERO - ROM not loaded!")
      }
      
      println("=" * 70)
    }
  }
}
