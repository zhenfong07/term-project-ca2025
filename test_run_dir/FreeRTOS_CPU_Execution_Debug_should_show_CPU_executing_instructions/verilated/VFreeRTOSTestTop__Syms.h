// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFREERTOSTESTTOP__SYMS_H_
#define VERILATED_VFREERTOSTESTTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VFreeRTOSTestTop.h"

// INCLUDE MODULE CLASSES
#include "VFreeRTOSTestTop___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VFreeRTOSTestTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFreeRTOSTestTop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFreeRTOSTestTop___024root     TOP;

    // CONSTRUCTORS
    VFreeRTOSTestTop__Syms(VerilatedContext* contextp, const char* namep, VFreeRTOSTestTop* modelp);
    ~VFreeRTOSTestTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
