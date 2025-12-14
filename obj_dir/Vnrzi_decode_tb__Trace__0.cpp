// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vnrzi_decode_tb__Syms.h"


void Vnrzi_decode_tb___024root__trace_chg_0_sub_0(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnrzi_decode_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_chg_0\n"); );
    // Body
    Vnrzi_decode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnrzi_decode_tb___024root*>(voidSelf);
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vnrzi_decode_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vnrzi_decode_tb___024root__trace_chg_0_sub_0(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_chg_0_sub_0\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.nrzi_decode_tb__DOT__nrzi_out));
        bufp->chgBit(oldp+1,(vlSelfRef.nrzi_decode_tb__DOT__decoded_bit));
        bufp->chgBit(oldp+2,(vlSelfRef.nrzi_decode_tb__DOT__dec__DOT__prev_nrzi));
    }
    bufp->chgBit(oldp+3,(vlSelfRef.nrzi_decode_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelfRef.nrzi_decode_tb__DOT__reset));
    bufp->chgBit(oldp+5,(vlSelfRef.nrzi_decode_tb__DOT__bit_in));
    bufp->chgBit(oldp+6,(vlSelfRef.nrzi_decode_tb__DOT__bit_valid));
    bufp->chgCData(oldp+7,(vlSelfRef.nrzi_decode_tb__DOT__data),7);
    bufp->chgIData(oldp+8,(vlSelfRef.nrzi_decode_tb__DOT__i),32);
}

void Vnrzi_decode_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_cleanup\n"); );
    // Body
    Vnrzi_decode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnrzi_decode_tb___024root*>(voidSelf);
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
