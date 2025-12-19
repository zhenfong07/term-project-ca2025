// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_ATTR_COLD void VTestTopModule___024root___eval_static(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule___024root___eval_initial(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial\n"); );
    // Body
    VTestTopModule___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock__0 
        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock;
}

extern const VlWide<16>/*511:0*/ VTestTopModule__ConstPool__CONST_hfc6f63e9_0;

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 399, 0, VL_CVT_PACK_STR_NW(16, VTestTopModule__ConstPool__CONST_hfc6f63e9_0)
                 ,  &(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTestTopModule___024root___eval_final(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__stl(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestTopModule___024root___eval_phase__stl(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule___024root___eval_settle(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTestTopModule___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 5920, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestTopModule___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestTopModule___024root___stl_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T;
    TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 = 0;
    CData/*3:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0;
    TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0;
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0;
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0;
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0;
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0 = 0;
    CData/*0:0*/ __VdfgTmp_h7425012c__0;
    __VdfgTmp_h7425012c__0 = 0;
    CData/*0:0*/ __VdfgTmp_h377cf030__0;
    __VdfgTmp_h377cf030__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfd080d9a__0;
    __VdfgTmp_hfd080d9a__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha2436d9a__0;
    __VdfgTmp_ha2436d9a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6577b1da__0;
    __VdfgTmp_h6577b1da__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3a4ee9da__0;
    __VdfgTmp_h3a4ee9da__0 = 0;
    // Body
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles);
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x18eU == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_48 
        = ((0U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_128 
        = ((0U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_49 
        = ((1U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_129 
        = ((1U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_50 
        = ((2U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_130 
        = ((2U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_51 
        = ((3U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_131 
        = ((3U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_52 
        = ((4U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_132 
        = ((4U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_53 
        = ((5U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_133 
        = ((5U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_54 
        = ((6U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_134 
        = ((6U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_55 
        = ((7U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_135 
        = ((7U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_56 
        = ((8U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_136 
        = ((8U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_57 
        = ((9U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_137 
        = ((9U != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                           >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_58 
        = ((0xaU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_138 
        = ((0xaU != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_59 
        = ((0xbU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_139 
        = ((0xbU != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_60 
        = ((0xcU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_140 
        = ((0xcU != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_61 
        = ((0xdU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_141 
        = ((0xdU != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_62 
        = ((0xeU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_142 
        = ((0xeU != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_63 
        = ((0xfU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_143 
        = ((0xfU != (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                             >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7 
        = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
            : 1U);
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_21 
            = (0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_24 
            = (0U != (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_21 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_24 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out));
    }
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_12 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__read_pending)) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__read));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_3 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__addr;
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in 
            = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                << 0x18U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                              << 0x10U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                            [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                           [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0])));
    } else {
        if ((0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
            vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                               << 2U)));
            vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                = ((0x18eU >= (0x1ffU & (IData)((0x3fffffffffffffffULL 
                                                 & (QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address))))))
                    ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                   [(0x1ffU & (IData)((0x3fffffffffffffffULL 
                                       & (QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))))]
                    : 0U);
            vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 1U;
        } else {
            vlSelf->TestTopModule__DOT__mem_io_bundle_address = 0U;
            vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = 0U;
            vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 0U;
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in = 0x13U;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_38 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out)
            ? ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
                : 2U) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_7 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
            & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY)) 
           | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__read));
    vlSelf->io_mem_debug_read_data = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                       [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                       << 0x18U) | 
                                      ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x10U) | 
                                       ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                         [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                         << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func 
        = ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out))
            ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)
                                                            ? 2U
                                                            : 1U))))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                    | ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                          | ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                                | ((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out)) 
                                                                   | (0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out))))))))));
    vlSelf->io_csr_debug_read_data = ((0xc80U == (IData)(vlSelf->io_csr_debug_read_address))
                                       ? (IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
                                                  >> 0x20U))
                                       : ((0xc00U == (IData)(vlSelf->io_csr_debug_read_address))
                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles)
                                           : ((0x342U 
                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                               : ((0x341U 
                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                   : 
                                                  ((0x340U 
                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                    : 
                                                   ((0x305U 
                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                     : 
                                                    ((0x304U 
                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                                      : 
                                                     ((0x300U 
                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                       : 0U))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in 
        = ((0xc80U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                       >> 0x14U)) ? (IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
                                             >> 0x20U))
            : ((0xc00U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                           >> 0x14U)) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles)
                : ((0x342U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                               >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                    : ((0x341U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                   >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                        : ((0x340U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                       >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                            : ((0x305U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0x14U))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                : ((0x304U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0x14U))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                    : ((0x300U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                   >> 0x14U))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                        : 0U))))))));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_9 
        = ((IData)(vlSelf->TestTopModule__DOT__read_pending)
            ? ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0] 
                << 0x18U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0] 
                              << 0x10U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                            [vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                           [vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0])))
            : vlSelf->TestTopModule__DOT__mem_slave__DOT__read_data);
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID));
    if ((0xfU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                          >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15;
    } else if ((0xeU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                 >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14;
    } else if ((0xdU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                 >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13;
    } else if ((0xcU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                 >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12;
    } else if ((0xbU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                 >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11;
    } else if ((0xaU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                 >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10;
    } else if ((9U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9;
    } else if ((8U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8;
    } else if ((7U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7;
    } else if ((6U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6;
    } else if ((5U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5;
    } else if ((4U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4;
    } else if ((3U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3;
    } else if ((2U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2;
    } else if ((1U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0;
    }
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out)) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken 
        = (((0xfU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                              >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15)
             : ((0xeU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                  >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14)
                 : ((0xdU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                      >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13)
                     : ((0xcU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                          >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12)
                         : ((0xbU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U)))
                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11)
                             : ((0xaU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10)
                                 : ((9U == (0xfU & 
                                            (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U)))
                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9)
                                     : ((8U == (0xfU 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8)
                                         : ((7U == 
                                             (0xfU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                 >> 2U)))
                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7)
                                             : ((6U 
                                                 == 
                                                 (0xfU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6)
                                                 : 
                                                ((5U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1)
                                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0)))))))))))))))) 
           & (((0xfU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                 >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15
                : ((0xeU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                     >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14
                    : ((0xdU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                         >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13
                        : ((0xcU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U)))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12
                            : ((0xbU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                 >> 2U)))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11
                                : ((0xaU == (0xfU & 
                                             (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U)))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10
                                    : ((9U == (0xfU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9
                                        : ((8U == (0xfU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8
                                            : ((7U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7
                                                : (
                                                   (6U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1
                                                         : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0))))))))))))))) 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 6U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7 
        = ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
              >> 0x1fU) ? 0x1fffffU : 0U) << 0xbU) 
           | (0x7ffU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                        >> 0x14U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0 
        = ((0x73U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out) 
           | (0x100073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 
        = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
           | (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out)) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_65 
        = ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
            ? ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                ? (0xffffU & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data, 0x10U))
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
                ? ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                    ? ((((0x8000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                          ? 0xffffU : 0U) << 0x10U) 
                       | (0xffffU & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data))
                    : ((((vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                          >> 0x1fU) ? 0xffffU : 0U) 
                        << 0x10U) | (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                     >> 0x10U))) : 
               ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
                 ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                     ? (0xffU & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                 >> 0x10U)) : ((1U 
                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                                                ? (0xffU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                      >> 8U))
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data, 0x18U))))
                 : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
                     ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                         ? ((((0x800000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                               ? 0xffffffU : 0U) << 8U) 
                            | (0xffU & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                        >> 0x10U)))
                         : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                             ? ((((0x8000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                   ? 0xffffffU : 0U) 
                                 << 8U) | (0xffU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                            >> 8U)))
                             : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index))
                                 ? ((((0x80U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                       ? 0xffffffU : 0U) 
                                     << 8U) | (0xffU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data))
                                 : ((((vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                       >> 0x1fU) ? 0xffffffU
                                       : 0U) << 8U) 
                                    | (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                       >> 0x18U)))))
                     : 0U))));
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall 
            = (1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid)
                ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_65)
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data);
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall 
            = (1U & ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                      ? (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid))
                      : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
           | ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
              | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
           | ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
              | (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_23 
        = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_14 
        = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0)
            ? 0U : (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_13 
        = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0)) 
           & ((IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID) 
              | (IData)(vlSelf->TestTopModule__DOT__read_pending)));
    if ((3U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_53 
            = (1U & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID));
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_44 
            = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0)) 
               & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY));
        if (TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0) {
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_43 
                = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 = 4U;
        } else {
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_43 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__addr;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__state;
        }
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_52 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_47 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_48 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_49 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_50 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_51 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_45 
            = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0) 
               | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY));
    } else {
        if ((4U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_53 
                = (1U & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID));
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_52 
                = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0) 
                   | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__write));
            if (TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0) {
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 = 5U;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_47 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_data;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_48 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_0;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_49 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_1;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_50 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_2;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_51 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_3;
            } else {
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__state;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_47 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_48 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_49 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_50 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2;
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_51 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3;
            }
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_45 
                = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0)) 
                   & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY));
        } else {
            if ((5U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_53 
                    = (1U & (~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)));
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 
                    = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)
                        ? 0U : (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state));
            } else {
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_53 
                    = (1U & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID));
                vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT__state;
            }
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_52 
                = ((5U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state)) 
                   & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__write));
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_47 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_48 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_49 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_50 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_51 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3;
            vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_45 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY;
        }
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_44 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY;
        vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_43 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__addr;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_25 
        = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID));
    if ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_39 
            = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)
                ? 0U : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_38 
            = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0) 
               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37 
            = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_25;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_39 
            = ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
                ? 0U : ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
                         ? 0U : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state)));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_38 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_29 
        = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0)
            ? 5U : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_26 
        = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_27 
        = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
            ? ((0xfU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                 >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15
                : ((0xeU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                     >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14
                    : ((0xdU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                         >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13
                        : ((0xcU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U)))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12
                            : ((0xbU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                 >> 2U)))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11
                                : ((0xaU == (0xfU & 
                                             (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U)))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10
                                    : ((9U == (0xfU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9
                                        : ((8U == (0xfU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8
                                            : ((7U 
                                                == 
                                                (0xfU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7
                                                : (
                                                   (6U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0xfU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0xfU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (0xfU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1
                                                         : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0)))))))))))))))
            : ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request 
        = ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           | ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in 
        = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                  >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
               | ((0xff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out) 
                  | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                >> 9U)) | (0x7feU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                            >> 0x14U)))))
            : ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                : ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                    ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                    : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                        ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                              >> 0x1fU) ? 0xfffffU : 0U) 
                            << 0xcU) | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                 >> 7U)))))
                        : ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                  >> 0x1fU) ? 0x1fffffU
                                  : 0U) << 0xbU) | 
                               ((0x7e0U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                            >> 7U))))
                            : ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                : ((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                    : ((0x13U == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                        ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                        : ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                              >> 0x1fU)
                                              ? 0xfffffU
                                              : 0U) 
                                            << 0xcU) 
                                           | (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                              >> 0x14U))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                                    == (IData)(vlSelf->io_regs_debug_read_address)))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : 
                                                         ((0x15U 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                           : 
                                                          ((0x14U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                             : 
                                                            ((0x12U 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                              : 
                                                             ((0x11U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                               : 
                                                              ((0x10U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                                : 
                                                               ((0xfU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                                 : 
                                                                ((0xeU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                                  : 
                                                                 ((0xdU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                                   : 
                                                                  ((0xcU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                                    : 
                                                                   ((0xbU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                                     : 
                                                                    ((0xaU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                                      : 
                                                                     ((9U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                       : 
                                                                      ((8U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                        : 
                                                                       ((7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                             - (IData)(1U))))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                         : 
                                                                        ((6U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                              - (IData)(1U))))
                                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                          : 
                                                                         ((5U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                               - (IData)(1U))))
                                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                           : 
                                                                          ((4U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                            : 
                                                                           ((3U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                             : 
                                                                            ((2U 
                                                                              == 
                                                                              (0x1fU 
                                                                               & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                              : 
                                                                             ((1U 
                                                                               == 
                                                                               (0x1fU 
                                                                                & ((IData)(vlSelf->io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                               : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4) 
           | ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
              | ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                 | ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                    | ((~ ((0x73U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                           & ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                            >> 0xcU))) 
                              | ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0xcU))) 
                                 | (6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                 >> 0xcU))))))) 
                       & (0x73U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read 
        = (((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
            & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out))) 
           & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request) 
           & ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                 & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                    & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out)))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
           + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2)
            ? (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                        >> 0x14U)) : 0U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in))
            ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)))
                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                     : ((0x1eU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                            - (IData)(1U))))
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                - (IData)(1U))))
                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (0x1fU & 
                                           ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                            - (IData)(1U))))
                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (0x1fU 
                                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                  - (IData)(1U))))
                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (0x1fU 
                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                      - (IData)(1U))))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                    - (IData)(1U))))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                     - (IData)(1U))))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                           : 
                                                          ((0xdU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                             : 
                                                            ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                              : 
                                                             ((0xaU 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                               : 
                                                              ((9U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                : 
                                                               ((8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    __VdfgTmp_h3a4ee9da__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in));
    __VdfgTmp_h6577b1da__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write));
    TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & ((IData)(__VdfgTmp_h6577b1da__0) & (0U 
                                                  != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & ((IData)(__VdfgTmp_h3a4ee9da__0) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2)
            ? ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                        ? TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2
                        : 0U))) : 0U);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1)
            ? (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                        >> 0xfU)) : 0U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
            ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)))
                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                     : ((0x1eU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                            - (IData)(1U))))
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                         : ((0x1dU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                - (IData)(1U))))
                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                             : ((0x1cU == (0x1fU & 
                                           ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                            - (IData)(1U))))
                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                 : ((0x1bU == (0x1fU 
                                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                  - (IData)(1U))))
                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                     : ((0x1aU == (0x1fU 
                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                      - (IData)(1U))))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                    - (IData)(1U))))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                     - (IData)(1U))))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                      - (IData)(1U))))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                       - (IData)(1U))))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                        - (IData)(1U))))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                         - (IData)(1U))))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                          - (IData)(1U))))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                           - (IData)(1U))))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                            - (IData)(1U))))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                             - (IData)(1U))))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                              - (IData)(1U))))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                               - (IData)(1U))))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                           : 
                                                          ((0xdU 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                - (IData)(1U))))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                 - (IData)(1U))))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                             : 
                                                            ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                  - (IData)(1U))))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                              : 
                                                             ((0xaU 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                   - (IData)(1U))))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                               : 
                                                              ((9U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                    - (IData)(1U))))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                                : 
                                                               ((8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    __VdfgTmp_ha2436d9a__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    __VdfgTmp_h7425012c__0 = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out)) 
                              & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out) 
                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in)) 
                                 | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out) 
                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in))));
    __VdfgTmp_hfd080d9a__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_10 
        = ((IData)(TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_11 
        = ((IData)(TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out
            : TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data 
        = ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                         >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                                       | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                   >> 0xfU)))
            : ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                             >> 0xcU))) ? ((~ (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                  >> 0xfU))) 
                                           & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out)
                : ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                 >> 0xcU))) ? (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                  >> 0xfU))
                    : ((2U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                     >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                                                   | TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data)
                        : ((3U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                         >> 0xcU)))
                            ? ((~ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data) 
                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out)
                            : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                             >> 0xcU)))
                                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data
                                : 0U))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out) 
            & ((IData)(__VdfgTmp_hfd080d9a__0) & (0U 
                                                  != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
                     & ((IData)(__VdfgTmp_ha2436d9a__0) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1)
            ? ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                        ? TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1
                        : 0U))) : 0U);
    __VdfgTmp_h377cf030__0 = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out)) 
                              & ((IData)(__VdfgTmp_hfd080d9a__0) 
                                 | (IData)(__VdfgTmp_h6577b1da__0)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result 
        = (IData)((0x7fffffffffffffffULL & ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                             ? (QData)((IData)(
                                                               (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                + TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                             : ((2U 
                                                 == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                 ? (QData)((IData)(
                                                                   (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                    - TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                                 : 
                                                ((3U 
                                                  == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                  ? 
                                                 ((QData)((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1)) 
                                                  << 
                                                  (0x1fU 
                                                   & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                      ? 
                                                                     VL_LTS_III(32, TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                       ? 
                                                                      (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                       ^ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                        ? 
                                                                       (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                        | TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                         ? 
                                                                        (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                         & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                          ? 
                                                                         (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, 
                                                                                (0x1fU 
                                                                                & TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func)) 
                                                                           & (TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                              < TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 
        = ((0x340U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch);
    if ((0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2 
            = ((0x342U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause);
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x305U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x304U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
            & (0x300U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard 
        = (((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out)) 
            & (IData)(__VdfgTmp_h7425012c__0)) | ((
                                                   (3U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out)) 
                                                   & (IData)(__VdfgTmp_h377cf030__0)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out)) 
                                                     & ((0U 
                                                         != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)) 
                                                        & ((IData)(__VdfgTmp_ha2436d9a__0) 
                                                           | (IData)(__VdfgTmp_h3a4ee9da__0))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt 
        = (0xfffffff7U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0 
        = ((0U != vlSelf->io_interrupt_flag) & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                                 >> 3U) 
                                                & ((1U 
                                                    & vlSelf->io_interrupt_flag)
                                                    ? 
                                                   (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                                    >> 7U)
                                                    : 
                                                   (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
                                                    >> 0xbU))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
        = ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
            ? (0xfffffffeU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                              + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in))
            : ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                    : 0U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall 
        = ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
             | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out)) 
            & (IData)(__VdfgTmp_h7425012c__0)) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out) 
                                                      & (IData)(__VdfgTmp_h377cf030__0))) 
                                                  | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                                                      & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out)) 
                                                     | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
            ? ((0x100073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                ? 3U : ((0x73U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                         ? 0xbU : 0xaU)) : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                             ? ((1U 
                                                 & vlSelf->io_interrupt_flag)
                                                 ? 0x80000007U
                                                 : 0x8000000bU)
                                             : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) 
                                                 & (0x342U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out)))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                                 : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) 
           | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0) 
              | (0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out) 
                & (IData)(__VdfgTmp_h7425012c__0)) 
               | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))) 
           & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
                 & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
              & (IData)(__VdfgTmp_h7425012c__0)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert)
            ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                    : ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                        : 0U))) : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_5 
        = ((1U & ((~ (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)) 
                  | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
            : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc
                : ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
            | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch)) 
           & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
              & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag 
        = (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
               | ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                  & ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                   >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                                 >= vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                      : ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                       >> 0xcU))) ? 
                         (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                          < vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                          : ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                           >> 0xcU)))
                              ? VL_GTES_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                              : ((4U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                               >> 0xcU)))
                                  ? VL_LTS_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                                  : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                   >> 0xcU)))
                                      ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                         != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                                      : (IData)(((0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                                    == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8))))))))))) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) 
           & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag)) 
              | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
              == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__out 
              != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
           & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__out) 
               & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)) 
                  & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id))) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch) 
                 | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction)) 
               & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall)) 
                  & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag))) 
              | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict)));
}

