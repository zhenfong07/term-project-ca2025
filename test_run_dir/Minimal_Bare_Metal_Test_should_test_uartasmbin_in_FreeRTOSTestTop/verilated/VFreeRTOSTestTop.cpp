// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFreeRTOSTestTop__pch.h"

//============================================================
// Constructors

VFreeRTOSTestTop::VFreeRTOSTestTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFreeRTOSTestTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_regs_debug_read_address{vlSymsp->TOP.io_regs_debug_read_address}
    , io_timer_mtip{vlSymsp->TOP.io_timer_mtip}
    , io_uart_tx{vlSymsp->TOP.io_uart_tx}
    , io_csr_debug_read_address{vlSymsp->TOP.io_csr_debug_read_address}
    , io_mem_debug_read_address{vlSymsp->TOP.io_mem_debug_read_address}
    , io_regs_debug_read_data{vlSymsp->TOP.io_regs_debug_read_data}
    , io_mem_debug_read_data{vlSymsp->TOP.io_mem_debug_read_data}
    , io_csr_debug_read_data{vlSymsp->TOP.io_csr_debug_read_data}
    , io_timer_mtime{vlSymsp->TOP.io_timer_mtime}
    , io_timer_mtimecmp{vlSymsp->TOP.io_timer_mtimecmp}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFreeRTOSTestTop::VFreeRTOSTestTop(const char* _vcname__)
    : VFreeRTOSTestTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFreeRTOSTestTop::~VFreeRTOSTestTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFreeRTOSTestTop___024root___eval_debug_assertions(VFreeRTOSTestTop___024root* vlSelf);
#endif  // VL_DEBUG
void VFreeRTOSTestTop___024root___eval_static(VFreeRTOSTestTop___024root* vlSelf);
void VFreeRTOSTestTop___024root___eval_initial(VFreeRTOSTestTop___024root* vlSelf);
void VFreeRTOSTestTop___024root___eval_settle(VFreeRTOSTestTop___024root* vlSelf);
void VFreeRTOSTestTop___024root___eval(VFreeRTOSTestTop___024root* vlSelf);

void VFreeRTOSTestTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFreeRTOSTestTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFreeRTOSTestTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFreeRTOSTestTop___024root___eval_static(&(vlSymsp->TOP));
        VFreeRTOSTestTop___024root___eval_initial(&(vlSymsp->TOP));
        VFreeRTOSTestTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFreeRTOSTestTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFreeRTOSTestTop::eventsPending() { return false; }

uint64_t VFreeRTOSTestTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFreeRTOSTestTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFreeRTOSTestTop___024root___eval_final(VFreeRTOSTestTop___024root* vlSelf);

VL_ATTR_COLD void VFreeRTOSTestTop::final() {
    VFreeRTOSTestTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFreeRTOSTestTop::hierName() const { return vlSymsp->name(); }
const char* VFreeRTOSTestTop::modelName() const { return "VFreeRTOSTestTop"; }
unsigned VFreeRTOSTestTop::threads() const { return 1; }
void VFreeRTOSTestTop::prepareClone() const { contextp()->prepareClone(); }
void VFreeRTOSTestTop::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VFreeRTOSTestTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VFreeRTOSTestTop::trace()' called on model that was Verilated without --trace option");
}
