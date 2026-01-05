// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFreeRTOSTestTop.h for the primary calling header

#include "VFreeRTOSTestTop__pch.h"
#include "VFreeRTOSTestTop__Syms.h"
#include "VFreeRTOSTestTop___024root.h"

void VFreeRTOSTestTop___024root___ctor_var_reset(VFreeRTOSTestTop___024root* vlSelf);

VFreeRTOSTestTop___024root::VFreeRTOSTestTop___024root(VFreeRTOSTestTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VFreeRTOSTestTop___024root___ctor_var_reset(this);
}

void VFreeRTOSTestTop___024root___configure_coverage(VFreeRTOSTestTop___024root* vlSelf, bool first);

void VFreeRTOSTestTop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VFreeRTOSTestTop___024root___configure_coverage(this, first);
}

VFreeRTOSTestTop___024root::~VFreeRTOSTestTop___024root() {
}

// Coverage
void VFreeRTOSTestTop___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
