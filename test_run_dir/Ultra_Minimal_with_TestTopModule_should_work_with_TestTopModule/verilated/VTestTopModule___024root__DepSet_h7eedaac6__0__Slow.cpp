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

extern const VlWide<25>/*799:0*/ VTestTopModule__ConstPool__CONST_h69177454_0;

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 10, 0, VL_CVT_PACK_STR_NW(25, VTestTopModule__ConstPool__CONST_h69177454_0)
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
            VL_FATAL_MT("TestTopModule.sv", 8930, "", "Settle region did not converge.");
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
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T;
    TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__is_return;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__is_return = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__need_if_flush;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__need_if_flush = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0;
    TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319 = 0;
    CData/*1:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11 = 0;
    CData/*2:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45;
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45 = 0;
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
    CData/*0:0*/ __VdfgTmp_h55524313__0;
    __VdfgTmp_h55524313__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1ec9fb54__0;
    __VdfgTmp_h1ec9fb54__0 = 0;
    CData/*0:0*/ __VdfgTmp_h897123fa__0;
    __VdfgTmp_h897123fa__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2206b864__0;
    __VdfgTmp_h2206b864__0 = 0;
    CData/*0:0*/ __VdfgTmp_hbcb862ea__0;
    __VdfgTmp_hbcb862ea__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3895027b__0;
    __VdfgTmp_h3895027b__0 = 0;
    SData/*15:0*/ __VdfgTmp_hf6cf16cb__0;
    __VdfgTmp_hf6cf16cb__0 = 0;
    // Body
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___T 
        = (4U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___sp_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___GEN_26 
        = (7U & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                 - (0U < (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_0_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_1_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_2_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_3_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_4_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_5_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_6_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_7_T_1 
        = (7U & ((IData)(1U) + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func 
        = ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))
            ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                                            ? 2U
                                                            : 1U))))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                    | ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                          | ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                                | ((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                                                                   | (0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))))))))));
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((9U == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_192 
        = ((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_193 
        = ((1U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_194 
        = ((2U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_195 
        = ((3U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_196 
        = ((4U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_197 
        = ((5U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_198 
        = ((6U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_199 
        = ((7U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_200 
        = ((8U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_201 
        = ((9U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_202 
        = ((0xaU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_203 
        = ((0xbU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_204 
        = ((0xcU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_205 
        = ((0xdU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_206 
        = ((0xeU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_207 
        = ((0xfU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                              >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_208 
        = ((0x10U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_209 
        = ((0x11U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_210 
        = ((0x12U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_211 
        = ((0x13U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_212 
        = ((0x14U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_213 
        = ((0x15U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_214 
        = ((0x16U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_215 
        = ((0x17U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_216 
        = ((0x18U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_217 
        = ((0x19U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_218 
        = ((0x1aU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_219 
        = ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_220 
        = ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_221 
        = ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_222 
        = ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_223 
        = ((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7 
        = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
            : 1U);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_9 
        = ((1U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle
            : (1ULL + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle));
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
    } else if ((9U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                           << 2U)));
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((9U >= (0xfU & (IData)((0x3fffffffffffffffULL 
                                       & (QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address))))))
                ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
               [(0xfU & (IData)((0x3fffffffffffffffULL 
                                 & (QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))))]
                : 0U);
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 1U;
    } else {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address = 0U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = 0U;
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 0U;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_44 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_)
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_3 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_5 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_9 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_11 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_13 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_15 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_17 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
           & (7U > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7)));
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_)) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr 
        = ((0U < (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp))
            ? ((3U == (3U & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                             - (IData)(1U)))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3
                : ((2U == (3U & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                                 - (IData)(1U)))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2
                    : ((1U == (3U & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp) 
                                     - (IData)(1U))))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1
                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0)))
            : 0U);
    vlSelf->io_csr_debug_read_data = ((0xb89U == (IData)(vlSelf->io_csr_debug_read_address))
                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
                                       : ((0xb09U == (IData)(vlSelf->io_csr_debug_read_address))
                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                                           : ((0xb88U 
                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow
                                               : ((0xb08U 
                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)
                                                   : 
                                                  ((0xb87U 
                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow
                                                    : 
                                                   ((0xb07U 
                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)
                                                     : 
                                                    ((0xb86U 
                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow
                                                      : 
                                                     ((0xb06U 
                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)
                                                       : 
                                                      ((0xb85U 
                                                        == (IData)(vlSelf->io_csr_debug_read_address))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow
                                                        : 
                                                       ((0xb05U 
                                                         == (IData)(vlSelf->io_csr_debug_read_address))
                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)
                                                         : 
                                                        ((0xb84U 
                                                          == (IData)(vlSelf->io_csr_debug_read_address))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow
                                                          : 
                                                         ((0xb04U 
                                                           == (IData)(vlSelf->io_csr_debug_read_address))
                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)
                                                           : 
                                                          ((0xb83U 
                                                            == (IData)(vlSelf->io_csr_debug_read_address))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow
                                                            : 
                                                           ((0xb03U 
                                                             == (IData)(vlSelf->io_csr_debug_read_address))
                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)
                                                             : 
                                                            ((0xb82U 
                                                              == (IData)(vlSelf->io_csr_debug_read_address))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                              : 
                                                             ((0xb02U 
                                                               == (IData)(vlSelf->io_csr_debug_read_address))
                                                               ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                               : 
                                                              ((0xb80U 
                                                                == (IData)(vlSelf->io_csr_debug_read_address))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                                : 
                                                               ((0xb00U 
                                                                 == (IData)(vlSelf->io_csr_debug_read_address))
                                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                                 : 
                                                                ((0xc82U 
                                                                  == (IData)(vlSelf->io_csr_debug_read_address))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                                  : 
                                                                 ((0xc02U 
                                                                   == (IData)(vlSelf->io_csr_debug_read_address))
                                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                                   : 
                                                                  ((0xc80U 
                                                                    == (IData)(vlSelf->io_csr_debug_read_address))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                                    : 
                                                                   ((0xc00U 
                                                                     == (IData)(vlSelf->io_csr_debug_read_address))
                                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                                     : 
                                                                    ((0x320U 
                                                                      == (IData)(vlSelf->io_csr_debug_read_address))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit
                                                                      : 
                                                                     ((0x342U 
                                                                       == (IData)(vlSelf->io_csr_debug_read_address))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                                       : 
                                                                      ((0x341U 
                                                                        == (IData)(vlSelf->io_csr_debug_read_address))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                                        : 
                                                                       ((0x340U 
                                                                         == (IData)(vlSelf->io_csr_debug_read_address))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                                         : 
                                                                        ((0x344U 
                                                                          == (IData)(vlSelf->io_csr_debug_read_address))
                                                                          ? vlSelf->io_interrupt_flag
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
                                                                             : 0U))))))))))))))))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in 
        = ((0xb89U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                       >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow
            : ((0xb09U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                           >> 0x14U)) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)
                : ((0xb88U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                               >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow
                    : ((0xb08U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                   >> 0x14U)) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)
                        : ((0xb87U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0x14U)) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow
                            : ((0xb07U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U))
                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)
                                : ((0xb86U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow
                                    : ((0xb06U == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0x14U))
                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)
                                        : ((0xb85U 
                                            == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0x14U))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow
                                            : ((0xb05U 
                                                == 
                                                (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0x14U))
                                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)
                                                : (
                                                   (0xb84U 
                                                    == 
                                                    (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0x14U))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow
                                                    : 
                                                   ((0xb04U 
                                                     == 
                                                     (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)
                                                     : 
                                                    ((0xb83U 
                                                      == 
                                                      (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0x14U))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow
                                                      : 
                                                     ((0xb03U 
                                                       == 
                                                       (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U))
                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)
                                                       : 
                                                      ((0xb82U 
                                                        == 
                                                        (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                        : 
                                                       ((0xb02U 
                                                         == 
                                                         (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U))
                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                         : 
                                                        ((0xb80U 
                                                          == 
                                                          (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                           >> 0x14U))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                          : 
                                                         ((0xb00U 
                                                           == 
                                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                            >> 0x14U))
                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                           : 
                                                          ((0xc82U 
                                                            == 
                                                            (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                             >> 0x14U))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow
                                                            : 
                                                           ((0xc02U 
                                                             == 
                                                             (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                              >> 0x14U))
                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)
                                                             : 
                                                            ((0xc80U 
                                                              == 
                                                              (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                               >> 0x14U))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow
                                                              : 
                                                             ((0xc00U 
                                                               == 
                                                               (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                >> 0x14U))
                                                               ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)
                                                               : 
                                                              ((0x320U 
                                                                == 
                                                                (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                 >> 0x14U))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit
                                                                : 
                                                               ((0x342U 
                                                                 == 
                                                                 (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                  >> 0x14U))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                                 : 
                                                                ((0x341U 
                                                                  == 
                                                                  (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                   >> 0x14U))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                                  : 
                                                                 ((0x340U 
                                                                   == 
                                                                   (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                    >> 0x14U))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                                   : 
                                                                  ((0x344U 
                                                                    == 
                                                                    (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                     >> 0x14U))
                                                                    ? vlSelf->io_interrupt_flag
                                                                    : 
                                                                   ((0x305U 
                                                                     == 
                                                                     (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                      >> 0x14U))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                                     : 
                                                                    ((0x304U 
                                                                      == 
                                                                      (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                       >> 0x14U))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                                                      : 
                                                                     ((0x300U 
                                                                       == 
                                                                       (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                                        >> 0x14U))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                                       : 0U))))))))))))))))))))))))))))));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write 
        = ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                 & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_))));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit 
        = (((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31)
             : ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                    >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30)
                 : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                        >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29)
                     : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28)
                         : ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                >> 2U)))
                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27)
                             : ((0x1aU == (0x1fU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26)
                                 : ((0x19U == (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                  >> 2U)))
                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25)
                                     : ((0x18U == (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                      >> 2U)))
                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24)
                                         : ((0x17U 
                                             == (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                    >> 2U)))
                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23)
                                             : ((0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                     >> 2U)))
                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22)
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21)
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20)
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19)
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18)
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17)
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16)
                                                       : 
                                                      ((0xfU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15)
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14)
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13)
                                                          : 
                                                         ((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12)
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11)
                                                            : 
                                                           ((0xaU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10)
                                                             : 
                                                            ((9U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9)
                                                              : 
                                                             ((8U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8)
                                                               : 
                                                              ((7U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7)
                                                                : 
                                                               ((6U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6)
                                                                 : 
                                                                ((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5)
                                                                  : 
                                                                 ((4U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4)
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3)
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1)
                                                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0)))))))))))))))))))))))))))))))) 
           & (((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31
                : ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                       >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30
                    : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                           >> 2U)))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29
                        : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                               >> 2U)))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28
                            : ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                   >> 2U)))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                 >> 2U)))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                     >> 2U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                >> 2U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                    >> 2U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                        >> 2U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                         >> 2U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                          >> 2U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                           >> 2U)))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                            >> 2U)))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                             >> 2U)))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                              >> 2U)))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                               >> 2U)))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                >> 2U)))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                 >> 2U)))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                  >> 2U)))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                   >> 2U)))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                    >> 2U)))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                     >> 2U)))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                      >> 2U)))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                       >> 2U)))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                        >> 2U)))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                         >> 2U)))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                          >> 2U)))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                           >> 2U)))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                            >> 2U)))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                             >> 2U)))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1
                                                                         : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0))))))))))))))))))))))))))))))) 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                  >> 7U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1))
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1));
    vlSelf->__VdfgTmp_hf7b7a7fe__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_0
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0];
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken 
        = (((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31)
             : ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                    >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30)
                 : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                        >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29)
                     : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28)
                         : ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27)
                             : ((0x1aU == (0x1fU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26)
                                 : ((0x19U == (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25)
                                     : ((0x18U == (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24)
                                         : ((0x17U 
                                             == (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23)
                                             : ((0x16U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22)
                                                 : 
                                                ((0x15U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21)
                                                  : 
                                                 ((0x14U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20)
                                                   : 
                                                  ((0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19)
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18)
                                                     : 
                                                    ((0x11U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17)
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16)
                                                       : 
                                                      ((0xfU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15)
                                                        : 
                                                       ((0xeU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14)
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13)
                                                          : 
                                                         ((0xcU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12)
                                                           : 
                                                          ((0xbU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11)
                                                            : 
                                                           ((0xaU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10)
                                                             : 
                                                            ((9U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9)
                                                              : 
                                                             ((8U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8)
                                                               : 
                                                              ((7U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7)
                                                                : 
                                                               ((6U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6)
                                                                 : 
                                                                ((5U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5)
                                                                  : 
                                                                 ((4U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4)
                                                                   : 
                                                                  ((3U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3)
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2)
                                                                     : 
                                                                    ((1U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1)
                                                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0)))))))))))))))))))))))))))))))) 
           & ((((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                    >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31
                 : ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                        >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30
                     : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29
                         : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28
                             : ((0x1bU == (0x1fU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27
                                 : ((0x1aU == (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                  >> 2U)))
                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26
                                     : ((0x19U == (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25
                                         : ((0x18U 
                                             == (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24
                                             : ((0x17U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16
                                                        : 
                                                       ((0xfU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15
                                                         : 
                                                        ((0xeU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14
                                                          : 
                                                         ((0xdU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13
                                                           : 
                                                          ((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12
                                                            : 
                                                           ((0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11
                                                             : 
                                                            ((0xaU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10
                                                              : 
                                                             ((9U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9
                                                               : 
                                                              ((8U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8
                                                                : 
                                                               ((7U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7
                                                                 : 
                                                                ((6U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6
                                                                  : 
                                                                 ((5U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                           >> 2U)))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1
                                                                       : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0))))))))))))))))))))))))))))))) 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                   >> 7U)) & (2U <= ((0x1fU == (0x1fU 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31)
                                      : ((0x1eU == 
                                          (0x1fU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                            >> 2U)))
                                          ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30)
                                          : ((0x1dU 
                                              == (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29)
                                              : ((0x1cU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                      >> 2U)))
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28)
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                       >> 2U)))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27)
                                                   : 
                                                  ((0x1aU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26)
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25)
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24)
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23)
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22)
                                                        : 
                                                       ((0x15U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21)
                                                         : 
                                                        ((0x14U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20)
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19)
                                                           : 
                                                          ((0x12U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18)
                                                            : 
                                                           ((0x11U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17)
                                                             : 
                                                            ((0x10U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16)
                                                              : 
                                                             ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15)
                                                               : 
                                                              ((0xeU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14)
                                                                : 
                                                               ((0xdU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13)
                                                                 : 
                                                                ((0xcU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12)
                                                                  : 
                                                                 ((0xbU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11)
                                                                   : 
                                                                  ((0xaU 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10)
                                                                    : 
                                                                   ((9U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9)
                                                                     : 
                                                                    ((8U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8)
                                                                      : 
                                                                     ((7U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                           >> 2U)))
                                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7)
                                                                       : 
                                                                      ((6U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                            >> 2U)))
                                                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6)
                                                                        : 
                                                                       ((5U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                             >> 2U)))
                                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5)
                                                                         : 
                                                                        ((4U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                              >> 2U)))
                                                                          ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4)
                                                                          : 
                                                                         ((3U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                               >> 2U)))
                                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3)
                                                                           : 
                                                                          ((2U 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                                >> 2U)))
                                                                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2)
                                                                            : 
                                                                           ((1U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                                >> 2U)))
                                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1)
                                                                             : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0)))))))))))))))))))))))))))))))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__is_return 
        = (IData)(((0x67U == (0xfffU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                   & ((1U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xfU))) | 
                      (5U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xfU))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0 
              == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                  >> 2U)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7 
        = ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
              >> 0x1fU) ? 0x1fffffU : 0U) << 0xbU) 
           | (0x7ffU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0 
        = ((0x73U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_) 
           | (0x100073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_)) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_) 
                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 
        = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid)) 
           & (1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43 
        = ((((vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
              >> 0x1fU) ? 0xffffU : 0U) << 0x10U) | 
           (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
            >> 0x10U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
              | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
              | (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
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
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37 
            = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)
                ? 0U : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36 
            = ((IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0) 
               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_35 
            = ((~ (IData)(TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY));
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_34 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_25;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_35 
            = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_34 
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_1)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2));
    __VdfgTmp_hf6cf16cb__0 = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                               [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                               << 8U) | (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
            ? ((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                   >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_31
                : ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                       >> 2U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_30
                    : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                           >> 2U)))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_29
                        : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                               >> 2U)))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_28
                            : ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                   >> 2U)))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_27
                                : ((0x1aU == (0x1fU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                 >> 2U)))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_26
                                    : ((0x19U == (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_25
                                        : ((0x18U == 
                                            (0x1fU 
                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_24
                                            : ((0x17U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                    >> 2U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_23
                                                : (
                                                   (0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                        >> 2U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                         >> 2U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                          >> 2U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                           >> 2U)))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                            >> 2U)))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                             >> 2U)))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                              >> 2U)))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                               >> 2U)))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                >> 2U)))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14
                                                            : 
                                                           ((0xdU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                 >> 2U)))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13
                                                             : 
                                                            ((0xcU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                  >> 2U)))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12
                                                              : 
                                                             ((0xbU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                   >> 2U)))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11
                                                               : 
                                                              ((0xaU 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                    >> 2U)))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10
                                                                : 
                                                               ((9U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                     >> 2U)))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9
                                                                 : 
                                                                ((8U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                      >> 2U)))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8
                                                                  : 
                                                                 ((7U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                       >> 2U)))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7
                                                                   : 
                                                                  ((6U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                        >> 2U)))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6
                                                                    : 
                                                                   ((5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                         >> 2U)))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5
                                                                     : 
                                                                    ((4U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                          >> 2U)))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4
                                                                      : 
                                                                     ((3U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                           >> 2U)))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3
                                                                       : 
                                                                      ((2U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                            >> 2U)))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                                             >> 2U)))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1
                                                                         : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0)))))))))))))))))))))))))))))))
            : ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_) 
           & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__is_return));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr 
        = ((~ (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__is_return)) 
           & (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request 
        = ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           | ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7)
            : 7U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6)
            : 7U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5)
            : 7U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4)
            : 7U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3)
            : 7U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2)
            : 7U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1)
            : 7U);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7) 
           | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6) 
              | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5) 
                 | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4) 
                    | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3) 
                       | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2) 
                          | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1) 
                             | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0))))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0)
            : 7U);
    if ((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_383 = 2U;
        TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_383 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31;
        TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319 
            = ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30)
                : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                       >> 2U))) ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29)
                    : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                           >> 2U)))
                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28)
                        : ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                               >> 2U)))
                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27)
                            : ((0x1aU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                   >> 2U)))
                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26)
                                : ((0x19U == (0x1fU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                 >> 2U)))
                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25)
                                    : ((0x18U == (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                     >> 2U)))
                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24)
                                        : ((0x17U == 
                                            (0x1fU 
                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                >> 2U)))
                                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23)
                                            : ((0x16U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                    >> 2U)))
                                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22)
                                                : (
                                                   (0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                        >> 2U)))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21)
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                         >> 2U)))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                          >> 2U)))
                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19)
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                           >> 2U)))
                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18)
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                            >> 2U)))
                                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17)
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                             >> 2U)))
                                                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16)
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                              >> 2U)))
                                                          ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15)
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                               >> 2U)))
                                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14)
                                                           : 
                                                          ((0xdU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                >> 2U)))
                                                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13)
                                                            : 
                                                           ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                 >> 2U)))
                                                             ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12)
                                                             : 
                                                            ((0xbU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                  >> 2U)))
                                                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11)
                                                              : 
                                                             ((0xaU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                   >> 2U)))
                                                               ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10)
                                                               : 
                                                              ((9U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                    >> 2U)))
                                                                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9)
                                                                : 
                                                               ((8U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                     >> 2U)))
                                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8)
                                                                 : 
                                                                ((7U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                      >> 2U)))
                                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7)
                                                                  : 
                                                                 ((6U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                       >> 2U)))
                                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6)
                                                                   : 
                                                                  ((5U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                        >> 2U)))
                                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5)
                                                                    : 
                                                                   ((4U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                         >> 2U)))
                                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4)
                                                                     : 
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                          >> 2U)))
                                                                      ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3)
                                                                      : 
                                                                     ((2U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                           >> 2U)))
                                                                       ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2)
                                                                       : 
                                                                      ((1U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                                                            >> 2U)))
                                                                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1)
                                                                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0)))))))))))))))))))))))))))))));
    }
    if ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_512 
            = ((0U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_513 
            = ((1U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_514 
            = ((2U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_515 
            = ((3U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_516 
            = ((4U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_517 
            = ((5U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_518 
            = ((6U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_519 
            = ((7U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_520 
            = ((8U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_521 
            = ((9U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_522 
            = ((0xaU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_523 
            = ((0xbU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_524 
            = ((0xcU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_525 
            = ((0xdU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_526 
            = ((0xeU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_527 
            = ((0xfU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                  >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_528 
            = ((0x10U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_529 
            = ((0x11U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_530 
            = ((0x12U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_531 
            = ((0x13U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_532 
            = ((0x14U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_533 
            = ((0x15U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_534 
            = ((0x16U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_535 
            = ((0x17U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_536 
            = ((0x18U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_537 
            = ((0x19U != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_538 
            = ((0x1aU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_539 
            = ((0x1bU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_540 
            = ((0x1cU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_541 
            = ((0x1dU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_542 
            = ((0x1eU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_543 
            = ((0x1fU != (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                   >> 2U))) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 
            = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_512 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_513 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_514 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_515 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_516 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_517 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_518 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_519 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_520 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_521 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_522 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_523 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_524 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_525 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_526 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_527 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_528 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_529 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_530 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_531 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_532 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_533 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_534 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_535 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_536 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_537 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_538 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_539 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_540 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_541 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_542 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_543 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31;
        if ((1U < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 
                = (3U & ((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 
                = (3U & ((1U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 
                = (3U & ((2U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 
                = (3U & ((3U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 
                = (3U & ((4U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 
                = (3U & ((5U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 
                = (3U & ((6U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 
                = (3U & ((7U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 
                = (3U & ((8U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 
                = (3U & ((9U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                          >> 2U))) ? 
                         ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                          - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 
                = (3U & ((0xaU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 
                = (3U & ((0xbU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 
                = (3U & ((0xcU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 
                = (3U & ((0xdU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 
                = (3U & ((0xeU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 
                = (3U & ((0xfU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                            >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 
                = (3U & ((0x10U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 
                = (3U & ((0x11U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 
                = (3U & ((0x12U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 
                = (3U & ((0x13U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 
                = (3U & ((0x14U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 
                = (3U & ((0x15U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 
                = (3U & ((0x16U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 
                = (3U & ((0x17U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 
                = (3U & ((0x18U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 
                = (3U & ((0x19U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 
                = (3U & ((0x1aU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 
                = (3U & ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 
                = (3U & ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 
                = (3U & ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 
                = (3U & ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 
                = (3U & ((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                                             >> 2U)))
                          ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319) 
                             - (IData)(1U)) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31)));
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 
                = (3U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31));
        }
    }
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3 
        = ((3U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))
            ? 3U : (3U & ((IData)(1U) + (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_319))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_351 
        = ((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                               >> 2U))) ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31));
    if ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_382 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_350 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_382 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_350 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30;
    }
    if ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_381 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_349 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_381 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_349 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29;
    }
    if ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_380 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_348 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_380 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_348 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28;
    }
    if ((0x1bU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_379 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_347 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_379 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_347 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27;
    }
    if ((0x1aU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_378 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_346 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_378 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_346 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26;
    }
    if ((0x19U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_377 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_345 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_377 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_345 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25;
    }
    if ((0x18U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_376 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_344 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_376 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_344 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24;
    }
    if ((0x17U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_375 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_343 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_375 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_343 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23;
    }
    if ((0x16U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_374 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_342 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_374 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_342 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22;
    }
    if ((0x15U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_373 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_341 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_373 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_341 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21;
    }
    if ((0x14U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_372 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_340 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_372 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_340 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20;
    }
    if ((0x13U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_371 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_339 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_371 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_339 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19;
    }
    if ((0x12U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_370 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_338 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_370 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_338 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18;
    }
    if ((0x11U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_369 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_337 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_369 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_337 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17;
    }
    if ((0x10U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                            >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_368 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_336 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_368 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_336 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16;
    }
    if ((0xfU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_367 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_335 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_367 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_335 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15;
    }
    if ((0xeU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_366 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_334 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_366 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_334 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14;
    }
    if ((0xdU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_365 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_333 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_365 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_333 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13;
    }
    if ((0xcU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_364 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_332 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_364 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_332 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12;
    }
    if ((0xbU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_363 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_331 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_363 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_331 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11;
    }
    if ((0xaU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                           >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_362 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_330 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_362 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_330 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10;
    }
    if ((9U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_361 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_329 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_361 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_329 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9;
    }
    if ((8U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_360 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_328 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_360 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_328 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8;
    }
    if ((7U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_359 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_327 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_359 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_327 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7;
    }
    if ((6U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_358 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_326 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_358 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_326 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6;
    }
    if ((5U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_357 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_325 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_357 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_325 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5;
    }
    if ((4U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_356 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_324 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_356 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_324 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4;
    }
    if ((3U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_355 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_323 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_355 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_323 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3;
    }
    if ((2U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_354 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_322 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_354 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_322 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2;
    }
    if ((1U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_353 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_321 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_353 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_321 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1;
    }
    if ((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                         >> 2U)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_352 = 2U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_320 
            = TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___counters_T_3;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_352 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_320 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in 
        = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                  >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
               | ((0xff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_) 
                  | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                >> 9U)) | (0x7feU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)))))
            : ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                : ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                    : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                        ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                              >> 0x1fU) ? 0xfffffU : 0U) 
                            << 0xcU) | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 7U)))))
                        : ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                  >> 0x1fU) ? 0x1fffffU
                                  : 0U) << 0xbU) | 
                               ((0x7e0U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 7U))))
                            : ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                : ((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                    : ((0x13U == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                        ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_7
                                        : ((((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x1fU)
                                              ? 0xfffffU
                                              : 0U) 
                                            << 0xcU) 
                                           | (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0x14U))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read)
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87 
        = ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
            ? ((2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                ? VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data, 0x10U)
                : ((1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                    ? (0xffffU & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                  >> 8U)) : ((0U == 
                                              (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                              ? (0xffffU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                              : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data, 0x10U))))
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                ? ((2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43
                    : ((1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                        ? ((((0x800000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                              ? 0xffffU : 0U) << 0x10U) 
                           | (0xffffU & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                         >> 8U))) : 
                       ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                         ? ((((0x8000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                               ? 0xffffU : 0U) << 0x10U) 
                            | (0xffffU & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data))
                         : TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_43)))
                : ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                    ? ((2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                        ? (0xffU & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                    >> 0x10U)) : ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                      >> 8U))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data, 0x18U))))
                    : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                        ? ((2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                            ? ((((0x800000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                  ? 0xffffffU : 0U) 
                                << 8U) | (0xffU & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                   >> 0x10U)))
                            : ((1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                ? ((((0x8000U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                      ? 0xffffffU : 0U) 
                                    << 8U) | (0xffU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                                 >> 8U)))
                                : ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_))
                                    ? ((((0x80U & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (0xffU & vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data))
                                    : ((((vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                          >> 0x1fU)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                                          >> 0x18U)))))
                        : 0U))));
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall 
            = (1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid)
                ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87)
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data);
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall 
            = (1U & ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                      ? (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid))
                      : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_45)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data;
    }
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
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
           | ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
              | ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                 | ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                    | ((~ ((0x73U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                           & ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0xcU))) 
                              | ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU))) 
                                 | (6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0xcU))))))) 
                       & (0x73U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_3)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3));
    vlSelf->__VdfgTmp_h1bc5eb2c__0 = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                       [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                       << 0x10U) | (IData)(__VdfgTmp_hf6cf16cb__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_) 
           & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read 
        = (((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
            & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_))) 
           & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request) 
           & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 5U)) & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 2U)) & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                             & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                                                | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid) 
                                                   & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___T_2 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_0)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_1));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
           + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2)
            ? (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0x14U)) : 0U);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in))
            ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in) 
                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))
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
    __VdfgTmp_hbcb862ea__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in));
    __VdfgTmp_h2206b864__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_5)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return 
        = ((0x67U == (0x7fU & (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0))) 
           & (IData)(((0U == (0xf80U & (IData)(__VdfgTmp_hf6cf16cb__0))) 
                      & ((1U == (0x1fU & (vlSelf->__VdfgTmp_h1bc5eb2c__0 
                                          >> 0xfU))) 
                         | (5U == (0x1fU & (vlSelf->__VdfgTmp_h1bc5eb2c__0 
                                            >> 0xfU)))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write));
    TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_1)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_2));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & ((IData)(__VdfgTmp_h2206b864__0) & (0U 
                                                  != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(__VdfgTmp_hbcb862ea__0) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2)
            ? ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2
                        : 0U))) : 0U);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1)
            ? (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                        >> 0xfU)) : 0U);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in))
            ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in) 
                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))
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
    __VdfgTmp_h897123fa__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    __VdfgTmp_h55524313__0 = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_)) 
                              & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_) 
                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in)) 
                                 | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_) 
                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in))));
    __VdfgTmp_h1ec9fb54__0 = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_7)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_10 
        = ((IData)(TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_11 
        = ((IData)(TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_3)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_3));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg2_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_reg1_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
            & ((IData)(__VdfgTmp_h1ec9fb54__0) & (0U 
                                                  != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))))
            ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                     & ((IData)(__VdfgTmp_h897123fa__0) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs1)
            ? ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
                    : ((0U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                        ? TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1
                        : 0U))) : 0U);
    __VdfgTmp_h3895027b__0 = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_)) 
                              & ((IData)(__VdfgTmp_h1ec9fb54__0) 
                                 | (IData)(__VdfgTmp_h2206b864__0)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_9)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_5)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_4));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_
            : TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data 
        = ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                         >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                       | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                   >> 0xfU)))
            : ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((~ (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                  >> 0xfU))) 
                                           & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_)
                : ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                  >> 0xfU))
                    : ((2U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                     >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                                   | TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data)
                        : ((3U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                         >> 0xcU)))
                            ? ((~ TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data) 
                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_)
                            : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                             >> 0xcU)))
                                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data
                                : 0U))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
        = ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg1_forward))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem
                : TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard 
        = (((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_)) 
            & (IData)(__VdfgTmp_h55524313__0)) | ((
                                                   (3U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_)) 
                                                   & (IData)(__VdfgTmp_h3895027b__0)) 
                                                  | ((3U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_)) 
                                                     & ((0U 
                                                         != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                                                        & ((IData)(__VdfgTmp_h897123fa__0) 
                                                           | (IData)(__VdfgTmp_hbcb862ea__0))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
              & (IData)(__VdfgTmp_h3895027b__0)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11) 
            > (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___oldest_age_T_11)
            : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_7)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_5));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_3 
        = (((QData)((IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_5 
        = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
            << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle)));
    if ((0x340U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_31 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_32 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_31 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_32 
            = ((0x320U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                ? (0x3fdU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit);
    }
    if ((0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 
            = ((0x342U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause);
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x341U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x305U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x304U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
            & (0x300U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash 
        = (0xffU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                    ^ ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                        >> 8U) ^ ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                   >> 0x10U) ^ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in 
                                                >> 0x18U)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
        = ((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? (0xfffffffeU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                              + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in))
            : ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1
                    : 0U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall 
        = ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
             | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_)) 
            & (IData)(__VdfgTmp_h55524313__0)) | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13) 
                                                  | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                                      & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_)) 
                                                     | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_9)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_6));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt 
        = ((0xffffff00U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
           | ((0x80U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                        << 4U)) | (0x77U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)));
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_0))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_1))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_2))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_3))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_4))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_5))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
           & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6 
               == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                   >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_6))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
            & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
                & (IData)(__VdfgTmp_h55524313__0)) 
               | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))) 
           & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
                 & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__is_jal_jalr_hazard))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
           & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
               & (IData)(__VdfgTmp_h55524313__0)) | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl__DOT___T_13)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age 
        = (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11) 
            < (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7))
            ? (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___min_age_T_11)
            : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_ages_7));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
            ? ((0x100073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                ? 3U : ((0x73U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                         ? 0xbU : 0xaU)) : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                                             ? ((1U 
                                                 & vlSelf->io_interrupt_flag)
                                                 ? 0x80000007U
                                                 : 0x8000000bU)
                                             : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_) 
                                                 & (0x342U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                                                 : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) 
           | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0) 
              | (0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index 
        = ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7) 
             & ((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 
                 == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                     >> 2U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash) 
                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7)))) 
            | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6) 
               | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5) 
                  | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4) 
                     | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3) 
                        | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2) 
                           | ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1) 
                              | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0))))))))
            ? ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_0)
                ? 0U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_1)
                         ? 1U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_2)
                                  ? 2U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_3)
                                           ? 3U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_4)
                                                    ? 4U
                                                    : 
                                                   ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_5)
                                                     ? 5U
                                                     : 
                                                    ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__existing_vec_6)
                                                      ? 6U
                                                      : 7U)))))))
            : ((1U & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7)) 
                      | ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)) 
                         | ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)) 
                            | ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)) 
                               | ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)) 
                                  | ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)) 
                                     | (0U != (3U & 
                                               (~ (
                                                   ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0))))))))))))
                ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0)
                    ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1)
                        ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2)
                            ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3)
                                ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4)
                                    ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5)
                                        ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6)
                                            ? 7U : 6U)
                                        : 5U) : 4U)
                                : 3U) : 2U) : 1U) : 0U)
                : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0) 
                    & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
                       == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                    ? 0U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1) 
                             & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1) 
                                == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                             ? 1U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2) 
                                      & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2) 
                                         == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                      ? 2U : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3) 
                                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3) 
                                                  == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                               ? 3U
                                               : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4) 
                                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4) 
                                                      == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                                   ? 4U
                                                   : 
                                                  (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5) 
                                                    & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5) 
                                                       == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                                    ? 5U
                                                    : 
                                                   (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6) 
                                                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6) 
                                                        == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__oldest_age)))
                                                     ? 6U
                                                     : 7U)))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
           & (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0 
        = (1U & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                 & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_0) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_1) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_2) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_3) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_4) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_5) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_6) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6) 
              == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert)
            ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                    : ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                        : 0U))) : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag 
        = (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
               | ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                  & ((7U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                   >> 0xcU))) ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                                 >= vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                      : ((6U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xcU))) ? 
                         (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                          < vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                          : ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0xcU)))
                              ? VL_GTES_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                              : ((4U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))
                                  ? VL_LTS_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                                  : ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))
                                      ? (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                         != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8)
                                      : (IData)(((0U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 
                                                    == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8))))))))))) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_32 
        = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_33 
        = ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_34 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_35 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_36 
        = ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_37 
        = ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_38 
        = ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_39 
        = ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index)) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid_io_in 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit) 
           & ((0x67U == (0x7fU & (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0))) 
              & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return)) 
                 & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
            | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           & (((1U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                >> 7U))) | (5U == (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 7U)))) 
              & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 8U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
                                             & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 9U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T) 
                                             & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__is_indirect_jalr) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0)
            ? 0U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1)
                     ? 1U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2)
                              ? 2U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3)
                                       ? 3U : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4)
                                                ? 4U
                                                : ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5)
                                                    ? 5U
                                                    : 
                                                   ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6)
                                                     ? 6U
                                                     : 7U)))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) 
           & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag)) 
              | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
    TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T 
        = ((~ ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_) 
               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_))) 
           & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_) 
              & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in 
        = ((0U < (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop));
    if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit) {
        TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0 
            = (1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target 
            = ((7U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_7
                : ((6U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_6
                    : ((5U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_5
                        : ((4U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_4
                            : ((3U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_3
                                : ((2U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_2
                                    : ((1U == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__hit_index))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_1
                                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_0)))))));
    } else {
        TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target = 0U;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
              == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target 
        = ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T) 
           & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_ 
              != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target));
    if (TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT____VdfgTmp_h8276cdab__0) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_0)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_3))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_1)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_5))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_2)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_7))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_3)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_9))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_4)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_11))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_5)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_13))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30 
            = (7U & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__mru_vec_6)
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_15))));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31 
            = (7U & (((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_hit_vec_7) 
                      & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7) 
                         == (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__min_age)))
                      ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7) 
                              + (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_17))));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31 
            = (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7));
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_2 
        = ((1U & ((~ (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)) 
                  | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
            : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr
                : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid_io_in)
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target
                    : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc
                        : ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 7U)) & ((((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_)) 
                                               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken)) 
                                              | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)) 
                                             & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
           & (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T)) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch) 
                 | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___GEN_1 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
            & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw)) 
           | ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___T_2)) 
              & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___T_2));
    TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict) 
           | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
               & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ 
                     != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target))) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                 & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_branch_hazard)) 
                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ 
                       != vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 3U)) & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                             & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0))))));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__need_if_flush 
        = (((~ ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T) 
                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                       == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_)) 
                   | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T) 
                      & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
                         == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_))))) 
            & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag))) 
           | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__need_if_flush));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
           & ((IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__need_if_flush) 
              | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h6b812334__0)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 6U)) & (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
           + (QData)((IData)(((~ (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit 
                                  >> 4U)) & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_pc_stall) 
                                             & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)) 
                                                & (~ (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs_io_control_stall))))))));
    if ((0xb02U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 
            = (((QData)((IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret 
                                 >> 0x20U))) << 0x20U) 
               | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
    } else if ((0xb82U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 
            = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret)));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10;
        if ((0xb03U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
                = (((QData)((IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 
                                     >> 0x20U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
        } else if ((0xb83U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
                = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                    << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3)));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
        } else {
            if ((0xb04U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                    = (((QData)((IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
            } else if ((0xb84U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                    = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                        << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4)));
            } else {
                if ((0xb05U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                        = (((QData)((IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 
                                             >> 0x20U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                } else if ((0xb85U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                        = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                            << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5)));
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                } else {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13;
                    if ((0xb06U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                            = (((QData)((IData)((vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 
                                                 >> 0x20U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
                    } else if ((0xb86U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                            = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                                << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6)));
                    } else {
                        if ((0xb07U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                                = (((QData)((IData)(
                                                    (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 
                                                     >> 0x20U))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
                        } else if ((0xb87U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                                = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7)));
                        } else {
                            if ((0xb08U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                                    = (((QData)((IData)(
                                                        (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 
                                                         >> 0x20U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)));
                                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                            } else if ((0xb88U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))) {
                                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                                    = (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8)));
                                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17;
                            } else {
                                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 
                                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16;
                                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 
                                    = ((0xb09U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                                        ? (((QData)((IData)(
                                                            (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 
                                                             >> 0x20U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)))
                                        : ((0xb89U 
                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_))
                                            ? (((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9)))
                                            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17));
                            }
                            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 
                                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15;
                        }
                        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 
                            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14;
                    }
                }
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
            }
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11;
        }
    }
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
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_reg2_forward = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mie = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_direction_T = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_raw = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_mispredict_pending = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_correction_addr_pending = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ras_wrong_target_T = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT___ibtb_wrong_target_T = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT____VdfgTmp_hf9d721d1__0 = 0;
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_push = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_pop = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras_io_predicted_addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_predicted_target = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_hit = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb_io_update_rs1_hash = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__is_return = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT____VdfgTmp_hfb0be9ea__0 = 0;
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_16 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_17 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_18 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_19 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_20 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_21 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_22 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_23 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_24 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_25 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_26 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_27 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_28 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_29 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_30 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_31 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_16 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_17 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_18 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_19 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_20 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_21 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_22 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_23 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_24 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_25 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_26 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_27 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_28 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_29 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_30 = VL_RAND_RESET_I(25);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_31 = VL_RAND_RESET_I(25);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_16 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_17 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_18 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_19 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_20 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_21 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_22 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_23 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_24 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_25 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_26 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_27 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_28 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_29 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_30 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_31 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_0 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_1 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_2 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_3 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_4 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_5 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_6 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_7 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_8 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_9 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_10 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_11 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_12 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_13 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_14 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_15 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_16 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_17 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_18 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_19 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_20 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_21 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_22 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_23 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_24 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_25 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_26 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_27 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_28 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_29 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_30 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__counters_31 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__entry_hit = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_192 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_193 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_194 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_195 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_196 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_197 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_198 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_199 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_200 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_201 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_202 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_203 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_204 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_205 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_206 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_207 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_208 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_209 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_210 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_211 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_212 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_213 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_214 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_215 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_216 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_217 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_218 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_219 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_220 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_221 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_222 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_223 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_320 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_321 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_322 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_323 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_324 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_325 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_326 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_327 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_328 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_329 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_330 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_331 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_332 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_333 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_334 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_335 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_336 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_337 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_338 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_339 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_340 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_341 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_342 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_343 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_344 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_345 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_346 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_347 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_348 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_349 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_350 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_351 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_352 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_353 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_354 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_355 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_356 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_357 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_358 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_359 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_360 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_361 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_362 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_363 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_364 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_365 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_366 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_367 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_368 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_369 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_370 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_371 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_372 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_373 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_374 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_375 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_376 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_377 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_378 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_379 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_380 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_381 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_382 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_383 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_512 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_513 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_514 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_515 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_516 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_517 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_518 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_519 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_520 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_521 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_522 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_523 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_524 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_525 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_526 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_527 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_528 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_529 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_530 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_531 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_532 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_533 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_534 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_535 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_536 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_537 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_538 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_539 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_540 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_541 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_542 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_543 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_544 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_545 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_546 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_547 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_548 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_549 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_550 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_551 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_552 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_553 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_554 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_555 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_556 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_557 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_558 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_559 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_560 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_561 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_562 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_563 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_564 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_565 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_566 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_567 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_568 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_569 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_570 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_571 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_572 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_573 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_574 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_575 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_0 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__stack_3 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT__sp = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___sp_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ras__DOT___GEN_26 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_4 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_5 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_6 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__valid_7 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_0 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_1 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_2 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_3 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_4 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_5 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_6 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__pc_tags_7 = VL_RAND_RESET_I(30);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_0 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_1 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_2 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_3 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_4 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_5 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_6 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__rs1_hashs_7 = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_0 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_3 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_4 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_5 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_6 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__targets_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_0 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_2 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_3 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_4 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_5 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_6 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__ages_7 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_0_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_1_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_2_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_3_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_11 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_4_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_5_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_6_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___T_17 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___ages_7_T_1 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_24 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_25 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_26 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_27 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_28 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_29 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_30 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_31 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT__target_index = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__ibtb__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid_io_in = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid_io_in = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_valid__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ras_predicted_target__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_valid__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__ibtb_predicted_target__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___branch_taken_T_8 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__reg_ = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__reg_ = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ = VL_RAND_RESET_I(12);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_func = VL_RAND_RESET_I(4);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_ = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_ = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__reg_ = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_address = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_87 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_44 = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__in_active_read = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_ = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_ = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcountinhibit = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcycle_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__minstret_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter3_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter4_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter5_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter6_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter7_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter8_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mhpmcounter9_shadow = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_9 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_10 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_11 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_13 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_14 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_15 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_16 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_17 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_31 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_32 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___mcycle_T_5 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_108 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_109 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_110 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_111 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_112 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_113 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_114 = VL_RAND_RESET_Q(64);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_115 = VL_RAND_RESET_Q(64);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37 = VL_RAND_RESET_I(3);
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
    vlSelf->__VdfgTmp_h1bc5eb2c__0 = 0;
    vlSelf->__VdfgTmp_hf7b7a7fe__0 = 0;
    vlSelf->__Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    vlSelf->__Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
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
