// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFreeRTOSTestTop.h for the primary calling header

#include "VFreeRTOSTestTop__pch.h"
#include "VFreeRTOSTestTop__Syms.h"
#include "VFreeRTOSTestTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFreeRTOSTestTop___024root___dump_triggers__ico(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG

void VFreeRTOSTestTop___024root___eval_triggers__ico(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFreeRTOSTestTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VFreeRTOSTestTop___024root___dump_triggers__act(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG

void VFreeRTOSTestTop___024root___eval_triggers__act(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock__0 
        = vlSelf->FreeRTOSTestTop__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFreeRTOSTestTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
