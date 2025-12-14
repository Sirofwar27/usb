// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusb_tb.h for the primary calling header

#include "Vusb_tb__pch.h"

VL_ATTR_COLD void Vusb_tb___024root___eval_static(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_static\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__usb_tb__DOT__clk__0 
        = vlSelfRef.usb_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__usb_tb__DOT__reset__0 
        = vlSelfRef.usb_tb__DOT__reset;
}

VL_ATTR_COLD void Vusb_tb___024root___eval_initial__TOP(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_initial__TOP\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.usb_tb__DOT__clk = 0U;
    vlSelfRef.usb_tb__DOT__reset = 1U;
    vlSelfRef.usb_tb__DOT__count = 0U;
}

VL_ATTR_COLD void Vusb_tb___024root___eval_final(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_final\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vusb_tb___024root___eval_settle(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_settle\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vusb_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusb_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vusb_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge usb_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge usb_tb.reset)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vusb_tb___024root___ctor_var_reset(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___ctor_var_reset\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->usb_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6652151099665146242ull);
    vlSelf->usb_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10304123895241195593ull);
    vlSelf->usb_tb__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 60116427478943316ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__usb_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__usb_tb__DOT__reset__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
