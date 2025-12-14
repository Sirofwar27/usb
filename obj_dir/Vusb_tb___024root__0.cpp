// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusb_tb.h for the primary calling header

#include "Vusb_tb__pch.h"

VL_ATTR_COLD void Vusb_tb___024root___eval_initial__TOP(Vusb_tb___024root* vlSelf);
VlCoroutine Vusb_tb___024root___eval_initial__TOP__Vtiming__0(Vusb_tb___024root* vlSelf);
VlCoroutine Vusb_tb___024root___eval_initial__TOP__Vtiming__1(Vusb_tb___024root* vlSelf);

void Vusb_tb___024root___eval_initial(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_initial\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vusb_tb___024root___eval_initial__TOP(vlSelf);
    Vusb_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vusb_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vusb_tb___024root___eval_initial__TOP__Vtiming__0(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ usb_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    usb_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ usb_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    usb_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX(" time   clk reset count\n",0);
    usb_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, usb_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hc2dfa43f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge usb_tb.clk)", 
                                                             "usb_tb.sv", 
                                                             32);
        usb_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (usb_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.usb_tb__DOT__reset = 0U;
    usb_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, usb_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hc2dfa43f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge usb_tb.clk)", 
                                                             "usb_tb.sv", 
                                                             37);
        VL_WRITEF_NX("%4t    %0#     %0#     %0#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.usb_tb__DOT__clk),
                     1,vlSelfRef.usb_tb__DOT__reset,
                     4,(IData)(vlSelfRef.usb_tb__DOT__count));
        usb_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (usb_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FINISH_MT("usb_tb.sv", 41, "");
}

VlCoroutine Vusb_tb___024root___eval_initial__TOP__Vtiming__1(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "usb_tb.sv", 
                                             26);
        vlSelfRef.usb_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.usb_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vusb_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vusb_tb___024root___eval_triggers__act(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_triggers__act\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.usb_tb__DOT__reset) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__usb_tb__DOT__reset__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.usb_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__usb_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__usb_tb__DOT__clk__0 
        = vlSelfRef.usb_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__usb_tb__DOT__reset__0 
        = vlSelfRef.usb_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vusb_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vusb_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vusb_tb___024root___nba_sequent__TOP__0(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___nba_sequent__TOP__0\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.usb_tb__DOT__count = ((IData)(vlSelfRef.usb_tb__DOT__reset)
                                     ? 0U : (0x0000000fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.usb_tb__DOT__count))));
}

void Vusb_tb___024root___eval_nba(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_nba\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vusb_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vusb_tb___024root___timing_commit(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___timing_commit\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hc2dfa43f__0.commit(
                                                   "@(posedge usb_tb.clk)");
    }
}

void Vusb_tb___024root___timing_resume(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___timing_resume\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc2dfa43f__0.resume(
                                                   "@(posedge usb_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vusb_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vusb_tb___024root___eval_phase__act(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_phase__act\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vusb_tb___024root___eval_triggers__act(vlSelf);
    Vusb_tb___024root___timing_commit(vlSelf);
    Vusb_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vusb_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vusb_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vusb_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vusb_tb___024root___eval_phase__nba(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_phase__nba\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vusb_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vusb_tb___024root___eval_nba(vlSelf);
        Vusb_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vusb_tb___024root___eval(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vusb_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("usb_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vusb_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("usb_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vusb_tb___024root___eval_phase__act(vlSelf));
    } while (Vusb_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vusb_tb___024root___eval_debug_assertions(Vusb_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vusb_tb___024root___eval_debug_assertions\n"); );
    Vusb_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
