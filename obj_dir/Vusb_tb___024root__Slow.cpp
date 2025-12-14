// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vusb_tb.h for the primary calling header

#include "Vusb_tb__pch.h"

void Vusb_tb___024root___ctor_var_reset(Vusb_tb___024root* vlSelf);

Vusb_tb___024root::Vusb_tb___024root(Vusb_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vusb_tb___024root___ctor_var_reset(this);
}

void Vusb_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vusb_tb___024root::~Vusb_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
