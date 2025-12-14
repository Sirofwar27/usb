// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnrzi_tb.h for the primary calling header

#ifndef VERILATED_VNRZI_TB___024ROOT_H_
#define VERILATED_VNRZI_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnrzi_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnrzi_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ nrzi_tb__DOT__clk;
    CData/*0:0*/ nrzi_tb__DOT__reset;
    CData/*0:0*/ nrzi_tb__DOT__bit_in;
    CData/*0:0*/ nrzi_tb__DOT__bit_valid;
    CData/*0:0*/ nrzi_tb__DOT__nrzi_out;
    CData/*6:0*/ nrzi_tb__DOT__data;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nrzi_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nrzi_tb__DOT__reset__0;
    IData/*31:0*/ nrzi_tb__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h26f41e1b__0;
    VlTriggerScheduler __VtrigSched_h26f41ddc__0;

    // INTERNAL VARIABLES
    Vnrzi_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnrzi_tb___024root(Vnrzi_tb__Syms* symsp, const char* namep);
    ~Vnrzi_tb___024root();
    VL_UNCOPYABLE(Vnrzi_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
