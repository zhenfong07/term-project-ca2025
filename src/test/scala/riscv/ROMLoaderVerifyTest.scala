// Check if ROM loader loads binaries correctly at 0x1000

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class ROMLoaderVerifyTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("ROM Loader Verification")

  it should "load minimal_c correctly at 0x1000" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("ROM LOADER VERIFICATION: Check memory at 0x1000")
      println("=" * 80)
      
      // Wait for ROM loading
      println("Waiting 15000 cycles for ROM load...")
      dut.clock.step(15000)
      
      println()
      println("Reading memory at 0x1000 (first 16 words):")
      for (addr <- 0x1000 to 0x103C by 4) {
        dut.io.mem_debug_read_address.poke(addr.U)
        dut.clock.step(1)
        val word = dut.io.mem_debug_read_data.peekInt()
        println(f"  0x${addr}%04x: 0x${word}%08x")
      }
      
      // Expected first instruction: auipc sp, 0x7 = 0x00007117
      println()
      dut.io.mem_debug_read_address.poke(0x1000.U)
      dut.clock.step(1)
      val first_inst = dut.io.mem_debug_read_data.peekInt()
      
      if (first_inst == 0x00007117L) {
        println("✓ First instruction correct: auipc sp,0x7")
      } else {
        println(f"✗ First instruction WRONG: got 0x${first_inst}%08x, expected 0x00007117")
      }
      
      // Check if CPU PC is at 0x1000
      println()
      println("Checking CPU instruction_address...")
      // We can't directly read PC, but we can see where CPU is fetching from
      // by monitoring a few cycles
      
      println("=" * 80)
    }
  }
}
