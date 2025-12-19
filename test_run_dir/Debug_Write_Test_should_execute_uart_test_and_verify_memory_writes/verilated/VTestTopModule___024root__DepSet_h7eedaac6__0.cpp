// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_INLINE_OPT void VTestTopModule___024root___ico_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T;
    TestTopModule__DOT__cpu__DOT__cpu__DOT___btb_wrong_target_T = 0;
    // Body
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert)
            ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                    : ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                        : 0U))) : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address);
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

void VTestTopModule___024root___eval_ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTestTopModule___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VTestTopModule___024root___eval_triggers__ico(VTestTopModule___024root* vlSelf);

bool VTestTopModule___024root___eval_phase__ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTestTopModule___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTestTopModule___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTestTopModule___024root___eval_act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    // Body
    vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->TestTopModule__DOT__rom_loader__DOT__address;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0U;
    vlSelf->TestTopModule__DOT__CPU_clkdiv = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((3U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv))
                                                   ? 0U
                                                   : (IData)(vlSelf->TestTopModule__DOT___CPU_next_T_2)));
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1)
             : (0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 8U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3)
             : (0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
               >> 0x18U);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2)
             : (0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 0x10U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0)
             : (0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0xffU & vlSelf->TestTopModule__DOT__mem_io_bundle_write_data);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->io_mem_debug_read_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    }
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
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
}

