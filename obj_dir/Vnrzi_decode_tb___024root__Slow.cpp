// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnrzi_decode_tb.h for the primary calling header

#include "Vnrzi_decode_tb__pch.h"

void Vnrzi_decode_tb___024root___ctor_var_reset(Vnrzi_decode_tb___024root* vlSelf);

Vnrzi_decode_tb___024root::Vnrzi_decode_tb___024root(Vnrzi_decode_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vnrzi_decode_tb___024root___ctor_var_reset(this);
}

void Vnrzi_decode_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vnrzi_decode_tb___024root::~Vnrzi_decode_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
