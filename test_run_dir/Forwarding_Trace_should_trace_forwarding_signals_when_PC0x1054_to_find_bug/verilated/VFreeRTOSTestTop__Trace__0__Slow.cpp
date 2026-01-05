// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VFreeRTOSTestTop__Syms.h"


VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_init_sub__TOP__0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+833,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+834,0,"io_mem_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"io_mem_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"io_csr_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+838,0,"io_csr_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"io_bus_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"io_alu_result_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+842,0,"io_cpu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"io_debug_reg_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+844,0,"io_debug_reg_a2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,0,"io_debug_reg_a3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+846,0,"io_debug_reg_a5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"io_timer_mtip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+848,0,"io_timer_mtime",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"io_timer_mtimecmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+852,0,"io_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("FreeRTOSTestTop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+833,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+834,0,"io_mem_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"io_mem_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"io_csr_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+838,0,"io_csr_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"io_bus_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"io_alu_result_mem",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"io_cpu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"io_debug_reg_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+844,0,"io_debug_reg_a2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,0,"io_debug_reg_a3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+846,0,"io_debug_reg_a5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"io_timer_mtip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+848,0,"io_timer_mtime",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"io_timer_mtimecmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+852,0,"io_uart_tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"mem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"mem_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"mem_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"mem_io_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"mem_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"mem_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"mem_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"mem_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"mem_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"mem_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"mem_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"mem_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"instruction_rom_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"instruction_rom_io_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"instruction_rom_io_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"rom_loader_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"rom_loader_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"rom_loader_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"rom_loader_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"rom_loader_io_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rom_loader_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rom_loader_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rom_loader_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"rom_loader_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"rom_loader_io_rom_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"rom_loader_io_rom_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"rom_loader_io_load_finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"machine_timer_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"machine_timer_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"machine_timer_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"machine_timer_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"machine_timer_io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"machine_timer_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"machine_timer_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"machine_timer_io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"machine_timer_io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"machine_timer_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"machine_timer_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"machine_timer_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"machine_timer_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"machine_timer_io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"machine_timer_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"machine_timer_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"machine_timer_io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"machine_timer_io_mtip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+848,0,"machine_timer_io_debug_mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"machine_timer_io_debug_mtimecmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+831,0,"uart_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"uart_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"uart_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"uart_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"uart_io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"uart_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"uart_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"uart_io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"uart_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"uart_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"uart_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"uart_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"uart_io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"uart_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"uart_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"uart_io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+852,0,"uart_io_txd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"uart_io_signal_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"cpu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"cpu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"cpu_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"cpu_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"cpu_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"cpu_io_axi4_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"cpu_io_axi4_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"cpu_io_axi4_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"cpu_io_axi4_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"cpu_io_axi4_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"cpu_io_axi4_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"cpu_io_axi4_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"cpu_io_axi4_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"cpu_io_axi4_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"cpu_io_axi4_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"cpu_io_axi4_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"cpu_io_axi4_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"cpu_io_axi4_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"cpu_io_axi4_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"cpu_io_axi4_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"cpu_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"cpu_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+835,0,"cpu_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"cpu_io_csr_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+838,0,"cpu_io_csr_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"cpu_io_bus_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"cpu_io_alu_result_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"cpu_io_debug_reg_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"bus_switch_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"bus_switch_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"bus_switch_io_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"bus_switch_io_slaves_0_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"bus_switch_io_slaves_0_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_slaves_0_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"bus_switch_io_slaves_0_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"bus_switch_io_slaves_0_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"bus_switch_io_slaves_0_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"bus_switch_io_slaves_0_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+85,0,"bus_switch_io_slaves_0_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"bus_switch_io_slaves_0_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"bus_switch_io_slaves_0_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"bus_switch_io_slaves_0_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_slaves_0_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"bus_switch_io_slaves_0_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"bus_switch_io_slaves_0_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"bus_switch_io_slaves_0_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"bus_switch_io_slaves_1_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"bus_switch_io_slaves_1_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"bus_switch_io_slaves_1_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"bus_switch_io_slaves_1_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"bus_switch_io_slaves_1_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"bus_switch_io_slaves_1_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"bus_switch_io_slaves_1_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"bus_switch_io_slaves_1_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"bus_switch_io_slaves_1_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"bus_switch_io_slaves_1_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"bus_switch_io_slaves_2_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"bus_switch_io_slaves_2_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_slaves_2_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"bus_switch_io_slaves_2_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"bus_switch_io_slaves_2_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"bus_switch_io_slaves_2_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"bus_switch_io_slaves_2_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"bus_switch_io_slaves_2_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"bus_switch_io_slaves_2_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"bus_switch_io_slaves_2_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_slaves_2_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"bus_switch_io_slaves_2_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"bus_switch_io_slaves_2_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"bus_switch_io_slaves_2_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"bus_switch_io_slaves_3_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"bus_switch_io_slaves_3_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_slaves_3_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"bus_switch_io_slaves_3_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"bus_switch_io_slaves_3_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"bus_switch_io_slaves_3_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"bus_switch_io_slaves_3_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"bus_switch_io_slaves_3_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"bus_switch_io_slaves_3_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"bus_switch_io_slaves_3_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"bus_switch_io_slaves_3_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_slaves_3_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"bus_switch_io_slaves_3_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"bus_switch_io_slaves_3_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"bus_switch_io_slaves_3_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"bus_switch_io_slaves_4_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"bus_switch_io_slaves_4_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"bus_switch_io_slaves_4_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"bus_switch_io_slaves_4_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"bus_switch_io_slaves_4_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"bus_switch_io_slaves_4_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"bus_switch_io_slaves_4_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"bus_switch_io_slaves_4_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"bus_switch_io_slaves_4_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"bus_switch_io_slaves_4_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"bus_switch_io_slaves_5_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"bus_switch_io_slaves_5_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"bus_switch_io_slaves_5_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"bus_switch_io_slaves_5_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"bus_switch_io_slaves_5_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"bus_switch_io_slaves_5_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"bus_switch_io_slaves_5_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"bus_switch_io_slaves_5_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"bus_switch_io_slaves_5_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"bus_switch_io_slaves_5_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"bus_switch_io_slaves_6_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"bus_switch_io_slaves_6_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"bus_switch_io_slaves_6_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"bus_switch_io_slaves_6_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"bus_switch_io_slaves_6_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"bus_switch_io_slaves_6_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"bus_switch_io_slaves_6_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"bus_switch_io_slaves_6_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"bus_switch_io_slaves_6_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"bus_switch_io_slaves_6_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"bus_switch_io_slaves_7_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"bus_switch_io_slaves_7_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"bus_switch_io_slaves_7_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"bus_switch_io_slaves_7_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"bus_switch_io_slaves_7_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"bus_switch_io_slaves_7_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"bus_switch_io_slaves_7_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"bus_switch_io_slaves_7_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"bus_switch_io_slaves_7_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"bus_switch_io_slaves_7_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"bus_switch_io_master_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"bus_switch_io_master_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_master_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"bus_switch_io_master_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"bus_switch_io_master_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"bus_switch_io_master_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"bus_switch_io_master_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"bus_switch_io_master_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"bus_switch_io_master_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"bus_switch_io_master_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"bus_switch_io_master_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"bus_switch_io_master_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"bus_switch_io_master_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"bus_switch_io_master_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"bus_switch_io_master_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"mem_slave_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"mem_slave_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"mem_slave_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"mem_slave_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"mem_slave_io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"mem_slave_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"mem_slave_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"mem_slave_io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"mem_slave_io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+85,0,"mem_slave_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"mem_slave_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"mem_slave_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"mem_slave_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"mem_slave_io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"mem_slave_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"mem_slave_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"mem_slave_io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"mem_slave_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"mem_slave_io_bundle_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"mem_slave_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"mem_slave_io_bundle_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"mem_slave_io_bundle_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"mem_slave_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"mem_slave_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"mem_slave_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"mem_slave_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"mem_slave_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"dummy_vga_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"dummy_vga_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"dummy_vga_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"dummy_vga_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"dummy_vga_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"dummy_vga_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"dummy_vga_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"dummy_vga_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"dummy_vga_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"dummy_vga_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"dummy_vga_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"dummy_vga_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"dummy_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"dummy_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"dummy_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"dummy_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"dummy_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"dummy_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"dummy_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"dummy_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"dummy_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"dummy_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"dummy_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"dummy_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"dummy_1_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"dummy_1_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"dummy_1_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"dummy_1_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"dummy_1_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"dummy_1_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"dummy_1_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"dummy_1_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"dummy_1_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"dummy_1_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"dummy_1_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"dummy_1_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"dummy_2_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"dummy_2_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"dummy_2_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"dummy_2_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"dummy_2_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"dummy_2_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"dummy_2_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"dummy_2_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"dummy_2_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"dummy_2_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"dummy_2_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"dummy_2_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"dummy_3_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"dummy_3_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"dummy_3_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"dummy_3_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"dummy_3_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"dummy_3_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"dummy_3_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"dummy_3_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"dummy_3_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"dummy_3_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"dummy_3_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"dummy_3_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+853,0,"interrupt_vector_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+151,0,"interrupt_vector_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+152,0,"loading",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"read_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bus_switch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+839,0,"io_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+81,0,"io_slaves_0_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_slaves_0_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_slaves_0_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"io_slaves_0_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"io_slaves_0_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_slaves_0_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_slaves_0_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+85,0,"io_slaves_0_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_slaves_0_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_slaves_0_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_slaves_0_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_slaves_0_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"io_slaves_0_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_slaves_0_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_slaves_0_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"io_slaves_1_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"io_slaves_1_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_slaves_1_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"io_slaves_1_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"io_slaves_1_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_slaves_1_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"io_slaves_1_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"io_slaves_1_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"io_slaves_1_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_slaves_1_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_slaves_2_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_slaves_2_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_slaves_2_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+59,0,"io_slaves_2_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_slaves_2_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_slaves_2_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"io_slaves_2_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"io_slaves_2_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_slaves_2_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_slaves_2_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_slaves_2_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"io_slaves_2_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_slaves_2_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_slaves_2_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"io_slaves_3_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_slaves_3_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_slaves_3_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"io_slaves_3_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_slaves_3_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_slaves_3_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_slaves_3_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"io_slaves_3_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"io_slaves_3_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_slaves_3_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_slaves_3_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_slaves_3_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"io_slaves_3_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_slaves_3_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_slaves_3_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"io_slaves_4_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_slaves_4_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"io_slaves_4_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_slaves_4_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_slaves_4_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_slaves_4_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"io_slaves_4_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_slaves_4_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_slaves_4_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_slaves_4_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"io_slaves_5_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_slaves_5_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_slaves_5_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_slaves_5_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_slaves_5_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_slaves_5_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_slaves_5_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_slaves_5_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"io_slaves_5_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_slaves_5_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_slaves_6_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_slaves_6_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_slaves_6_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_slaves_6_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_slaves_6_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_slaves_6_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_slaves_6_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_slaves_6_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"io_slaves_6_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_slaves_6_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_slaves_7_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"io_slaves_7_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_slaves_7_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_slaves_7_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_slaves_7_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"io_slaves_7_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"io_slaves_7_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_slaves_7_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_slaves_7_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"io_slaves_7_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_master_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_master_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_master_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_master_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_master_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_master_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_master_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"io_master_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_master_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_master_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_master_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_master_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_master_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_master_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"io_master_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+154,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"read_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"write_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+157,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"hit_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"hit_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"hit_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"hit_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"hit_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"hit_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"hit_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_axi4_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_axi4_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_axi4_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_axi4_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_axi4_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_axi4_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_axi4_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"io_axi4_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_axi4_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_axi4_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_axi4_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_axi4_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_axi4_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_axi4_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"io_axi4_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+835,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"io_csr_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+838,0,"io_csr_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"io_bus_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"io_alu_result_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"io_debug_reg_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"cpu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"cpu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"cpu_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"cpu_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"cpu_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"cpu_io_memory_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"cpu_io_memory_bundle_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"cpu_io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"cpu_io_memory_bundle_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"cpu_io_memory_bundle_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"cpu_io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"cpu_io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"cpu_io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"cpu_io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"cpu_io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"cpu_io_memory_bundle_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"cpu_io_memory_bundle_request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"cpu_io_memory_bundle_granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"cpu_io_device_select",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"cpu_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"cpu_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+835,0,"cpu_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"cpu_io_csr_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+838,0,"cpu_io_csr_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"cpu_io_alu_result_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"cpu_io_debug_reg_sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"axi_master_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"axi_master_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"axi_master_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"axi_master_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"axi_master_io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"axi_master_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"axi_master_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"axi_master_io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"axi_master_io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"axi_master_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"axi_master_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"axi_master_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"axi_master_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"axi_master_io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"axi_master_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"axi_master_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"axi_master_io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"axi_master_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"axi_master_io_bundle_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"axi_master_io_bundle_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"axi_master_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"axi_master_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"axi_master_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"axi_master_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"axi_master_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"axi_master_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"axi_master_io_bundle_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"axi_master_io_bundle_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"axi_master_io_bundle_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"full_bus_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"bus_address_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"start_bus_transaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("axi_master", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+73,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"io_bundle_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"io_bundle_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"io_bundle_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"io_bundle_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"io_bundle_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"io_bundle_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,0,"ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+186,0,"write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"io_channels_write_data_channel_WSTRB_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+191,0,"io_channels_write_data_channel_WSTRB_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"io_memory_bundle_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"io_memory_bundle_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"io_memory_bundle_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"io_memory_bundle_write_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"io_memory_bundle_request",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"io_memory_bundle_granted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"io_device_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+80,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+835,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"io_csr_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+838,0,"io_csr_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"io_alu_result_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"io_debug_reg_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+192,0,"ctrl_io_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"ctrl_io_jump_instruction_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"ctrl_io_rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"ctrl_io_rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+196,0,"ctrl_io_memory_read_enable_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"ctrl_io_rd_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+198,0,"ctrl_io_memory_read_enable_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"ctrl_io_rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+200,0,"ctrl_io_memory_write_enable_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"ctrl_io_regs_write_source_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"ctrl_io_regs_write_source_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"ctrl_io_regs_write_source_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+204,0,"ctrl_io_rd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+205,0,"ctrl_io_if_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"ctrl_io_id_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"ctrl_io_pc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"ctrl_io_if_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"ctrl_io_branch_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"ctrl_io_jal_jalr_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"regs_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"regs_io_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"regs_io_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+211,0,"regs_io_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"regs_io_read_address1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"regs_io_read_address2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+212,0,"regs_io_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"regs_io_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"regs_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+835,0,"regs_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"inst_fetch_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"inst_fetch_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"inst_fetch_io_stall_flag_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"inst_fetch_io_jump_flag_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"inst_fetch_io_jump_address_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"inst_fetch_io_rom_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"inst_fetch_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"inst_fetch_io_btb_mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"inst_fetch_io_btb_correction_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"inst_fetch_io_btb_correct_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"inst_fetch_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"inst_fetch_io_id_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"inst_fetch_io_btb_predicted_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"inst_fetch_io_btb_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"inst_fetch_io_btb_update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"inst_fetch_io_btb_update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"inst_fetch_io_btb_update_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"inst_fetch_io_btb_update_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"inst_fetch_io_ras_predicted_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"inst_fetch_io_ras_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"inst_fetch_io_ras_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"inst_fetch_io_ras_push_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"inst_fetch_io_ibtb_predicted_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"inst_fetch_io_ibtb_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+231,0,"inst_fetch_io_ibtb_update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"inst_fetch_io_ibtb_update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"inst_fetch_io_ibtb_update_rs1_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"inst_fetch_io_ibtb_update_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"if2id_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"if2id_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"if2id_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"if2id_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"if2id_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"if2id_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"if2id_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"if2id_io_btb_predicted_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"if2id_io_btb_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"if2id_io_ras_predicted_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"if2id_io_ras_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"if2id_io_ibtb_predicted_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"if2id_io_ibtb_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"if2id_io_output_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"if2id_io_output_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,0,"if2id_io_output_btb_predicted_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"if2id_io_output_btb_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"if2id_io_output_ras_predicted_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"if2id_io_output_ras_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+239,0,"if2id_io_output_ibtb_predicted_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"if2id_io_output_ibtb_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"id_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"id_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"id_io_reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"id_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"id_io_forward_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"id_io_forward_from_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"id_io_reg1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"id_io_reg2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+244,0,"id_io_interrupt_assert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"id_io_interrupt_handler_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+208,0,"id_io_branch_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"id_io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"id_io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"id_io_ex_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"id_io_ex_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"id_io_ex_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"id_io_ex_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"id_io_ex_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"id_io_ex_reg_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+252,0,"id_io_ex_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"id_io_ex_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+254,0,"id_io_ex_csr_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+255,0,"id_io_ex_csr_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"id_io_ctrl_jump_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"id_io_clint_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"id_io_clint_jump_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+192,0,"id_io_if_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"id_io_if_jump_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"id2ex_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"id2ex_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"id2ex_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"id2ex_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"id2ex_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"id2ex_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"id2ex_io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"id2ex_io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+252,0,"id2ex_io_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"id2ex_io_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+251,0,"id2ex_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+259,0,"id2ex_io_reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"id2ex_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"id2ex_io_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"id2ex_io_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"id2ex_io_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"id2ex_io_csr_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"id2ex_io_csr_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+249,0,"id2ex_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"id2ex_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"id2ex_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"id2ex_io_output_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"id2ex_io_output_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"id2ex_io_output_regs_reg1_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"id2ex_io_output_regs_reg2_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+266,0,"id2ex_io_output_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"id2ex_io_output_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+201,0,"id2ex_io_output_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"id2ex_io_output_reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"id2ex_io_output_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"id2ex_io_output_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"id2ex_io_output_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"id2ex_io_output_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"id2ex_io_output_csr_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"id2ex_io_output_csr_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+196,0,"id2ex_io_output_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"id2ex_io_output_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"id2ex_io_output_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"ex_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"ex_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"ex_io_reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"ex_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"ex_io_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"ex_io_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"ex_io_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"ex_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"ex_io_forward_from_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"ex_io_forward_from_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"ex_io_reg1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"ex_io_reg2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+278,0,"ex_io_mem_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"ex_io_mem_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"ex_io_csr_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"ex2mem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ex2mem_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"ex2mem_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"ex2mem_io_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"ex2mem_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"ex2mem_io_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"ex2mem_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"ex2mem_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+279,0,"ex2mem_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"ex2mem_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"ex2mem_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"ex2mem_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"ex2mem_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+283,0,"ex2mem_io_output_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"ex2mem_io_output_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,0,"ex2mem_io_output_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"ex2mem_io_output_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"ex2mem_io_output_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"ex2mem_io_output_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"ex2mem_io_output_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"ex2mem_io_output_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"ex2mem_io_output_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"ex2mem_io_output_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"mem_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"mem_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"mem_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"mem_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"mem_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"mem_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"mem_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"mem_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"mem_io_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+283,0,"mem_io_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"mem_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"mem_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"mem_io_wb_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"mem_io_forward_to_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,0,"mem_io_ctrl_stall_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"mem_io_wb_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"mem_io_wb_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+293,0,"mem_io_wb_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"mem_io_bus_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"mem_io_bus_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"mem_io_bus_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"mem_io_bus_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"mem_io_bus_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"mem_io_bus_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"mem_io_bus_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"mem_io_bus_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"mem_io_bus_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"mem_io_bus_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"mem_io_bus_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"mem_io_bus_request",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"mem_io_bus_granted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"mem2wb_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"mem2wb_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"mem2wb_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"mem2wb_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"mem2wb_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"mem2wb_io_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"mem2wb_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+294,0,"mem2wb_io_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"mem2wb_io_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"mem2wb_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"mem2wb_io_output_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"mem2wb_io_output_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"mem2wb_io_output_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"mem2wb_io_output_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"mem2wb_io_output_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"mem2wb_io_output_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"mem2wb_io_output_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"wb_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"wb_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"wb_io_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"wb_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"wb_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"wb_io_regs_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"forwarding_io_rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"forwarding_io_rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+264,0,"forwarding_io_rs1_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"forwarding_io_rs2_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"forwarding_io_rd_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+283,0,"forwarding_io_reg_write_enable_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"forwarding_io_rd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+210,0,"forwarding_io_reg_write_enable_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"forwarding_io_reg1_forward_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"forwarding_io_reg2_forward_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"forwarding_io_reg1_forward_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"forwarding_io_reg2_forward_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+80,0,"clint_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"clint_io_instruction_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"clint_io_instruction_address_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"clint_io_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"clint_io_jump_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"clint_io_id_interrupt_handler_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"clint_io_id_interrupt_assert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"clint_io_csr_bundle_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"clint_io_csr_bundle_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"clint_io_csr_bundle_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"clint_io_csr_bundle_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"clint_io_csr_bundle_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"clint_io_csr_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"clint_io_csr_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"clint_io_csr_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"clint_io_csr_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"csr_regs_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"csr_regs_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"csr_regs_io_reg_read_address_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+272,0,"csr_regs_io_reg_write_enable_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"csr_regs_io_reg_write_address_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+280,0,"csr_regs_io_reg_write_data_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"csr_regs_io_debug_reg_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+261,0,"csr_regs_io_id_reg_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"csr_regs_io_debug_reg_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"csr_regs_io_clint_access_bundle_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"csr_regs_io_clint_access_bundle_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"csr_regs_io_clint_access_bundle_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"csr_regs_io_clint_access_bundle_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"csr_regs_io_clint_access_bundle_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"csr_regs_io_clint_access_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"csr_regs_io_clint_access_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"csr_regs_io_clint_access_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"csr_regs_io_clint_access_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"csr_regs_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"csr_regs_io_instruction_retired",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"csr_regs_io_branch_misprediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"csr_regs_io_hazard_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"csr_regs_io_memory_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"csr_regs_io_control_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"csr_regs_io_btb_miss_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"csr_regs_io_branch_resolved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"csr_regs_io_btb_predicted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"btb_wrong_direction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"btb_non_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"btb_actually_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"btb_wrong_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"btb_correct_prediction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"btb_mispredict_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"btb_correction_addr_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+320,0,"btb_mispredict_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"btb_correction_addr_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"btb_mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+322,0,"id_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+253,0,"id_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"id_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+324,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"rd_is_link",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"rs1_is_link",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"is_return",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"ras_wrong_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"ras_correct_predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"is_indirect_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"ibtb_wrong_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"ibtb_correct_predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"id_reg1_data_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"ibtb_rs1_hash_b0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+335,0,"ibtb_rs1_hash_b1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+336,0,"ibtb_rs1_hash_b2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+337,0,"ibtb_rs1_hash_b3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+338,0,"prediction_correct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"need_if_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"store_completed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"control_flush_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clint", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"io_instruction_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"io_instruction_address_if",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"io_jump_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"io_jump_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"io_id_interrupt_handler_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"io_id_interrupt_assert",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"io_csr_bundle_mstatus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"io_csr_bundle_mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"io_csr_bundle_mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_csr_bundle_mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"io_csr_bundle_mie",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_csr_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"io_csr_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"io_csr_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"io_csr_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"interrupt_enable_global",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+342,0,"interrupt_enable_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"interrupt_enable_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+344,0,"instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"mstatus_disable_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"mstatus_recover_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+855,0,"interrupt_source_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csr_regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"io_reg_read_address_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+272,0,"io_reg_write_enable_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"io_reg_write_address_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+280,0,"io_reg_write_data_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"io_debug_reg_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+261,0,"io_id_reg_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"io_debug_reg_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_clint_access_bundle_mstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"io_clint_access_bundle_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"io_clint_access_bundle_mcause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"io_clint_access_bundle_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"io_clint_access_bundle_mie",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_clint_access_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"io_clint_access_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"io_clint_access_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+244,0,"io_clint_access_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+307,0,"io_instruction_retired",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"io_branch_misprediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"io_hazard_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_memory_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"io_control_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"io_btb_miss_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"io_branch_resolved",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"io_btb_predicted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+348,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+349,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+350,0,"mscratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+351,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"mcountinhibit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+354,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+356,0,"minstret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+358,0,"mhpmcounter3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+360,0,"mhpmcounter4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+362,0,"mhpmcounter5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+364,0,"mhpmcounter6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+366,0,"mhpmcounter7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+368,0,"mhpmcounter8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+370,0,"mhpmcounter9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+372,0,"mcycle_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"minstret_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"mhpmcounter3_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"mhpmcounter4_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"mhpmcounter5_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"mhpmcounter6_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"mhpmcounter7_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"mhpmcounter8_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"mhpmcounter9_shadow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+381,0,"reading_cycle_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"reading_instret_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"reading_hpm3_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"reading_hpm4_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"reading_hpm5_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"reading_hpm6_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"reading_hpm7_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"reading_hpm8_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"reading_hpm9_low",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"inhibit_cy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"inhibit_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"inhibit_hpm3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"inhibit_hpm4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+394,0,"inhibit_hpm5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"inhibit_hpm6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"inhibit_hpm7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+397,0,"inhibit_hpm8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+398,0,"inhibit_hpm9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+192,0,"io_jump_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"io_jump_instruction_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"io_rs1_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"io_rs2_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+196,0,"io_memory_read_enable_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"io_rd_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+198,0,"io_memory_read_enable_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"io_rd_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+200,0,"io_memory_write_enable_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"io_regs_write_source_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"io_regs_write_source_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"io_regs_write_source_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+204,0,"io_rd_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+205,0,"io_if_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"io_id_flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"io_pc_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"io_if_stall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"io_branch_hazard",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"io_jal_jalr_hazard",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+399,0,"ex_hazard_for_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"store_load_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"jal_jalr_hazard_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"jal_jalr_hazard_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"jal_jalr_hazard_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"is_load_use_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"is_jal_jalr_hazard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+262,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"io_reg1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"io_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"io_aluop1_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"io_aluop2_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"io_forward_from_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"io_forward_from_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"io_reg1_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"io_reg2_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+278,0,"io_mem_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"io_mem_reg2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"io_csr_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"alu_io_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+407,0,"alu_io_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"alu_io_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"alu_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"alu_ctrl_io_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+282,0,"alu_ctrl_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+410,0,"alu_ctrl_io_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+406,0,"alu_ctrl_io_alu_funct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+411,0,"uimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+412,0,"reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+406,0,"io_func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+407,0,"io_op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"io_op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+409,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+282,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+410,0,"io_funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+406,0,"io_alu_funct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ex2mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"io_regs_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+281,0,"io_regs_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+279,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+196,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+283,0,"io_output_regs_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"io_output_regs_write_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+284,0,"io_output_regs_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_output_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"io_output_funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_output_reg2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"io_output_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"io_output_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"io_output_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_output_csr_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"regs_write_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"regs_write_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"regs_write_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"regs_write_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"regs_write_source_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_source_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_source_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"regs_write_source_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"regs_write_source_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"regs_write_source_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+831,0,"regs_write_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"regs_write_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"regs_write_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"regs_write_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+831,0,"instruction_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"instruction_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"instruction_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"instruction_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"instruction_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"instruction_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"funct3_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"funct3_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"funct3_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"funct3_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"funct3_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+831,0,"reg2_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reg2_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"reg2_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"reg2_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"reg2_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"reg2_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"alu_result_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"alu_result_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"alu_result_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"alu_result_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"alu_result_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"alu_result_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"memory_read_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"memory_read_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"memory_read_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"memory_read_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"memory_read_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"memory_read_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"memory_write_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"memory_write_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"memory_write_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"memory_write_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"memory_write_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"memory_write_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"csr_read_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"csr_read_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"csr_read_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"csr_read_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"csr_read_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"csr_read_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr_read_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("funct3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+282,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+263,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory_read_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("memory_write_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg2_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_source", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("forwarding", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+194,0,"io_rs1_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"io_rs2_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+264,0,"io_rs1_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"io_rs2_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"io_rd_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+283,0,"io_reg_write_enable_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"io_rd_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+210,0,"io_reg_write_enable_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+242,0,"io_reg1_forward_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"io_reg2_forward_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+276,0,"io_reg1_forward_ex",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+277,0,"io_reg2_forward_ex",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+234,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"io_reg1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"io_forward_from_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"io_forward_from_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"io_reg1_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+243,0,"io_reg2_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+244,0,"io_interrupt_assert",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"io_interrupt_handler_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+208,0,"io_branch_hazard",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"io_ex_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"io_ex_aluop1_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"io_ex_aluop2_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"io_ex_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"io_ex_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"io_ex_reg_write_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+252,0,"io_ex_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"io_ex_reg_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+254,0,"io_ex_csr_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+255,0,"io_ex_csr_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"io_ctrl_jump_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"io_clint_jump_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+256,0,"io_clint_jump_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+192,0,"io_if_jump_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"io_if_jump_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+414,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+253,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+415,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+416,0,"csr_uses_uimm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+417,0,"uses_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+418,0,"uses_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"reg1_data_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"reg2_data_forwarded",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+422,0,"reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+423,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+424,0,"jalr_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("id2ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+252,0,"io_regs_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"io_regs_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+251,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+259,0,"io_reg1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"io_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"io_aluop1_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"io_aluop2_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"io_csr_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"io_csr_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+249,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"io_output_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"io_output_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"io_output_regs_reg1_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"io_output_regs_reg2_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+266,0,"io_output_regs_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"io_output_regs_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+201,0,"io_output_regs_write_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"io_output_reg1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"io_output_reg2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"io_output_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+270,0,"io_output_aluop1_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"io_output_aluop2_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"io_output_csr_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"io_output_csr_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+196,0,"io_output_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"io_output_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"io_output_csr_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"instruction_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"instruction_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"instruction_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"instruction_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"instruction_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"instruction_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"instruction_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"instruction_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"instruction_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"instruction_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"instruction_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"instruction_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"regs_reg1_read_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_reg1_read_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_reg1_read_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"regs_reg1_read_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"regs_reg1_read_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+264,0,"regs_reg1_read_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+831,0,"regs_reg2_read_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_reg2_read_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_reg2_read_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"regs_reg2_read_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"regs_reg2_read_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"regs_reg2_read_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+831,0,"regs_write_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"regs_write_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"regs_write_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"regs_write_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"regs_write_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"regs_write_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"regs_write_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"regs_write_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+831,0,"regs_write_source_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_source_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_source_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"regs_write_source_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"regs_write_source_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"regs_write_source_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+831,0,"reg1_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reg1_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"reg1_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"reg1_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"reg1_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"reg1_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"reg2_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reg2_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"reg2_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"reg2_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"reg2_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"reg2_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"immediate_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"immediate_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"immediate_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"immediate_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"immediate_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"immediate_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"aluop1_source_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"aluop1_source_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"aluop1_source_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"aluop1_source_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"aluop1_source_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"aluop1_source_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"aluop2_source_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"aluop2_source_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"aluop2_source_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"aluop2_source_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"aluop2_source_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"aluop2_source_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"csr_write_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"csr_write_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"csr_write_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"csr_write_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"csr_write_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"csr_write_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"csr_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"csr_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"csr_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"csr_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"csr_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+273,0,"csr_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+831,0,"memory_read_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"memory_read_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"memory_read_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"memory_read_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"memory_read_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"memory_read_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"memory_write_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"memory_write_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"memory_write_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"memory_write_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"memory_write_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"memory_write_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"csr_read_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"csr_read_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"csr_read_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"csr_read_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"csr_read_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"csr_read_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("aluop1_source", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("aluop2_source", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+271,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csr_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+273,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+273,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr_read_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr_write_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("immediate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory_read_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("memory_write_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("reg1_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg2_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_reg1_read_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+264,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+264,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_reg2_read_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+265,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_source", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+201,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("if2id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"io_btb_predicted_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"io_btb_predicted_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+225,0,"io_ras_predicted_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"io_ras_predicted_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"io_ibtb_predicted_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"io_ibtb_predicted_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"io_output_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"io_output_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,0,"io_output_btb_predicted_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"io_output_btb_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"io_output_ras_predicted_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"io_output_ras_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+239,0,"io_output_ibtb_predicted_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"io_output_ibtb_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"instruction_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"instruction_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"instruction_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"instruction_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"instruction_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"instruction_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"instruction_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"instruction_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"instruction_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"instruction_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"instruction_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"instruction_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"interrupt_flag_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"interrupt_flag_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"interrupt_flag_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"interrupt_flag_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"interrupt_flag_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"interrupt_flag_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"btb_predicted_taken_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"btb_predicted_taken_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"btb_predicted_taken_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"btb_predicted_taken_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"btb_predicted_taken_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"btb_predicted_taken_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"btb_predicted_target_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"btb_predicted_target_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"btb_predicted_target_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"btb_predicted_target_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"btb_predicted_target_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"btb_predicted_target_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"ras_predicted_valid_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ras_predicted_valid_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"ras_predicted_valid_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"ras_predicted_valid_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"ras_predicted_valid_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"ras_predicted_valid_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"ras_predicted_target_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ras_predicted_target_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"ras_predicted_target_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"ras_predicted_target_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"ras_predicted_target_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"ras_predicted_target_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"ibtb_predicted_valid_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ibtb_predicted_valid_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"ibtb_predicted_valid_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"ibtb_predicted_valid_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"ibtb_predicted_valid_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"ibtb_predicted_valid_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"ibtb_predicted_target_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ibtb_predicted_target_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"ibtb_predicted_target_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"ibtb_predicted_target_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"ibtb_predicted_target_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"ibtb_predicted_target_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("btb_predicted_taken", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("btb_predicted_target", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ibtb_predicted_target", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ibtb_predicted_valid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("instruction", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("interrupt_flag", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ras_predicted_target", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ras_predicted_valid", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("inst_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"io_stall_flag_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"io_jump_flag_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"io_jump_address_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_rom_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"io_btb_mispredict",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"io_btb_correction_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"io_btb_correct_prediction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"io_id_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"io_btb_predicted_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+221,0,"io_btb_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"io_btb_update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"io_btb_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"io_btb_update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"io_btb_update_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"io_ras_predicted_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"io_ras_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+227,0,"io_ras_push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"io_ras_push_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"io_ibtb_predicted_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"io_ibtb_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+231,0,"io_ibtb_update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"io_ibtb_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"io_ibtb_update_rs1_hash",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"io_ibtb_update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"btb_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"btb_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"btb_io_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"btb_io_predicted_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"btb_io_predicted_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"btb_io_update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"btb_io_update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"btb_io_update_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"btb_io_update_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"ras_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ras_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"ras_io_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"ras_io_push_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+426,0,"ras_io_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"ras_io_predicted_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+427,0,"ras_io_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"ibtb_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"ibtb_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"ibtb_io_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"ibtb_io_predicted_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+428,0,"ibtb_io_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"ibtb_io_update_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"ibtb_io_update_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"ibtb_io_update_rs1_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"ibtb_io_update_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+430,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+431,0,"jalr_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+432,0,"jalr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+433,0,"is_ra_or_t0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+434,0,"is_return",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"speculative_ras_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"is_indirect_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"ibtb_prediction_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+436,0,"pending_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"pending_jump_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+438,0,"prev_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+439,0,"prev_jump_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+440,0,"take_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+441,0,"take_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+442,0,"take_btb_correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"default_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("btb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"io_predicted_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"io_predicted_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"io_update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"io_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"io_update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+224,0,"io_update_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+446,0,"valid_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+447,0,"valid_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"valid_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"valid_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+450,0,"valid_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"valid_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+452,0,"valid_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"valid_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+454,0,"valid_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"valid_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"valid_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+457,0,"valid_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+458,0,"valid_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+459,0,"valid_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+460,0,"valid_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+461,0,"valid_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+462,0,"valid_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+463,0,"valid_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+464,0,"valid_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"valid_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"valid_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+467,0,"valid_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+468,0,"valid_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"valid_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+470,0,"valid_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+471,0,"valid_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+472,0,"valid_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+473,0,"valid_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+474,0,"valid_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+475,0,"valid_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+476,0,"tags_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+477,0,"tags_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+478,0,"tags_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+479,0,"tags_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+480,0,"tags_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+481,0,"tags_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+482,0,"tags_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+483,0,"tags_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+484,0,"tags_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+485,0,"tags_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+486,0,"tags_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+487,0,"tags_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+488,0,"tags_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+489,0,"tags_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+490,0,"tags_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+491,0,"tags_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+492,0,"tags_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+493,0,"tags_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+494,0,"tags_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+495,0,"tags_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+496,0,"tags_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+497,0,"tags_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+498,0,"tags_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+499,0,"tags_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+500,0,"tags_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+501,0,"tags_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+502,0,"tags_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+503,0,"tags_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+504,0,"tags_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+505,0,"tags_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+506,0,"tags_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+507,0,"tags_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+508,0,"targets_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"targets_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"targets_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"targets_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"targets_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"targets_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"targets_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"targets_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"targets_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"targets_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"targets_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"targets_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"targets_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"targets_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"targets_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"targets_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"targets_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"targets_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"targets_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"targets_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+528,0,"targets_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"targets_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"targets_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"targets_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+532,0,"targets_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+533,0,"targets_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+534,0,"targets_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"targets_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+536,0,"targets_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"targets_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"targets_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"targets_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"counters_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+541,0,"counters_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+542,0,"counters_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+543,0,"counters_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+544,0,"counters_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+545,0,"counters_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+546,0,"counters_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+547,0,"counters_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+548,0,"counters_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+549,0,"counters_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+550,0,"counters_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+551,0,"counters_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+552,0,"counters_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+553,0,"counters_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+554,0,"counters_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+555,0,"counters_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+556,0,"counters_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+557,0,"counters_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+558,0,"counters_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+559,0,"counters_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+560,0,"counters_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+561,0,"counters_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+562,0,"counters_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+563,0,"counters_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+564,0,"counters_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+565,0,"counters_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+566,0,"counters_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+567,0,"counters_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+568,0,"counters_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+569,0,"counters_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+570,0,"counters_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+571,0,"counters_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+572,0,"pred_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+573,0,"pred_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+574,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"predict_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+575,0,"upd_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+576,0,"upd_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+577,0,"entry_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ibtb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"io_predicted_target",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+428,0,"io_hit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"io_update_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"io_update_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"io_update_rs1_hash",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"io_update_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+578,0,"valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"valid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"valid_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+581,0,"valid_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"valid_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+583,0,"valid_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"valid_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"valid_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+586,0,"pc_tags_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+587,0,"pc_tags_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+588,0,"pc_tags_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+589,0,"pc_tags_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+590,0,"pc_tags_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+591,0,"pc_tags_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+592,0,"pc_tags_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+593,0,"pc_tags_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+594,0,"rs1_hashs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+595,0,"rs1_hashs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+596,0,"rs1_hashs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+597,0,"rs1_hashs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+598,0,"rs1_hashs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+599,0,"rs1_hashs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+600,0,"rs1_hashs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+601,0,"rs1_hashs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+602,0,"targets_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"targets_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"targets_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+605,0,"targets_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+606,0,"targets_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"targets_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"targets_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"targets_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"ages_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+611,0,"ages_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+612,0,"ages_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+613,0,"ages_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+614,0,"ages_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+615,0,"ages_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+616,0,"ages_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+617,0,"ages_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+618,0,"pred_pc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+619,0,"pc_hit_vec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"pc_hit_vec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"pc_hit_vec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"pc_hit_vec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"pc_hit_vec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"pc_hit_vec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"pc_hit_vec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"pc_hit_vec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"hit_any",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+627,0,"hit_ages_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+628,0,"hit_ages_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+629,0,"hit_ages_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+630,0,"hit_ages_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+631,0,"hit_ages_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+632,0,"hit_ages_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+633,0,"hit_ages_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+634,0,"hit_ages_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+635,0,"min_age",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+636,0,"mru_vec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"mru_vec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"mru_vec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"mru_vec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"mru_vec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"mru_vec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+642,0,"mru_vec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"mru_vec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"hit_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+645,0,"upd_pc_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+646,0,"existing_vec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+647,0,"existing_vec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"existing_vec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"existing_vec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"existing_vec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+651,0,"existing_vec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"existing_vec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"existing_vec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"existing_any",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"existing_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+656,0,"invalid_vec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+657,0,"invalid_vec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"invalid_vec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"invalid_vec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+660,0,"invalid_vec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"invalid_vec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+662,0,"invalid_vec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+663,0,"invalid_vec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+664,0,"invalid_any",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+665,0,"invalid_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+666,0,"oldest_age",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+667,0,"oldest_vec_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+668,0,"oldest_vec_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+669,0,"oldest_vec_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+670,0,"oldest_vec_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"oldest_vec_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"oldest_vec_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"oldest_vec_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"oldest_vec_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"oldest_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+676,0,"target_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("ras", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"io_push",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+228,0,"io_push_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+426,0,"io_pop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"io_predicted_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+427,0,"io_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+677,0,"stack_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+678,0,"stack_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+679,0,"stack_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"stack_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"sp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+682,0,"tos_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"io_regs_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+283,0,"io_regs_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_wb_memory_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"io_forward_to_ex",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,0,"io_ctrl_stall_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"io_wb_regs_write_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+292,0,"io_wb_regs_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+293,0,"io_wb_regs_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"io_bus_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"io_bus_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"io_bus_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+168,0,"io_bus_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"io_bus_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"io_bus_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"io_bus_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"io_bus_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"io_bus_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"io_bus_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"io_bus_write_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"io_bus_request",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"io_bus_granted",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+683,0,"mem_address_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+684,0,"mem_access_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+685,0,"latched_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+686,0,"latched_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+687,0,"latched_regs_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+688,0,"latched_regs_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+689,0,"processed_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+690,0,"in_active_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"forward_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem2wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+293,0,"io_regs_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+294,0,"io_regs_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"io_memory_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_output_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_output_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"io_output_regs_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"io_output_regs_write_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+297,0,"io_output_regs_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_output_memory_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_output_csr_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"alu_result_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"alu_result_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"alu_result_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"alu_result_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"alu_result_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"alu_result_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"memory_read_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"memory_read_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"memory_read_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"memory_read_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"memory_read_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"memory_read_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"regs_write_enable_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_enable_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_enable_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"regs_write_enable_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"regs_write_enable_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"regs_write_enable_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"regs_write_source_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_source_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_source_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"regs_write_source_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"regs_write_source_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"regs_write_source_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+831,0,"regs_write_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"regs_write_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"regs_write_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"regs_write_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"regs_write_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+204,0,"regs_write_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+831,0,"instruction_address_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"instruction_address_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"instruction_address_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"instruction_address_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"instruction_address_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"instruction_address_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"csr_read_data_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"csr_read_data_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"csr_read_data_io_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"csr_read_data_io_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"csr_read_data_io_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"csr_read_data_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_result", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+841,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("csr_read_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+285,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory_read_data", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_address", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+292,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+204,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+204,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_enable", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("regs_write_source", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"io_stall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"io_flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+291,0,"io_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"reg_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"io_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"io_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+211,0,"io_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"io_read_address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"io_read_address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+212,0,"io_read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"io_read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+835,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"registers_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+692,0,"registers_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"registers_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+694,0,"registers_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+695,0,"registers_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"registers_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"registers_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+698,0,"registers_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"registers_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+700,0,"registers_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"registers_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+702,0,"registers_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+703,0,"registers_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+704,0,"registers_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"registers_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"registers_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"registers_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+708,0,"registers_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"registers_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,0,"registers_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"registers_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"registers_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"registers_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"registers_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,0,"registers_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"registers_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"registers_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"registers_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,0,"registers_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"registers_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"registers_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+295,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_memory_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+299,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"io_regs_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dummy", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"read_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"write_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"write_data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dummy_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"read_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"write_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"write_data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dummy_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"read_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+724,0,"write_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"write_data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dummy_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"read_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+725,0,"write_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"write_data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dummy_vga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"read_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+726,0,"write_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"write_data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("instruction_rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"io_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 26; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+857,0,"mem_io_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+727,0,"mem_io_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"mem_io_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"wordAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+858,0,"initvar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("machine_timer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+847,0,"io_mtip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+848,0,"io_debug_mtime",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+850,0,"io_debug_mtimecmp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+831,0,"slave_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"slave_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"slave_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"slave_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"slave_io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"slave_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"slave_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"slave_io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"slave_io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"slave_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"slave_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"slave_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"slave_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"slave_io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"slave_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"slave_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"slave_io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"slave_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+730,0,"slave_io_bundle_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+731,0,"slave_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+857,0,"slave_io_bundle_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"slave_io_bundle_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+733,0,"slave_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+734,0,"slave_io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"slave_io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"slave_io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"slave_io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+738,0,"mtime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+740,0,"mtimecmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+742,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"io_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+730,0,"io_bundle_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+731,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+857,0,"io_bundle_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"io_bundle_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+733,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+734,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+743,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+729,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+730,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+732,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+733,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+734,0,"write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+735,0,"write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+736,0,"write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"io_bundle_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"io_bundle_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+744,0,"mem_0_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"mem_0_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+746,0,"mem_0_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+747,0,"mem_0_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_0_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+749,0,"mem_0_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+750,0,"mem_0_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mem_0_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+752,0,"mem_0_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+753,0,"mem_0_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"mem_0_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+30,0,"mem_0_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_0_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+744,0,"mem_0_io_bundle_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"mem_0_io_bundle_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+747,0,"mem_0_io_debug_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_0_io_debug_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+750,0,"mem_0_io_instruction_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mem_0_io_instruction_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+755,0,"mem_1_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+756,0,"mem_1_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+757,0,"mem_1_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+758,0,"mem_1_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_1_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+759,0,"mem_1_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+760,0,"mem_1_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"mem_1_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+762,0,"mem_1_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+763,0,"mem_1_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"mem_1_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+31,0,"mem_1_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_1_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"mem_1_io_bundle_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+756,0,"mem_1_io_bundle_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+758,0,"mem_1_io_debug_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_1_io_debug_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+760,0,"mem_1_io_instruction_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"mem_1_io_instruction_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+764,0,"mem_2_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"mem_2_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+766,0,"mem_2_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+767,0,"mem_2_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_2_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+768,0,"mem_2_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+769,0,"mem_2_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mem_2_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+770,0,"mem_2_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+771,0,"mem_2_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"mem_2_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+32,0,"mem_2_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_2_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"mem_2_io_bundle_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+765,0,"mem_2_io_bundle_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+767,0,"mem_2_io_debug_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_2_io_debug_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+769,0,"mem_2_io_instruction_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mem_2_io_instruction_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+772,0,"mem_3_io_bundle_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+773,0,"mem_3_io_bundle_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+774,0,"mem_3_io_bundle_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+775,0,"mem_3_io_debug_read_data_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_3_io_debug_read_data_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+776,0,"mem_3_io_debug_read_data_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+777,0,"mem_3_io_instruction_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mem_3_io_instruction_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+778,0,"mem_3_io_instruction_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+779,0,"mem_3_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"mem_3_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+33,0,"mem_3_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"mem_3_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+772,0,"mem_3_io_bundle_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+773,0,"mem_3_io_bundle_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+775,0,"mem_3_io_debug_read_data_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+748,0,"mem_3_io_debug_read_data_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+777,0,"mem_3_io_instruction_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"mem_3_io_instruction_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+780,0,"io_bundle_read_data_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+781,0,"io_bundle_read_data_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+782,0,"io_debug_read_data_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+783,0,"io_debug_read_data_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+784,0,"io_instruction_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+785,0,"io_instruction_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+83,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_channels_write_data_channel_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+85,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"io_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"io_bundle_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+144,0,"io_bundle_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"io_bundle_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+142,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+143,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rom_loader", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"io_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"io_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"io_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"io_rom_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"io_rom_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"io_load_finished",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+787,0,"address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("uart", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+852,0,"io_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"io_signal_interrupt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"slave_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"slave_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"slave_io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"slave_io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"slave_io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"slave_io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"slave_io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"slave_io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"slave_io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"slave_io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"slave_io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"slave_io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"slave_io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"slave_io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"slave_io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"slave_io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"slave_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+789,0,"slave_io_bundle_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+790,0,"slave_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+789,0,"slave_io_bundle_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"slave_io_bundle_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"slave_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+831,0,"tx_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"tx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"tx_io_txd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"tx_io_channel_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"tx_io_channel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"tx_io_channel_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+831,0,"rx_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"rx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"rx_io_channel_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"rx_io_channel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"rx_io_channel_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+831,0,"rxFifo_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"rxFifo_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"rxFifo_io_enq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"rxFifo_io_enq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"rxFifo_io_enq_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+799,0,"rxFifo_io_deq_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"rxFifo_io_deq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"rxFifo_io_deq_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+802,0,"rxFifo_io_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+68,0,"interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+788,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+803,0,"addr_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"addr_baud_rate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"addr_interrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"addr_rx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+807,0,"addr_tx_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"io_channel_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"io_channel_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"io_channel_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+798,0,"shiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+808,0,"cntReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+809,0,"bitsReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+797,0,"valReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rxFifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"io_enq_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+797,0,"io_enq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"io_enq_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+799,0,"io_deq_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+800,0,"io_deq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+801,0,"io_deq_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+802,0,"io_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+810+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+857,0,"ram_io_deq_bits_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+814,0,"ram_io_deq_bits_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+801,0,"ram_io_deq_bits_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+798,0,"ram_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+815,0,"ram_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+857,0,"ram_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"ram_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+815,0,"enq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+814,0,"deq_ptr_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+817,0,"maybe_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"ptr_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+819,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+820,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"do_enq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"do_deq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"ptr_diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("slave", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"io_channels_write_address_channel_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"io_channels_write_address_channel_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_channels_write_address_channel_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,0,"io_channels_write_data_channel_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"io_channels_write_data_channel_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_channels_write_data_channel_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"io_channels_write_response_channel_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"io_channels_write_response_channel_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"io_channels_read_address_channel_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"io_channels_read_address_channel_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"io_channels_read_address_channel_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+65,0,"io_channels_read_data_channel_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"io_channels_read_data_channel_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"io_channels_read_data_channel_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"io_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+789,0,"io_bundle_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+790,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+789,0,"io_bundle_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"io_bundle_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+788,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+789,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+57,0,"AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"io_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"io_channel_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"io_channel_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"io_channel_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+831,0,"tx_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"tx_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"tx_io_txd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"tx_io_channel_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"tx_io_channel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+826,0,"tx_io_channel_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+831,0,"buf__clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"buf__reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"buf__io_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"buf__io_in_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"buf__io_in_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+824,0,"buf__io_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"buf__io_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+826,0,"buf__io_out_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("buf_", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+793,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+794,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+795,0,"io_in_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+824,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+826,0,"io_out_bits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+825,0,"stateReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+826,0,"dataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("tx", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+831,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+832,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+852,0,"io_txd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+824,0,"io_channel_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+825,0,"io_channel_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+826,0,"io_channel_bits",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+827,0,"shiftReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+828,0,"cntReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+829,0,"bitsReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+830,0,"shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_init_top(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_init_top\n"); );
    // Body
    VFreeRTOSTestTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VFreeRTOSTestTop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VFreeRTOSTestTop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_register(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VFreeRTOSTestTop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VFreeRTOSTestTop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VFreeRTOSTestTop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VFreeRTOSTestTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_const_0_sub_0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_const_0\n"); );
    // Init
    VFreeRTOSTestTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFreeRTOSTestTop___024root*>(voidSelf);
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFreeRTOSTestTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_const_0_sub_0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+856,(0U));
    bufp->fullBit(oldp+857,(1U));
    bufp->fullIData(oldp+858,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__initvar),32);
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_full_0_sub_0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_full_0\n"); );
    // Init
    VFreeRTOSTestTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFreeRTOSTestTop___024root*>(voidSelf);
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VFreeRTOSTestTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_full_0_sub_0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address),32);
    bufp->fullIData(oldp+28,(vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data),32);
    bufp->fullBit(oldp+29,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0)
                             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1)
                             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2)
                             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3)
                             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
    bufp->fullIData(oldp+34,((((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0] 
                                << 0x18U) | (vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                             [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0] 
                                             << 0x10U)) 
                              | ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                  [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                  << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0]))),32);
    bufp->fullIData(oldp+35,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction),32);
    bufp->fullIData(oldp+36,(((IData)(0x1000U) + (IData)(
                                                         ((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) 
                                                          << 2U)))),32);
    bufp->fullIData(oldp+37,(((0x19U >= (0x1fU & (IData)(
                                                         (0x3fffffffffffffffULL 
                                                          & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))))))
                               ? vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem
                              [(0x1fU & (IData)((0x3fffffffffffffffULL 
                                                 & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))]
                               : 0U)),32);
    bufp->fullIData(oldp+38,(((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)
                               ? ((IData)(0x1000U) 
                                  + (IData)(((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) 
                                             << 2U)))
                               : 0U)),32);
    bufp->fullIData(oldp+39,(((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)
                               ? ((0x19U >= (0x1fU 
                                             & (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))))))
                                   ? vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem
                                  [(0x1fU & (IData)(
                                                    (0x3fffffffffffffffULL 
                                                     & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))]
                                   : 0U) : 0U)),32);
    bufp->fullBit(oldp+40,((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)));
    bufp->fullBit(oldp+41,(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid));
    bufp->fullBit(oldp+42,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_write_address_channel_AWVALID));
    bufp->fullBit(oldp+43,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY));
    bufp->fullIData(oldp+44,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr),32);
    bufp->fullBit(oldp+45,((0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 3U)))));
    bufp->fullBit(oldp+46,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY));
    bufp->fullIData(oldp+47,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data),32);
    bufp->fullCData(oldp+48,(((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3) 
                                << 3U) | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2) 
                                          << 2U)) | 
                              (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1) 
                                << 1U) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0)))),4);
    bufp->fullBit(oldp+49,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
                            & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                               >> 3U))));
    bufp->fullBit(oldp+51,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID));
    bufp->fullBit(oldp+52,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY));
    bufp->fullBit(oldp+53,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__RVALID));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                            & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                               >> 3U))));
    bufp->fullIData(oldp+55,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data),32);
    bufp->fullBit(oldp+56,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_write_address_channel_AWVALID));
    bufp->fullBit(oldp+57,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY));
    bufp->fullCData(oldp+58,((0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr)),8);
    bufp->fullBit(oldp+59,((0x3fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 2U)))));
    bufp->fullBit(oldp+60,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY));
    bufp->fullBit(oldp+61,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
                            & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                               >> 2U))));
    bufp->fullBit(oldp+63,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID));
    bufp->fullBit(oldp+64,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY));
    bufp->fullBit(oldp+65,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                            & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                               >> 2U))));
    bufp->fullIData(oldp+67,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data),32);
    bufp->fullBit(oldp+68,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt));
    bufp->fullBit(oldp+69,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID));
    bufp->fullBit(oldp+70,((1U & ((((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY)) 
                                  | ((0x7fU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending)) 
                                               & (((IData)(1U) 
                                                   << 
                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                    >> 0x1dU)) 
                                                  >> 1U))) 
                                     | ((0x3fU & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                     >> 0x1dU)) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY))) 
                                        | ((0x1fU & 
                                            ((((IData)(1U) 
                                               << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY))) 
                                           | ((0xfU 
                                               & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending)) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                       >> 0x1dU)) 
                                                     >> 4U))) 
                                              | ((7U 
                                                  & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending)) 
                                                     & (((IData)(1U) 
                                                         << 
                                                         (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                          >> 0x1dU)) 
                                                        >> 5U))) 
                                                 | ((3U 
                                                     & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending)) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                             >> 0x1dU)) 
                                                           >> 6U))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending)) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                               >> 0x1dU)) 
                                                             >> 7U)))))))))))));
    bufp->fullBit(oldp+71,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID));
    bufp->fullBit(oldp+72,(((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY)) 
                            | ((0x7fU & ((((IData)(1U) 
                                           << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                               >> 0x1dU)) 
                                          >> 1U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY))) 
                               | ((0x3fU & ((((IData)(1U) 
                                              << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                  >> 0x1dU)) 
                                             >> 2U) 
                                            & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY))) 
                                  | ((0x1fU & ((((IData)(1U) 
                                                 << 
                                                 (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                  >> 0x1dU)) 
                                                >> 3U) 
                                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY))) 
                                     | ((0xfU & ((((IData)(1U) 
                                                   << 
                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                    >> 0x1dU)) 
                                                  >> 4U) 
                                                 & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY))) 
                                        | ((7U & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                     >> 0x1dU)) 
                                                   >> 5U) 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY))) 
                                           | ((3U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                                 >> 6U) 
                                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY))) 
                                              | ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                      >> 0x1dU)) 
                                                    >> 7U)))))))))));
    bufp->fullBit(oldp+73,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_write_response_channel_BVALID));
    bufp->fullBit(oldp+74,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY));
    bufp->fullBit(oldp+75,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID));
    bufp->fullBit(oldp+76,((1U & ((((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY)) 
                                  | ((0x7fU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending)) 
                                               & (((IData)(1U) 
                                                   << 
                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                    >> 0x1dU)) 
                                                  >> 1U))) 
                                     | ((0x3fU & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                     >> 0x1dU)) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY))) 
                                        | ((0x1fU & 
                                            ((((IData)(1U) 
                                               << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY))) 
                                           | ((0xfU 
                                               & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending)) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                       >> 0x1dU)) 
                                                     >> 4U))) 
                                              | ((7U 
                                                  & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending)) 
                                                     & (((IData)(1U) 
                                                         << 
                                                         (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                          >> 0x1dU)) 
                                                        >> 5U))) 
                                                 | ((3U 
                                                     & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending)) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                             >> 0x1dU)) 
                                                           >> 6U))) 
                                                    | (1U 
                                                       & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending)) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                               >> 0x1dU)) 
                                                             >> 7U)))))))))))));
    bufp->fullBit(oldp+77,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID));
    bufp->fullBit(oldp+78,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY));
    bufp->fullIData(oldp+79,((((((((((1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                      ? vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data
                                      : 0U) | ((2U 
                                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                ? 0xdeadbeefU
                                                : 0U)) 
                                   | ((4U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                       ? vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data
                                       : 0U)) | ((8U 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data
                                                  : 0U)) 
                                 | ((0x10U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                     ? 0xdeadbeefU : 0U)) 
                                | ((0x20U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                    ? 0xdeadbeefU : 0U)) 
                               | ((0x40U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                   ? 0xdeadbeefU : 0U)) 
                              | ((0x80U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                  ? 0xdeadbeefU : 0U))),32);
    bufp->fullIData(oldp+80,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in),32);
    bufp->fullBit(oldp+81,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID));
    bufp->fullBit(oldp+82,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                            & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                               >> 0x1dU)))));
    bufp->fullBit(oldp+84,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY));
    bufp->fullBit(oldp+85,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
                            & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel))));
    bufp->fullBit(oldp+87,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID));
    bufp->fullBit(oldp+88,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY));
    bufp->fullBit(oldp+89,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                            & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))));
    bufp->fullIData(oldp+91,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data),32);
    bufp->fullBit(oldp+92,((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 1U)))));
    bufp->fullBit(oldp+93,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending)))));
    bufp->fullBit(oldp+94,((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 1U)))));
    bufp->fullBit(oldp+95,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY));
    bufp->fullBit(oldp+96,(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok));
    bufp->fullBit(oldp+97,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_response_channel_BREADY));
    bufp->fullBit(oldp+98,((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 1U)))));
    bufp->fullBit(oldp+99,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending)))));
    bufp->fullBit(oldp+100,(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                >> 1U))));
    bufp->fullBit(oldp+102,((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 4U)))));
    bufp->fullBit(oldp+103,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending)))));
    bufp->fullBit(oldp+104,((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 4U)))));
    bufp->fullBit(oldp+105,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY));
    bufp->fullBit(oldp+106,(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok));
    bufp->fullBit(oldp+107,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_response_channel_BREADY));
    bufp->fullBit(oldp+108,((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 4U)))));
    bufp->fullBit(oldp+109,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending)))));
    bufp->fullBit(oldp+110,(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                >> 4U))));
    bufp->fullBit(oldp+112,((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+113,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending)))));
    bufp->fullBit(oldp+114,((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+115,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY));
    bufp->fullBit(oldp+116,(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok));
    bufp->fullBit(oldp+117,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_response_channel_BREADY));
    bufp->fullBit(oldp+118,((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+119,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending)))));
    bufp->fullBit(oldp+120,(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                >> 5U))));
    bufp->fullBit(oldp+122,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+123,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending)))));
    bufp->fullBit(oldp+124,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+125,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY));
    bufp->fullBit(oldp+126,(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok));
    bufp->fullBit(oldp+127,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_response_channel_BREADY));
    bufp->fullBit(oldp+128,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+129,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending)))));
    bufp->fullBit(oldp+130,(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                >> 6U))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                             & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                 >> 0x1dU)) 
                                >> 7U))));
    bufp->fullBit(oldp+133,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending)))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                             & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                 >> 0x1dU)) 
                                >> 7U))));
    bufp->fullBit(oldp+135,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY));
    bufp->fullBit(oldp+136,(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok));
    bufp->fullBit(oldp+137,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                             & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                 >> 0x1dU)) 
                                >> 7U))));
    bufp->fullBit(oldp+139,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending)))));
    bufp->fullBit(oldp+140,(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                >> 7U))));
    bufp->fullIData(oldp+142,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr),32);
    bufp->fullBit(oldp+143,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read));
    bufp->fullBit(oldp+144,(vlSelf->FreeRTOSTestTop__DOT__read_pending));
    bufp->fullBit(oldp+145,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write));
    bufp->fullIData(oldp+146,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data),32);
    bufp->fullBit(oldp+147,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0));
    bufp->fullBit(oldp+148,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1));
    bufp->fullBit(oldp+149,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2));
    bufp->fullBit(oldp+150,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3));
    bufp->fullIData(oldp+151,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt),21);
    bufp->fullBit(oldp+152,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)))));
    bufp->fullCData(oldp+153,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                               >> 0x1dU)),3);
    bufp->fullCData(oldp+154,((0xffU & ((IData)(1U) 
                                        << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                            >> 0x1dU)))),8);
    bufp->fullCData(oldp+155,(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel),8);
    bufp->fullCData(oldp+156,(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel),8);
    bufp->fullBit(oldp+157,((1U & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)))));
    bufp->fullBit(oldp+158,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 1U))));
    bufp->fullBit(oldp+159,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 2U))));
    bufp->fullBit(oldp+160,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 3U))));
    bufp->fullBit(oldp+161,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 4U))));
    bufp->fullBit(oldp+162,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 5U))));
    bufp->fullBit(oldp+163,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 6U))));
    bufp->fullBit(oldp+164,((1U & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 7U))));
    bufp->fullIData(oldp+165,((0x1ffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)),32);
    bufp->fullBit(oldp+166,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read));
    bufp->fullIData(oldp+167,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data),32);
    bufp->fullBit(oldp+168,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid));
    bufp->fullBit(oldp+169,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write));
    bufp->fullIData(oldp+170,(((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                ? 0U : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                         ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_)
                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_36)
                                                   : 0U))))),32);
    bufp->fullBit(oldp+171,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                             & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                      & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                          ? (0U == 
                                             (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                          : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                              ? (0U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                              : (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
    bufp->fullBit(oldp+172,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                             & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                      & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                          ? (1U == 
                                             (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                          : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)) 
                                                 | (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)))
                                              : (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
    bufp->fullBit(oldp+173,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                             & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                      & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                          ? (2U == 
                                             (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                          : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                              ? (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                              : (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
    bufp->fullBit(oldp+174,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                             & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                      & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                          ? (3U == 
                                             (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                          : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                              ? ((0U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)) 
                                                 & (1U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)))
                                              : (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
    bufp->fullBit(oldp+175,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid));
    bufp->fullBit(oldp+176,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
    bufp->fullBit(oldp+177,((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))));
    bufp->fullCData(oldp+178,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ 
                               >> 0x1dU)),3);
    bufp->fullIData(oldp+179,((0xfffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)),32);
    bufp->fullBit(oldp+180,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read));
    bufp->fullBit(oldp+181,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write));
    bufp->fullBit(oldp+182,((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))));
    bufp->fullIData(oldp+183,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg),32);
    bufp->fullBit(oldp+184,((((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state)) 
                              & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request)) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read) 
                                | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write)))));
    bufp->fullCData(oldp+185,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state),3);
    bufp->fullBit(oldp+186,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0));
    bufp->fullBit(oldp+187,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1));
    bufp->fullBit(oldp+188,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2));
    bufp->fullBit(oldp+189,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3));
    bufp->fullCData(oldp+190,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1) 
                                << 1U) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0))),2);
    bufp->fullCData(oldp+191,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3) 
                                << 1U) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2))),2);
    bufp->fullBit(oldp+192,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
    bufp->fullBit(oldp+193,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id));
    bufp->fullCData(oldp+194,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in),5);
    bufp->fullCData(oldp+195,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in),5);
    bufp->fullBit(oldp+196,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_));
    bufp->fullCData(oldp+197,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),5);
    bufp->fullBit(oldp+198,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_));
    bufp->fullCData(oldp+199,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),5);
    bufp->fullBit(oldp+200,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_));
    bufp->fullCData(oldp+201,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_),2);
    bufp->fullCData(oldp+202,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_),2);
    bufp->fullCData(oldp+203,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_),2);
    bufp->fullCData(oldp+204,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),5);
    bufp->fullBit(oldp+205,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag))));
    bufp->fullBit(oldp+206,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18) 
                             & ((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
                                  & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
                                 & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___ex_hazard_for_branch_T_4)) 
                                | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard)))));
    bufp->fullBit(oldp+207,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18));
    bufp->fullBit(oldp+208,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    bufp->fullBit(oldp+210,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_));
    bufp->fullIData(oldp+211,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data),32);
    bufp->fullIData(oldp+212,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1),32);
    bufp->fullIData(oldp+213,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2),32);
    bufp->fullBit(oldp+214,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall));
    bufp->fullIData(oldp+215,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target),32);
    bufp->fullBit(oldp+216,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict));
    bufp->fullIData(oldp+217,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___T_2)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending
                                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                                    : ((IData)(4U) 
                                       + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_)))),32);
    bufp->fullBit(oldp+218,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction));
    bufp->fullIData(oldp+219,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction
                                : 0x13U)),32);
    bufp->fullBit(oldp+220,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__predict_taken));
    bufp->fullIData(oldp+221,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc),32);
    bufp->fullBit(oldp+222,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid));
    bufp->fullIData(oldp+223,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_),32);
    bufp->fullBit(oldp+224,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken));
    bufp->fullBit(oldp+225,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in));
    bufp->fullIData(oldp+226,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr),32);
    bufp->fullBit(oldp+227,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push));
    bufp->fullIData(oldp+228,(((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_)),32);
    bufp->fullBit(oldp+229,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_prediction_hit));
    bufp->fullIData(oldp+230,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target),32);
    bufp->fullBit(oldp+231,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid));
    bufp->fullCData(oldp+232,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash),8);
    bufp->fullBit(oldp+233,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush));
    bufp->fullIData(oldp+234,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_),32);
    bufp->fullBit(oldp+235,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_));
    bufp->fullIData(oldp+236,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_),32);
    bufp->fullBit(oldp+237,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_));
    bufp->fullIData(oldp+238,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_),32);
    bufp->fullBit(oldp+239,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_));
    bufp->fullIData(oldp+240,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_),32);
    bufp->fullIData(oldp+241,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem),32);
    bufp->fullCData(oldp+242,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward),2);
    bufp->fullCData(oldp+243,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward),2);
    bufp->fullBit(oldp+244,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert));
    bufp->fullIData(oldp+245,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                                    : ((0x30200073U 
                                        == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                                        : 0U)))),32);
    bufp->fullIData(oldp+246,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in),32);
    bufp->fullBit(oldp+247,(((0x17U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                             | ((0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))))));
    bufp->fullBit(oldp+248,((0x33U != (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    bufp->fullBit(oldp+249,((3U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    bufp->fullBit(oldp+250,((0x23U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    bufp->fullCData(oldp+251,(((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                ? 3U : ((0x6fU == (0x7fU 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                         ? 3U : ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                                  ? 2U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                                   ? 1U
                                                   : 0U))))),2);
    bufp->fullBit(oldp+252,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4) 
                              | ((0x17U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                 | ((0x37U == (0x7fU 
                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))))) 
                             | ((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                | (0x73U == (0x7fU 
                                             & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))))));
    bufp->fullCData(oldp+253,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 7U))),5);
    bufp->fullSData(oldp+254,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+255,(((0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                             & ((((1U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU))) 
                                  | ((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU))) 
                                     | (2U == (7U & 
                                               (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU))))) 
                                 | ((6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0xcU))) 
                                    | (3U == (7U & 
                                              (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU))))) 
                                | (7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU)))))));
    bufp->fullIData(oldp+256,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_9),32);
    bufp->fullBit(oldp+257,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall));
    bufp->fullBit(oldp+258,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush));
    bufp->fullIData(oldp+259,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in),32);
    bufp->fullIData(oldp+260,(((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                                    : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2))),32);
    bufp->fullIData(oldp+261,(((0xb89U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
                                : ((0xb09U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U))
                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                                    : ((0xb88U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0x14U))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow
                                        : ((0xb08U 
                                            == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0x14U))
                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)
                                            : ((0xb87U 
                                                == 
                                                (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0x14U))
                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow
                                                : (
                                                   (0xb07U 
                                                    == 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0x14U))
                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)
                                                    : 
                                                   ((0xb86U 
                                                     == 
                                                     (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow
                                                     : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___io_id_reg_read_data_T_45)))))))),32);
    bufp->fullIData(oldp+262,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_),32);
    bufp->fullIData(oldp+263,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_),32);
    bufp->fullCData(oldp+264,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_),5);
    bufp->fullCData(oldp+265,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_),5);
    bufp->fullBit(oldp+266,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_));
    bufp->fullIData(oldp+267,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_),32);
    bufp->fullIData(oldp+268,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_),32);
    bufp->fullIData(oldp+269,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_),32);
    bufp->fullBit(oldp+270,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_));
    bufp->fullBit(oldp+271,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_));
    bufp->fullBit(oldp+272,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_));
    bufp->fullSData(oldp+273,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_),12);
    bufp->fullBit(oldp+274,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_));
    bufp->fullIData(oldp+275,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_),32);
    bufp->fullCData(oldp+276,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward),2);
    bufp->fullCData(oldp+277,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward),2);
    bufp->fullIData(oldp+278,((IData)((0x7fffffffffffffffULL 
                                       & ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                           ? (QData)((IData)(
                                                             (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                              + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                           : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                               ? (QData)((IData)(
                                                                 (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                  - vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                               : ((3U 
                                                   == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6)) 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                   : (QData)((IData)(
                                                                     ((4U 
                                                                       == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                       ? 
                                                                      VL_LTS_III(32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                       : 
                                                                      ((5U 
                                                                        == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                        ? 
                                                                       (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                        ^ vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                        : 
                                                                       ((6U 
                                                                         == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                         ? 
                                                                        (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                         | vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                         : 
                                                                        ((7U 
                                                                          == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                          ? 
                                                                         (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                          & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                          : 
                                                                         ((8U 
                                                                           == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                           ? 
                                                                          (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                                           : 
                                                                          ((9U 
                                                                            == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                            ? 
                                                                           VL_SHIFTRS_III(32,32,5, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6, 
                                                                                (0x1fU 
                                                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                                            : 
                                                                           ((0xaU 
                                                                             == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func)) 
                                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                               < vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))))))))))))))),32);
    bufp->fullIData(oldp+279,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg2_data),32);
    bufp->fullIData(oldp+280,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data),32);
    bufp->fullIData(oldp+281,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),32);
    bufp->fullCData(oldp+282,((7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+283,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_));
    bufp->fullIData(oldp+284,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),32);
    bufp->fullIData(oldp+285,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_),32);
    bufp->fullIData(oldp+286,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_),32);
    bufp->fullIData(oldp+287,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_),32);
    bufp->fullIData(oldp+288,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_),32);
    bufp->fullCData(oldp+289,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_),3);
    bufp->fullIData(oldp+290,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in),32);
    bufp->fullCData(oldp+291,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__forward_regs_write_source),2);
    bufp->fullCData(oldp+292,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address)
                                : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))),5);
    bufp->fullBit(oldp+293,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable)
                              : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_))));
    bufp->fullIData(oldp+294,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address)
                                : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))),32);
    bufp->fullIData(oldp+295,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_),32);
    bufp->fullIData(oldp+296,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_),32);
    bufp->fullIData(oldp+297,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),32);
    bufp->fullIData(oldp+298,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_),32);
    bufp->fullIData(oldp+299,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_),32);
    bufp->fullIData(oldp+300,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus),32);
    bufp->fullIData(oldp+301,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc),32);
    bufp->fullIData(oldp+302,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
                                & (0x342U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)),32);
    bufp->fullIData(oldp+303,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec),32);
    bufp->fullIData(oldp+304,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie),32);
    bufp->fullIData(oldp+305,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt
                                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt
                                    : ((0x30200073U 
                                        == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                        ? (0x80U | 
                                           ((0xffffff00U 
                                             & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                            | ((0x70U 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                               | ((8U 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                                      >> 4U)) 
                                                  | (7U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))))
                                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))),32);
    bufp->fullIData(oldp+306,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address
                                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address
                                    : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc))),32);
    bufp->fullBit(oldp+307,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid) 
                                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))))));
    bufp->fullBit(oldp+308,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0))));
    bufp->fullBit(oldp+309,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18) 
                             & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall))))));
    bufp->fullBit(oldp+310,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall));
    bufp->fullBit(oldp+311,(((((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_)) 
                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken)) 
                              | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))));
    bufp->fullBit(oldp+312,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))));
    bufp->fullBit(oldp+313,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))));
    bufp->fullBit(oldp+314,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T))));
    bufp->fullBit(oldp+315,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch));
    bufp->fullBit(oldp+316,(((~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_) 
                                 | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_))) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_))));
    bufp->fullBit(oldp+317,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target));
    bufp->fullBit(oldp+318,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw));
    bufp->fullIData(oldp+319,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                                : ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_))),32);
    bufp->fullBit(oldp+320,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending));
    bufp->fullIData(oldp+321,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending),32);
    bufp->fullCData(oldp+322,((0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)),7);
    bufp->fullCData(oldp+323,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+324,((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    bufp->fullBit(oldp+325,((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    bufp->fullBit(oldp+326,(((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 7U))) 
                             | (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 7U))))));
    bufp->fullBit(oldp+327,(((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0xfU))) 
                             | (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+328,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return));
    bufp->fullBit(oldp+329,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                             & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ 
                                   != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target)))));
    bufp->fullBit(oldp+330,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_))));
    bufp->fullBit(oldp+331,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr));
    bufp->fullBit(oldp+332,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                             & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ 
                                   != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target)))));
    bufp->fullBit(oldp+333,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_))));
    bufp->fullCData(oldp+334,((0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in)),8);
    bufp->fullCData(oldp+335,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                        >> 8U))),8);
    bufp->fullCData(oldp+336,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+337,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                               >> 0x18U)),8);
    bufp->fullBit(oldp+338,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                             | (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                    == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_)) 
                                | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                      == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_))))));
    bufp->fullBit(oldp+339,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__need_if_flush));
    bufp->fullBit(oldp+340,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))));
    bufp->fullBit(oldp+341,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                   >> 3U))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                   >> 7U))));
    bufp->fullBit(oldp+343,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                   >> 0xbU))));
    bufp->fullIData(oldp+344,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address),32);
    bufp->fullIData(oldp+345,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt),32);
    bufp->fullIData(oldp+346,((0x80U | ((0xffffff00U 
                                         & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                        | ((0x70U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                           | ((8U & 
                                               (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                                >> 4U)) 
                                              | (7U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))))),32);
    bufp->fullIData(oldp+347,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus),32);
    bufp->fullIData(oldp+348,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie),32);
    bufp->fullIData(oldp+349,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec),32);
    bufp->fullIData(oldp+350,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch),32);
    bufp->fullIData(oldp+351,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc),32);
    bufp->fullIData(oldp+352,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause),32);
    bufp->fullIData(oldp+353,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit),32);
    bufp->fullQData(oldp+354,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle),64);
    bufp->fullQData(oldp+356,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret),64);
    bufp->fullQData(oldp+358,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3),64);
    bufp->fullQData(oldp+360,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4),64);
    bufp->fullQData(oldp+362,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5),64);
    bufp->fullQData(oldp+364,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6),64);
    bufp->fullQData(oldp+366,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7),64);
    bufp->fullQData(oldp+368,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8),64);
    bufp->fullQData(oldp+370,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9),64);
    bufp->fullIData(oldp+372,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow),32);
    bufp->fullIData(oldp+373,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow),32);
    bufp->fullIData(oldp+374,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow),32);
    bufp->fullIData(oldp+375,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow),32);
    bufp->fullIData(oldp+376,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow),32);
    bufp->fullIData(oldp+377,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow),32);
    bufp->fullIData(oldp+378,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow),32);
    bufp->fullIData(oldp+379,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow),32);
    bufp->fullIData(oldp+380,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow),32);
    bufp->fullBit(oldp+381,(((0xc00U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                         >> 0x14U)) 
                             | (0xb00U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+382,(((0xc02U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                         >> 0x14U)) 
                             | (0xb02U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+383,((0xb03U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+384,((0xb04U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+385,((0xb05U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+386,((0xb06U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+387,((0xb07U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+388,((0xb08U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+389,((0xb09U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))));
    bufp->fullBit(oldp+390,((1U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit)));
    bufp->fullBit(oldp+391,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 2U))));
    bufp->fullBit(oldp+392,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 3U))));
    bufp->fullBit(oldp+393,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 4U))));
    bufp->fullBit(oldp+394,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 5U))));
    bufp->fullBit(oldp+395,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 6U))));
    bufp->fullBit(oldp+396,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 7U))));
    bufp->fullBit(oldp+397,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 8U))));
    bufp->fullBit(oldp+398,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                   >> 9U))));
    bufp->fullBit(oldp+399,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                              & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___ex_hazard_for_branch_T_4))));
    bufp->fullBit(oldp+400,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_))));
    bufp->fullBit(oldp+401,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__jal_jalr_hazard_ex));
    bufp->fullBit(oldp+402,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__jal_jalr_hazard_mem));
    bufp->fullBit(oldp+403,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__jal_jalr_hazard_wb));
    bufp->fullBit(oldp+404,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
                              & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___ex_hazard_for_branch_T_4))));
    bufp->fullBit(oldp+405,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard));
    bufp->fullCData(oldp+406,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func),4);
    bufp->fullIData(oldp+407,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6),32);
    bufp->fullIData(oldp+408,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7),32);
    bufp->fullCData(oldp+409,((0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)),7);
    bufp->fullCData(oldp+410,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+411,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+412,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data),32);
    bufp->fullIData(oldp+413,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_),32);
    bufp->fullCData(oldp+414,((7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+415,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+416,(((0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                             & (((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU))) 
                                 | (7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0xcU)))) 
                                | (6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU)))))));
    bufp->fullBit(oldp+417,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1));
    bufp->fullBit(oldp+418,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2));
    bufp->fullIData(oldp+419,(((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                                : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                    : ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1
                                        : 0U)))),32);
    bufp->fullIData(oldp+420,(((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                                : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                    : ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2
                                        : 0U)))),32);
    bufp->fullIData(oldp+421,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data),32);
    bufp->fullIData(oldp+422,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data),32);
    bufp->fullBit(oldp+423,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                   & ((7U == (7U & 
                                              (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))
                                       ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                          >= vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                       : ((6U == (7U 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))
                                           ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                              < vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                           : ((5U == 
                                               (7U 
                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))
                                               ? VL_GTES_III(32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                    != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                    : (IData)(
                                                              ((0U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                                  == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)))))))))))));
    bufp->fullIData(oldp+424,((0xfffffffeU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                              + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in))),32);
    bufp->fullIData(oldp+425,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_),32);
    bufp->fullBit(oldp+426,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop));
    bufp->fullBit(oldp+427,((0U < (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))));
    bufp->fullBit(oldp+428,((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___hit_any_T))));
    bufp->fullIData(oldp+429,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
    bufp->fullBit(oldp+430,((0x67U == (0x7fU & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_data)))));
    bufp->fullCData(oldp+431,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+432,((0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__io_instruction_lo) 
                                        >> 7U))),5);
    bufp->fullBit(oldp+433,(((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction 
                                              >> 0xfU))) 
                             | (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction 
                                                >> 0xfU))))));
    bufp->fullBit(oldp+434,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return));
    bufp->fullBit(oldp+435,(((0x67U == (0x7fU & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_data))) 
                             & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0)))));
    bufp->fullBit(oldp+436,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump));
    bufp->fullIData(oldp+437,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr),32);
    bufp->fullBit(oldp+438,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag));
    bufp->fullIData(oldp+439,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr),32);
    bufp->fullBit(oldp+440,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))));
    bufp->fullBit(oldp+441,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
                             & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                                & (~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                                      | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))))));
    bufp->fullBit(oldp+442,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict))));
    bufp->fullIData(oldp+443,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in)
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr
                                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_prediction_hit)
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target
                                    : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__predict_taken)
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc
                                        : ((IData)(4U) 
                                           + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc))))),32);
    bufp->fullBit(oldp+444,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
    bufp->fullBit(oldp+445,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
    bufp->fullBit(oldp+446,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
    bufp->fullBit(oldp+447,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
    bufp->fullBit(oldp+448,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
    bufp->fullBit(oldp+449,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
    bufp->fullBit(oldp+450,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
    bufp->fullBit(oldp+451,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
    bufp->fullBit(oldp+452,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
    bufp->fullBit(oldp+453,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
    bufp->fullBit(oldp+454,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
    bufp->fullBit(oldp+455,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
    bufp->fullBit(oldp+456,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
    bufp->fullBit(oldp+457,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
    bufp->fullBit(oldp+458,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
    bufp->fullBit(oldp+459,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
    bufp->fullBit(oldp+460,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16));
    bufp->fullBit(oldp+461,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17));
    bufp->fullBit(oldp+462,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18));
    bufp->fullBit(oldp+463,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19));
    bufp->fullBit(oldp+464,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20));
    bufp->fullBit(oldp+465,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21));
    bufp->fullBit(oldp+466,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22));
    bufp->fullBit(oldp+467,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23));
    bufp->fullBit(oldp+468,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24));
    bufp->fullBit(oldp+469,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25));
    bufp->fullBit(oldp+470,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26));
    bufp->fullBit(oldp+471,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27));
    bufp->fullBit(oldp+472,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28));
    bufp->fullBit(oldp+473,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29));
    bufp->fullBit(oldp+474,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30));
    bufp->fullBit(oldp+475,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31));
    bufp->fullIData(oldp+476,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0),25);
    bufp->fullIData(oldp+477,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1),25);
    bufp->fullIData(oldp+478,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2),25);
    bufp->fullIData(oldp+479,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3),25);
    bufp->fullIData(oldp+480,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4),25);
    bufp->fullIData(oldp+481,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5),25);
    bufp->fullIData(oldp+482,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6),25);
    bufp->fullIData(oldp+483,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7),25);
    bufp->fullIData(oldp+484,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8),25);
    bufp->fullIData(oldp+485,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9),25);
    bufp->fullIData(oldp+486,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10),25);
    bufp->fullIData(oldp+487,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11),25);
    bufp->fullIData(oldp+488,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12),25);
    bufp->fullIData(oldp+489,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13),25);
    bufp->fullIData(oldp+490,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14),25);
    bufp->fullIData(oldp+491,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15),25);
    bufp->fullIData(oldp+492,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16),25);
    bufp->fullIData(oldp+493,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17),25);
    bufp->fullIData(oldp+494,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18),25);
    bufp->fullIData(oldp+495,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19),25);
    bufp->fullIData(oldp+496,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20),25);
    bufp->fullIData(oldp+497,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21),25);
    bufp->fullIData(oldp+498,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22),25);
    bufp->fullIData(oldp+499,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23),25);
    bufp->fullIData(oldp+500,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24),25);
    bufp->fullIData(oldp+501,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25),25);
    bufp->fullIData(oldp+502,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26),25);
    bufp->fullIData(oldp+503,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27),25);
    bufp->fullIData(oldp+504,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28),25);
    bufp->fullIData(oldp+505,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29),25);
    bufp->fullIData(oldp+506,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30),25);
    bufp->fullIData(oldp+507,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31),25);
    bufp->fullIData(oldp+508,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0),32);
    bufp->fullIData(oldp+509,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1),32);
    bufp->fullIData(oldp+510,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2),32);
    bufp->fullIData(oldp+511,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3),32);
    bufp->fullIData(oldp+512,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4),32);
    bufp->fullIData(oldp+513,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5),32);
    bufp->fullIData(oldp+514,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6),32);
    bufp->fullIData(oldp+515,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7),32);
    bufp->fullIData(oldp+516,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8),32);
    bufp->fullIData(oldp+517,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9),32);
    bufp->fullIData(oldp+518,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10),32);
    bufp->fullIData(oldp+519,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11),32);
    bufp->fullIData(oldp+520,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12),32);
    bufp->fullIData(oldp+521,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13),32);
    bufp->fullIData(oldp+522,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14),32);
    bufp->fullIData(oldp+523,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15),32);
    bufp->fullIData(oldp+524,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_16),32);
    bufp->fullIData(oldp+525,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_17),32);
    bufp->fullIData(oldp+526,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_18),32);
    bufp->fullIData(oldp+527,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_19),32);
    bufp->fullIData(oldp+528,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_20),32);
    bufp->fullIData(oldp+529,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_21),32);
    bufp->fullIData(oldp+530,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_22),32);
    bufp->fullIData(oldp+531,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_23),32);
    bufp->fullIData(oldp+532,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_24),32);
    bufp->fullIData(oldp+533,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_25),32);
    bufp->fullIData(oldp+534,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_26),32);
    bufp->fullIData(oldp+535,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_27),32);
    bufp->fullIData(oldp+536,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_28),32);
    bufp->fullIData(oldp+537,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_29),32);
    bufp->fullIData(oldp+538,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_30),32);
    bufp->fullIData(oldp+539,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_31),32);
    bufp->fullCData(oldp+540,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0),2);
    bufp->fullCData(oldp+541,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1),2);
    bufp->fullCData(oldp+542,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2),2);
    bufp->fullCData(oldp+543,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3),2);
    bufp->fullCData(oldp+544,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4),2);
    bufp->fullCData(oldp+545,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5),2);
    bufp->fullCData(oldp+546,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6),2);
    bufp->fullCData(oldp+547,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7),2);
    bufp->fullCData(oldp+548,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8),2);
    bufp->fullCData(oldp+549,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9),2);
    bufp->fullCData(oldp+550,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10),2);
    bufp->fullCData(oldp+551,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11),2);
    bufp->fullCData(oldp+552,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12),2);
    bufp->fullCData(oldp+553,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13),2);
    bufp->fullCData(oldp+554,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14),2);
    bufp->fullCData(oldp+555,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15),2);
    bufp->fullCData(oldp+556,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16),2);
    bufp->fullCData(oldp+557,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17),2);
    bufp->fullCData(oldp+558,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18),2);
    bufp->fullCData(oldp+559,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19),2);
    bufp->fullCData(oldp+560,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20),2);
    bufp->fullCData(oldp+561,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21),2);
    bufp->fullCData(oldp+562,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22),2);
    bufp->fullCData(oldp+563,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23),2);
    bufp->fullCData(oldp+564,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24),2);
    bufp->fullCData(oldp+565,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25),2);
    bufp->fullCData(oldp+566,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26),2);
    bufp->fullCData(oldp+567,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27),2);
    bufp->fullCData(oldp+568,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28),2);
    bufp->fullCData(oldp+569,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29),2);
    bufp->fullCData(oldp+570,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30),2);
    bufp->fullCData(oldp+571,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31),2);
    bufp->fullCData(oldp+572,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                        >> 2U))),5);
    bufp->fullIData(oldp+573,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                               >> 7U)),25);
    bufp->fullBit(oldp+574,((((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31)
                               : ((0x1eU == (0x1fU 
                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30)
                                   : ((0x1dU == (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29)
                                       : ((0x1cU == 
                                           (0x1fU & 
                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U)))
                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28)
                                           : ((0x1bU 
                                               == (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27)
                                               : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_58)))))) 
                             & (((0x1fU == (0x1fU & 
                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U)))
                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31
                                  : ((0x1eU == (0x1fU 
                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30
                                      : ((0x1dU == 
                                          (0x1fU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29
                                          : ((0x1cU 
                                              == (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28
                                              : ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27
                                                  : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_26))))) 
                                == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                    >> 7U)))));
    bufp->fullCData(oldp+575,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                        >> 2U))),5);
    bufp->fullIData(oldp+576,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 7U)),25);
    bufp->fullBit(oldp+577,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit));
    bufp->fullBit(oldp+578,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0));
    bufp->fullBit(oldp+579,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1));
    bufp->fullBit(oldp+580,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2));
    bufp->fullBit(oldp+581,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3));
    bufp->fullBit(oldp+582,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4));
    bufp->fullBit(oldp+583,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5));
    bufp->fullBit(oldp+584,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6));
    bufp->fullBit(oldp+585,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7));
    bufp->fullIData(oldp+586,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0),30);
    bufp->fullIData(oldp+587,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1),30);
    bufp->fullIData(oldp+588,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2),30);
    bufp->fullIData(oldp+589,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3),30);
    bufp->fullIData(oldp+590,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4),30);
    bufp->fullIData(oldp+591,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5),30);
    bufp->fullIData(oldp+592,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6),30);
    bufp->fullIData(oldp+593,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7),30);
    bufp->fullCData(oldp+594,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_0),8);
    bufp->fullCData(oldp+595,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_1),8);
    bufp->fullCData(oldp+596,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_2),8);
    bufp->fullCData(oldp+597,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_3),8);
    bufp->fullCData(oldp+598,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_4),8);
    bufp->fullCData(oldp+599,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_5),8);
    bufp->fullCData(oldp+600,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_6),8);
    bufp->fullCData(oldp+601,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7),8);
    bufp->fullIData(oldp+602,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_0),32);
    bufp->fullIData(oldp+603,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_1),32);
    bufp->fullIData(oldp+604,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_2),32);
    bufp->fullIData(oldp+605,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_3),32);
    bufp->fullIData(oldp+606,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_4),32);
    bufp->fullIData(oldp+607,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_5),32);
    bufp->fullIData(oldp+608,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_6),32);
    bufp->fullIData(oldp+609,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_7),32);
    bufp->fullCData(oldp+610,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0),3);
    bufp->fullCData(oldp+611,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1),3);
    bufp->fullCData(oldp+612,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2),3);
    bufp->fullCData(oldp+613,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3),3);
    bufp->fullCData(oldp+614,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4),3);
    bufp->fullCData(oldp+615,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5),3);
    bufp->fullCData(oldp+616,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6),3);
    bufp->fullCData(oldp+617,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7),3);
    bufp->fullIData(oldp+618,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                               >> 2U)),30);
    bufp->fullBit(oldp+619,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0));
    bufp->fullBit(oldp+620,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1));
    bufp->fullBit(oldp+621,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2));
    bufp->fullBit(oldp+622,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3));
    bufp->fullBit(oldp+623,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4));
    bufp->fullBit(oldp+624,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5));
    bufp->fullBit(oldp+625,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6));
    bufp->fullBit(oldp+626,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7));
    bufp->fullCData(oldp+627,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0),3);
    bufp->fullCData(oldp+628,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1),3);
    bufp->fullCData(oldp+629,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2),3);
    bufp->fullCData(oldp+630,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3),3);
    bufp->fullCData(oldp+631,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4),3);
    bufp->fullCData(oldp+632,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5),3);
    bufp->fullCData(oldp+633,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6),3);
    bufp->fullCData(oldp+634,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7),3);
    bufp->fullCData(oldp+635,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age),3);
    bufp->fullBit(oldp+636,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0));
    bufp->fullBit(oldp+637,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1));
    bufp->fullBit(oldp+638,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2));
    bufp->fullBit(oldp+639,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3));
    bufp->fullBit(oldp+640,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4));
    bufp->fullBit(oldp+641,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5));
    bufp->fullBit(oldp+642,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6));
    bufp->fullBit(oldp+643,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_7));
    bufp->fullCData(oldp+644,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index),3);
    bufp->fullIData(oldp+645,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U)),30);
    bufp->fullBit(oldp+646,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0));
    bufp->fullBit(oldp+647,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1));
    bufp->fullBit(oldp+648,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2));
    bufp->fullBit(oldp+649,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3));
    bufp->fullBit(oldp+650,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4));
    bufp->fullBit(oldp+651,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5));
    bufp->fullBit(oldp+652,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6));
    bufp->fullBit(oldp+653,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
                             & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                                 == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                     >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                                                == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7))))));
    bufp->fullBit(oldp+654,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
                              & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                                  == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                      >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7)))) 
                             | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6) 
                                | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5) 
                                   | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4) 
                                      | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3) 
                                         | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2) 
                                            | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1) 
                                               | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0))))))))));
    bufp->fullCData(oldp+655,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0)
                                ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1)
                                         ? 1U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6)
                                                      ? 6U
                                                      : 7U)))))))),3);
    bufp->fullBit(oldp+656,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0)))));
    bufp->fullBit(oldp+657,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)))));
    bufp->fullBit(oldp+658,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)))));
    bufp->fullBit(oldp+659,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)))));
    bufp->fullBit(oldp+660,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)))));
    bufp->fullBit(oldp+661,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)))));
    bufp->fullBit(oldp+662,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)))));
    bufp->fullBit(oldp+663,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7)))));
    bufp->fullBit(oldp+664,((1U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7)) 
                                   | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)) 
                                      | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)) 
                                         | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)) 
                                            | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)) 
                                               | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)) 
                                                  | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)) 
                                                     | (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0))))))))))));
    bufp->fullCData(oldp+665,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0)
                                ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)
                                    ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)
                                        ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)
                                            ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)
                                                ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)
                                                    ? 
                                                   ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)
                                                     ? 7U
                                                     : 6U)
                                                    : 5U)
                                                : 4U)
                                            : 3U) : 2U)
                                    : 1U) : 0U)),3);
    bufp->fullCData(oldp+666,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age),3);
    bufp->fullBit(oldp+667,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_0));
    bufp->fullBit(oldp+668,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_1));
    bufp->fullBit(oldp+669,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_2));
    bufp->fullBit(oldp+670,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_3));
    bufp->fullBit(oldp+671,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_4));
    bufp->fullBit(oldp+672,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_5));
    bufp->fullBit(oldp+673,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_6));
    bufp->fullBit(oldp+674,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7) 
                                == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))));
    bufp->fullCData(oldp+675,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_0)
                                ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_1)
                                         ? 1U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_2)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_3)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_4)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_5)
                                                     ? 5U
                                                     : 
                                                    ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_6)
                                                      ? 6U
                                                      : 7U)))))))),3);
    bufp->fullCData(oldp+676,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index),3);
    bufp->fullIData(oldp+677,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0),32);
    bufp->fullIData(oldp+678,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1),32);
    bufp->fullIData(oldp+679,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2),32);
    bufp->fullIData(oldp+680,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3),32);
    bufp->fullCData(oldp+681,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp),3);
    bufp->fullCData(oldp+682,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                                     - (IData)(1U)))),2);
    bufp->fullCData(oldp+683,((3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)),2);
    bufp->fullCData(oldp+684,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state),2);
    bufp->fullIData(oldp+685,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data),32);
    bufp->fullCData(oldp+686,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source),2);
    bufp->fullCData(oldp+687,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address),5);
    bufp->fullBit(oldp+688,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable));
    bufp->fullIData(oldp+689,(((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data
                                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87)),32);
    bufp->fullBit(oldp+690,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read));
    bufp->fullIData(oldp+691,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0),32);
    bufp->fullIData(oldp+692,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1),32);
    bufp->fullIData(oldp+693,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2),32);
    bufp->fullIData(oldp+694,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3),32);
    bufp->fullIData(oldp+695,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4),32);
    bufp->fullIData(oldp+696,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5),32);
    bufp->fullIData(oldp+697,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6),32);
    bufp->fullIData(oldp+698,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7),32);
    bufp->fullIData(oldp+699,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8),32);
    bufp->fullIData(oldp+700,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9),32);
    bufp->fullIData(oldp+701,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10),32);
    bufp->fullIData(oldp+702,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11),32);
    bufp->fullIData(oldp+703,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12),32);
    bufp->fullIData(oldp+704,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13),32);
    bufp->fullIData(oldp+705,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14),32);
    bufp->fullIData(oldp+706,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15),32);
    bufp->fullIData(oldp+707,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16),32);
    bufp->fullIData(oldp+708,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17),32);
    bufp->fullIData(oldp+709,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18),32);
    bufp->fullIData(oldp+710,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19),32);
    bufp->fullIData(oldp+711,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20),32);
    bufp->fullIData(oldp+712,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21),32);
    bufp->fullIData(oldp+713,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22),32);
    bufp->fullIData(oldp+714,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23),32);
    bufp->fullIData(oldp+715,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24),32);
    bufp->fullIData(oldp+716,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25),32);
    bufp->fullIData(oldp+717,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26),32);
    bufp->fullIData(oldp+718,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27),32);
    bufp->fullIData(oldp+719,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28),32);
    bufp->fullIData(oldp+720,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29),32);
    bufp->fullIData(oldp+721,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30),32);
    bufp->fullBit(oldp+722,(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending));
    bufp->fullBit(oldp+723,(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending));
    bufp->fullBit(oldp+724,(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending));
    bufp->fullBit(oldp+725,(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending));
    bufp->fullBit(oldp+726,(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending));
    bufp->fullCData(oldp+727,((0x1fU & (IData)((0x3fffffffffffffffULL 
                                                & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))),5);
    bufp->fullIData(oldp+728,((0x3fffffffU & (IData)(
                                                     (0x3fffffffffffffffULL 
                                                      & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))),30);
    bufp->fullIData(oldp+729,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr),32);
    bufp->fullBit(oldp+730,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read));
    bufp->fullIData(oldp+731,(((0xcU == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                ? (IData)((vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp 
                                           >> 0x20U))
                                : ((8U == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp)
                                    : ((4U == (0xfU 
                                               & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                        ? (IData)((vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime 
                                                   >> 0x20U))
                                        : ((0U == (0xfU 
                                                   & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime)
                                            : 0U))))),32);
    bufp->fullBit(oldp+732,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write));
    bufp->fullIData(oldp+733,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data),32);
    bufp->fullBit(oldp+734,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0));
    bufp->fullBit(oldp+735,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1));
    bufp->fullBit(oldp+736,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2));
    bufp->fullBit(oldp+737,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3));
    bufp->fullQData(oldp+738,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime),64);
    bufp->fullQData(oldp+740,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp),64);
    bufp->fullIData(oldp+742,((0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr)),32);
    bufp->fullCData(oldp+743,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state),3);
    bufp->fullBit(oldp+744,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_en_pipe_0));
    bufp->fullSData(oldp+745,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+746,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+747,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_debug_read_data_MPORT_en_pipe_0));
    bufp->fullSData(oldp+748,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+749,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+750,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_en_pipe_0));
    bufp->fullSData(oldp+751,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+752,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_data),8);
    bufp->fullCData(oldp+753,((0xffU & vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data)),8);
    bufp->fullSData(oldp+754,((0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                                          >> 2U))),15);
    bufp->fullBit(oldp+755,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_en_pipe_0));
    bufp->fullSData(oldp+756,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+757,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+758,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_en_pipe_0));
    bufp->fullCData(oldp+759,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+760,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_instruction_MPORT_en_pipe_0));
    bufp->fullSData(oldp+761,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+762,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
    bufp->fullCData(oldp+763,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                                        >> 8U))),8);
    bufp->fullBit(oldp+764,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_en_pipe_0));
    bufp->fullSData(oldp+765,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+766,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+767,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_debug_read_data_MPORT_en_pipe_0));
    bufp->fullCData(oldp+768,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+769,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_instruction_MPORT_en_pipe_0));
    bufp->fullCData(oldp+770,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0]),8);
    bufp->fullCData(oldp+771,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                                        >> 0x10U))),8);
    bufp->fullBit(oldp+772,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_en_pipe_0));
    bufp->fullSData(oldp+773,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0),15);
    bufp->fullCData(oldp+774,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+775,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_en_pipe_0));
    bufp->fullCData(oldp+776,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
    bufp->fullBit(oldp+777,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_en_pipe_0));
    bufp->fullCData(oldp+778,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0]),8);
    bufp->fullCData(oldp+779,((vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                               >> 0x18U)),8);
    bufp->fullSData(oldp+780,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                               [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0])),16);
    bufp->fullSData(oldp+781,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0] 
                                << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                               [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0])),16);
    bufp->fullSData(oldp+782,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                               [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])),16);
    bufp->fullSData(oldp+783,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                               [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])),16);
    bufp->fullSData(oldp+784,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__io_instruction_lo),16);
    bufp->fullSData(oldp+785,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                               [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0])),16);
    bufp->fullCData(oldp+786,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state),3);
    bufp->fullIData(oldp+787,(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address),32);
    bufp->fullCData(oldp+788,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr),8);
    bufp->fullBit(oldp+789,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read));
    bufp->fullIData(oldp+790,(((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                ? ((2U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                          << 1U)) | 
                                   (1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg))))
                                : ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                    ? 0x1c200U : ((0xcU 
                                                   == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                                   ? 
                                                  vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram
                                                  [vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                                   : 0U)))),32);
    bufp->fullBit(oldp+791,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write));
    bufp->fullIData(oldp+792,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data),32);
    bufp->fullBit(oldp+793,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg)))));
    bufp->fullBit(oldp+794,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_valid));
    bufp->fullCData(oldp+795,(((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write)
                                ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT___T_5)
                                    ? (0xffU & vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data)
                                    : 0U) : 0U)),8);
    bufp->fullBit(oldp+796,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx_io_channel_ready));
    bufp->fullBit(oldp+797,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg));
    bufp->fullCData(oldp+798,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__shiftReg),8);
    bufp->fullBit(oldp+799,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready));
    bufp->fullBit(oldp+800,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__empty)))));
    bufp->fullCData(oldp+801,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram
                              [vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]),8);
    bufp->fullCData(oldp+802,(((((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full) 
                                 & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match))
                                 ? 4U : 0U) | (3U & 
                                               ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value) 
                                                - (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value))))),3);
    bufp->fullBit(oldp+803,((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
    bufp->fullBit(oldp+804,((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
    bufp->fullBit(oldp+805,((8U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
    bufp->fullBit(oldp+806,((0xcU == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
    bufp->fullBit(oldp+807,((0x10U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
    bufp->fullSData(oldp+808,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg),16);
    bufp->fullCData(oldp+809,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg),4);
    bufp->fullCData(oldp+810,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+811,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+812,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+813,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+814,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value),2);
    bufp->fullCData(oldp+815,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value),2);
    bufp->fullBit(oldp+816,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en));
    bufp->fullBit(oldp+817,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full));
    bufp->fullBit(oldp+818,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match));
    bufp->fullBit(oldp+819,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__empty));
    bufp->fullBit(oldp+820,(((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full))));
    bufp->fullBit(oldp+821,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__do_deq));
    bufp->fullCData(oldp+822,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value) 
                                     - (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value)))),2);
    bufp->fullCData(oldp+823,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state),3);
    bufp->fullBit(oldp+824,(((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg)) 
                             & (0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg)))));
    bufp->fullBit(oldp+825,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg));
    bufp->fullCData(oldp+826,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__dataReg),8);
    bufp->fullSData(oldp+827,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg),11);
    bufp->fullSData(oldp+828,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg),16);
    bufp->fullCData(oldp+829,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg),4);
    bufp->fullSData(oldp+830,((0x3ffU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg) 
                                         >> 1U))),10);
    bufp->fullBit(oldp+831,(vlSelf->clock));
    bufp->fullBit(oldp+832,(vlSelf->reset));
    bufp->fullCData(oldp+833,(vlSelf->io_regs_debug_read_address),5);
    bufp->fullIData(oldp+834,(vlSelf->io_mem_debug_read_address),32);
    bufp->fullIData(oldp+835,(vlSelf->io_regs_debug_read_data),32);
    bufp->fullIData(oldp+836,(vlSelf->io_mem_debug_read_data),32);
    bufp->fullSData(oldp+837,(vlSelf->io_csr_debug_read_address),12);
    bufp->fullIData(oldp+838,(vlSelf->io_csr_debug_read_data),32);
    bufp->fullIData(oldp+839,(vlSelf->io_bus_address),32);
    bufp->fullIData(oldp+840,(vlSelf->io_instruction_address),32);
    bufp->fullIData(oldp+841,(vlSelf->io_alu_result_mem),32);
    bufp->fullIData(oldp+842,(vlSelf->io_cpu_pc),32);
    bufp->fullIData(oldp+843,(vlSelf->io_debug_reg_sp),32);
    bufp->fullIData(oldp+844,(vlSelf->io_debug_reg_a2),32);
    bufp->fullIData(oldp+845,(vlSelf->io_debug_reg_a3),32);
    bufp->fullIData(oldp+846,(vlSelf->io_debug_reg_a5),32);
    bufp->fullBit(oldp+847,(vlSelf->io_timer_mtip));
    bufp->fullQData(oldp+848,(vlSelf->io_timer_mtime),64);
    bufp->fullQData(oldp+850,(vlSelf->io_timer_mtimecmp),64);
    bufp->fullBit(oldp+852,(vlSelf->io_uart_tx));
    bufp->fullSData(oldp+853,(vlSelf->io_timer_mtip),11);
    bufp->fullIData(oldp+854,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                ? ((0x100073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                    ? 3U : ((0x73U 
                                             == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                             ? 0xbU
                                             : 0xaU))
                                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                    ? ((IData)(vlSelf->io_timer_mtip)
                                        ? 0x80000007U
                                        : 0x8000000bU)
                                    : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
                                        & (0x342U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)))),32);
    bufp->fullBit(oldp+855,((1U & ((IData)(vlSelf->io_timer_mtip)
                                    ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                       >> 7U) : (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                                 >> 0xbU)))));
}
