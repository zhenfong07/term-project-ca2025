// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFreeRTOSTestTop.h for the primary calling header

#include "VFreeRTOSTestTop__pch.h"
#include "VFreeRTOSTestTop___024root.h"

VL_INLINE_OPT void VFreeRTOSTestTop___024root___ico_sequent__TOP__0(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_csr_debug_read_data = ((0xb89U == (IData)(vlSelf->io_csr_debug_read_address))
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
                                       : ((0xb09U == (IData)(vlSelf->io_csr_debug_read_address))
                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                                           : ((0xb88U 
                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow
                                               : ((0xb08U 
                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)
                                                   : 
                                                  ((0xb87U 
                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow
                                                    : 
                                                   ((0xb07U 
                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)
                                                     : 
                                                    ((0xb86U 
                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow
                                                      : 
                                                     ((0xb06U 
                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)
                                                       : 
                                                      ((0xb85U 
                                                        == (IData)(vlSelf->io_csr_debug_read_address))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow
                                                        : 
                                                       ((0xb05U 
                                                         == (IData)(vlSelf->io_csr_debug_read_address))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)
                                                         : 
                                                        ((0xb84U 
                                                          == (IData)(vlSelf->io_csr_debug_read_address))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow
                                                          : 
                                                         ((0xb04U 
                                                           == (IData)(vlSelf->io_csr_debug_read_address))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)
                                                           : 
                                                          ((0xb83U 
                                                            == (IData)(vlSelf->io_csr_debug_read_address))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow
                                                            : 
                                                           ((0xb03U 
                                                             == (IData)(vlSelf->io_csr_debug_read_address))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)
                                                             : 
                                                            ((0xb82U 
                                                              == (IData)(vlSelf->io_csr_debug_read_address))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                              : 
                                                             ((0xb02U 
                                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                               : 
                                                              ((0xb80U 
                                                                == (IData)(vlSelf->io_csr_debug_read_address))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                                : 
                                                               ((0xb00U 
                                                                 == (IData)(vlSelf->io_csr_debug_read_address))
                                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                                 : 
                                                                ((0xc82U 
                                                                  == (IData)(vlSelf->io_csr_debug_read_address))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                                  : 
                                                                 ((0xc02U 
                                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                                   : 
                                                                  ((0xc80U 
                                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                                    : 
                                                                   ((0xc00U 
                                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                                     : 
                                                                    ((0x320U 
                                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit
                                                                      : 
                                                                     ((0x342U 
                                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                                       : 
                                                                      ((0x341U 
                                                                        == (IData)(vlSelf->io_csr_debug_read_address))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                                        : 
                                                                       ((0x340U 
                                                                         == (IData)(vlSelf->io_csr_debug_read_address))
                                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                                         : 
                                                                        ((0x344U 
                                                                          == (IData)(vlSelf->io_csr_debug_read_address))
                                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in
                                                                          : 
                                                                         ((0x305U 
                                                                           == (IData)(vlSelf->io_csr_debug_read_address))
                                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                                           : 
                                                                          ((0x304U 
                                                                            == (IData)(vlSelf->io_csr_debug_read_address))
                                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                                                            : 
                                                                           ((0x300U 
                                                                             == (IData)(vlSelf->io_csr_debug_read_address))
                                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                                             : 0U))))))))))))))))))))))))))))));
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                                    == (IData)(vlSelf->io_regs_debug_read_address)))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : 
                                                         ((0x15U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                           : 
                                                          ((0x14U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                             : 
                                                            ((0x12U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                              : 
                                                             ((0x11U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                               : 
                                                              ((0x10U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                                 : 
                                                                ((0xeU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                                  : 
                                                                 ((0xdU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                                   : 
                                                                  ((0xcU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                                    : 
                                                                   ((0xbU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                                     : 
                                                                    ((0xaU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                                      : 
                                                                     ((9U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                       : 
                                                                      ((8U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                        : 
                                                                       ((7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                             - (IData)(1U))))
                                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                         : 
                                                                        ((6U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                              - (IData)(1U))))
                                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                               - (IData)(1U))))
                                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                            : 
                                                                           ((3U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                             : 
                                                                            ((2U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                               : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
}

void VFreeRTOSTestTop___024root___eval_ico(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VFreeRTOSTestTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VFreeRTOSTestTop___024root___eval_triggers__ico(VFreeRTOSTestTop___024root* vlSelf);

bool VFreeRTOSTestTop___024root___eval_phase__ico(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VFreeRTOSTestTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VFreeRTOSTestTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VFreeRTOSTestTop___024root___eval_act(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_act\n"); );
}

VL_INLINE_OPT void VFreeRTOSTestTop___024root___nba_sequent__TOP__0(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY;
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY;
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY;
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY;
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY;
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h852f1fe3__0;
    FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h852f1fe3__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0;
    FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h290d5e75__0;
    FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h290d5e75__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready;
    FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_valid;
    FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_valid = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h02686d22__0;
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h02686d22__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h852f1fe3__0;
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h852f1fe3__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0;
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h290d5e75__0;
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h290d5e75__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match;
    FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 = 0;
    CData/*1:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address = 0;
    CData/*1:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward = 0;
    CData/*1:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0 = 0;
    CData/*1:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319 = 0;
    CData/*1:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11 = 0;
    CData/*2:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8 = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data = 0;
    IData/*31:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0;
    FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hbdbad21a__0;
    FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hbdbad21a__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_he98489c7__0;
    FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_he98489c7__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0;
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0;
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0;
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0 = 0;
    CData/*0:0*/ FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0;
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha0202abe__0;
    __VdfgTmp_ha0202abe__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc355a8aa__0;
    __VdfgTmp_hc355a8aa__0 = 0;
    CData/*0:0*/ __VdfgTmp_h482bb971__0;
    __VdfgTmp_h482bb971__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd17546c8__0;
    __VdfgTmp_hd17546c8__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha60b9bcf__0;
    __VdfgTmp_ha60b9bcf__0 = 0;
    CData/*0:0*/ __VdfgTmp_hde0efee6__0;
    __VdfgTmp_hde0efee6__0 = 0;
    CData/*7:0*/ __VdfgTmp_hce0c5097__0;
    __VdfgTmp_hce0c5097__0 = 0;
    SData/*15:0*/ __VdfgTmp_h3640491a__0;
    __VdfgTmp_h3640491a__0 = 0;
    SData/*14:0*/ __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0;
    __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0;
    __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 = 0;
    SData/*14:0*/ __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0;
    __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0;
    __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 = 0;
    SData/*14:0*/ __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0;
    __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0;
    __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 = 0;
    SData/*14:0*/ __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0;
    __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0;
    __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 = 0;
    IData/*31:0*/ __Vdly__FreeRTOSTestTop__DOT__rom_loader__DOT__address;
    __Vdly__FreeRTOSTestTop__DOT__rom_loader__DOT__address = 0;
    CData/*2:0*/ __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY;
    __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY = 0;
    CData/*2:0*/ __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY = 0;
    CData/*3:0*/ __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = 0;
    SData/*15:0*/ __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg = 0;
    CData/*3:0*/ __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg = 0;
    CData/*1:0*/ __Vdlyvdim0__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0;
    __Vdlyvdim0__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0;
    __Vdlyvval__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0;
    __Vdlyvset__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = 0;
    CData/*1:0*/ __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0;
    CData/*2:0*/ __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state = 0;
    IData/*31:0*/ __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY = 0;
    CData/*2:0*/ __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY;
    __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__dummy__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy__DOT__read_pending = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending = 0;
    CData/*0:0*/ __Vdly__FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending = 0;
    // Body
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg 
        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg 
        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg 
        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg;
    __Vdly__FreeRTOSTestTop__DOT__rom_loader__DOT__address 
        = vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY 
        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state 
        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY 
        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY;
    __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY 
        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY;
    __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state 
        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state 
        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state;
    __Vdlyvset__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 = 0U;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 = 0U;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 = 0U;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 = 0U;
    __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 = 0U;
    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg 
        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
    __Vdly__FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending 
        = vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending 
        = vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending 
        = vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy__DOT__read_pending 
        = vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending 
        = vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID;
    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en) {
        __Vdlyvval__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 
            = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__shiftReg;
        __Vdlyvset__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 = 1U;
        __Vdlyvdim0__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0 
            = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value;
    }
    if (((IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3)
             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 
            = (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
               >> 0x18U);
        __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 = 1U;
        __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0 
            = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2)
             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 
            = (0xffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                        >> 0x10U));
        __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 = 1U;
        __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0 
            = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1)
             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 
            = (0xffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
                        >> 8U));
        __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 = 1U;
        __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0 
            = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0)
             : (0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 
            = (0xffU & vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data);
        __Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 = 1U;
        __Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0 
            = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    __Vdly__FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending) 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                                            >> 7U))))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT___GEN_0)));
    __Vdly__FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending) 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                                            >> 6U))))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT___GEN_0)));
    __Vdly__FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending) 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                                            >> 5U))))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT___GEN_0)));
    __Vdly__FreeRTOSTestTop__DOT__dummy__DOT__read_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending) 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                                            >> 4U))))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT___GEN_0)));
    __Vdly__FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending) 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                                            >> 1U))))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT___GEN_0)));
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->io_mem_debug_read_address 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___GEN_1));
    if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid) {
        if ((6U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_6 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_6 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_5 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_5 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_3 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_3 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_1 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_1 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_4 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_4 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((7U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_7 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_0 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_0 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
        if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_2 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_2 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U);
        }
    }
    vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT___GEN_2)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT___GEN_3)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT___GEN_2)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT___GEN_3)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT___GEN_2)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT___GEN_3)));
    vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT___GEN_2)));
    vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT___GEN_3)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT___GEN_2)));
    vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_response_channel_BREADY)))) 
                                                 && (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT___GEN_3)));
    vlSelf->FreeRTOSTestTop__DOT__read_pending = ((1U 
                                                   & (~ (IData)(vlSelf->reset))) 
                                                  && ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)));
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt 
        = ((1U & (~ (IData)(vlSelf->reset))) && (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write) 
                                                  & (8U 
                                                     == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr)))
                                                  ? 
                                                 (0U 
                                                  != vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data)
                                                  : (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT___GEN_5)));
    if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push) 
         & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop))) {
        if ((0U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                          - (IData)(1U))))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0 
                = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
        }
        if ((1U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                          - (IData)(1U))))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1 
                = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
        }
        if ((2U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                          - (IData)(1U))))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2 
                = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
        }
        if ((3U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                          - (IData)(1U))))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3 
                = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
        }
    } else if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push) {
        if ((4U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))) {
            if ((0U == (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0 
                    = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
            }
            if ((1U == (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1 
                    = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
            }
            if ((2U == (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2 
                    = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
            }
            if ((3U == (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3 
                    = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
            }
        } else {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3 
                = ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
        }
    }
    if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid) {
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken) {
            if ((0x17U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_23 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x15U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_21 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x12U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_18 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x10U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_16 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0xfU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0xdU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0xcU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0xaU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((7U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((4U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((2U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((3U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((9U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_30 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x14U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_20 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((6U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((8U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                 >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0xbU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0xeU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x11U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_17 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x13U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_19 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x16U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_22 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x18U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_24 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x19U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_25 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x1aU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_26 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_27 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_28 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_29 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
            if ((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U)))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31 
                    = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                       >> 7U);
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_31 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x14U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x13U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x12U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x11U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x10U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xfU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                   - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xeU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                   - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((6U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((5U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1aU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((4U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((3U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x18U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x16U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x19U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1eU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x15U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((2U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1bU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((1U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x17U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1cU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((7U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1dU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                    - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((8U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((9U == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                 - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xaU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                   - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xbU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                   - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xcU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                   - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xdU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                   - (IData)(1U))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg = 0x7ffU;
        __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = 0U;
        vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__shiftReg = 0U;
        __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg = 0U;
        __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg = 0U;
        __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__dataReg = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret = 0ULL;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ = 0x1000U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ = 0U;
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ = 0x1000U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_ = 0U;
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state = 0U;
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data = 0U;
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID = 0U;
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ = 0U;
        __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data = 0U;
        __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID = 0U;
        __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data = 0U;
        __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__RVALID = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID = 0U;
        __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data = 0U;
        __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3 = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID = 0U;
        vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ = 0x13U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ = 0U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ = 0x13U;
        __Vdly__FreeRTOSTestTop__DOT__rom_loader__DOT__address = 0U;
        vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid = 0U;
    } else {
        __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
            = (((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr
                : (((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                    & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict))
                    ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___T_2)
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending
                        : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                            : ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_)))
                    : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
                        & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                           & (~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                                 | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_2)));
        if (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en) 
             != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__do_deq))) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__do_deq) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT___value_T_3;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7 
                = ((7U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_17)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_7_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_39;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6 
                = ((6U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_15)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_6_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5 
                = ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_13)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_5_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4 
                = ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_11)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_4_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3 
                = ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_9)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_3_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_38;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2 
                = ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_7)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_2_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_37;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_36;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1 
                = ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_5)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_1_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0 
                = ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index))
                    ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_3)
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_0_T_1)
                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_35;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_34;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_32;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_33;
        } else {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid) {
            if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_198;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_203;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_221;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_223;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_194;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_202;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_220;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_199;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_222;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_193;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_201;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_219;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_192;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_196;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_200;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_218;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_216;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_197;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_217;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_195;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_204;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_205;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_206;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_207;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_208;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_209;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_210;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_211;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_212;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_213;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_214;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_215;
                if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_350;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_349;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_348;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_347;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_346;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_345;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_344;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_343;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_341;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_340;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_337;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_336;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_330;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_334;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_335;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_327;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_331;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_351;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_338;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_339;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_320;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_342;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_323;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_324;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_321;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_322;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_325;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_326;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_328;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_329;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_332;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_333;
                } else {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_382;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_381;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_380;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_379;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_378;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_377;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_376;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_375;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_373;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_372;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_369;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_368;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_362;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_366;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_367;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_359;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_363;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_383;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_370;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_371;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_352;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_374;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_355;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_356;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_353;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_354;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_357;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_358;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_360;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_361;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_364;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_365;
                }
            } else if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_518;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_523;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_541;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_543;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_514;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_522;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_540;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_519;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_542;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_513;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_521;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_539;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_512;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_516;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_520;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_538;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_536;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_517;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_537;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_515;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_524;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_525;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_526;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_527;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_528;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_529;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_530;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_531;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_532;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_533;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_534;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_535;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557;
            }
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg))) {
            if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg))) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___shiftReg_T_1;
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___bitsReg_T_1;
            } else if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg 
                    = (0x600U | ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__dataReg) 
                                 << 1U));
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg = 0xbU;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg = 0x7ffU;
            }
        }
        if (vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write) {
            if ((0U != (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))) {
                if ((4U != (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))) {
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___GEN_1;
                }
            }
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime 
                = ((0U == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                    ? vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_3
                    : ((4U == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                        ? vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_5
                        : vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_1));
        } else {
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_1;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data;
            if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
            } else if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = ((0x30200073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                        ? (0x80U | ((0xffffff00U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                    | ((0x70U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                                       | ((8U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                                 >> 4U)) 
                                          | (7U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))))
                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus);
            }
        } else if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) {
            if ((0x300U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19;
            }
            if ((0x300U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
            }
        }
        if (((0xc00U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                         >> 0x14U)) | (0xb00U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0x14U)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                           >> 0x20U));
        }
        if ((0xb06U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                           >> 0x20U));
        }
        if ((0xb05U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                           >> 0x20U));
        }
        if ((0xb09U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                           >> 0x20U));
        }
        if ((0xb08U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                           >> 0x20U));
        }
        if ((0xb03U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                           >> 0x20U));
        }
        if ((0xb04U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                           >> 0x20U));
        }
        if ((0xb07U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                           >> 0x20U));
        }
        if (((0xc02U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                         >> 0x14U)) | (0xb02U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0x14U)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow 
                = (IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                           >> 0x20U));
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) {
            if ((0x304U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                if ((0x305U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_31;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_32;
                }
                if ((0x305U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
                }
            }
            if ((0x304U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
            }
            if ((0xb00U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_3;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10;
            } else if ((0xb80U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_5;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_9;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108;
            }
        } else {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_9;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10;
        }
        if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
             | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID))) {
            vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel 
                = (0xffU & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                            >> 0x1dU)));
        } else if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_write_response_channel_BVALID) 
                    & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY))) {
            vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel = 0U;
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg))) {
            if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg))) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__shiftReg 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___shiftReg_T_1;
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___bitsReg_T_1;
            }
        }
        if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg))) {
            __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___cntReg_T_1;
        } else if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg))) {
            __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg = 0x1b1U;
        }
        if (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg) 
             & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx_io_channel_ready))) {
            __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg = 0U;
        } else if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg))) {
            if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg))) {
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___GEN_0;
            }
        }
        if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT___value_T_1;
        }
        if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) 
             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
                | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr 
                = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                    : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr);
        }
        if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending 
                = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                    : ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_));
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ 
                = ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ 
                = (0x33U != (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ 
                = ((0x17U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                   | ((0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                      | (0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in;
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ = 0x1000U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_;
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg)))) {
            if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_valid) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__dataReg 
                    = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write)
                        ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT___T_5)
                            ? (0xffU & vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data)
                            : 0U) : 0U);
            }
        }
        if ((1U & (~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push) 
                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop))))) {
            if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push) {
                if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___T) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___sp_T_1;
                }
            } else if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___GEN_26;
            }
        }
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
        if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_ready) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT___GEN_1;
        } else if (((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg)) 
                    & (0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg)))) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg = 0U;
        }
        if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid) {
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data 
                    = ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data
                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87);
            }
        } else if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid) {
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
            }
        } else {
            __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
                = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7)
                    : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_44));
        }
        if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
                if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_ 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_ 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_ 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_ 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_;
            }
        }
        if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
                if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_;
                }
            }
        }
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg 
            = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T)
                ? 0x1b1U : (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___cntReg_T_1));
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
            if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read) 
                 & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write)))) {
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state = 2U;
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr 
                    = (0xfffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_);
            } else if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write) {
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state = 4U;
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr 
                    = (0xfffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_);
            }
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid = 0U;
            __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_10;
            __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_11;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid = 0U;
            if ((1U & (~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read) 
                          & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write)))))) {
                if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data 
                        = ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                            ? 0U : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                     ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                                              ? 0U : 
                                             ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_)
                                               ? (IData)(
                                                         ((0U 
                                                           == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                                           ? 
                                                          (0x7fffffffffULL 
                                                           & ((QData)((IData)(
                                                                              (0xffU 
                                                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_))) 
                                                              << 
                                                              (0x18U 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ 
                                                                  << 3U))))
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                                            ? 
                                                           ((0U 
                                                             == 
                                                             (3U 
                                                              & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                             ? (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_)))
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                              ? (QData)((IData)(
                                                                                (0xffff00U 
                                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ 
                                                                                << 8U))))
                                                              : (QData)((IData)(
                                                                                VL_SHIFTL_III(32,32,32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_, 0x10U)))))
                                                            : (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_)))))
                                               : 0U))));
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0 
                        = ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                        ? (0U == (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                        : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                            ? (0U == 
                                               (3U 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                            : (2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))));
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1 
                        = ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                        ? (1U == (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                        : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)))
                                            : (2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))));
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2 
                        = ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                        ? (2U == (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                        : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                            ? (0U != 
                                               (3U 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                            : (2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))));
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3 
                        = ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                        ? (3U == (3U 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                        : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                                            ? ((0U 
                                                != 
                                                (3U 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)) 
                                               & (1U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)))
                                            : (2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))))))));
                }
            }
        } else {
            if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY))) {
                    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state = 0U;
                    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY = 0U;
                }
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_23;
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                     & ((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                          >> 0x1dU)) 
                         & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY)) 
                        | ((0x7fU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending)) 
                                     & (((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 1U))) | 
                           ((0x3fU & ((((IData)(1U) 
                                        << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                            >> 0x1dU)) 
                                       >> 2U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY))) 
                            | ((0x1fU & ((((IData)(1U) 
                                           << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                               >> 0x1dU)) 
                                          >> 3U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY))) 
                               | ((0xfU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending)) 
                                           & (((IData)(1U) 
                                               << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                              >> 4U))) 
                                  | ((7U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending)) 
                                            & (((IData)(1U) 
                                                << 
                                                (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                 >> 0x1dU)) 
                                               >> 5U))) 
                                     | ((3U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending)) 
                                               & (((IData)(1U) 
                                                   << 
                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                    >> 0x1dU)) 
                                                  >> 6U))) 
                                        | (1U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending)) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                      >> 0x1dU)) 
                                                    >> 7U)))))))))))) {
                    __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID = 0U;
                }
            } else {
                __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state 
                    = ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))
                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_29)
                        : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_37));
            }
            if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
                if ((4U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_36;
                }
            }
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ 
                = ((0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                   & ((1U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                    >> 0xcU))) | ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0xcU))) 
                                                  | ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0xcU))) 
                                                     | ((6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                             >> 0xcU))) 
                                                        | ((3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                >> 0xcU))) 
                                                           | (7U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                  >> 0xcU)))))))));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ 
                = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                   >> 0x14U);
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ 
                = ((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? 3U : ((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                             ? 3U : ((0x73U == (0x7fU 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                      ? 2U : ((3U == 
                                               (0x7fU 
                                                & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                               ? 1U
                                               : 0U))));
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ 
                = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4) 
                   | ((0x17U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                      | ((0x37U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                         | ((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                            | ((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                               | (0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))))));
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ 
                = (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                            >> 7U));
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ 
                = (0x23U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ = 0U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ 
                = (3U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_ 
                = (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                         >> 0xcU));
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ = 0x13U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_;
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_ = 0U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ = 0x1000U;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ = 0x13U;
        } else if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid_io_in;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                = ((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)
                    ? ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                        [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                        << 0x18U) | vlSelf->__VdfgTmp_hc7531a34__0)
                    : 0x13U);
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read) 
                          & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write)))))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_6;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_7;
            }
        } else if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
            if ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_25;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_26;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_34;
            }
        }
        if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
            if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY))) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                        = (((1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                             ? vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data
                             : 0U) | (((2U & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                        ? 0xdeadbeefU
                                        : 0U) | (((4U 
                                                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                   ? vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data
                                                   : 0U) 
                                                 | (((8U 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data
                                                      : 0U) 
                                                    | (((0x10U 
                                                         & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                         ? 0xdeadbeefU
                                                         : 0U) 
                                                       | (((0x20U 
                                                            & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                            ? 0xdeadbeefU
                                                            : 0U) 
                                                          | (((0x40U 
                                                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                               ? 0xdeadbeefU
                                                               : 0U) 
                                                             | ((0x80U 
                                                                 & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel))
                                                                 ? 0xdeadbeefU
                                                                 : 0U))))))));
                }
            }
            if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY 
                    = ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))
                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_27)
                        : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_35));
            }
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
            if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID) {
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state = 1U;
            } else if (vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_write_address_channel_AWVALID) {
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state = 3U;
            }
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read = 0U;
            __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_3;
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write = 0U;
            if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID)))) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_1;
            }
        } else {
            if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY))) {
                    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state = 2U;
                    __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY = 0U;
                }
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_7;
            } else if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_14;
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read = 0U;
            } else {
                __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46;
            }
            if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_52;
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_44;
                }
            }
        }
        if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
            if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY))) {
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr 
                        = (0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr);
                }
            } else if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_43;
            }
            if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_9;
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_13;
                }
                if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_47;
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_45;
                    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID 
                        = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_53;
                }
            }
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
            if (vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID) {
                __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state = 1U;
            } else if (vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_write_address_channel_AWVALID) {
                __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state = 3U;
            }
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read = 0U;
            __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_3;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write = 0U;
            if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID)))) {
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_1;
            }
        } else {
            if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY))) {
                    __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state = 2U;
                    __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY = 0U;
                }
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_7;
            } else if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_14;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read = 0U;
            } else {
                __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46;
            }
            if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_52;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_44;
                }
            }
        }
        if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
            if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY))) {
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
                }
            } else if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_43;
            }
            if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read_data 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_bundle_read_data;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__RVALID 
                        = (1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h02686d22__0)));
                }
                if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_47;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_48;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_49;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_50;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_51;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_45;
                    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID 
                        = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_53;
                }
            }
        }
        if ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
            if (vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) {
                __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state = 1U;
            } else if (vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID) {
                __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state = 3U;
            }
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read = 0U;
            __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_3;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write = 0U;
            if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID)))) {
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_1;
            }
        } else {
            if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY))) {
                    __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state = 2U;
                    __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY = 0U;
                }
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_7;
            } else if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_14;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_12;
            } else {
                __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46;
            }
            if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_52;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_44;
                }
            }
        }
        if ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
            if ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                if (((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY))) {
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
                }
            } else if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_43;
            }
            if ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                if ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_9;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_13;
                }
                if ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_47;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_48;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_49;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_50;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_51;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_45;
                    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID 
                        = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_53;
                }
            }
        }
        if (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) {
            vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel 
                = (0xffU & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                            >> 0x1dU)));
        } else if (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID) 
                    & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY))) {
            vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel = 0U;
        }
        if (((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state)) 
             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request) 
                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read) 
                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                = (0xfffffffcU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_);
        }
        if ((1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ 
                = (IData)((0x7fffffffffffffffULL & 
                           ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                             ? (QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                             : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                 ? (QData)((IData)(
                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                    - vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                 : ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                     ? ((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1)) 
                                        << (0x1fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                     : (QData)((IData)(
                                                       ((4U 
                                                         == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                         ? 
                                                        VL_LTS_III(32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                          ? 
                                                         (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                          ^ vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                           ? 
                                                          (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                           | vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                            ? 
                                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                            & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                             ? 
                                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                             >> 
                                                             (0x1fU 
                                                              & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                              ? 
                                                             VL_SHIFTRS_III(32,32,5, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, 
                                                                            (0x1fU 
                                                                             & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func)) 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                 < vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))))))))))))));
        }
        if ((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) {
            __Vdly__FreeRTOSTestTop__DOT__rom_loader__DOT__address 
                = vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT___address_T_1;
            vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid 
                = vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT___GEN_0;
        }
    }
    if (__Vdlyvset__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0) {
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram[__Vdlyvdim0__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0] 
            = __Vdlyvval__FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram__v0;
    }
    if (__Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0) {
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2[__Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0] 
            = __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_2__v0;
    }
    if (__Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0) {
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1[__Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0] 
            = __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_1__v0;
    }
    if (__Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0) {
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0[__Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0] 
            = __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_0__v0;
    }
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value)));
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending));
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending));
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending));
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending));
    FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_7_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_17 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_6_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_5_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_4_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_3_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_15 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_2_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_13 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_11 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1))
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_9 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_7 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_3 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_5 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
           & (7U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1)));
    __VdfgTmp_hce0c5097__0 = vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
        [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_instruction_MPORT_addr_pipe_0];
    vlSelf->io_uart_tx = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___shiftReg_T_1 
        = (0x400U | (0x3ffU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__shiftReg) 
                               >> 1U)));
    vlSelf->io_timer_mtimecmp = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp;
    vlSelf->io_timer_mtime = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime;
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_1 
        = (1ULL + vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime);
    vlSelf->io_timer_mtip = (vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime 
                             >= vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
            ? ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_)
            : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_
                : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_
                    : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg 
        = __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg;
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg 
        = __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg;
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg 
        = __Vdly__FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt) 
            << 0xbU) | (IData)(vlSelf->io_timer_mtip));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___shiftReg_T_1 
        = (0x80U | (0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__shiftReg) 
                             >> 1U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___cntReg_T_1 
        = (0xffffU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__cntReg) 
                      - (IData)(1U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___bitsReg_T_1 
        = (0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg) 
                   - (IData)(1U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT___GEN_0 
        = ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__bitsReg)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value)));
    FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value) 
           == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___T 
        = (4U > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___sp_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___GEN_26 
        = (7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                 - (0U < (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr 
        = ((0U < (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))
            ? ((3U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                             - (IData)(1U)))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3
                : ((2U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                                 - (IData)(1U)))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2
                    : ((1U == (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                                     - (IData)(1U))))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1
                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0)))
            : 0U);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_9 
        = ((1U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit)
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle
            : (1ULL + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle));
    vlSelf->io_csr_debug_read_data = ((0xb89U == (IData)(vlSelf->io_csr_debug_read_address))
                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
                                       : ((0xb09U == (IData)(vlSelf->io_csr_debug_read_address))
                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                                           : ((0xb88U 
                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow
                                               : ((0xb08U 
                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)
                                                   : 
                                                  ((0xb87U 
                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow
                                                    : 
                                                   ((0xb07U 
                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)
                                                     : 
                                                    ((0xb86U 
                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow
                                                      : 
                                                     ((0xb06U 
                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)
                                                       : 
                                                      ((0xb85U 
                                                        == (IData)(vlSelf->io_csr_debug_read_address))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow
                                                        : 
                                                       ((0xb05U 
                                                         == (IData)(vlSelf->io_csr_debug_read_address))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)
                                                         : 
                                                        ((0xb84U 
                                                          == (IData)(vlSelf->io_csr_debug_read_address))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow
                                                          : 
                                                         ((0xb04U 
                                                           == (IData)(vlSelf->io_csr_debug_read_address))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)
                                                           : 
                                                          ((0xb83U 
                                                            == (IData)(vlSelf->io_csr_debug_read_address))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow
                                                            : 
                                                           ((0xb03U 
                                                             == (IData)(vlSelf->io_csr_debug_read_address))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)
                                                             : 
                                                            ((0xb82U 
                                                              == (IData)(vlSelf->io_csr_debug_read_address))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                              : 
                                                             ((0xb02U 
                                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                               : 
                                                              ((0xb80U 
                                                                == (IData)(vlSelf->io_csr_debug_read_address))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                                : 
                                                               ((0xb00U 
                                                                 == (IData)(vlSelf->io_csr_debug_read_address))
                                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                                 : 
                                                                ((0xc82U 
                                                                  == (IData)(vlSelf->io_csr_debug_read_address))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                                  : 
                                                                 ((0xc02U 
                                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                                   : 
                                                                  ((0xc80U 
                                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                                    : 
                                                                   ((0xc00U 
                                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                                     : 
                                                                    ((0x320U 
                                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit
                                                                      : 
                                                                     ((0x342U 
                                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                                       : 
                                                                      ((0x341U 
                                                                        == (IData)(vlSelf->io_csr_debug_read_address))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                                        : 
                                                                       ((0x340U 
                                                                         == (IData)(vlSelf->io_csr_debug_read_address))
                                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                                         : 
                                                                        ((0x344U 
                                                                          == (IData)(vlSelf->io_csr_debug_read_address))
                                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in
                                                                          : 
                                                                         ((0x305U 
                                                                           == (IData)(vlSelf->io_csr_debug_read_address))
                                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                                           : 
                                                                          ((0x304U 
                                                                            == (IData)(vlSelf->io_csr_debug_read_address))
                                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                                                            : 
                                                                           ((0x300U 
                                                                             == (IData)(vlSelf->io_csr_debug_read_address))
                                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                                             : 0U))))))))))))))))))))))))))))));
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                                    == (IData)(vlSelf->io_regs_debug_read_address)))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : 
                                                         ((0x15U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                           : 
                                                          ((0x14U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                             : 
                                                            ((0x12U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                              : 
                                                             ((0x11U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                               : 
                                                              ((0x10U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                                 : 
                                                                ((0xeU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                                  : 
                                                                 ((0xdU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                                   : 
                                                                  ((0xcU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                                    : 
                                                                   ((0xbU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                                     : 
                                                                    ((0xaU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                                      : 
                                                                     ((9U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                       : 
                                                                      ((8U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                        : 
                                                                       ((7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                             - (IData)(1U))))
                                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                         : 
                                                                        ((6U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                              - (IData)(1U))))
                                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                               - (IData)(1U))))
                                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                            : 
                                                                           ((3U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                             : 
                                                                            ((2U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                               : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_valid 
        = (1U & (~ ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full)) 
                    & (IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg 
        = __Vdly__FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___bitsReg_T_1 
        = (0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__bitsReg) 
                   - (IData)(1U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_ready 
        = (1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6));
    vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending 
        = __Vdly__FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending;
    vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending 
        = __Vdly__FreeRTOSTestTop__DOT__dummy__DOT__read_pending;
    vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending 
        = __Vdly__FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending;
    vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending 
        = __Vdly__FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending;
    vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending 
        = __Vdly__FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending;
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
        = __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11) 
            > (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___io_channel_ready_T 
        = (0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT___cntReg_T_1 
        = (0xffffU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__tx__DOT__cntReg) 
                      - (IData)(1U)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_192 
        = ((0U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_193 
        = ((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_194 
        = ((2U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_195 
        = ((3U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_196 
        = ((4U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_197 
        = ((5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_198 
        = ((6U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_199 
        = ((7U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_200 
        = ((8U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_201 
        = ((9U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_202 
        = ((0xaU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_203 
        = ((0xbU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_204 
        = ((0xcU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_205 
        = ((0xdU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_206 
        = ((0xeU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_207 
        = ((0xfU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_208 
        = ((0x10U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_209 
        = ((0x11U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_210 
        = ((0x12U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_211 
        = ((0x13U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_212 
        = ((0x14U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_213 
        = ((0x15U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_214 
        = ((0x16U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_215 
        = ((0x17U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_216 
        = ((0x18U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_217 
        = ((0x19U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_218 
        = ((0x1aU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_219 
        = ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_220 
        = ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_221 
        = ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_222 
        = ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_223 
        = ((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit 
        = (((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31)
             : ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30)
                 : ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                        >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29)
                     : ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28)
                         : ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                >> 2U)))
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27)
                             : ((0x1aU == (0x1fU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26)
                                 : ((0x19U == (0x1fU 
                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                  >> 2U)))
                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25)
                                     : ((0x18U == (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                      >> 2U)))
                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24)
                                         : ((0x17U 
                                             == (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                    >> 2U)))
                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23)
                                             : ((0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                     >> 2U)))
                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22)
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21)
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20)
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19)
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18)
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17)
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16)
                                                       : 
                                                      ((0xfU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15)
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14)
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13)
                                                          : 
                                                         ((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12)
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11)
                                                            : 
                                                           ((0xaU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10)
                                                             : 
                                                            ((9U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9)
                                                              : 
                                                             ((8U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8)
                                                               : 
                                                              ((7U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7)
                                                                : 
                                                               ((6U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6)
                                                                 : 
                                                                ((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5)
                                                                  : 
                                                                 ((4U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4)
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3)
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1)
                                                                      : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0)))))))))))))))))))))))))))))))) 
           & (((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31
                : ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                       >> 2U))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30
                    : ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                           >> 2U)))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29
                        : ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                               >> 2U)))
                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28
                            : ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                   >> 2U)))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                 >> 2U)))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                     >> 2U)))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                >> 2U)))
                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                    >> 2U)))
                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                        >> 2U)))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                         >> 2U)))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                          >> 2U)))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                           >> 2U)))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                            >> 2U)))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                             >> 2U)))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                              >> 2U)))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                               >> 2U)))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                >> 2U)))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                 >> 2U)))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                  >> 2U)))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                   >> 2U)))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                    >> 2U)))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                     >> 2U)))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                      >> 2U)))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                       >> 2U)))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                        >> 2U)))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                         >> 2U)))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                          >> 2U)))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                           >> 2U)))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                            >> 2U)))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                             >> 2U)))
                                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1
                                                                         : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0))))))))))))))))))))))))))))))) 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                  >> 7U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_)) 
               & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_) 
                         == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                        & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_)) 
               & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_) 
                         == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                        & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_response_channel_BREADY 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
              >> 1U));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_response_channel_BREADY 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
              >> 4U));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_response_channel_BREADY 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
              >> 5U));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_response_channel_BREADY 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
              >> 6U));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
              >> 7U));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid)) 
           & (1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43 
        = ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
              >> 0x1fU) ? 0xffffU : 0U) << 0x10U) | 
           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
            >> 0x10U));
    if ((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_383 = 2U;
        FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_383 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31;
        FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319 
            = ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30)
                : ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                       >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29)
                    : ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                           >> 2U)))
                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28)
                        : ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                               >> 2U)))
                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27)
                            : ((0x1aU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                   >> 2U)))
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26)
                                : ((0x19U == (0x1fU 
                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25)
                                    : ((0x18U == (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                     >> 2U)))
                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24)
                                        : ((0x17U == 
                                            (0x1fU 
                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                >> 2U)))
                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23)
                                            : ((0x16U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                    >> 2U)))
                                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22)
                                                : (
                                                   (0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14)
                                                           : 
                                                          ((0xdU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13)
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12)
                                                             : 
                                                            ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11)
                                                              : 
                                                             ((0xaU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10)
                                                               : 
                                                              ((9U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9)
                                                                : 
                                                               ((8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8)
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7)
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6)
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5)
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4)
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3)
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                           >> 2U)))
                                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2)
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                            >> 2U)))
                                                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1)
                                                                        : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0)))))))))))))))))))))))))))))));
    }
    if ((1U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_512 
            = ((0U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_513 
            = ((1U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_514 
            = ((2U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_515 
            = ((3U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_516 
            = ((4U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_517 
            = ((5U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_518 
            = ((6U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_519 
            = ((7U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_520 
            = ((8U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_521 
            = ((9U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_522 
            = ((0xaU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_523 
            = ((0xbU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_524 
            = ((0xcU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_525 
            = ((0xdU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_526 
            = ((0xeU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_527 
            = ((0xfU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_528 
            = ((0x10U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_529 
            = ((0x11U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_530 
            = ((0x12U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_531 
            = ((0x13U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_532 
            = ((0x14U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_533 
            = ((0x15U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_534 
            = ((0x16U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_535 
            = ((0x17U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_536 
            = ((0x18U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_537 
            = ((0x19U != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_538 
            = ((0x1aU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_539 
            = ((0x1bU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_540 
            = ((0x1cU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_541 
            = ((0x1dU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_542 
            = ((0x1eU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_543 
            = ((0x1fU != (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 
            = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31));
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_512 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_513 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_514 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_515 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_516 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_517 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_518 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_519 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_520 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_521 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_522 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_523 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_524 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_525 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_526 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_527 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_528 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_529 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_530 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_531 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_532 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_533 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_534 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_535 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_536 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_537 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_538 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_539 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_540 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_541 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_542 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_543 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31;
        if ((1U < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 
                = (3U & ((0U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 
                = (3U & ((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 
                = (3U & ((2U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 
                = (3U & ((3U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 
                = (3U & ((4U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 
                = (3U & ((5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 
                = (3U & ((6U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 
                = (3U & ((7U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 
                = (3U & ((8U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 
                = (3U & ((9U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 
                = (3U & ((0xaU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 
                = (3U & ((0xbU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 
                = (3U & ((0xcU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 
                = (3U & ((0xdU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 
                = (3U & ((0xeU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 
                = (3U & ((0xfU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 
                = (3U & ((0x10U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 
                = (3U & ((0x11U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 
                = (3U & ((0x12U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 
                = (3U & ((0x13U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 
                = (3U & ((0x14U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 
                = (3U & ((0x15U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 
                = (3U & ((0x16U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 
                = (3U & ((0x17U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 
                = (3U & ((0x18U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 
                = (3U & ((0x19U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 
                = (3U & ((0x1aU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 
                = (3U & ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 
                = (3U & ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 
                = (3U & ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 
                = (3U & ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 
                = (3U & ((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31)));
        } else {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 
                = (3U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31));
        }
    }
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3 
        = ((3U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))
            ? 3U : (3U & ((IData)(1U) + (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_351 
        = ((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31));
    if ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_382 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_350 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_382 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_350 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30;
    }
    if ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_381 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_349 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_381 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_349 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29;
    }
    if ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_380 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_348 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_380 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_348 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28;
    }
    if ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_379 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_347 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_379 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_347 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27;
    }
    if ((0x1aU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_378 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_346 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_378 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_346 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26;
    }
    if ((0x19U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_377 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_345 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_377 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_345 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25;
    }
    if ((0x18U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_376 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_344 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_376 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_344 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24;
    }
    if ((0x17U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_375 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_343 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_375 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_343 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23;
    }
    if ((0x16U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_374 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_342 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_374 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_342 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22;
    }
    if ((0x15U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_373 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_341 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_373 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_341 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21;
    }
    if ((0x14U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_372 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_340 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_372 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_340 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20;
    }
    if ((0x13U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_371 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_339 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_371 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_339 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19;
    }
    if ((0x12U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_370 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_338 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_370 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_338 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18;
    }
    if ((0x11U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_369 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_337 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_369 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_337 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17;
    }
    if ((0x10U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_368 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_336 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_368 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_336 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16;
    }
    if ((0xfU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_367 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_335 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_367 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_335 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15;
    }
    if ((0xeU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_366 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_334 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_366 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_334 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14;
    }
    if ((0xdU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_365 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_333 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_365 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_333 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13;
    }
    if ((0xcU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_364 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_332 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_364 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_332 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12;
    }
    if ((0xbU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_363 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_331 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_363 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_331 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11;
    }
    if ((0xaU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_362 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_330 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_362 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_330 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10;
    }
    if ((9U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_361 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_329 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_361 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_329 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9;
    }
    if ((8U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_360 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_328 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_360 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_328 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8;
    }
    if ((7U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_359 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_327 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_359 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_327 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7;
    }
    if ((6U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_358 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_326 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_358 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_326 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6;
    }
    if ((5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_357 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_325 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_357 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_325 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5;
    }
    if ((4U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_356 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_324 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_356 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_324 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4;
    }
    if ((3U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_355 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_323 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_355 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_323 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3;
    }
    if ((2U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_354 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_322 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_354 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_322 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2;
    }
    if ((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_353 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_321 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_353 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_321 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1;
    }
    if ((0U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_352 = 2U;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_320 
            = FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_352 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_320 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0;
    }
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY 
        = __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY;
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state 
        = __Vdly__FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state;
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY 
        = __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY;
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state 
        = __Vdly__FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state;
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY 
        = __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY;
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr 
        = __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state 
        = __Vdly__FreeRTOSTestTop__DOT__mem_slave__DOT__state;
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source)
            : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY 
        = __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY;
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID 
        = __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID;
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h290d5e75__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
              & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                 >> 2U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_9 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read)
            ? ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                ? (((IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_valid) 
                    << 1U) | (1U & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg))))
                : ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                    ? 0x1c200U : ((0xcU == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr))
                                   ? vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram
                                  [vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value]
                                   : 0U))) : vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read_data);
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT___T_5 = 
        ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg)) 
         & (0x10U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr)));
    FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read) 
           & (0xcU == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr)));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_bundle_read_data 
        = ((0xcU == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
            ? (IData)((vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp 
                       >> 0x20U)) : ((8U == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
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
                                              : 0U))));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_3 
        = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data)));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___mtime_T_5 
        = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data)) 
            << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtime)));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT___GEN_1 
        = ((8U == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
            ? (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp 
                                 >> 0x20U))) << 0x20U) 
               | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data)))
            : ((0xcU == (0xfU & vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr))
                ? (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp)))
                : vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__mtimecmp));
    FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h290d5e75__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
              & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                 >> 3U)));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_12 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__read_pending)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read));
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
              & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_write_response_channel_BVALID 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID)) 
           | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                >> 1U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok)) 
              | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                   >> 2U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID)) 
                 | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                      >> 3U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID)) 
                    | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                         >> 4U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok)) 
                       | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                            >> 5U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok)) 
                          | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                               >> 6U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok)) 
                             | (((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__write_sel) 
                                 >> 7U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok)))))))));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h02686d22__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__RVALID) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
              & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                 >> 3U)));
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h02686d22__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
              & ((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                 >> 2U)));
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
              & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID)) 
           | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                >> 1U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending)) 
              | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                   >> 2U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID)) 
                 | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                      >> 3U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__RVALID)) 
                    | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                         >> 4U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending)) 
                       | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                            >> 5U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending)) 
                          | ((((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                               >> 6U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending)) 
                             | (((IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch__DOT__read_sel) 
                                 >> 7U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending)))))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_valid 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT___T_5));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__do_deq 
        = ((IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_valid) 
           & (IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx_io_channel_ready 
        = (1U & ((~ ((IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match) 
                     & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full))) 
                 | (IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo_io_deq_ready)));
    FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_he98489c7__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_write_response_channel_BVALID));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_14 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h02686d22__0)
            ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_14 
        = ((IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h02686d22__0)
            ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_13 
        = ((~ (IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h02686d22__0)) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__RVALID) 
              | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read)));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_14 
        = ((IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0)
            ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_13 
        = ((~ (IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0)) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__RVALID) 
              | (IData)(vlSelf->FreeRTOSTestTop__DOT__read_pending)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_23 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_channels_read_data_channel_RVALID)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read 
        = ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state 
        = __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state;
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write 
        = ((1U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           & ((2U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                 & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request 
        = ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           | ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT___GEN_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___05Fio_in_valid) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__tx__DOT__buf___DOT__stateReg));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx_io_channel_ready) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rx__DOT__valReg));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7 
        = ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
            : 1U);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_44 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_)
            ? ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))
                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
                : 2U) : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state));
    vlSelf->io_bus_address = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg;
    vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT___GEN_0 
        = ((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                     & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                         >> 0x1dU)) 
                        >> 1U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__read_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT___GEN_2 
        = ((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                     & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                         >> 0x1dU)) 
                        >> 1U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy__DOT___GEN_0 
        = ((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                    & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                        >> 0x1dU)) 
                       >> 4U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__read_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy__DOT___GEN_2 
        = ((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                    & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                        >> 0x1dU)) 
                       >> 4U))) | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT___GEN_0 
        = ((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                  & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                      >> 0x1dU)) >> 5U))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__read_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT___GEN_2 
        = ((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                  & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                      >> 0x1dU)) >> 5U))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT___GEN_0 
        = ((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                  & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                      >> 0x1dU)) >> 6U))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__read_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT___GEN_2 
        = ((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                  & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                      >> 0x1dU)) >> 6U))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT___GEN_0 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
            & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                >> 0x1dU)) >> 7U)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__read_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT___GEN_2 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
            & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                >> 0x1dU)) >> 7U)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending));
    vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT___GEN_3 
        = ((0x7fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending) 
                     & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                         & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                            >> 1U)) & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY)))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_data_ok));
    vlSelf->FreeRTOSTestTop__DOT__dummy__DOT___GEN_3 
        = ((0xfU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_pending) 
                    & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                        & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                            >> 0x1dU)) 
                           >> 4U)) & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY)))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy__DOT__write_data_ok));
    vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT___GEN_3 
        = ((7U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_pending) 
                  & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                      & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                          >> 0x1dU)) 
                         >> 5U)) & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY)))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_1__DOT__write_data_ok));
    vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT___GEN_3 
        = ((3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_pending) 
                  & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                      & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                          >> 0x1dU)) 
                         >> 6U)) & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY)))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_2__DOT__write_data_ok));
    vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT___GEN_3 
        = (((((IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_pending) 
              & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID)) 
             & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY)) 
            & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                >> 0x1dU)) >> 7U)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_3__DOT__write_data_ok));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
           & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                              >> 0x1dU)));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID 
        = (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                    & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                        >> 0x1dU)) 
                       >> 3U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID 
        = (0x3fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                    & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                        >> 0x1dU)) 
                       >> 2U)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_25 
        = ((~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
               & ((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                    >> 0x1dU)) & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY)) 
                  | ((0x7fU & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__dummy_vga__DOT__write_pending)) 
                               & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                  >> 1U))) | ((0x3fU 
                                               & ((((IData)(1U) 
                                                    << 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
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
                                                                   >> 7U)))))))))))) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID));
    if ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_37 
            = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_he98489c7__0)
                ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_36 
            = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_he98489c7__0) 
               | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_35 
            = ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_he98489c7__0)) 
               & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_34 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_25;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_37 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_36 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_35 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_34 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID;
    }
    FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hbdbad21a__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           & ((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                >> 0x1dU)) & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY)) 
              | ((0x7fU & ((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                            >> 1U) & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_1_write_data_channel_WREADY))) 
                 | ((0x3fU & ((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                >> 0x1dU)) 
                               >> 2U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY))) 
                    | ((0x1fU & ((((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                                   >> 0x1dU)) 
                                  >> 3U) & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY))) 
                       | ((0xfU & ((((IData)(1U) << 
                                     (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                      >> 0x1dU)) >> 4U) 
                                   & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_4_write_data_channel_WREADY))) 
                          | ((7U & ((((IData)(1U) << 
                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                       >> 0x1dU)) >> 5U) 
                                    & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_5_write_data_channel_WREADY))) 
                             | ((3U & ((((IData)(1U) 
                                         << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                             >> 0x1dU)) 
                                        >> 6U) & (IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_6_write_data_channel_WREADY))) 
                                | ((IData)(FreeRTOSTestTop__DOT__bus_switch_io_slaves_7_write_data_channel_WREADY) 
                                   & (((IData)(1U) 
                                       << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                                      >> 7U))))))))));
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0 
        = (0x3fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY) 
                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                       & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                          >> 2U))));
    vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                              >> 0x1dU)));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_write_address_channel_AWVALID 
        = (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                    & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                        >> 0x1dU)) 
                       >> 3U)));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_write_address_channel_AWVALID 
        = (0x3fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
                    & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                        >> 0x1dU)) 
                       >> 2U)));
    FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0 
        = (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY) 
                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
                       & (((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                           >> 0x1dU)) 
                          >> 3U))));
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
              & ((IData)(1U) << (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__bus_address_reg 
                                 >> 0x1dU))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT___GEN_5 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ram_MPORT_en) 
           | ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__do_deq)
               ? ((1U != ((((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__maybe_full) 
                            & (IData)(FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__ptr_match))
                            ? 4U : 0U) | (3U & ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__enq_ptr_value) 
                                                - (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__rxFifo__DOT__deq_ptr_value))))) 
                  & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt))
               : (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__interrupt)));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_3 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_7 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__ARREADY) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_3 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID));
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_7 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__ARREADY) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_read_address_channel_ARVALID)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__read));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_3 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID));
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_7 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__ARREADY) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_read_address_channel_ARVALID)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__read));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_29 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hbdbad21a__0)
            ? 5U : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__state));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_26 
        = ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hbdbad21a__0)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_27 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hbdbad21a__0) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__BREADY));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID));
    FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID));
    if ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_53 
            = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID));
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_52 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_47 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_48 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_49 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_50 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_51 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_44 
            = ((~ (IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0)) 
               & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY));
        if (FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0) {
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46 = 4U;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_43 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
        } else {
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_43 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr;
        }
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_45 
            = ((IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0) 
               | (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY));
    } else {
        if ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_53 
                = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID));
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_52 
                = ((IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0) 
                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write));
            if (FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0) {
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_47 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_48 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_49 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_50 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_51 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46 = 5U;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_47 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_48 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_49 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_50 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_51 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3;
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state;
            }
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_45 
                = ((~ (IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0)) 
                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY));
        } else {
            if ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_53 
                    = (1U & (~ (IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)));
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46 
                    = ((IData)(FreeRTOSTestTop__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)
                        ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state));
            } else {
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_53 
                    = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__BVALID));
                vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_46 
                    = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state;
            }
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_52 
                = ((5U != (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__state)) 
                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write));
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_47 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_48 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_0;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_49 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_1;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_50 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_2;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_51 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_strobe_3;
            vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_45 
                = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__WREADY;
        }
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_44 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__AWREADY;
        vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_43 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr;
    }
    vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_write_address_channel_AWVALID));
    FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h852f1fe3__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave_io_channels_write_address_channel_AWVALID));
    if ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_53 
            = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID));
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_52 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_47 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_48 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_49 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_50 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_51 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_44 
            = ((~ (IData)(FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h852f1fe3__0)) 
               & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY));
        if (FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h852f1fe3__0) {
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46 = 4U;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_43 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr;
        } else {
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_43 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr;
        }
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_45 
            = ((IData)(FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h852f1fe3__0) 
               | (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY));
    } else {
        if ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_53 
                = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID));
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_52 
                = ((IData)(FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0) 
                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write));
            if (FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0) {
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_47 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_48 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_0;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_49 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_1;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_50 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_2;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_51 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_strobe_3;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46 = 5U;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_47 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_48 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_49 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_50 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_51 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3;
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state;
            }
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_45 
                = ((~ (IData)(FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0)) 
                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY));
        } else {
            if ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_53 
                    = (1U & (~ (IData)(FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h290d5e75__0)));
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46 
                    = ((IData)(FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT____VdfgTmp_h290d5e75__0)
                        ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state));
            } else {
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_53 
                    = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__BVALID));
                vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_46 
                    = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state;
            }
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_52 
                = ((5U != (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__state)) 
                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write));
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_47 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_data;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_48 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_0;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_49 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_1;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_50 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_2;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_51 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__write_strobe_3;
            vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_45 
                = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__WREADY;
        }
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_44 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__AWREADY;
        vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT___GEN_43 
            = vlSelf->FreeRTOSTestTop__DOT__machine_timer__DOT__slave__DOT__addr;
    }
    vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_write_address_channel_AWVALID));
    FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h852f1fe3__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave_io_channels_write_address_channel_AWVALID));
    if ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_53 
            = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID));
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_52 
            = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_47 
            = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_44 
            = ((~ (IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h852f1fe3__0)) 
               & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY));
        if (FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h852f1fe3__0) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46 = 4U;
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_43 
                = (0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__addr);
        } else {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state;
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_43 
                = (0xffU & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr));
        }
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_45 
            = ((IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h852f1fe3__0) 
               | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY));
    } else {
        if ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_53 
                = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID));
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_52 
                = ((IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0) 
                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write));
            if (FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_47 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_data;
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46 = 5U;
            } else {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_47 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data;
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state;
            }
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_45 
                = ((~ (IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_hd5d3a17e__0)) 
                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY));
        } else {
            if ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state))) {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_53 
                    = (1U & (~ (IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h290d5e75__0)));
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46 
                    = ((IData)(FreeRTOSTestTop__DOT__uart__DOT__slave__DOT____VdfgTmp_h290d5e75__0)
                        ? 0U : (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state));
            } else {
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_53 
                    = (1U & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__BVALID));
                vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_46 
                    = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state;
            }
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_52 
                = ((5U != (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__state)) 
                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write));
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_47 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__write_data;
            vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_45 
                = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__WREADY;
        }
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_44 
            = vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__AWREADY;
        vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT___GEN_43 
            = (0xffU & (IData)(vlSelf->FreeRTOSTestTop__DOT__uart__DOT__slave__DOT__addr));
    }
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func 
        = ((0x13U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))
            ? ((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                                            ? 2U
                                                            : 1U))))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                    | ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                          | ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                                | ((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                                   | (0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))))))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_6 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_7 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write));
    FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_write)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master_io_bundle_read));
    if (__Vdlyvset__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0) {
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3[__Vdlyvdim0__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0] 
            = __Vdlyvval__FreeRTOSTestTop__DOT__mem__DOT__mem_3__v0;
    }
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall 
        = (1U & ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                  ? (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid))
                  : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                      ? (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid))
                      : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 5U)) & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 2U)) & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                                | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__write_valid) 
                                                   & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___T_2 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87 
        = ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
            ? ((2U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                ? VL_SHIFTR_III(32,32,32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data, 0x10U)
                : ((1U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                    ? (0xffffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                  >> 8U)) : ((0U == 
                                              (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                              ? (0xffffU 
                                                 & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                                              : VL_SHIFTR_III(32,32,32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data, 0x10U))))
            : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                ? ((2U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                    ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43
                    : ((1U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                        ? ((((0x800000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                              ? 0xffffU : 0U) << 0x10U) 
                           | (0xffffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                         >> 8U))) : 
                       ((0U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                         ? ((((0x8000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                               ? 0xffffU : 0U) << 0x10U) 
                            | (0xffffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data))
                         : FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43)))
                : ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                    ? ((2U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                        ? (0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                    >> 0x10U)) : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                      >> 8U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data, 0x18U))))
                    : ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                        ? ((2U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                            ? ((((0x800000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                                  ? 0xffffffU : 0U) 
                                << 8U) | (0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                   >> 0x10U)))
                            : ((1U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                ? ((((0x8000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                                      ? 0xffffffU : 0U) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                 >> 8U)))
                                : ((0U == (3U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                    ? ((((0x80U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (0xffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data))
                                    : ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                          >> 0x1fU)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data 
                                          >> 0x18U)))))
                        : 0U))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
        = ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
            ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_valid)
                ? ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__read_data
                    : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87)
                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data)
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_10 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__ARVALID));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT___GEN_11 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__axi_master__DOT__RREADY));
    vlSelf->io_mem_debug_read_data = ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                                       [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                       << 0x18U) | 
                                      ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                        [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x10U) | 
                                       ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                         [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                         << 8U) | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                        [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])));
    vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT___GEN_9 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__read_pending)
            ? ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3
                [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0] 
                << 0x18U) | ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                              [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0] 
                              << 0x10U) | ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                                            [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0
                                           [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0])))
            : vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__read_data);
    vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 
        = (0x7fffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in 
        = ((0xb89U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                       >> 0x14U)) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
            : ((0xb09U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                           >> 0x14U)) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                : ((0xb88U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                               >> 0x14U)) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow
                    : ((0xb08U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                   >> 0x14U)) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)
                        : ((0xb87U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0x14U)) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow
                            : ((0xb07U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))
                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)
                                : ((0xb86U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow
                                    : ((0xb06U == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0x14U))
                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)
                                        : ((0xb85U 
                                            == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0x14U))
                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow
                                            : ((0xb05U 
                                                == 
                                                (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0x14U))
                                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)
                                                : (
                                                   (0xb84U 
                                                    == 
                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0x14U))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow
                                                    : 
                                                   ((0xb04U 
                                                     == 
                                                     (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)
                                                     : 
                                                    ((0xb83U 
                                                      == 
                                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0x14U))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow
                                                      : 
                                                     ((0xb03U 
                                                       == 
                                                       (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)
                                                       : 
                                                      ((0xb82U 
                                                        == 
                                                        (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                        : 
                                                       ((0xb02U 
                                                         == 
                                                         (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                         : 
                                                        ((0xb80U 
                                                          == 
                                                          (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                           >> 0x14U))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                          : 
                                                         ((0xb00U 
                                                           == 
                                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                           : 
                                                          ((0xc82U 
                                                            == 
                                                            (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                             >> 0x14U))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                            : 
                                                           ((0xc02U 
                                                             == 
                                                             (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                              >> 0x14U))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                             : 
                                                            ((0xc80U 
                                                              == 
                                                              (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                               >> 0x14U))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                              : 
                                                             ((0xc00U 
                                                               == 
                                                               (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                >> 0x14U))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                               : 
                                                              ((0x320U 
                                                                == 
                                                                (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                 >> 0x14U))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit
                                                                : 
                                                               ((0x342U 
                                                                 == 
                                                                 (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                  >> 0x14U))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                                 : 
                                                                ((0x341U 
                                                                  == 
                                                                  (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                   >> 0x14U))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                                  : 
                                                                 ((0x340U 
                                                                   == 
                                                                   (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                    >> 0x14U))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                                   : 
                                                                  ((0x344U 
                                                                    == 
                                                                    (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                     >> 0x14U))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in
                                                                    : 
                                                                   ((0x305U 
                                                                     == 
                                                                     (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                      >> 0x14U))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                                     : 
                                                                    ((0x304U 
                                                                      == 
                                                                      (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                       >> 0x14U))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                                                      : 
                                                                     ((0x300U 
                                                                       == 
                                                                       (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                        >> 0x14U))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                                       : 0U))))))))))))))))))))))))))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return 
        = (IData)(((0x67U == (0xfffU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                   & ((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xfU))) | 
                      (5U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xfU))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7 
        = ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
              >> 0x1fU) ? 0x1fffffU : 0U) << 0xbU) 
           | (0x7ffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0 
        = ((0x73U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_) 
           | (0x100073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 
        = ((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | (0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 
        = ((0x33U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | ((0x23U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
              | (0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4 
        = ((0x33U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | ((0x13U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
              | (3U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address 
        = __Vdly__FreeRTOSTestTop__DOT__rom_loader__DOT__address;
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
        = __Vdly__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_) 
           & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr 
        = ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_return)) 
           & (0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in 
        = ((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                  >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
               | ((0xff000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_) 
                  | ((0x800U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                >> 9U)) | (0x7feU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)))))
            : ((0x17U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                ? (0xfffff000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                : ((0x37U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? (0xfffff000U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                    : ((0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                        ? ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                              >> 0x1fU) ? 0xfffffU : 0U) 
                            << 0xcU) | ((0x800U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 7U)))))
                        : ((0x23U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                            ? ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                  >> 0x1fU) ? 0x1fffffU
                                  : 0U) << 0xbU) | 
                               ((0x7e0U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 7U))))
                            : ((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                : ((3U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                    ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                    : ((0x13U == (0x7fU 
                                                  & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                        ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                        : ((((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x1fU)
                                              ? 0xfffffU
                                              : 0U) 
                                            << 0xcU) 
                                           | (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x14U))))))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           | (0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4) 
           | ((0x23U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
              | ((0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                 | ((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                    | ((~ ((0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                           & ((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0xcU))) 
                              | ((7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU))) 
                                 | (6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0xcU))))))) 
                       & (0x73U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem 
        = ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
            ? ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_)
            : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_
                : ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in
                    : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)));
    vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address);
    vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT___GEN_0 
        = ((0x19U == vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid));
    if (vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid) {
        vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__addr;
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write;
        vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
            = vlSelf->FreeRTOSTestTop__DOT__mem_slave__DOT__write_data;
    } else if ((0x19U >= vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) {
        vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address 
            = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)) 
                                           << 2U)));
        vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data 
            = ((0x19U >= (0x1fU & (IData)((0x3fffffffffffffffULL 
                                           & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address))))))
                ? vlSelf->FreeRTOSTestTop__DOT__instruction_rom__DOT__mem
               [(0x1fU & (IData)((0x3fffffffffffffffULL 
                                  & (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__address)))))]
                : 0U);
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en = 1U;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_address = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem_io_bundle_write_data = 0U;
        vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_0_MPORT_en = 0U;
    }
    __VdfgTmp_h3640491a__0 = ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_1
                               [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                               << 8U) | (IData)(__VdfgTmp_hce0c5097__0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken 
        = (((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31)
             : ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                    >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30)
                 : ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                        >> 2U))) ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29)
                     : ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28)
                         : ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27)
                             : ((0x1aU == (0x1fU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26)
                                 : ((0x19U == (0x1fU 
                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25)
                                     : ((0x18U == (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24)
                                         : ((0x17U 
                                             == (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23)
                                             : ((0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22)
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21)
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20)
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19)
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18)
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17)
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16)
                                                       : 
                                                      ((0xfU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15)
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14)
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13)
                                                          : 
                                                         ((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12)
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11)
                                                            : 
                                                           ((0xaU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10)
                                                             : 
                                                            ((9U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9)
                                                              : 
                                                             ((8U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8)
                                                               : 
                                                              ((7U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7)
                                                                : 
                                                               ((6U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6)
                                                                 : 
                                                                ((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5)
                                                                  : 
                                                                 ((4U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4)
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3)
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1)
                                                                      : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0)))))))))))))))))))))))))))))))) 
           & ((((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                    >> 2U))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31
                 : ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                        >> 2U))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30
                     : ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29
                         : ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28
                             : ((0x1bU == (0x1fU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27
                                 : ((0x1aU == (0x1fU 
                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26
                                     : ((0x19U == (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14
                                                          : 
                                                         ((0xdU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12
                                                            : 
                                                           ((0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11
                                                             : 
                                                            ((0xaU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10
                                                              : 
                                                             ((9U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9
                                                               : 
                                                              ((8U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8
                                                                : 
                                                               ((7U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7
                                                                 : 
                                                                ((6U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6
                                                                  : 
                                                                 ((5U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                           >> 2U)))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1
                                                                       : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0))))))))))))))))))))))))))))))) 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                   >> 7U)) & (2U <= ((0x1fU == (0x1fU 
                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31)
                                      : ((0x1eU == 
                                          (0x1fU & 
                                           (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30)
                                          : ((0x1dU 
                                              == (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29)
                                              : ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28)
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27)
                                                   : 
                                                  ((0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26)
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25)
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24)
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23)
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22)
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21)
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20)
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19)
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18)
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17)
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16)
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15)
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14)
                                                                : 
                                                               ((0xdU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13)
                                                                 : 
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12)
                                                                  : 
                                                                 ((0xbU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11)
                                                                   : 
                                                                  ((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10)
                                                                    : 
                                                                   ((9U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9)
                                                                     : 
                                                                    ((8U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8)
                                                                      : 
                                                                     ((7U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                           >> 2U)))
                                                                       ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7)
                                                                       : 
                                                                      ((6U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                            >> 2U)))
                                                                        ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6)
                                                                        : 
                                                                       ((5U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                             >> 2U)))
                                                                         ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5)
                                                                         : 
                                                                        ((4U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                              >> 2U)))
                                                                          ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4)
                                                                          : 
                                                                         ((3U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                               >> 2U)))
                                                                           ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3)
                                                                           : 
                                                                          ((2U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                                >> 2U)))
                                                                            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2)
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                                >> 2U)))
                                                                             ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1)
                                                                             : (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0)))))))))))))))))))))))))))))))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0 
              == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_) 
           & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
           + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch 
        = ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2)
            ? (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U)) : 0U);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in))
            ? 0U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                        == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))
                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                     : ((0x1eU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                            - (IData)(1U))))
                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                - (IData)(1U))))
                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (0x1fU & 
                                           ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                            - (IData)(1U))))
                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (0x1fU 
                                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                  - (IData)(1U))))
                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (0x1fU 
                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                      - (IData)(1U))))
                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                    - (IData)(1U))))
                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                     - (IData)(1U))))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                           : 
                                                          ((0xdU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                             : 
                                                            ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                              : 
                                                             ((0xaU 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                               : 
                                                              ((9U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                : 
                                                               ((8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    __VdfgTmp_ha60b9bcf__0 = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in));
    __VdfgTmp_hd17546c8__0 = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in 
        = ((2U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data 
        = ((2U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_));
    vlSelf->__VdfgTmp_hc7531a34__0 = ((vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_2
                                       [vlSelf->FreeRTOSTestTop__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                       << 0x10U) | (IData)(__VdfgTmp_h3640491a__0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
            ? ((0x1fU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                   >> 2U))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_31
                : ((0x1eU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                       >> 2U))) ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_30
                    : ((0x1dU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                           >> 2U)))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_29
                        : ((0x1cU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                               >> 2U)))
                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_28
                            : ((0x1bU == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                 >> 2U)))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                           >> 2U)))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                            >> 2U)))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                             >> 2U)))
                                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1
                                                                         : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0)))))))))))))))))))))))))))))))
            : ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1)
            : 7U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7) 
           | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6) 
              | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5) 
                 | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4) 
                    | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3) 
                       | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2) 
                          | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1) 
                             | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0))))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0)
            ? (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)
            : 7U);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & ((IData)(__VdfgTmp_hd17546c8__0) & (0U 
                                                  != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(__VdfgTmp_ha60b9bcf__0) 
                        & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2)
            ? ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2
                        : 0U))) : 0U);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1)
            ? (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0xfU)) : 0U);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
            ? 0U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                        == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))
                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                     : ((0x1eU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                            - (IData)(1U))))
                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (0x1fU & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                - (IData)(1U))))
                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (0x1fU & 
                                           ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                            - (IData)(1U))))
                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (0x1fU 
                                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                  - (IData)(1U))))
                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (0x1fU 
                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                      - (IData)(1U))))
                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                    - (IData)(1U))))
                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                     - (IData)(1U))))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                           : 
                                                          ((0xdU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                             : 
                                                            ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                              : 
                                                             ((0xaU 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                               : 
                                                              ((9U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                : 
                                                               ((8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    __VdfgTmp_h482bb971__0 = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    __VdfgTmp_ha0202abe__0 = ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_)) 
                              & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_) 
                                  == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in)) 
                                 | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_) 
                                    == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in))));
    __VdfgTmp_hc355a8aa__0 = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_)
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_)
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_
            : FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data 
        = ((6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                         >> 0xcU))) ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                       | (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                   >> 0xfU)))
            : ((7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((~ (0x1fU 
                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                  >> 0xfU))) 
                                           & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_)
                : ((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? (0x1fU 
                                               & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                  >> 0xfU))
                    : ((2U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                     >> 0xcU))) ? (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                                   | FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data)
                        : ((3U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                         >> 0xcU)))
                            ? ((~ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data) 
                               & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_)
                            : ((1U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                             >> 0xcU)))
                                ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data
                                : 0U))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return 
        = ((0x67U == (0x7fU & (IData)(__VdfgTmp_hce0c5097__0))) 
           & (IData)(((0U == (0xf80U & (IData)(__VdfgTmp_h3640491a__0))) 
                      & ((1U == (0x1fU & (vlSelf->__VdfgTmp_hc7531a34__0 
                                          >> 0xfU))) 
                         | (5U == (0x1fU & (vlSelf->__VdfgTmp_hc7531a34__0 
                                            >> 0xfU)))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & ((IData)(__VdfgTmp_hc355a8aa__0) & (0U 
                                                  != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(__VdfgTmp_h482bb971__0) 
                        & (0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1)
            ? ((1U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : ((2U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((0U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                        ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1
                        : 0U))) : 0U);
    __VdfgTmp_hde0efee6__0 = ((0U != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_)) 
                              & ((IData)(__VdfgTmp_hc355a8aa__0) 
                                 | (IData)(__VdfgTmp_hd17546c8__0)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_3 
        = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_5 
        = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
            << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)));
    if ((0x340U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_31 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_32 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_31 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_32 
            = ((0x320U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                ? (0x3fdU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)
                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit);
    }
    if ((0x341U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 
            = ((0x342U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause);
    }
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x341U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x305U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x304U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x300U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
        = ((2U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard 
        = (((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_)) 
            & (IData)(__VdfgTmp_ha0202abe__0)) | ((
                                                   (3U 
                                                    == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_)) 
                                                   & (IData)(__VdfgTmp_hde0efee6__0)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_)) 
                                                     & ((0U 
                                                         != (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                                                        & ((IData)(__VdfgTmp_h482bb971__0) 
                                                           | (IData)(__VdfgTmp_ha60b9bcf__0))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
              & (IData)(__VdfgTmp_hde0efee6__0)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt 
        = ((0xffffff00U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
           | ((0x80U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                        << 4U)) | (0x77U & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0 
        = ((0U != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag_io_in) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
               >> 3U) & ((IData)(vlSelf->io_timer_mtip)
                          ? (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                             >> 7U) : (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                       >> 0xbU))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash 
        = (0xffU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                    ^ ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                        >> 8U) ^ ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                   >> 0x10U) ^ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                                >> 0x18U)))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
        = ((0x67U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? (0xfffffffeU & (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                              + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in))
            : ((0x6fU == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                : ((0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                    : 0U)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall 
        = ((((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
             | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_)) 
            & (IData)(__VdfgTmp_ha0202abe__0)) | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13) 
                                                  | (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                                      & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_)) 
                                                     | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
            ? ((0x100073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                ? 3U : ((0x73U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                         ? 0xbU : 0xaU)) : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                             ? ((IData)(vlSelf->io_timer_mtip)
                                                 ? 0x80000007U
                                                 : 0x8000000bU)
                                             : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
                                                 & (0x342U 
                                                    == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
                                                 ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                                 : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) 
           | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0) 
              | (0x30200073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_0))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_1))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_2))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_3))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_4))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_5))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
           & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6 
               == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_6))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)
            ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
            : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
            & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
                & (IData)(__VdfgTmp_ha0202abe__0)) 
               | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))) 
           & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
              | ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
                 & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
           & (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
               & (IData)(__VdfgTmp_ha0202abe__0)) | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert)
            ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                    ? FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                    : ((0x30200073U == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                        : 0U))) : FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address);
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index 
        = ((((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
             & ((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                 == (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                     >> 2U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                                == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7)))) 
            | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6) 
               | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5) 
                  | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4) 
                     | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3) 
                        | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2) 
                           | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1) 
                              | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0))))))))
            ? ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0)
                ? 0U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1)
                         ? 1U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2)
                                  ? 2U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3)
                                           ? 3U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4)
                                                    ? 4U
                                                    : 
                                                   ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5)
                                                     ? 5U
                                                     : 
                                                    ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6)
                                                      ? 6U
                                                      : 7U)))))))
            : ((1U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7)) 
                      | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)) 
                         | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)) 
                            | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)) 
                               | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)) 
                                  | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)) 
                                     | (0U != (3U & 
                                               (~ (
                                                   ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0))))))))))))
                ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0)
                    ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)
                        ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)
                            ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)
                                ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)
                                    ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)
                                        ? ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)
                                            ? 7U : 6U)
                                        : 5U) : 4U)
                                : 3U) : 2U) : 1U) : 0U)
                : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
                       == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                    ? 0U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
                             & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1) 
                                == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                             ? 1U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
                                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2) 
                                         == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                      ? 2U : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
                                               & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3) 
                                                  == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                               ? 3U
                                               : (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
                                                   & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4) 
                                                      == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                                   ? 4U
                                                   : 
                                                  (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
                                                    & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5) 
                                                       == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
                                                     & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6) 
                                                        == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                                     ? 6U
                                                     : 7U)))))))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0 
        = (1U & ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                 & (~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag 
        = (((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
            & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
               | ((0x63U == (0x7fU & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                  & ((7U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                   >> 0xcU))) ? (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                                 >= FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                      : ((6U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xcU))) ? 
                         (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                          < FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                          : ((5U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0xcU)))
                              ? VL_GTES_III(32, FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7, FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                              : ((4U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))
                                  ? VL_LTS_III(32, FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7, FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                                  : ((1U == (7U & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))
                                      ? (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                         != FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                                      : (IData)(((0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                                 & (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                                    == FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8))))))))))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_32 
        = ((0U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_33 
        = ((1U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_34 
        = ((2U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_35 
        = ((3U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_36 
        = ((4U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_37 
        = ((5U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_38 
        = ((6U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_39 
        = ((7U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid_io_in 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit) 
           & ((0x67U == (0x7fU & (IData)(__VdfgTmp_hce0c5097__0))) 
              & ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return)) 
                 & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return) 
           & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
            | (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch)) 
           & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           & (((1U == (0x1fU & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                >> 7U))) | (5U == (0x1fU 
                                                   & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 7U)))) 
              & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 8U)) & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                                             & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 9U)) & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T) 
                                             & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr) 
           & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) 
           & (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
               | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag)) 
              | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T 
        = ((~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_) 
               | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_))) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_) 
              & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age 
        = (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11) 
            < (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7))
            ? (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11)
            : (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in 
        = ((0U < (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid)) 
           & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
              == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T) 
           & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_ 
              != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6) 
              == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    if (FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31 
            = (7U & (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7) 
                      & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7) 
                         == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)))
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_17))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_3))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_5))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_7))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_9))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_11))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_13))));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30 
            = (7U & ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6)
                      ? 0U : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6) 
                              + (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_15))));
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30 
            = (7U & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6));
    }
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 7U)) & ((((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_)) 
                                               & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken)) 
                                              | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)) 
                                             & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))))));
    if ((0xb02U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 
            = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                                 >> 0x20U))) << 0x20U) 
               | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
    } else if ((0xb82U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 
            = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10;
        if ((0xb03U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        } else if ((0xb83U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        } else if ((0xb04U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        } else if ((0xb84U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        } else if ((0xb05U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        } else if ((0xb85U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        } else {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            if ((0xb06U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
            } else if ((0xb86U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
            } else if ((0xb07U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
            } else if ((0xb87U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)));
            } else {
                if ((0xb08U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                        = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                                             >> 0x20U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                } else if ((0xb88U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                        = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                            << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)));
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                } else {
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                        = ((0xb09U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                            ? (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                                                 >> 0x20U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)))
                            : ((0xb89U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                                ? (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)))
                                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17));
                }
                vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
            }
        }
    }
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw 
        = ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
           & (((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)) 
               & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T)) 
              | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_non_branch) 
                 | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_wrong_target))));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0)
            ? 0U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1)
                     ? 1U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2)
                              ? 2U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3)
                                       ? 3U : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4)
                                                ? 4U
                                                : ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6)
                                                     ? 6U
                                                     : 7U)))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___GEN_1 
        = (((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
            & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw)) 
           | ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___T_2)) 
              & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___T_2));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target 
        = ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit)
            ? ((7U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_7
                : ((6U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_6
                    : ((5U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_5
                        : ((4U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_4
                            : ((3U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_3
                                : ((2U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_2
                                    : ((1U == (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_1
                                        : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_0)))))))
            : 0U);
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0 
        = ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict) 
           | (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
               & ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                  & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ 
                     != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target))) 
              | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                 & ((~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ 
                       != vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target)))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_2 
        = ((1U & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__rom_loader__DOT__valid)) 
                  | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))
            ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
            : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in)
                ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr
                : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid_io_in)
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target
                    : ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc
                        : ((IData)(4U) + vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc)))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 3U)) & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                             & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0))))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__need_if_flush 
        = (((~ ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                | (((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                    & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                       == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_)) 
                   | ((IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                      & (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                         == vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_))))) 
            & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall)) 
               & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag))) 
           | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0));
}

