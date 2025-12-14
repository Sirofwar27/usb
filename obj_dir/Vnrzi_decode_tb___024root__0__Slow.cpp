// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnrzi_decode_tb.h for the primary calling header

#include "Vnrzi_decode_tb__pch.h"

VL_ATTR_COLD void Vnrzi_decode_tb___024root___eval_static(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_static\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__clk__0 
        = vlSelfRef.nrzi_decode_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__reset__0 
        = vlSelfRef.nrzi_decode_tb__DOT__reset;
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root___eval_initial__TOP(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_initial__TOP\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.nrzi_decode_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root___eval_final(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_final\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root___eval_settle(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_settle\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vnrzi_decode_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnrzi_decode_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vnrzi_decode_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge nrzi_decode_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge nrzi_decode_tb.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnrzi_decode_tb___024root___ctor_var_reset(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___ctor_var_reset\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->nrzi_decode_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9383526908725851239ull);
    vlSelf->nrzi_decode_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12328333783012912970ull);
    vlSelf->nrzi_decode_tb__DOT__bit_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16337940314159339628ull);
    vlSelf->nrzi_decode_tb__DOT__bit_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14071068145976087931ull);
    vlSelf->nrzi_decode_tb__DOT__nrzi_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11385318414876502585ull);
    vlSelf->nrzi_decode_tb__DOT__decoded_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1990506849645172349ull);
    vlSelf->nrzi_decode_tb__DOT__data = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11836159945452297988ull);
    vlSelf->nrzi_decode_tb__DOT__dec__DOT__prev_nrzi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10170517628879374596ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
