// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnrzi_decode_tb.h for the primary calling header

#include "Vnrzi_decode_tb__pch.h"

VL_ATTR_COLD void Vnrzi_decode_tb___024root___eval_initial__TOP(Vnrzi_decode_tb___024root* vlSelf);
VlCoroutine Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__0(Vnrzi_decode_tb___024root* vlSelf);
VlCoroutine Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__1(Vnrzi_decode_tb___024root* vlSelf);
VlCoroutine Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__2(Vnrzi_decode_tb___024root* vlSelf);

void Vnrzi_decode_tb___024root___eval_initial(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_initial\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnrzi_decode_tb___024root___eval_initial__TOP(vlSelf);
    Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__0(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ nrzi_decode_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    nrzi_decode_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile("nrzi_decode_tb.vcd"s);
    VL_PRINTF_MT("-Info: nrzi_decode_tb.sv:41: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.nrzi_decode_tb__DOT__reset = 1U;
    vlSelfRef.nrzi_decode_tb__DOT__data = 0x69U;
    nrzi_decode_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, nrzi_decode_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_h4448e2c8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge nrzi_decode_tb.clk)", 
                                                             "nrzi_decode_tb.sv", 
                                                             45);
        nrzi_decode_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (nrzi_decode_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.nrzi_decode_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "nrzi_decode_tb.sv", 
                                         48);
    VL_FINISH_MT("nrzi_decode_tb.sv", 48, "");
}

VlCoroutine Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__1(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ nrzi_decode_tb__DOT__i;
    nrzi_decode_tb__DOT__i = 0;
    IData/*31:0*/ nrzi_decode_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    nrzi_decode_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX(" time | bit_in | NRZI | decoded_bit \n",0);
    vlSelfRef.nrzi_decode_tb__DOT__bit_valid = 1U;
    nrzi_decode_tb__DOT__i = 6U;
    while (VL_LTES_III(32, 0U, nrzi_decode_tb__DOT__i)) {
        vlSelfRef.nrzi_decode_tb__DOT__bit_in = ((6U 
                                                  >= 
                                                  (7U 
                                                   & nrzi_decode_tb__DOT__i)) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.nrzi_decode_tb__DOT__data) 
                                                        >> 
                                                        (7U 
                                                         & nrzi_decode_tb__DOT__i))));
        co_await vlSelfRef.__VtrigSched_h4448e2c8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge nrzi_decode_tb.clk)", 
                                                             "nrzi_decode_tb.sv", 
                                                             70);
        VL_WRITEF_NX("%4t |   %0b    |  %0b   |      %0b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.nrzi_decode_tb__DOT__bit_in),
                     1,vlSelfRef.nrzi_decode_tb__DOT__nrzi_out,
                     1,(IData)(vlSelfRef.nrzi_decode_tb__DOT__decoded_bit));
        nrzi_decode_tb__DOT__i = (nrzi_decode_tb__DOT__i 
                                  - (IData)(1U));
    }
    vlSelfRef.nrzi_decode_tb__DOT__bit_valid = 0U;
    nrzi_decode_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, nrzi_decode_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h4448e2c8__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge nrzi_decode_tb.clk)", 
                                                             "nrzi_decode_tb.sv", 
                                                             78);
        nrzi_decode_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (nrzi_decode_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FINISH_MT("nrzi_decode_tb.sv", 79, "");
}

VlCoroutine Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__2(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "nrzi_decode_tb.sv", 
                                             36);
        vlSelfRef.nrzi_decode_tb__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.nrzi_decode_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnrzi_decode_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vnrzi_decode_tb___024root___eval_triggers__act(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_triggers__act\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.nrzi_decode_tb__DOT__reset) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__reset__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.nrzi_decode_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__clk__0 
        = vlSelfRef.nrzi_decode_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__reset__0 
        = vlSelfRef.nrzi_decode_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vnrzi_decode_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vnrzi_decode_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___trigger_anySet__act\n"); );
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

void Vnrzi_decode_tb___024root___nba_sequent__TOP__0(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___nba_sequent__TOP__0\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__nrzi_decode_tb__DOT__nrzi_out;
    __Vdly__nrzi_decode_tb__DOT__nrzi_out = 0;
    // Body
    __Vdly__nrzi_decode_tb__DOT__nrzi_out = vlSelfRef.nrzi_decode_tb__DOT__nrzi_out;
    if (vlSelfRef.nrzi_decode_tb__DOT__reset) {
        __Vdly__nrzi_decode_tb__DOT__nrzi_out = 1U;
        vlSelfRef.nrzi_decode_tb__DOT__decoded_bit = 0U;
        vlSelfRef.nrzi_decode_tb__DOT__dec__DOT__prev_nrzi = 1U;
    } else if (vlSelfRef.nrzi_decode_tb__DOT__bit_valid) {
        __Vdly__nrzi_decode_tb__DOT__nrzi_out = (1U 
                                                 & ((IData)(vlSelfRef.nrzi_decode_tb__DOT__bit_in)
                                                     ? (IData)(vlSelfRef.nrzi_decode_tb__DOT__nrzi_out)
                                                     : 
                                                    (~ (IData)(vlSelfRef.nrzi_decode_tb__DOT__nrzi_out))));
        vlSelfRef.nrzi_decode_tb__DOT__decoded_bit 
            = ((IData)(vlSelfRef.nrzi_decode_tb__DOT__nrzi_out) 
               == (IData)(vlSelfRef.nrzi_decode_tb__DOT__dec__DOT__prev_nrzi));
        vlSelfRef.nrzi_decode_tb__DOT__dec__DOT__prev_nrzi 
            = vlSelfRef.nrzi_decode_tb__DOT__nrzi_out;
    }
    vlSelfRef.nrzi_decode_tb__DOT__nrzi_out = __Vdly__nrzi_decode_tb__DOT__nrzi_out;
}

void Vnrzi_decode_tb___024root___eval_nba(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_nba\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vnrzi_decode_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vnrzi_decode_tb___024root___timing_commit(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___timing_commit\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h4448e2c8__0.commit(
                                                   "@(posedge nrzi_decode_tb.clk)");
    }
}

void Vnrzi_decode_tb___024root___timing_resume(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___timing_resume\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4448e2c8__0.resume(
                                                   "@(posedge nrzi_decode_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vnrzi_decode_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vnrzi_decode_tb___024root___eval_phase__act(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_phase__act\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vnrzi_decode_tb___024root___eval_triggers__act(vlSelf);
    Vnrzi_decode_tb___024root___timing_commit(vlSelf);
    Vnrzi_decode_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vnrzi_decode_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vnrzi_decode_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

void Vnrzi_decode_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vnrzi_decode_tb___024root___eval_phase__nba(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_phase__nba\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vnrzi_decode_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vnrzi_decode_tb___024root___eval_nba(vlSelf);
        Vnrzi_decode_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vnrzi_decode_tb___024root___eval(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnrzi_decode_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("nrzi_decode_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnrzi_decode_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("nrzi_decode_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vnrzi_decode_tb___024root___eval_phase__act(vlSelf));
    } while (Vnrzi_decode_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vnrzi_decode_tb___024root___eval_debug_assertions(Vnrzi_decode_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root___eval_debug_assertions\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