VL_ATTR_COLD void VTestTopModule___024root___eval_stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTestTopModule___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTestTopModule___024root___eval_triggers__stl(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD bool VTestTopModule___024root___eval_phase__stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestTopModule___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTestTopModule___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TestTopModule.cpu.cpu.inst_fetch.btb_clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TestTopModule.cpu.cpu.inst_fetch.btb_clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestTopModule___024root___ctor_var_reset(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_regs_debug_read_address = VL_RAND_RESET_I(5);
    vlSelf->io_mem_debug_read_address = VL_RAND_RESET_I(32);
    vlSelf->io_regs_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_mem_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_csr_debug_read_address = VL_RAND_RESET_I(12);
    vlSelf->io_csr_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_interrupt_flag = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__CPU_clkdiv = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__read_pending = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 399; ++__Vi0) {
        vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_5 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_56 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_62 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 = VL_RAND_RESET_I(26);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_128 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_129 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_130 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_131 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_132 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_133 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_134 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_135 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_136 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_137 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_138 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_139 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_140 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_141 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_142 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_143 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__myreg = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__myreg = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__myreg = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__myreg = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__myreg = VL_RAND_RESET_I(12);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out = VL_RAND_RESET_I(12);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__myreg = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__myreg = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__myreg = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_65 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_38 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__myreg = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__myreg = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__myreg = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__myreg = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_29 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_39 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_9 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_14 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_43 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_47 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VTestTopModule___024root___configure_coverage(VTestTopModule___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