extern const VlUnpacked<CData/*1:0*/, 32> VTestTopModule__ConstPool__TABLE_h1758b35a_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTestTopModule__ConstPool__TABLE_h4e9589e2_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTestTopModule__ConstPool__TABLE_h6553ce8e_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTestTopModule__ConstPool__TABLE_hb2ccac0a_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTestTopModule__ConstPool__TABLE_h5af49ca3_0;
extern const VlUnpacked<CData/*1:0*/, 128> VTestTopModule__ConstPool__TABLE_hfea364f3_0;

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__1(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__1\n"); );
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
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    IData/*31:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
    __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out = 0;
    CData/*1:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0;
    CData/*2:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state = 0;
    IData/*31:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr = 0;
    CData/*0:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID = 0;
    CData/*0:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY = 0;
    CData/*0:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID = 0;
    CData/*2:0*/ __Vdly__TestTopModule__DOT__mem_slave__DOT__state;
    __Vdly__TestTopModule__DOT__mem_slave__DOT__state = 0;
    CData/*0:0*/ __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY;
    __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY = 0;
    // Body
    __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY 
        = vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY;
    __Vdly__TestTopModule__DOT__mem_slave__DOT__state 
        = vlSelf->TestTopModule__DOT__mem_slave__DOT__state;
    __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr 
        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID 
        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY 
        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state 
        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state;
    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID 
        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID;
    __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    __Vtableidx1 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__myreg) 
                     << 4U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx1])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx1];
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx1];
    if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid) {
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken) {
            if ((0xdU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                  >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_13 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_13 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((0xbU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                  >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_11 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_11 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((0xaU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                  >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_10 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_10 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((8U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_8 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_8 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((7U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_7 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_7 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((5U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_5 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_5 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((2U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_2 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_2 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((0xfU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                  >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_15 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_15 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((1U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_1 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_1 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((0U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_0 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_0 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((0xeU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                  >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_14 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_14 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((9U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_9 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_9 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((4U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_4 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_4 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((6U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_6 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_6 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((0xcU == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                  >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_12 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_12 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
            if ((3U == (0xfU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                                >> 2U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__targets_3 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__tags_3 
                    = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                       >> 6U);
            }
        }
    }
    vlSelf->TestTopModule__DOT__read_pending = ((1U 
                                                 & (~ (IData)(vlSelf->reset))) 
                                                && ((IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__read) 
                                                    & (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)));
    __Vtableidx5 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__myreg) 
                     << 4U) | (((0x33U != (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx5])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx5];
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx5];
    __Vtableidx4 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__myreg) 
                     << 4U) | ((((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                 | ((0x63U == (0x7fU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)))) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx4])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx4];
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx4];
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out) 
             & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out)))) {
            if ((0x14U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x13U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x12U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x11U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x10U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xfU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                   - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xeU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                   - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((6U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((5U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1aU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((4U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((3U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x18U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x16U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x19U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1eU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x15U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((2U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1bU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((1U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x17U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1cU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((7U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1dU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                    - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((8U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((9U == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                 - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xaU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                   - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xbU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                   - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xcU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                   - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xdU == (0x1fU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out) 
                                   - (IData)(1U))))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data;
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles = 0ULL;
    } else {
        __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush)
                ? 0x1000U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)
                              ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg
                              : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc));
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles);
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__out 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush)
                ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__myreg
                         : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc));
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out = 0U;
        } else if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__myreg;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in;
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_valid) {
            if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_taken) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_54;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_59;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_50;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_58;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_55;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_52;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_51;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_56;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_49;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_57;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_48;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_53;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_60;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_61;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_62;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_63;
            } else if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_127) 
                        & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_111 
                           == (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
                               >> 6U)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_6 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_134;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_11 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_139;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_2 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_130;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_10 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_138;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_7 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_135;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_4 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_132;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_3 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_131;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_8 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_136;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_1 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_129;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_9 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_137;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_0 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_128;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_5 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_133;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_12 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_140;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_13 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_141;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_14 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_142;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT__valid_15 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb__DOT___GEN_143;
            }
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__myreg;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out;
        }
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__out)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__out
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__out))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__out
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__out)));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = 0U;
    } else {
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) {
            if ((0x304U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                if ((0x305U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
                }
                if ((0x305U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
                }
            }
            if ((0x304U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
            }
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mcause_write_data;
            if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
            } else if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__mstatus_disable_interrupt;
            } else {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                        ? ((0xfffffff0U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus) 
                           | ((8U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus 
                                     >> 4U)) | (7U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus)))
                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mstatus);
            }
        } else if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out) {
            if ((0x300U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_2;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1;
            }
            if ((0x300U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
            }
        }
    }
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
    __Vtableidx6 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__myreg) 
                     << 4U) | ((((0x73U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                 & ((1U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                  >> 0xcU))) 
                                    | ((5U == (7U & 
                                               (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                >> 0xcU))) 
                                       | ((2U == (7U 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                     >> 0xcU))) 
                                          | ((6U == 
                                              (7U & 
                                               (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                >> 0xcU))) 
                                             | ((3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                     >> 0xcU))) 
                                                | (7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                                       >> 0xcU))))))))) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx6])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx6];
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx6];
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__myreg)
                                                  : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out)));
    if (vlSelf->reset) {
        __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out = 0U;
        __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state = 0U;
        __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data = 0U;
        __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID = 0U;
        __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_data = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_1 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_3 = 0U;
        __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY = 0U;
    } else {
        if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid) {
                __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data 
                    = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data
                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_65);
            }
        } else if ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid) {
                __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
            }
        } else {
            __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
                = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)
                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7)
                    : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_38));
        }
        if ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
            if ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
                if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out;
                    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_address_index 
                        = (3U & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
                }
            }
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg = 0x1000U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__myreg = 0U;
        } else if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_target__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc;
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__myreg = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__myreg = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__myreg = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__myreg = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__myreg = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data_io_in;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data_io_in;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg2_read_address_io_in;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_reg1_read_address_io_in;
            }
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__out 
                = (0xfffU & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__myreg)
                              : (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                 >> 0x14U)));
        }
        if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out;
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__myreg;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out;
        }
        if ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
            if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read) 
                 & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write)))) {
                __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state = 2U;
                __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr 
                    = (0xfffffffcU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
            } else if (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write) {
                __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state = 4U;
                __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr 
                    = (0xfffffffcU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out);
            }
            vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid = 0U;
            __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID 
                = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_10;
            __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY 
                = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_11;
            vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid = 0U;
            if ((1U & (~ ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read) 
                          & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write)))))) {
                if (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_data 
                        = ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                            ? 0U : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                     ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)
                                              ? 0U : 
                                             ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out)
                                               ? (IData)(
                                                         (0x7fffffffffULL 
                                                          & ((0U 
                                                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                                              ? 
                                                             ((QData)((IData)(
                                                                              (0xffU 
                                                                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out))) 
                                                              << 
                                                              (0x18U 
                                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out 
                                                                  << 3U)))
                                                              : (QData)((IData)(
                                                                                ((1U 
                                                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                                                                 ? 
                                                                                ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                                                                 ? 
                                                                                (0xffffU 
                                                                                & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out)
                                                                                 : 
                                                                                VL_SHIFTL_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out, 0x10U))
                                                                                 : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out))))))
                                               : 0U))));
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_0 
                        = ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                                    & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                        ? (0U == (3U 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_21))))));
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_1 
                        = ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                                    & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                        ? (1U == (3U 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_21))))));
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_2 
                        = ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                                    & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                        ? (2U == (3U 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_24))))));
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_strobe_3 
                        = ((1U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                              & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out)) 
                                 & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out) 
                                    & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out))
                                        ? (3U == (3U 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out))
                                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_24))))));
                }
                __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_6;
                vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_7;
            }
        } else {
            if ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
                if (((IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID) 
                     & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY))) {
                    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state = 0U;
                    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY = 0U;
                }
                vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_23;
                if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                     & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY))) {
                    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID = 0U;
                }
            } else {
                __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state 
                    = ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_29)
                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_39));
            }
            if ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
                if ((4U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_38;
                }
                if ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
                    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_25;
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_26;
                } else {
                    __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_36;
                }
            }
        }
        if ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
            if ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
                if (((IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID) 
                     & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT__read_data;
                }
            }
            if ((2U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY 
                    = ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_27)
                        : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_37));
            }
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state 
        = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__state;
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
        = __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_7 
        = ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
            : 1U);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__myreg)
                                                  : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__myreg)
                                                  : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out)));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out = 0U;
        __Vdly__TestTopModule__DOT__mem_slave__DOT__state = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__addr = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__read = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__read_data = 0U;
        __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY 
            = __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__write = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0 = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1 = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2 = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3 = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY = 0U;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
            = (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr
                : (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                    & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_mispredict))
                    ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_wrong_target)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                        : ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out))
                    : (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
                        & ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)) 
                           & (~ ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_btb_correct_prediction) 
                                 | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                        : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_5)));
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__myreg;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__myreg;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__out 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in;
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__myreg = 0U;
        } else if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__myreg 
                = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                   >> 0x14U);
        }
        if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out;
        }
        if ((0U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
            if (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) {
                __Vdly__TestTopModule__DOT__mem_slave__DOT__state = 1U;
            } else if (vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) {
                __Vdly__TestTopModule__DOT__mem_slave__DOT__state = 3U;
            }
            vlSelf->TestTopModule__DOT__mem_slave__DOT__read = 0U;
            __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY 
                = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_3;
            vlSelf->TestTopModule__DOT__mem_slave__DOT__write = 0U;
            if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID)))) {
                vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_1;
            }
        } else {
            if ((1U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                     & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY))) {
                    __Vdly__TestTopModule__DOT__mem_slave__DOT__state = 2U;
                    __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY = 0U;
                }
                vlSelf->TestTopModule__DOT__mem_slave__DOT__read 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_7;
            } else if ((2U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                __Vdly__TestTopModule__DOT__mem_slave__DOT__state 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_14;
                vlSelf->TestTopModule__DOT__mem_slave__DOT__read 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_12;
            } else {
                __Vdly__TestTopModule__DOT__mem_slave__DOT__state 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_46;
            }
            if ((1U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__write 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_52;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_44;
                }
            }
        }
        if ((0U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
            if ((1U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
                     & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY))) {
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__addr 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr;
                }
            } else if ((2U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                vlSelf->TestTopModule__DOT__mem_slave__DOT__addr 
                    = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_43;
            }
            if ((1U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                if ((2U == (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__read_data 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_9;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_13;
                }
                if ((2U != (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__state))) {
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_47;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_0 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_48;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_1 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_49;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_2 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_50;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__write_strobe_3 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_51;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_45;
                    vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID 
                        = vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_53;
                }
            }
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__addr;
        vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY 
            = __Vdly__TestTopModule__DOT__mem_slave__DOT__ARREADY;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID;
        vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID 
            = __Vdly__TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID;
    }
    vlSelf->TestTopModule__DOT__mem_slave__DOT__state 
        = __Vdly__TestTopModule__DOT__mem_slave__DOT__state;
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_1));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__out 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                                                  ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__myreg)
                                                  : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out)));
    __Vtableidx3 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__myreg) 
                     << 5U) | ((((0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                  ? 3U : ((0x6fU == 
                                           (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                           ? 3U : (
                                                   (0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                                    ? 2U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))
                                                     ? 1U
                                                     : 0U)))) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_hb2ccac0a_0
         [__Vtableidx3])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h5af49ca3_0
            [__Vtableidx3];
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__out 
        = VTestTopModule__ConstPool__TABLE_hfea364f3_0
        [__Vtableidx3];
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_12 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__read_pending)) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__read));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_3 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_7 
        = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID) 
            & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__ARREADY)) 
           | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__read));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h02686d22__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__RVALID));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h290d5e75__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__BREADY) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__BVALID));
    vlSelf->TestTopModule__DOT__mem_slave__DOT___GEN_1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_h852f1fe3__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__AWREADY));
    TestTopModule__DOT__mem_slave__DOT____VdfgTmp_hd5d3a17e__0 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           & (IData)(vlSelf->TestTopModule__DOT__mem_slave__DOT__WREADY));
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_regs_write_source;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid)
                ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_funct3))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_data
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___processed_data_T_65)
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data);
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__out;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__latched_memory_read_data;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__myreg
                                           : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_forward_from_mem 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__out)
            : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__out
                : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source_io_in))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data_io_in
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__out)));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_38 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out)
            ? ((0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__state))
                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)
                : 2U) : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state));
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__out) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__out));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__out 
        = ((IData)(vlSelf->reset) ? 0U : (7U & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                                                 ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__myreg)
                                                 : 
                                                (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                                                 >> 0xcU))));
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request 
        = ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
           | ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
              | (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39)));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr = 0U;
    } else if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag) 
                   | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump_addr 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target
                : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr);
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_flag 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_flag));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out;
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__out 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)
                ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__myreg)
                : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out));
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
    __Vtableidx8 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__myreg) 
                     << 4U) | (((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx8])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx8];
    }
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__myreg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__myreg 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__myreg 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_result;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__myreg 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx8];
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
    __Vtableidx7 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__myreg) 
                     << 4U) | (((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx7])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx7];
    }
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__myreg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__myreg 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx7];
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
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__AWVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__WVALID) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write));
    TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_write)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master_io_bundle_read));
    __Vtableidx2 = (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__myreg) 
                     << 4U) | ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4) 
                                 | ((0x17U == (0x7fU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                    | ((0x37U == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                       | ((0x6fU == 
                                           (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                          | ((0x67U 
                                              == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
                                             | (0x73U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))))))) 
                                << 3U) | (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) 
                                           << 2U) | 
                                          (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) 
                                            << 1U) 
                                           | (IData)(vlSelf->reset)))));
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out = 0x13U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__myreg = 0x1000U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__myreg = 0x13U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__myreg = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out = 0x13U;
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg = 0x13U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__funct3__DOT__myreg 
                = (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                         >> 0xcU));
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__myreg 
                = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out;
        }
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__prev_jump_addr 
            = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target;
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_flush) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out = 0x1000U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out = 0x13U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__myreg = 0x1000U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__myreg = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out = 0U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__myreg = 0x13U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__myreg = 0U;
        } else {
            if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__myreg;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__myreg;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__myreg;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out 
                    = (0x1fU & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__myreg));
            } else {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__out 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__out 
                    = (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                >> 7U));
            }
            if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data_io_in;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out;
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__myreg 
                    = (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                                >> 7U));
            }
        }
        if (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_flush) {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out = 0x13U;
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg = 0x13U;
        } else {
            vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out 
                = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg
                    : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in);
            if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__myreg 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in;
            }
        }
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_io_stall 
        = (1U & ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                  ? (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__read_valid))
                  : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                      ? (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__write_valid))
                      : (IData)(TestTopModule__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_39))));
    if ((1U & VTestTopModule__ConstPool__TABLE_h1758b35a_0
         [__Vtableidx2])) {
        vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__myreg 
            = VTestTopModule__ConstPool__TABLE_h4e9589e2_0
            [__Vtableidx2];
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__out 
        = VTestTopModule__ConstPool__TABLE_h6553ce8e_0
        [__Vtableidx2];
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__out
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data_io_in);
    TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__out)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__out
            : TestTopModule__DOT__cpu__DOT__cpu__DOT__ex__DOT__reg1_data);
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_10 
        = ((IData)(TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__ARVALID));
    vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT___GEN_11 
        = ((IData)(TestTopModule__DOT__cpu__DOT__axi_master__DOT____VdfgTmp_hed4de5b5__0) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__axi_master__DOT__RREADY));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
        = __Vdly__TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out;
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT__uses_rs2 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
           | ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
              | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___uses_rs1_T_4 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
           | ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)) 
              | (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out))));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           | (0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)));
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
    TestTopModule__DOT__cpu__DOT__cpu__DOT__id__DOT___io_if_jump_address_T_1 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__out 
           + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate_io_in);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__btb_non_branch 
        = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)) 
           & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__btb_predicted_taken__DOT__out));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__ctrl_io_jump_instruction_id)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
            : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_update_target 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_interrupt_assert)
            ? ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_h7e083cbd__0)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint__DOT____VdfgTmp_hb487e99f__0)
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mtvec
                    : ((0x30200073U == vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__out)
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__clint_io_csr_bundle_mepc
                        : 0U))) : vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address);
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

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__2(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = 0U;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = 0U;
    } else if ((0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0;
    }
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address;
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x18eU == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_in 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
            ? ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                << 0x18U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                              << 0x10U) | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                            [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                           [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0])))
            : 0x13U);
}

VL_INLINE_OPT void VTestTopModule___024root___nba_comb__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_comb__TOP__0\n"); );
    // Body
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
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__addr;
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = vlSelf->TestTopModule__DOT__mem_slave__DOT__write_data;
    } else if ((0x18eU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
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
    vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___next_pc_T_5 
        = ((1U & ((~ (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)) 
                  | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_io_stall)))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
            : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_taken)
                ? vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__btb_io_predicted_pc
                : ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc)));
}

void VTestTopModule___024root___eval_nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTestTopModule___024root___eval_triggers__act(VTestTopModule___024root* vlSelf);

bool VTestTopModule___024root___eval_phase__act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestTopModule___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTestTopModule___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestTopModule___024root___eval_phase__nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestTopModule___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__ico(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__nba(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__act(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG

void VTestTopModule___024root___eval(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval\n"); );
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
            VTestTopModule___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 5920, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTestTopModule___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestTopModule___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 5920, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTestTopModule___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TestTopModule.sv", 5920, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTestTopModule___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTestTopModule___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestTopModule___024root___eval_debug_assertions(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_debug_assertions\n"); );
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
