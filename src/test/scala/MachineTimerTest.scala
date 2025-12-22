// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import peripheral.MachineTimer
import riscv.Parameters

class MachineTimerTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior.of("MachineTimer")

  it should "increment mtime every cycle" in {
    test(new MachineTimer).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      // Initial state: mtime = 0
      dut.io.debug_mtime.expect(0.U)
      
      // Step and check increment
      dut.clock.step()
      dut.io.debug_mtime.expect(1.U)
      
      dut.clock.step()
      dut.io.debug_mtime.expect(2.U)
      
      // Step multiple times
      dut.clock.step(10)
      dut.io.debug_mtime.expect(12.U)
    }
  }

  it should "assert mtip when mtime >= mtimecmp" in {
    test(new MachineTimer).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      // Initially mtip should be 0 (mtimecmp = 0xFFFF...FFFF)
      dut.io.mtip.expect(false.B)
      
      // Write mtimecmp to a small value (e.g., 10)
      // Write low word: address 0x8
      dut.io.channels.write_address_channel.AWVALID.poke(true.B)
      dut.io.channels.write_address_channel.AWADDR.poke(0x8.U)
      dut.clock.step()
      dut.io.channels.write_address_channel.AWVALID.poke(false.B)
      
      // Wait for AWREADY
      while (!dut.io.channels.write_address_channel.AWREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      
      // Write data
      dut.io.channels.write_data_channel.WVALID.poke(true.B)
      dut.io.channels.write_data_channel.WDATA.poke(10.U)
      dut.io.channels.write_data_channel.WSTRB.poke("b1111".U)
      dut.clock.step()
      
      // Wait for WREADY
      while (!dut.io.channels.write_data_channel.WREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_data_channel.WVALID.poke(false.B)
      
      // Wait for write response
      dut.io.channels.write_response_channel.BREADY.poke(true.B)
      while (!dut.io.channels.write_response_channel.BVALID.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_response_channel.BREADY.poke(false.B)
      
      // Now mtimecmp should be 10
      dut.io.debug_mtimecmp.expect(10.U)
      
      // mtime should still be less than 10, so mtip = 0
      assert(dut.io.debug_mtime.peek().litValue < 10)
      dut.io.mtip.expect(false.B)
      
      // Step until mtime = 10
      while (dut.io.debug_mtime.peek().litValue < 10) {
        dut.clock.step()
        dut.io.mtip.expect(false.B)
      }
      
      // At mtime = 10, mtip should be 1
      dut.io.debug_mtime.expect(10.U)
      dut.io.mtip.expect(true.B)
      
      // Step more, mtip should remain 1
      dut.clock.step()
      dut.io.debug_mtime.expect(11.U)
      dut.io.mtip.expect(true.B)
    }
  }

  it should "read mtime correctly via AXI4-Lite" in {
    test(new MachineTimer).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      // Step a few cycles so mtime has a value
      dut.clock.step(5)
      val expected_mtime = 5
      
      // Read mtime low word (address 0x0)
      dut.io.channels.read_address_channel.ARVALID.poke(true.B)
      dut.io.channels.read_address_channel.ARADDR.poke(0x0.U)
      dut.clock.step()
      
      // Wait for ARREADY
      while (!dut.io.channels.read_address_channel.ARREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.read_address_channel.ARVALID.poke(false.B)
      
      // Wait for RVALID
      dut.io.channels.read_data_channel.RREADY.poke(true.B)
      while (!dut.io.channels.read_data_channel.RVALID.peek().litToBoolean) {
        dut.clock.step()
      }
      
      // Check read data matches mtime low
      val read_data = dut.io.channels.read_data_channel.RDATA.peek().litValue
      assert(read_data == expected_mtime, 
        s"Expected mtime[31:0] = $expected_mtime, got $read_data")
      
      dut.io.channels.read_data_channel.RREADY.poke(false.B)
    }
  }

  it should "clear interrupt when writing higher mtimecmp" in {
    test(new MachineTimer).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      // Write mtimecmp = 5
      dut.io.channels.write_address_channel.AWVALID.poke(true.B)
      dut.io.channels.write_address_channel.AWADDR.poke(0x8.U)
      dut.clock.step()
      while (!dut.io.channels.write_address_channel.AWREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_address_channel.AWVALID.poke(false.B)
      
      dut.io.channels.write_data_channel.WVALID.poke(true.B)
      dut.io.channels.write_data_channel.WDATA.poke(5.U)
      dut.io.channels.write_data_channel.WSTRB.poke("b1111".U)
      dut.clock.step()
      while (!dut.io.channels.write_data_channel.WREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_data_channel.WVALID.poke(false.B)
      
      dut.io.channels.write_response_channel.BREADY.poke(true.B)
      while (!dut.io.channels.write_response_channel.BVALID.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_response_channel.BREADY.poke(false.B)
      
      // Step until mtime >= 5 (interrupt should trigger)
      while (dut.io.debug_mtime.peek().litValue < 5) {
        dut.clock.step()
      }
      dut.io.mtip.expect(true.B)
      
      // Now write new mtimecmp = 100 (should clear interrupt)
      dut.io.channels.write_address_channel.AWVALID.poke(true.B)
      dut.io.channels.write_address_channel.AWADDR.poke(0x8.U)
      dut.clock.step()
      while (!dut.io.channels.write_address_channel.AWREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_address_channel.AWVALID.poke(false.B)
      
      dut.io.channels.write_data_channel.WVALID.poke(true.B)
      dut.io.channels.write_data_channel.WDATA.poke(100.U)
      dut.io.channels.write_data_channel.WSTRB.poke("b1111".U)
      dut.clock.step()
      while (!dut.io.channels.write_data_channel.WREADY.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_data_channel.WVALID.poke(false.B)
      
      dut.io.channels.write_response_channel.BREADY.poke(true.B)
      while (!dut.io.channels.write_response_channel.BVALID.peek().litToBoolean) {
        dut.clock.step()
      }
      dut.io.channels.write_response_channel.BREADY.poke(false.B)
      
      // Interrupt should now be cleared
      dut.clock.step()
      dut.io.mtip.expect(false.B)
    }
  }
}
