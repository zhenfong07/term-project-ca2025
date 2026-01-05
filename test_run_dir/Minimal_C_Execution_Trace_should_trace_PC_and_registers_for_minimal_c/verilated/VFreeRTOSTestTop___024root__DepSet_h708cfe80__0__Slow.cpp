// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFreeRTOSTestTop.h for the primary calling header

#include "VFreeRTOSTestTop__pch.h"
#include "VFreeRTOSTestTop__Syms.h"
#include "VFreeRTOSTestTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VFreeRTOSTestTop___024root___dump_triggers__stl(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VFreeRTOSTestTop___024root___eval_triggers__stl(VFreeRTOSTestTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFreeRTOSTestTop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VFreeRTOSTestTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
