// Check which memory location actually gets written

package riscv

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MemoryWriteLocationTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("Memory Write Location")

  it should "check which addresses get written by minimal_c" in {
    test(new FreeRTOSTestTop("minimal_c.asmbin")).withAnnotations(TestAnnotations.annos) { dut =>
      dut.clock.setTimeout(0)
      
      println()
      println("=" * 80)
      println("CHECKING WRITE LOCATIONS")
      println("=" * 80)
      
      // Run for a while
      println("Running 5000 cycles...")
      dut.clock.step(5000)
      
      println()
      println("Reading memory at key locations:")
      println()
      
      // Read UART register (0x40000010 - but this is peripheral, not memory)
      // Read stack locations
      for (addr <- Seq(0x7FE0, 0x7FE4, 0x7FE8, 0x7FEC, 0x7FF0)) {
        dut.io.mem_debug_read_address.poke(addr.U)
        dut.clock.step(1)
        val value = dut.io.mem_debug_read_data.peekInt()
        println(f"  Memory[0x${addr}%04x] = 0x${value}%08x  " + (if (value == 0x58 || value == 0x59) "← 'X' or 'Y' !" else ""))
      }
      
      println()
      println("=" * 80)
      println("If 0x58 ('X') or 0x59 ('Y') appear at 0x7FEC, the writes go to STACK!")
      println("If they don't appear, the writes are lost or go elsewhere")
      println("=" * 80)
    }
  }
}
