// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnrzi_decode_tb.h for the primary calling header

#ifndef VERILATED_VNRZI_DECODE_TB___024ROOT_H_
#define VERILATED_VNRZI_DECODE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vnrzi_decode_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vnrzi_decode_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ nrzi_decode_tb__DOT__clk;
    CData/*0:0*/ nrzi_decode_tb__DOT__reset;
    CData/*0:0*/ nrzi_decode_tb__DOT__bit_in;
    CData/*0:0*/ nrzi_decode_tb__DOT__bit_valid;
    CData/*0:0*/ nrzi_decode_tb__DOT__nrzi_out;
    CData/*0:0*/ nrzi_decode_tb__DOT__decoded_bit;
    CData/*6:0*/ nrzi_decode_tb__DOT__data;
    CData/*0:0*/ nrzi_decode_tb__DOT__dec__DOT__prev_nrzi;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__nrzi_decode_tb__DOT__reset__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4448e2c8__0;

    // INTERNAL VARIABLES
    Vnrzi_decode_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vnrzi_decode_tb___024root(Vnrzi_decode_tb__Syms* symsp, const char* namep);
    ~Vnrzi_decode_tb___024root();
    VL_UNCOPYABLE(Vnrzi_decode_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