VL_INLINE_OPT void VFreeRTOSTestTop___024root___nba_sequent__TOP__1(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall;
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall = 0;
    // Body
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__need_if_flush));
    FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall 
        = ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__need_if_flush) 
              | (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0)));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 6U)) & (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall)))));
    vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 
        = (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
           + (QData)((IData)(((~ (vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 4U)) & ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
                                             & ((~ (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                                & (~ (IData)(FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall))))))));
    if ((0xb02U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
    } else if ((0xb82U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
    } else if ((0xb03U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                                 >> 0x20U))) << 0x20U) 
               | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
    } else if ((0xb83U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)));
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
    } else {
        vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
        if ((0xb04U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                = (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
        } else if ((0xb84U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                = (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)));
        } else {
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                = ((0xb05U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                    ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14
                    : ((0xb85U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                        ? vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14
                        : ((0xb06U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                            ? (((QData)((IData)((vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                                                 >> 0x20U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)))
                            : ((0xb86U == (IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                                ? (((QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)))
                                : vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14))));
            vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
        }
    }
}

void VFreeRTOSTestTop___024root___eval_nba(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VFreeRTOSTestTop___024root___nba_sequent__TOP__0(vlSelf);
        VFreeRTOSTestTop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VFreeRTOSTestTop___024root___eval_triggers__act(VFreeRTOSTestTop___024root* vlSelf);

bool VFreeRTOSTestTop___024root___eval_phase__act(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VFreeRTOSTestTop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VFreeRTOSTestTop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VFreeRTOSTestTop___024root___eval_phase__nba(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VFreeRTOSTestTop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFreeRTOSTestTop___024root___dump_triggers__ico(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFreeRTOSTestTop___024root___dump_triggers__nba(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VFreeRTOSTestTop___024root___dump_triggers__act(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG

void VFreeRTOSTestTop___024root___eval(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VFreeRTOSTestTop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("FreeRTOSTestTop.sv", 10547, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VFreeRTOSTestTop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VFreeRTOSTestTop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("FreeRTOSTestTop.sv", 10547, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VFreeRTOSTestTop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("FreeRTOSTestTop.sv", 10547, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VFreeRTOSTestTop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VFreeRTOSTestTop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VFreeRTOSTestTop___024root___eval_debug_assertions(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_regs_debug_read_address 
                     & 0xe0U))) {
        Verilated::overWidthError("io_regs_debug_read_address");}
    if (VL_UNLIKELY((vlSelf->io_csr_debug_read_address 
                     & 0xf000U))) {
        Verilated::overWidthError("io_csr_debug_read_address");}
}
#endif  // VL_DEBUG
