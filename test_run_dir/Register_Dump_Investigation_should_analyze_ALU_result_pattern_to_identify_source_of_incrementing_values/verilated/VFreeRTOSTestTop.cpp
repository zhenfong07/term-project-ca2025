// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFreeRTOSTestTop__pch.h"
#include "verilated_fst_c.h"

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
    , io_bus_address{vlSymsp->TOP.io_bus_address}
    , io_instruction_address{vlSymsp->TOP.io_instruction_address}
    , io_alu_result_mem{vlSymsp->TOP.io_alu_result_mem}
    , io_cpu_pc{vlSymsp->TOP.io_cpu_pc}
    , io_debug_reg_sp{vlSymsp->TOP.io_debug_reg_sp}
    , io_debug_reg_a2{vlSymsp->TOP.io_debug_reg_a2}
    , io_debug_reg_a3{vlSymsp->TOP.io_debug_reg_a3}
    , io_debug_reg_a5{vlSymsp->TOP.io_debug_reg_a5}
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
    vlSymsp->__Vm_activity = true;
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
std::unique_ptr<VerilatedTraceConfig> VFreeRTOSTestTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFreeRTOSTestTop___024root__trace_decl_types(VerilatedFst* tracep);

void VFreeRTOSTestTop___024root__trace_init_top(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFreeRTOSTestTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFreeRTOSTestTop___024root*>(voidSelf);
    VFreeRTOSTestTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFreeRTOSTestTop___024root__trace_decl_types(tracep);
    VFreeRTOSTestTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFreeRTOSTestTop___024root__trace_register(VFreeRTOSTestTop___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VFreeRTOSTestTop::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFreeRTOSTestTop::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFreeRTOSTestTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
