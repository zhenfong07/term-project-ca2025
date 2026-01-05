// Test if Memory responds through BusSwitch

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MemoryThroughBusSwitchTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Memory Access Through BusSwitch")

  it should "write to memory at 0x00002000" in {
    test(new FreeRTOSTestTop("test.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("MEMORY BUSSWITCH TEST: Does memory respond through BusSwitch?")
      println("=" * 80)
      
      // Wait for ROM loading
      println("Waiting for ROM load...")
      dut.clock.step(10000)
      
      // Read memory at address 0x2000
      println()
      println("Reading memory at 0x2000 through debug interface...")
      dut.io.mem_debug_read_address.poke(0x2000.U)
      dut.clock.step(1)
      val before = dut.io.mem_debug_read_data.peekInt()
      println(f"  Before: 0x${before}%08x")
      
      // Let CPU run for 5000 cycles
      println()
      println("Letting CPU run for 5000 cycles...")
      dut.clock.step(5000)
      
      // Read again
      dut.io.mem_debug_read_address.poke(0x2000.U)
      dut.clock.step(1)
      val after = dut.io.mem_debug_read_data.peekInt()
      println(f"  After:  0x${after}%08x")
      
      if (before != after) {
        println("✓ Memory changed - BusSwitch memory path WORKS!")
      } else {
        println("✗ Memory unchanged - CPU didn't write or BusSwitch broken")
        
        // Check if CPU is executing
        println()
        println("Checking CPU execution...")
        dut.io.regs_debug_read_address.poke(2.U) // sp
        dut.clock.step(1)
        val sp = dut.io.regs_debug_read_data.peekInt()
        println(f"  sp (x2) = 0x${sp}%08x")
        
        if (sp != 0) {
          println("  ✓ CPU is executing (sp changed)")
          println("  ✗ But memory didn't change - BusSwitch issue?")
        }
      }
      
      println("=" * 80)
    }
  }
}
