// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VFreeRTOSTestTop__Syms.h"


void VFreeRTOSTestTop___024root__trace_chg_0_sub_0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VFreeRTOSTestTop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_chg_0\n"); );
    // Init
    VFreeRTOSTestTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFreeRTOSTestTop___024root*>(voidSelf);
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VFreeRTOSTestTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VFreeRTOSTestTop___024root__trace_chg_0_sub_0(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem[25]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+26,(vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address),32);
        bufp->chgIData(oldp+27,(vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data),32);
        bufp->chgBit(oldp+28,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en));
        bufp->chgBit(oldp+29,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0)
                                : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
        bufp->chgBit(oldp+30,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1)
                                : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2)
                                : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
        bufp->chgBit(oldp+32,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3)
                                : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))));
        bufp->chgIData(oldp+33,((((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                   [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0] 
                                   << 0x18U) | (vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0] 
                                                << 0x10U)) 
                                 | ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                     [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                     << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                    [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0]))),32);
        bufp->chgIData(oldp+34,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction),32);
        bufp->chgIData(oldp+35,(((IData)(0x1000U) + (IData)(
                                                            ((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) 
                                                             << 2U)))),32);
        bufp->chgIData(oldp+36,(((0x19U >= (0x1fU & (IData)(
                                                            (0x3fffffffffffffffULL 
                                                             & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))))))
                                  ? vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem
                                 [(0x1fU & (IData)(
                                                   (0x3fffffffffffffffULL 
                                                    & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))]
                                  : 0U)),32);
        bufp->chgIData(oldp+37,(((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)
                                  ? ((IData)(0x1000U) 
                                     + (IData)(((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) 
                                                << 2U)))
                                  : 0U)),32);
        bufp->chgIData(oldp+38,(((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)
                                  ? ((0x19U >= (0x1fU 
                                                & (IData)(
                                                          (0x3fffffffffffffffULL 
                                                           & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))))))
                                      ? vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem
                                     [(0x1fU & (IData)(
                                                       (0x3fffffffffffffffULL 
                                                        & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))]
                                      : 0U) : 0U)),32);
        bufp->chgBit(oldp+39,((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)));
        bufp->chgBit(oldp+40,(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid));
        bufp->chgBit(oldp+41,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_write_address_channel_AWVALID));
        bufp->chgBit(oldp+42,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY));
        bufp->chgIData(oldp+43,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr),32);
        bufp->chgBit(oldp+44,((0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 3U)))));
        bufp->chgBit(oldp+45,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY));
        bufp->chgIData(oldp+46,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data),32);
        bufp->chgCData(oldp+47,(((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3) 
                                   << 3U) | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2) 
                                             << 2U)) 
                                 | (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1) 
                                     << 1U) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0)))),4);
        bufp->chgBit(oldp+48,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID));
        bufp->chgBit(oldp+49,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                                  >> 3U))));
        bufp->chgBit(oldp+50,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID));
        bufp->chgBit(oldp+51,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY));
        bufp->chgBit(oldp+52,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__RVALID));
        bufp->chgBit(oldp+53,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                  >> 3U))));
        bufp->chgIData(oldp+54,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data),32);
        bufp->chgBit(oldp+55,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_write_address_channel_AWVALID));
        bufp->chgBit(oldp+56,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY));
        bufp->chgCData(oldp+57,((0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr)),8);
        bufp->chgBit(oldp+58,((0x3fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 2U)))));
        bufp->chgBit(oldp+59,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY));
        bufp->chgBit(oldp+60,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID));
        bufp->chgBit(oldp+61,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                                  >> 2U))));
        bufp->chgBit(oldp+62,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID));
        bufp->chgBit(oldp+63,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY));
        bufp->chgBit(oldp+64,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                  >> 2U))));
        bufp->chgIData(oldp+66,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data),32);
        bufp->chgBit(oldp+67,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt));
        bufp->chgBit(oldp+68,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID));
        bufp->chgBit(oldp+69,((1U & ((((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY)) 
                                     | ((0x7fU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending)) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                       >> 0x1dU)) 
                                                     >> 1U))) 
                                        | ((0x3fU & 
                                            ((((IData)(1U) 
                                               << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY))) 
                                           | ((0x1fU 
                                               & ((((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
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
        bufp->chgBit(oldp+70,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID));
        bufp->chgBit(oldp+71,(((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                 >> 0x1dU)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY)) 
                               | ((0x7fU & ((((IData)(1U) 
                                              << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                  >> 0x1dU)) 
                                             >> 1U) 
                                            & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY))) 
                                  | ((0x3fU & ((((IData)(1U) 
                                                 << 
                                                 (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                  >> 0x1dU)) 
                                                >> 2U) 
                                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY))) 
                                     | ((0x1fU & ((
                                                   ((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                     >> 0x1dU)) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY))) 
                                        | ((0xfU & 
                                            ((((IData)(1U) 
                                               << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY))) 
                                           | ((7U & 
                                               ((((IData)(1U) 
                                                  << 
                                                  (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                                 >> 5U) 
                                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY))) 
                                              | ((3U 
                                                  & ((((IData)(1U) 
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
        bufp->chgBit(oldp+72,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_write_response_channel_BVALID));
        bufp->chgBit(oldp+73,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY));
        bufp->chgBit(oldp+74,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID));
        bufp->chgBit(oldp+75,((1U & ((((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY)) 
                                     | ((0x7fU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending)) 
                                                  & (((IData)(1U) 
                                                      << 
                                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                       >> 0x1dU)) 
                                                     >> 1U))) 
                                        | ((0x3fU & 
                                            ((((IData)(1U) 
                                               << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                              >> 2U) 
                                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY))) 
                                           | ((0x1fU 
                                               & ((((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
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
        bufp->chgBit(oldp+76,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID));
        bufp->chgBit(oldp+77,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY));
        bufp->chgIData(oldp+78,((((((((((1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                         ? vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data
                                         : 0U) | ((2U 
                                                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                   ? 0xdeadbeefU
                                                   : 0U)) 
                                      | ((4U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                          ? vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data
                                          : 0U)) | 
                                     ((8U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                       ? vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data
                                       : 0U)) | ((0x10U 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                  ? 0xdeadbeefU
                                                  : 0U)) 
                                   | ((0x20U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                       ? 0xdeadbeefU
                                       : 0U)) | ((0x40U 
                                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                  ? 0xdeadbeefU
                                                  : 0U)) 
                                 | ((0x80U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                     ? 0xdeadbeefU : 0U))),32);
        bufp->chgIData(oldp+79,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in),32);
        bufp->chgBit(oldp+80,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID));
        bufp->chgBit(oldp+81,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                               & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                  >> 0x1dU)))));
        bufp->chgBit(oldp+83,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY));
        bufp->chgBit(oldp+84,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel))));
        bufp->chgBit(oldp+86,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID));
        bufp->chgBit(oldp+87,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY));
        bufp->chgBit(oldp+88,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID));
        bufp->chgBit(oldp+89,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))));
        bufp->chgIData(oldp+90,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data),32);
        bufp->chgBit(oldp+91,((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 1U)))));
        bufp->chgBit(oldp+92,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending)))));
        bufp->chgBit(oldp+93,((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 1U)))));
        bufp->chgBit(oldp+94,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY));
        bufp->chgBit(oldp+95,(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok));
        bufp->chgBit(oldp+96,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_response_channel_BREADY));
        bufp->chgBit(oldp+97,((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 1U)))));
        bufp->chgBit(oldp+98,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending)))));
        bufp->chgBit(oldp+99,(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending));
        bufp->chgBit(oldp+100,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                   >> 1U))));
        bufp->chgBit(oldp+101,((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 4U)))));
        bufp->chgBit(oldp+102,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending)))));
        bufp->chgBit(oldp+103,((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 4U)))));
        bufp->chgBit(oldp+104,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY));
        bufp->chgBit(oldp+105,(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok));
        bufp->chgBit(oldp+106,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_response_channel_BREADY));
        bufp->chgBit(oldp+107,((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                        & (((IData)(1U) 
                                            << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                                           >> 4U)))));
        bufp->chgBit(oldp+108,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending)))));
        bufp->chgBit(oldp+109,(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                   >> 4U))));
        bufp->chgBit(oldp+111,((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                      & (((IData)(1U) 
                                          << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+112,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending)))));
        bufp->chgBit(oldp+113,((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                      & (((IData)(1U) 
                                          << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+114,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY));
        bufp->chgBit(oldp+115,(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok));
        bufp->chgBit(oldp+116,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_response_channel_BREADY));
        bufp->chgBit(oldp+117,((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                      & (((IData)(1U) 
                                          << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+118,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending)))));
        bufp->chgBit(oldp+119,(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                   >> 5U))));
        bufp->chgBit(oldp+121,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                      & (((IData)(1U) 
                                          << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+122,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending)))));
        bufp->chgBit(oldp+123,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                      & (((IData)(1U) 
                                          << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+124,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY));
        bufp->chgBit(oldp+125,(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok));
        bufp->chgBit(oldp+126,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_response_channel_BREADY));
        bufp->chgBit(oldp+127,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                      & (((IData)(1U) 
                                          << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                              >> 0x1dU)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+128,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending)))));
        bufp->chgBit(oldp+129,(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                   >> 6U))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                                & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 7U))));
        bufp->chgBit(oldp+132,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending)))));
        bufp->chgBit(oldp+133,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                                & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 7U))));
        bufp->chgBit(oldp+134,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY));
        bufp->chgBit(oldp+135,(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok));
        bufp->chgBit(oldp+136,(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY));
        bufp->chgBit(oldp+137,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                                & (((IData)(1U) << 
                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                     >> 0x1dU)) >> 7U))));
        bufp->chgBit(oldp+138,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending)))));
        bufp->chgBit(oldp+139,(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending));
        bufp->chgBit(oldp+140,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                   >> 7U))));
        bufp->chgIData(oldp+141,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr),32);
        bufp->chgBit(oldp+142,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read));
        bufp->chgBit(oldp+143,(vlSelf->FreeRTOSTestTop__DOT__read_pending));
        bufp->chgBit(oldp+144,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write));
        bufp->chgIData(oldp+145,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data),32);
        bufp->chgBit(oldp+146,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0));
        bufp->chgBit(oldp+147,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1));
        bufp->chgBit(oldp+148,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2));
        bufp->chgBit(oldp+149,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3));
        bufp->chgIData(oldp+150,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt),21);
        bufp->chgBit(oldp+151,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)))));
        bufp->chgCData(oldp+152,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                  >> 0x1dU)),3);
        bufp->chgCData(oldp+153,((0xffU & ((IData)(1U) 
                                           << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                               >> 0x1dU)))),8);
        bufp->chgCData(oldp+154,(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel),8);
        bufp->chgCData(oldp+155,(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel),8);
        bufp->chgBit(oldp+156,((1U & ((IData)(1U) << 
                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                       >> 0x1dU)))));
        bufp->chgBit(oldp+157,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 1U))));
        bufp->chgBit(oldp+158,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 2U))));
        bufp->chgBit(oldp+159,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 3U))));
        bufp->chgBit(oldp+160,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 4U))));
        bufp->chgBit(oldp+161,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 5U))));
        bufp->chgBit(oldp+162,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 6U))));
        bufp->chgBit(oldp+163,((1U & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 7U))));
        bufp->chgIData(oldp+164,((0x1ffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)),32);
        bufp->chgBit(oldp+165,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read));
        bufp->chgIData(oldp+166,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data),32);
        bufp->chgBit(oldp+167,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid));
        bufp->chgBit(oldp+168,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write));
        bufp->chgIData(oldp+169,(((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                   ? 0U : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                            ? 0U : 
                                           ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                                             ? 0U : 
                                            ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_)
                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_36)
                                              : 0U))))),32);
        bufp->chgBit(oldp+170,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                   & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                             ? (0U 
                                                == 
                                                (3U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                             : ((1U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                                 ? 
                                                (0U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                 : 
                                                (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
        bufp->chgBit(oldp+171,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                   & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                             ? (1U 
                                                == 
                                                (3U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                             : ((1U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)) 
                                                 | (1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)))
                                                 : 
                                                (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
        bufp->chgBit(oldp+172,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                   & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                             ? (2U 
                                                == 
                                                (3U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                             : ((1U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                                 ? 
                                                (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                 : 
                                                (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
        bufp->chgBit(oldp+173,(((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                   & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                             ? (3U 
                                                == 
                                                (3U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                             : ((1U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                                 ? 
                                                ((0U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)) 
                                                 & (1U 
                                                    != 
                                                    (3U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)))
                                                 : 
                                                (2U 
                                                 == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))))));
        bufp->chgBit(oldp+174,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid));
        bufp->chgBit(oldp+175,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
        bufp->chgBit(oldp+176,((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))));
        bufp->chgCData(oldp+177,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ 
                                  >> 0x1dU)),3);
        bufp->chgIData(oldp+178,((0xfffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)),32);
        bufp->chgBit(oldp+179,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read));
        bufp->chgBit(oldp+180,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write));
        bufp->chgBit(oldp+181,((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))));
        bufp->chgIData(oldp+182,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg),32);
        bufp->chgBit(oldp+183,((((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state)) 
                                 & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request)) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read) 
                                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write)))));
        bufp->chgCData(oldp+184,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state),3);
        bufp->chgBit(oldp+185,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0));
        bufp->chgBit(oldp+186,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1));
        bufp->chgBit(oldp+187,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2));
        bufp->chgBit(oldp+188,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3));
        bufp->chgCData(oldp+189,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1) 
                                   << 1U) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0))),2);
        bufp->chgCData(oldp+190,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3) 
                                   << 1U) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2))),2);
        bufp->chgBit(oldp+191,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
        bufp->chgBit(oldp+192,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id));
        bufp->chgCData(oldp+193,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in),5);
        bufp->chgCData(oldp+194,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in),5);
        bufp->chgBit(oldp+195,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_));
        bufp->chgCData(oldp+196,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),5);
        bufp->chgBit(oldp+197,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_));
        bufp->chgCData(oldp+198,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),5);
        bufp->chgBit(oldp+199,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_));
        bufp->chgCData(oldp+200,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_),2);
        bufp->chgCData(oldp+201,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_),2);
        bufp->chgCData(oldp+202,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_),2);
        bufp->chgCData(oldp+203,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),5);
        bufp->chgBit(oldp+204,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag))));
        bufp->chgBit(oldp+205,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18) 
                                & ((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
                                     & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
                                    & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___ex_hazard_for_branch_T_4)) 
                                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard)))));
        bufp->chgBit(oldp+206,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18));
        bufp->chgBit(oldp+207,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard));
        bufp->chgBit(oldp+208,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
        bufp->chgBit(oldp+209,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_));
        bufp->chgIData(oldp+210,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data),32);
        bufp->chgIData(oldp+211,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1),32);
        bufp->chgIData(oldp+212,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2),32);
        bufp->chgBit(oldp+213,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall));
        bufp->chgIData(oldp+214,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target),32);
        bufp->chgBit(oldp+215,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict));
        bufp->chgIData(oldp+216,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___T_2)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending
                                   : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                                       : ((IData)(4U) 
                                          + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_)))),32);
        bufp->chgBit(oldp+217,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction));
        bufp->chgIData(oldp+218,(((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction
                                   : 0x13U)),32);
        bufp->chgBit(oldp+219,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__predict_taken));
        bufp->chgIData(oldp+220,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc),32);
        bufp->chgBit(oldp+221,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid));
        bufp->chgIData(oldp+222,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_),32);
        bufp->chgBit(oldp+223,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken));
        bufp->chgBit(oldp+224,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in));
        bufp->chgIData(oldp+225,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr),32);
        bufp->chgBit(oldp+226,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push));
        bufp->chgIData(oldp+227,(((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_)),32);
        bufp->chgBit(oldp+228,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_prediction_hit));
        bufp->chgIData(oldp+229,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target),32);
        bufp->chgBit(oldp+230,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid));
        bufp->chgCData(oldp+231,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash),8);
        bufp->chgBit(oldp+232,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush));
        bufp->chgIData(oldp+233,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_),32);
        bufp->chgBit(oldp+234,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_));
        bufp->chgIData(oldp+235,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_),32);
        bufp->chgBit(oldp+236,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_));
        bufp->chgIData(oldp+237,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_),32);
        bufp->chgBit(oldp+238,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_));
        bufp->chgIData(oldp+239,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_),32);
        bufp->chgIData(oldp+240,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem),32);
        bufp->chgCData(oldp+241,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward),2);
        bufp->chgCData(oldp+242,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward),2);
        bufp->chgBit(oldp+243,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert));
        bufp->chgIData(oldp+244,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                                   : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                                       : ((0x30200073U 
                                           == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                                           : 0U)))),32);
        bufp->chgIData(oldp+245,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in),32);
        bufp->chgBit(oldp+246,(((0x17U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                | ((0x63U == (0x7fU 
                                              & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))))));
        bufp->chgBit(oldp+247,((0x33U != (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        bufp->chgBit(oldp+248,((3U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        bufp->chgBit(oldp+249,((0x23U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        bufp->chgCData(oldp+250,(((0x67U == (0x7fU 
                                             & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                   ? 3U : ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                            ? 3U : 
                                           ((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                             ? 2U : 
                                            ((3U == 
                                              (0x7fU 
                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                              ? 1U : 0U))))),2);
        bufp->chgBit(oldp+251,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4) 
                                 | ((0x17U == (0x7fU 
                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                    | ((0x37U == (0x7fU 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                       | (0x6fU == 
                                          (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))))) 
                                | ((0x67U == (0x7fU 
                                              & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                   | (0x73U == (0x7fU 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))))));
        bufp->chgCData(oldp+252,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 7U))),5);
        bufp->chgSData(oldp+253,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+254,(((0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                & ((((1U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU))) 
                                     | ((5U == (7U 
                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU))) 
                                        | (2U == (7U 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU))))) 
                                    | ((6U == (7U & 
                                               (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU))) 
                                       | (3U == (7U 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU))))) 
                                   | (7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))))));
        bufp->chgIData(oldp+255,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_9),32);
        bufp->chgBit(oldp+256,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall));
        bufp->chgBit(oldp+257,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush));
        bufp->chgIData(oldp+258,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in),32);
        bufp->chgIData(oldp+259,(((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                   : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                                       : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2))),32);
        bufp->chgIData(oldp+260,(((0xb89U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x14U))
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
                                   : ((0xb09U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0x14U))
                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                                       : ((0xb88U == 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
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
                                                   : 
                                                  ((0xb07U 
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
        bufp->chgIData(oldp+261,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_),32);
        bufp->chgIData(oldp+262,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_),32);
        bufp->chgCData(oldp+263,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_),5);
        bufp->chgCData(oldp+264,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_),5);
        bufp->chgBit(oldp+265,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_));
        bufp->chgIData(oldp+266,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_),32);
        bufp->chgIData(oldp+267,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_),32);
        bufp->chgIData(oldp+268,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_),32);
        bufp->chgBit(oldp+269,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_));
        bufp->chgBit(oldp+270,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_));
        bufp->chgBit(oldp+271,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_));
        bufp->chgSData(oldp+272,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_),12);
        bufp->chgBit(oldp+273,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_));
        bufp->chgIData(oldp+274,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_),32);
        bufp->chgCData(oldp+275,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward),2);
        bufp->chgCData(oldp+276,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward),2);
        bufp->chgIData(oldp+277,((IData)((0x7fffffffffffffffULL 
                                          & ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                              ? (QData)((IData)(
                                                                (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                 + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                              : ((2U 
                                                  == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                     - vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                                  : 
                                                 ((3U 
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
        bufp->chgIData(oldp+278,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg2_data),32);
        bufp->chgIData(oldp+279,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data),32);
        bufp->chgIData(oldp+280,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),32);
        bufp->chgCData(oldp+281,((7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+282,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_));
        bufp->chgIData(oldp+283,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),32);
        bufp->chgIData(oldp+284,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_),32);
        bufp->chgIData(oldp+285,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_),32);
        bufp->chgIData(oldp+286,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_),32);
        bufp->chgIData(oldp+287,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_),32);
        bufp->chgCData(oldp+288,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_),3);
        bufp->chgIData(oldp+289,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in),32);
        bufp->chgCData(oldp+290,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__forward_regs_write_source),2);
        bufp->chgCData(oldp+291,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address)
                                   : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))),5);
        bufp->chgBit(oldp+292,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable)
                                 : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_))));
        bufp->chgIData(oldp+293,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address)
                                   : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))),32);
        bufp->chgIData(oldp+294,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_),32);
        bufp->chgIData(oldp+295,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_),32);
        bufp->chgIData(oldp+296,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),32);
        bufp->chgIData(oldp+297,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_),32);
        bufp->chgIData(oldp+298,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_),32);
        bufp->chgIData(oldp+299,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus),32);
        bufp->chgIData(oldp+300,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc),32);
        bufp->chgIData(oldp+301,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
                                   & (0x342U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                   : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)),32);
        bufp->chgIData(oldp+302,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec),32);
        bufp->chgIData(oldp+303,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie),32);
        bufp->chgIData(oldp+304,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt
                                   : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt
                                       : ((0x30200073U 
                                           == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                           ? (0x80U 
                                              | ((0xffffff00U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                                 | ((0x70U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                                    | ((8U 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                                           >> 4U)) 
                                                       | (7U 
                                                          & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))))
                                           : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))),32);
        bufp->chgIData(oldp+305,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address
                                   : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address
                                       : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc))),32);
        bufp->chgBit(oldp+306,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                   | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid) 
                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))))));
        bufp->chgBit(oldp+307,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0))));
        bufp->chgBit(oldp+308,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_18) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                   & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall))))));
        bufp->chgBit(oldp+309,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall));
        bufp->chgBit(oldp+310,(((((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_)) 
                                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken)) 
                                 | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))));
        bufp->chgBit(oldp+311,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))));
        bufp->chgBit(oldp+312,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))));
        bufp->chgBit(oldp+313,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T))));
        bufp->chgBit(oldp+314,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch));
        bufp->chgBit(oldp+315,(((~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_) 
                                    | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_))) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_))));
        bufp->chgBit(oldp+316,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target));
        bufp->chgBit(oldp+317,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw));
        bufp->chgIData(oldp+318,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                                   : ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_))),32);
        bufp->chgBit(oldp+319,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending));
        bufp->chgIData(oldp+320,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending),32);
        bufp->chgCData(oldp+321,((0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)),7);
        bufp->chgCData(oldp+322,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0xfU))),5);
        bufp->chgBit(oldp+323,((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        bufp->chgBit(oldp+324,((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        bufp->chgBit(oldp+325,(((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 7U))) 
                                | (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 7U))))));
        bufp->chgBit(oldp+326,(((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0xfU))) 
                                | (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xfU))))));
        bufp->chgBit(oldp+327,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return));
        bufp->chgBit(oldp+328,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ 
                                      != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target)))));
        bufp->chgBit(oldp+329,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                   == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_))));
        bufp->chgBit(oldp+330,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr));
        bufp->chgBit(oldp+331,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ 
                                      != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target)))));
        bufp->chgBit(oldp+332,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                   == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_))));
        bufp->chgCData(oldp+333,((0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in)),8);
        bufp->chgCData(oldp+334,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                           >> 8U))),8);
        bufp->chgCData(oldp+335,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+336,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                  >> 0x18U)),8);
        bufp->chgBit(oldp+337,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                                | (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                       == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_)) 
                                   | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                                         == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_))))));
        bufp->chgBit(oldp+338,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__need_if_flush));
        bufp->chgBit(oldp+339,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))));
        bufp->chgBit(oldp+340,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                      >> 3U))));
        bufp->chgBit(oldp+341,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                      >> 7U))));
        bufp->chgBit(oldp+342,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                      >> 0xbU))));
        bufp->chgIData(oldp+343,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address),32);
        bufp->chgIData(oldp+344,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt),32);
        bufp->chgIData(oldp+345,((0x80U | ((0xffffff00U 
                                            & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                           | ((0x70U 
                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                              | ((8U 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                                     >> 4U)) 
                                                 | (7U 
                                                    & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))))),32);
        bufp->chgIData(oldp+346,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus),32);
        bufp->chgIData(oldp+347,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie),32);
        bufp->chgIData(oldp+348,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec),32);
        bufp->chgIData(oldp+349,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch),32);
        bufp->chgIData(oldp+350,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc),32);
        bufp->chgIData(oldp+351,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause),32);
        bufp->chgIData(oldp+352,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit),32);
        bufp->chgQData(oldp+353,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle),64);
        bufp->chgQData(oldp+355,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret),64);
        bufp->chgQData(oldp+357,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3),64);
        bufp->chgQData(oldp+359,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4),64);
        bufp->chgQData(oldp+361,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5),64);
        bufp->chgQData(oldp+363,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6),64);
        bufp->chgQData(oldp+365,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7),64);
        bufp->chgQData(oldp+367,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8),64);
        bufp->chgQData(oldp+369,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9),64);
        bufp->chgIData(oldp+371,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow),32);
        bufp->chgIData(oldp+372,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow),32);
        bufp->chgIData(oldp+373,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow),32);
        bufp->chgIData(oldp+374,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow),32);
        bufp->chgIData(oldp+375,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow),32);
        bufp->chgIData(oldp+376,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow),32);
        bufp->chgIData(oldp+377,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow),32);
        bufp->chgIData(oldp+378,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow),32);
        bufp->chgIData(oldp+379,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow),32);
        bufp->chgBit(oldp+380,(((0xc00U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)) 
                                | (0xb00U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+381,(((0xc02U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)) 
                                | (0xb02U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+382,((0xb03U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+383,((0xb04U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+384,((0xb05U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+385,((0xb06U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+386,((0xb07U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+387,((0xb08U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+388,((0xb09U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))));
        bufp->chgBit(oldp+389,((1U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit)));
        bufp->chgBit(oldp+390,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 2U))));
        bufp->chgBit(oldp+391,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 3U))));
        bufp->chgBit(oldp+392,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 4U))));
        bufp->chgBit(oldp+393,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 5U))));
        bufp->chgBit(oldp+394,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 6U))));
        bufp->chgBit(oldp+395,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 7U))));
        bufp->chgBit(oldp+396,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 8U))));
        bufp->chgBit(oldp+397,((1U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                      >> 9U))));
        bufp->chgBit(oldp+398,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                                 & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___ex_hazard_for_branch_T_4))));
        bufp->chgBit(oldp+399,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_))));
        bufp->chgBit(oldp+400,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__jal_jalr_hazard_ex));
        bufp->chgBit(oldp+401,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__jal_jalr_hazard_mem));
        bufp->chgBit(oldp+402,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__jal_jalr_hazard_wb));
        bufp->chgBit(oldp+403,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
                                 & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___ex_hazard_for_branch_T_4))));
        bufp->chgBit(oldp+404,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard));
        bufp->chgCData(oldp+405,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func),4);
        bufp->chgIData(oldp+406,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6),32);
        bufp->chgIData(oldp+407,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7),32);
        bufp->chgCData(oldp+408,((0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)),7);
        bufp->chgCData(oldp+409,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+410,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+411,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data),32);
        bufp->chgIData(oldp+412,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_),32);
        bufp->chgCData(oldp+413,((7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+414,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))),5);
        bufp->chgBit(oldp+415,(((0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                & (((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0xcU))) 
                                    | (7U == (7U & 
                                              (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))) 
                                   | (6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+416,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1));
        bufp->chgBit(oldp+417,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2));
        bufp->chgIData(oldp+418,(((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                                   : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                       : ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1
                                           : 0U)))),32);
        bufp->chgIData(oldp+419,(((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                                   : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                       : ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2
                                           : 0U)))),32);
        bufp->chgIData(oldp+420,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data),32);
        bufp->chgIData(oldp+421,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data),32);
        bufp->chgBit(oldp+422,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
                                   | ((0x63U == (0x7fU 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                      & ((7U == (7U 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))
                                          ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                             >= vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                          : ((6U == 
                                              (7U & 
                                               (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU)))
                                              ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                 < vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_GTES_III(32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                  : 
                                                 ((4U 
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
        bufp->chgIData(oldp+423,((0xfffffffeU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                 + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in))),32);
        bufp->chgIData(oldp+424,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_),32);
        bufp->chgBit(oldp+425,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop));
        bufp->chgBit(oldp+426,((0U < (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))));
        bufp->chgBit(oldp+427,((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___hit_any_T))));
        bufp->chgIData(oldp+428,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        bufp->chgBit(oldp+429,((0x67U == (0x7fU & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_data)))));
        bufp->chgCData(oldp+430,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+431,((0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__io_instruction_lo) 
                                           >> 7U))),5);
        bufp->chgBit(oldp+432,(((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction 
                                                 >> 0xfU))) 
                                | (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_rom_instruction 
                                                   >> 0xfU))))));
        bufp->chgBit(oldp+433,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return));
        bufp->chgBit(oldp+434,(((0x67U == (0x7fU & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_data))) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return)) 
                                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0)))));
        bufp->chgBit(oldp+435,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump));
        bufp->chgIData(oldp+436,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr),32);
        bufp->chgBit(oldp+437,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag));
        bufp->chgIData(oldp+438,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr),32);
        bufp->chgBit(oldp+439,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))));
        bufp->chgBit(oldp+440,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
                                & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                                   & (~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                                         | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))))));
        bufp->chgBit(oldp+441,(((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict))));
        bufp->chgIData(oldp+442,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in)
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr
                                   : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_prediction_hit)
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target
                                       : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__predict_taken)
                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc
                                           : ((IData)(4U) 
                                              + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc))))),32);
        bufp->chgBit(oldp+443,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
        bufp->chgBit(oldp+444,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
        bufp->chgBit(oldp+445,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
        bufp->chgBit(oldp+446,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
        bufp->chgBit(oldp+447,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
        bufp->chgBit(oldp+448,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
        bufp->chgBit(oldp+449,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
        bufp->chgBit(oldp+450,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
        bufp->chgBit(oldp+451,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
        bufp->chgBit(oldp+452,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
        bufp->chgBit(oldp+453,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
        bufp->chgBit(oldp+454,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
        bufp->chgBit(oldp+455,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
        bufp->chgBit(oldp+456,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
        bufp->chgBit(oldp+457,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
        bufp->chgBit(oldp+458,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
        bufp->chgBit(oldp+459,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16));
        bufp->chgBit(oldp+460,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17));
        bufp->chgBit(oldp+461,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18));
        bufp->chgBit(oldp+462,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19));
        bufp->chgBit(oldp+463,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20));
        bufp->chgBit(oldp+464,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21));
        bufp->chgBit(oldp+465,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22));
        bufp->chgBit(oldp+466,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23));
        bufp->chgBit(oldp+467,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24));
        bufp->chgBit(oldp+468,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25));
        bufp->chgBit(oldp+469,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26));
        bufp->chgBit(oldp+470,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27));
        bufp->chgBit(oldp+471,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28));
        bufp->chgBit(oldp+472,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29));
        bufp->chgBit(oldp+473,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30));
        bufp->chgBit(oldp+474,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31));
        bufp->chgIData(oldp+475,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0),25);
        bufp->chgIData(oldp+476,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1),25);
        bufp->chgIData(oldp+477,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2),25);
        bufp->chgIData(oldp+478,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3),25);
        bufp->chgIData(oldp+479,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4),25);
        bufp->chgIData(oldp+480,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5),25);
        bufp->chgIData(oldp+481,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6),25);
        bufp->chgIData(oldp+482,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7),25);
        bufp->chgIData(oldp+483,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8),25);
        bufp->chgIData(oldp+484,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9),25);
        bufp->chgIData(oldp+485,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10),25);
        bufp->chgIData(oldp+486,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11),25);
        bufp->chgIData(oldp+487,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12),25);
        bufp->chgIData(oldp+488,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13),25);
        bufp->chgIData(oldp+489,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14),25);
        bufp->chgIData(oldp+490,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15),25);
        bufp->chgIData(oldp+491,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16),25);
        bufp->chgIData(oldp+492,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17),25);
        bufp->chgIData(oldp+493,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18),25);
        bufp->chgIData(oldp+494,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19),25);
        bufp->chgIData(oldp+495,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20),25);
        bufp->chgIData(oldp+496,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21),25);
        bufp->chgIData(oldp+497,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22),25);
        bufp->chgIData(oldp+498,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23),25);
        bufp->chgIData(oldp+499,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24),25);
        bufp->chgIData(oldp+500,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25),25);
        bufp->chgIData(oldp+501,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26),25);
        bufp->chgIData(oldp+502,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27),25);
        bufp->chgIData(oldp+503,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28),25);
        bufp->chgIData(oldp+504,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29),25);
        bufp->chgIData(oldp+505,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30),25);
        bufp->chgIData(oldp+506,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31),25);
        bufp->chgIData(oldp+507,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0),32);
        bufp->chgIData(oldp+508,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1),32);
        bufp->chgIData(oldp+509,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2),32);
        bufp->chgIData(oldp+510,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3),32);
        bufp->chgIData(oldp+511,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4),32);
        bufp->chgIData(oldp+512,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5),32);
        bufp->chgIData(oldp+513,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6),32);
        bufp->chgIData(oldp+514,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7),32);
        bufp->chgIData(oldp+515,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8),32);
        bufp->chgIData(oldp+516,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9),32);
        bufp->chgIData(oldp+517,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10),32);
        bufp->chgIData(oldp+518,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11),32);
        bufp->chgIData(oldp+519,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12),32);
        bufp->chgIData(oldp+520,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13),32);
        bufp->chgIData(oldp+521,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14),32);
        bufp->chgIData(oldp+522,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15),32);
        bufp->chgIData(oldp+523,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_16),32);
        bufp->chgIData(oldp+524,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_17),32);
        bufp->chgIData(oldp+525,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_18),32);
        bufp->chgIData(oldp+526,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_19),32);
        bufp->chgIData(oldp+527,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_20),32);
        bufp->chgIData(oldp+528,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_21),32);
        bufp->chgIData(oldp+529,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_22),32);
        bufp->chgIData(oldp+530,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_23),32);
        bufp->chgIData(oldp+531,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_24),32);
        bufp->chgIData(oldp+532,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_25),32);
        bufp->chgIData(oldp+533,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_26),32);
        bufp->chgIData(oldp+534,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_27),32);
        bufp->chgIData(oldp+535,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_28),32);
        bufp->chgIData(oldp+536,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_29),32);
        bufp->chgIData(oldp+537,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_30),32);
        bufp->chgIData(oldp+538,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_31),32);
        bufp->chgCData(oldp+539,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0),2);
        bufp->chgCData(oldp+540,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1),2);
        bufp->chgCData(oldp+541,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2),2);
        bufp->chgCData(oldp+542,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3),2);
        bufp->chgCData(oldp+543,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4),2);
        bufp->chgCData(oldp+544,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5),2);
        bufp->chgCData(oldp+545,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6),2);
        bufp->chgCData(oldp+546,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7),2);
        bufp->chgCData(oldp+547,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8),2);
        bufp->chgCData(oldp+548,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9),2);
        bufp->chgCData(oldp+549,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10),2);
        bufp->chgCData(oldp+550,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11),2);
        bufp->chgCData(oldp+551,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12),2);
        bufp->chgCData(oldp+552,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13),2);
        bufp->chgCData(oldp+553,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14),2);
        bufp->chgCData(oldp+554,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15),2);
        bufp->chgCData(oldp+555,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16),2);
        bufp->chgCData(oldp+556,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17),2);
        bufp->chgCData(oldp+557,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18),2);
        bufp->chgCData(oldp+558,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19),2);
        bufp->chgCData(oldp+559,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20),2);
        bufp->chgCData(oldp+560,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21),2);
        bufp->chgCData(oldp+561,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22),2);
        bufp->chgCData(oldp+562,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23),2);
        bufp->chgCData(oldp+563,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24),2);
        bufp->chgCData(oldp+564,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25),2);
        bufp->chgCData(oldp+565,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26),2);
        bufp->chgCData(oldp+566,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27),2);
        bufp->chgCData(oldp+567,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28),2);
        bufp->chgCData(oldp+568,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29),2);
        bufp->chgCData(oldp+569,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30),2);
        bufp->chgCData(oldp+570,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31),2);
        bufp->chgCData(oldp+571,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                           >> 2U))),5);
        bufp->chgIData(oldp+572,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                  >> 7U)),25);
        bufp->chgBit(oldp+573,((((0x1fU == (0x1fU & 
                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U)))
                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31)
                                  : ((0x1eU == (0x1fU 
                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30)
                                      : ((0x1dU == 
                                          (0x1fU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29)
                                          : ((0x1cU 
                                              == (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28)
                                              : ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27)
                                                  : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_58)))))) 
                                & (((0x1fU == (0x1fU 
                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31
                                     : ((0x1eU == (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27
                                                  : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_26))))) 
                                   == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                       >> 7U)))));
        bufp->chgCData(oldp+574,((0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                           >> 2U))),5);
        bufp->chgIData(oldp+575,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 7U)),25);
        bufp->chgBit(oldp+576,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit));
        bufp->chgBit(oldp+577,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0));
        bufp->chgBit(oldp+578,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1));
        bufp->chgBit(oldp+579,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2));
        bufp->chgBit(oldp+580,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3));
        bufp->chgBit(oldp+581,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4));
        bufp->chgBit(oldp+582,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5));
        bufp->chgBit(oldp+583,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6));
        bufp->chgBit(oldp+584,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7));
        bufp->chgIData(oldp+585,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0),30);
        bufp->chgIData(oldp+586,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1),30);
        bufp->chgIData(oldp+587,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2),30);
        bufp->chgIData(oldp+588,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3),30);
        bufp->chgIData(oldp+589,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4),30);
        bufp->chgIData(oldp+590,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5),30);
        bufp->chgIData(oldp+591,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6),30);
        bufp->chgIData(oldp+592,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7),30);
        bufp->chgCData(oldp+593,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_0),8);
        bufp->chgCData(oldp+594,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_1),8);
        bufp->chgCData(oldp+595,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_2),8);
        bufp->chgCData(oldp+596,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_3),8);
        bufp->chgCData(oldp+597,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_4),8);
        bufp->chgCData(oldp+598,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_5),8);
        bufp->chgCData(oldp+599,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_6),8);
        bufp->chgCData(oldp+600,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7),8);
        bufp->chgIData(oldp+601,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_0),32);
        bufp->chgIData(oldp+602,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_1),32);
        bufp->chgIData(oldp+603,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_2),32);
        bufp->chgIData(oldp+604,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_3),32);
        bufp->chgIData(oldp+605,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_4),32);
        bufp->chgIData(oldp+606,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_5),32);
        bufp->chgIData(oldp+607,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_6),32);
        bufp->chgIData(oldp+608,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_7),32);
        bufp->chgCData(oldp+609,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0),3);
        bufp->chgCData(oldp+610,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1),3);
        bufp->chgCData(oldp+611,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2),3);
        bufp->chgCData(oldp+612,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3),3);
        bufp->chgCData(oldp+613,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4),3);
        bufp->chgCData(oldp+614,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5),3);
        bufp->chgCData(oldp+615,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6),3);
        bufp->chgCData(oldp+616,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7),3);
        bufp->chgIData(oldp+617,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                  >> 2U)),30);
        bufp->chgBit(oldp+618,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0));
        bufp->chgBit(oldp+619,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1));
        bufp->chgBit(oldp+620,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2));
        bufp->chgBit(oldp+621,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3));
        bufp->chgBit(oldp+622,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4));
        bufp->chgBit(oldp+623,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5));
        bufp->chgBit(oldp+624,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6));
        bufp->chgBit(oldp+625,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7));
        bufp->chgCData(oldp+626,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0),3);
        bufp->chgCData(oldp+627,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1),3);
        bufp->chgCData(oldp+628,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2),3);
        bufp->chgCData(oldp+629,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3),3);
        bufp->chgCData(oldp+630,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4),3);
        bufp->chgCData(oldp+631,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5),3);
        bufp->chgCData(oldp+632,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6),3);
        bufp->chgCData(oldp+633,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7),3);
        bufp->chgCData(oldp+634,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age),3);
        bufp->chgBit(oldp+635,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0));
        bufp->chgBit(oldp+636,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1));
        bufp->chgBit(oldp+637,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2));
        bufp->chgBit(oldp+638,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3));
        bufp->chgBit(oldp+639,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4));
        bufp->chgBit(oldp+640,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5));
        bufp->chgBit(oldp+641,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6));
        bufp->chgBit(oldp+642,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_7));
        bufp->chgCData(oldp+643,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index),3);
        bufp->chgIData(oldp+644,((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U)),30);
        bufp->chgBit(oldp+645,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0));
        bufp->chgBit(oldp+646,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1));
        bufp->chgBit(oldp+647,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2));
        bufp->chgBit(oldp+648,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3));
        bufp->chgBit(oldp+649,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4));
        bufp->chgBit(oldp+650,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5));
        bufp->chgBit(oldp+651,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6));
        bufp->chgBit(oldp+652,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
                                & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                                    == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                        >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                                                   == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7))))));
        bufp->chgBit(oldp+653,((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
                                 & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                                     == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                         >> 2U)) & 
                                    ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                                     == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7)))) 
                                | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6) 
                                   | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5) 
                                      | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4) 
                                         | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3) 
                                            | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2) 
                                               | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1) 
                                                  | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0))))))))));
        bufp->chgCData(oldp+654,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0)
                                   ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1)
                                            ? 1U : 
                                           ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2)
                                             ? 2U : 
                                            ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3)
                                              ? 3U : 
                                             ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4)
                                               ? 4U
                                               : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6)
                                                    ? 6U
                                                    : 7U)))))))),3);
        bufp->chgBit(oldp+655,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0)))));
        bufp->chgBit(oldp+656,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)))));
        bufp->chgBit(oldp+657,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)))));
        bufp->chgBit(oldp+658,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)))));
        bufp->chgBit(oldp+659,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)))));
        bufp->chgBit(oldp+660,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)))));
        bufp->chgBit(oldp+661,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)))));
        bufp->chgBit(oldp+662,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7)))));
        bufp->chgBit(oldp+663,((1U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7)) 
                                      | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)) 
                                         | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)) 
                                            | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)) 
                                               | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)) 
                                                  | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)) 
                                                     | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)) 
                                                        | (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0))))))))))));
        bufp->chgCData(oldp+664,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0)
                                   ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)
                                       ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)
                                           ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)
                                               ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)
                                                   ? 
                                                  ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)
                                                    ? 
                                                   ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)
                                                     ? 7U
                                                     : 6U)
                                                    : 5U)
                                                   : 4U)
                                               : 3U)
                                           : 2U) : 1U)
                                   : 0U)),3);
        bufp->chgCData(oldp+665,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age),3);
        bufp->chgBit(oldp+666,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_0));
        bufp->chgBit(oldp+667,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_1));
        bufp->chgBit(oldp+668,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_2));
        bufp->chgBit(oldp+669,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_3));
        bufp->chgBit(oldp+670,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_4));
        bufp->chgBit(oldp+671,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_5));
        bufp->chgBit(oldp+672,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_6));
        bufp->chgBit(oldp+673,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7) 
                                   == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))));
        bufp->chgCData(oldp+674,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_0)
                                   ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_1)
                                            ? 1U : 
                                           ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_2)
                                             ? 2U : 
                                            ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_3)
                                              ? 3U : 
                                             ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_4)
                                               ? 4U
                                               : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_5)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_vec_6)
                                                    ? 6U
                                                    : 7U)))))))),3);
        bufp->chgCData(oldp+675,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index),3);
        bufp->chgIData(oldp+676,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0),32);
        bufp->chgIData(oldp+677,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1),32);
        bufp->chgIData(oldp+678,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2),32);
        bufp->chgIData(oldp+679,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3),32);
        bufp->chgCData(oldp+680,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp),3);
        bufp->chgCData(oldp+681,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                                        - (IData)(1U)))),2);
        bufp->chgCData(oldp+682,((3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)),2);
        bufp->chgCData(oldp+683,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state),2);
        bufp->chgIData(oldp+684,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data),32);
        bufp->chgCData(oldp+685,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source),2);
        bufp->chgCData(oldp+686,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address),5);
        bufp->chgBit(oldp+687,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable));
        bufp->chgIData(oldp+688,(((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data
                                   : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87)),32);
        bufp->chgBit(oldp+689,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read));
        bufp->chgIData(oldp+690,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0),32);
        bufp->chgIData(oldp+691,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1),32);
        bufp->chgIData(oldp+692,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2),32);
        bufp->chgIData(oldp+693,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3),32);
        bufp->chgIData(oldp+694,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4),32);
        bufp->chgIData(oldp+695,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5),32);
        bufp->chgIData(oldp+696,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6),32);
        bufp->chgIData(oldp+697,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7),32);
        bufp->chgIData(oldp+698,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8),32);
        bufp->chgIData(oldp+699,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9),32);
        bufp->chgIData(oldp+700,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10),32);
        bufp->chgIData(oldp+701,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11),32);
        bufp->chgIData(oldp+702,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12),32);
        bufp->chgIData(oldp+703,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13),32);
        bufp->chgIData(oldp+704,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14),32);
        bufp->chgIData(oldp+705,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15),32);
        bufp->chgIData(oldp+706,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16),32);
        bufp->chgIData(oldp+707,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17),32);
        bufp->chgIData(oldp+708,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18),32);
        bufp->chgIData(oldp+709,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19),32);
        bufp->chgIData(oldp+710,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20),32);
        bufp->chgIData(oldp+711,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21),32);
        bufp->chgIData(oldp+712,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22),32);
        bufp->chgIData(oldp+713,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23),32);
        bufp->chgIData(oldp+714,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24),32);
        bufp->chgIData(oldp+715,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25),32);
        bufp->chgIData(oldp+716,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26),32);
        bufp->chgIData(oldp+717,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27),32);
        bufp->chgIData(oldp+718,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28),32);
        bufp->chgIData(oldp+719,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29),32);
        bufp->chgIData(oldp+720,(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30),32);
        bufp->chgBit(oldp+721,(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending));
        bufp->chgBit(oldp+722,(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending));
        bufp->chgBit(oldp+723,(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending));
        bufp->chgBit(oldp+724,(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending));
        bufp->chgBit(oldp+725,(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending));
        bufp->chgCData(oldp+726,((0x1fU & (IData)((0x3fffffffffffffffULL 
                                                   & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))),5);
        bufp->chgIData(oldp+727,((0x3fffffffU & (IData)(
                                                        (0x3fffffffffffffffULL 
                                                         & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))),30);
        bufp->chgIData(oldp+728,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr),32);
        bufp->chgBit(oldp+729,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read));
        bufp->chgIData(oldp+730,(((0xcU == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                   ? (IData)((vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp 
                                              >> 0x20U))
                                   : ((8U == (0xfU 
                                              & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp)
                                       : ((4U == (0xfU 
                                                  & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                           ? (IData)(
                                                     (vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime 
                                                      >> 0x20U))
                                           : ((0U == 
                                               (0xfU 
                                                & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime)
                                               : 0U))))),32);
        bufp->chgBit(oldp+731,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write));
        bufp->chgIData(oldp+732,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data),32);
        bufp->chgBit(oldp+733,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0));
        bufp->chgBit(oldp+734,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1));
        bufp->chgBit(oldp+735,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2));
        bufp->chgBit(oldp+736,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3));
        bufp->chgQData(oldp+737,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime),64);
        bufp->chgQData(oldp+739,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp),64);
        bufp->chgIData(oldp+741,((0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr)),32);
        bufp->chgCData(oldp+742,(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state),3);
        bufp->chgBit(oldp+743,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_en_pipe_0));
        bufp->chgSData(oldp+744,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+745,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+746,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_debug_read_data_MPORT_en_pipe_0));
        bufp->chgSData(oldp+747,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+748,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+749,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_en_pipe_0));
        bufp->chgSData(oldp+750,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+751,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_data),8);
        bufp->chgCData(oldp+752,((0xffU & vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data)),8);
        bufp->chgSData(oldp+753,((0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                                             >> 2U))),15);
        bufp->chgBit(oldp+754,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_en_pipe_0));
        bufp->chgSData(oldp+755,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+756,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+757,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_en_pipe_0));
        bufp->chgCData(oldp+758,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+759,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_instruction_MPORT_en_pipe_0));
        bufp->chgSData(oldp+760,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+761,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        bufp->chgCData(oldp+762,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                                           >> 8U))),8);
        bufp->chgBit(oldp+763,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_en_pipe_0));
        bufp->chgSData(oldp+764,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+765,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+766,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_debug_read_data_MPORT_en_pipe_0));
        bufp->chgCData(oldp+767,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+768,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_instruction_MPORT_en_pipe_0));
        bufp->chgCData(oldp+769,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0]),8);
        bufp->chgCData(oldp+770,((0xffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                                           >> 0x10U))),8);
        bufp->chgBit(oldp+771,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_en_pipe_0));
        bufp->chgSData(oldp+772,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0),15);
        bufp->chgCData(oldp+773,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+774,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_en_pipe_0));
        bufp->chgCData(oldp+775,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0]),8);
        bufp->chgBit(oldp+776,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_en_pipe_0));
        bufp->chgCData(oldp+777,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                 [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0]),8);
        bufp->chgCData(oldp+778,((vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                                  >> 0x18U)),8);
        bufp->chgSData(oldp+779,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                   [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                   << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                  [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0])),16);
        bufp->chgSData(oldp+780,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                   [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0] 
                                   << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                  [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0])),16);
        bufp->chgSData(oldp+781,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                   [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                   << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                  [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])),16);
        bufp->chgSData(oldp+782,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                   [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                   << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                  [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])),16);
        bufp->chgSData(oldp+783,(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__io_instruction_lo),16);
        bufp->chgSData(oldp+784,(((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                   [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                   << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                  [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0])),16);
        bufp->chgCData(oldp+785,(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state),3);
        bufp->chgIData(oldp+786,(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address),32);
        bufp->chgCData(oldp+787,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr),8);
        bufp->chgBit(oldp+788,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read));
        bufp->chgIData(oldp+789,(((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                   ? ((2U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__empty)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg))))
                                   : ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                       ? 0x1c200U : 
                                      ((0xcU == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                        ? vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram
                                       [vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                        : 0U)))),32);
        bufp->chgBit(oldp+790,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write));
        bufp->chgIData(oldp+791,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data),32);
        bufp->chgBit(oldp+792,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg)))));
        bufp->chgBit(oldp+793,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_valid));
        bufp->chgCData(oldp+794,(((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write)
                                   ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT___T_5)
                                       ? (0xffU & vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data)
                                       : 0U) : 0U)),8);
        bufp->chgBit(oldp+795,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx_io_channel_ready));
        bufp->chgBit(oldp+796,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg));
        bufp->chgCData(oldp+797,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__shiftReg),8);
        bufp->chgBit(oldp+798,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready));
        bufp->chgBit(oldp+799,((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__empty)))));
        bufp->chgCData(oldp+800,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram
                                 [vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]),8);
        bufp->chgCData(oldp+801,(((((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full) 
                                    & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match))
                                    ? 4U : 0U) | (3U 
                                                  & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value) 
                                                     - (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value))))),3);
        bufp->chgBit(oldp+802,((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
        bufp->chgBit(oldp+803,((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
        bufp->chgBit(oldp+804,((8U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
        bufp->chgBit(oldp+805,((0xcU == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
        bufp->chgBit(oldp+806,((0x10U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))));
        bufp->chgSData(oldp+807,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg),16);
        bufp->chgCData(oldp+808,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg),4);
        bufp->chgCData(oldp+809,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[0]),8);
        bufp->chgCData(oldp+810,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[1]),8);
        bufp->chgCData(oldp+811,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[2]),8);
        bufp->chgCData(oldp+812,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[3]),8);
        bufp->chgCData(oldp+813,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value),2);
        bufp->chgCData(oldp+814,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value),2);
        bufp->chgBit(oldp+815,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en));
        bufp->chgBit(oldp+816,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full));
        bufp->chgBit(oldp+817,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match));
        bufp->chgBit(oldp+818,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__empty));
        bufp->chgBit(oldp+819,(((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                                & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full))));
        bufp->chgBit(oldp+820,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__do_deq));
        bufp->chgCData(oldp+821,((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value) 
                                        - (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value)))),2);
        bufp->chgCData(oldp+822,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state),3);
        bufp->chgBit(oldp+823,(((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg)) 
                                & (0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg)))));
        bufp->chgBit(oldp+824,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg));
        bufp->chgCData(oldp+825,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__dataReg),8);
        bufp->chgSData(oldp+826,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg),11);
        bufp->chgSData(oldp+827,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg),16);
        bufp->chgCData(oldp+828,(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg),4);
        bufp->chgSData(oldp+829,((0x3ffU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg) 
                                            >> 1U))),10);
    }
    bufp->chgBit(oldp+830,(vlSelf->clock));
    bufp->chgBit(oldp+831,(vlSelf->reset));
    bufp->chgCData(oldp+832,(vlSelf->io_regs_debug_read_address),5);
    bufp->chgIData(oldp+833,(vlSelf->io_mem_debug_read_address),32);
    bufp->chgIData(oldp+834,(vlSelf->io_regs_debug_read_data),32);
    bufp->chgIData(oldp+835,(vlSelf->io_mem_debug_read_data),32);
    bufp->chgSData(oldp+836,(vlSelf->io_csr_debug_read_address),12);
    bufp->chgIData(oldp+837,(vlSelf->io_csr_debug_read_data),32);
    bufp->chgIData(oldp+838,(vlSelf->io_bus_address),32);
    bufp->chgIData(oldp+839,(vlSelf->io_instruction_address),32);
    bufp->chgIData(oldp+840,(vlSelf->io_alu_result_mem),32);
    bufp->chgIData(oldp+841,(vlSelf->io_cpu_pc),32);
    bufp->chgIData(oldp+842,(vlSelf->io_debug_reg_sp),32);
    bufp->chgIData(oldp+843,(vlSelf->io_debug_reg_a2),32);
    bufp->chgIData(oldp+844,(vlSelf->io_debug_reg_a3),32);
    bufp->chgIData(oldp+845,(vlSelf->io_debug_reg_a5),32);
    bufp->chgBit(oldp+846,(vlSelf->io_timer_mtip));
    bufp->chgQData(oldp+847,(vlSelf->io_timer_mtime),64);
    bufp->chgQData(oldp+849,(vlSelf->io_timer_mtimecmp),64);
    bufp->chgBit(oldp+851,(vlSelf->io_uart_tx));
    bufp->chgSData(oldp+852,(vlSelf->io_timer_mtip),11);
    bufp->chgIData(oldp+853,(((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                               ? ((0x100073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                   ? 3U : ((0x73U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                            ? 0xbU : 0xaU))
                               : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                   ? ((IData)(vlSelf->io_timer_mtip)
                                       ? 0x80000007U
                                       : 0x8000000bU)
                                   : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
                                       & (0x342U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                       : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)))),32);
    bufp->chgBit(oldp+854,((1U & ((IData)(vlSelf->io_timer_mtip)
                                   ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                      >> 7U) : (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                                >> 0xbU)))));
}

void VFreeRTOSTestTop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root__trace_cleanup\n"); );
    // Init
    VFreeRTOSTestTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFreeRTOSTestTop___024root*>(voidSelf);
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
