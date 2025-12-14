// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vnrzi_decode_tb__Syms.h"


VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_init_sub__TOP__0(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_init_sub__TOP__0\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("nrzi_decode_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"bit_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"bit_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrzi_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"decoded_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+9,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrzi_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"bit_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"bit_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"prev_nrzi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("enc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"bit_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"bit_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"nrzi_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_init_top(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_init_top\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnrzi_decode_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnrzi_decode_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnrzi_decode_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_register(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_register\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vnrzi_decode_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vnrzi_decode_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vnrzi_decode_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vnrzi_decode_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_const_0\n"); );
    // Body
    Vnrzi_decode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnrzi_decode_tb___024root*>(voidSelf);
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_full_0_sub_0(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_full_0\n"); );
    // Body
    Vnrzi_decode_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnrzi_decode_tb___024root*>(voidSelf);
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vnrzi_decode_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnrzi_decode_tb___024root__trace_full_0_sub_0(Vnrzi_decode_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnrzi_decode_tb___024root__trace_full_0_sub_0\n"); );
    Vnrzi_decode_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.nrzi_decode_tb__DOT__nrzi_out));
    bufp->fullBit(oldp+2,(vlSelfRef.nrzi_decode_tb__DOT__decoded_bit));
    bufp->fullBit(oldp+3,(vlSelfRef.nrzi_decode_tb__DOT__dec__DOT__prev_nrzi));
    bufp->fullBit(oldp+4,(vlSelfRef.nrzi_decode_tb__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelfRef.nrzi_decode_tb__DOT__reset));
    bufp->fullBit(oldp+6,(vlSelfRef.nrzi_decode_tb__DOT__bit_in));
    bufp->fullBit(oldp+7,(vlSelfRef.nrzi_decode_tb__DOT__bit_valid));
    bufp->fullCData(oldp+8,(vlSelfRef.nrzi_decode_tb__DOT__data),7);
    bufp->fullIData(oldp+9,(vlSelfRef.nrzi_decode_tb__DOT__i),32);
}
