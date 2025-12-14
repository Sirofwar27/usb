// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vusb_tb.h for the primary calling header

#ifndef VERILATED_VUSB_TB___024ROOT_H_
#define VERILATED_VUSB_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vusb_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vusb_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ usb_tb__DOT__clk;
    CData/*0:0*/ usb_tb__DOT__reset;
    CData/*3:0*/ usb_tb__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__usb_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__usb_tb__DOT__reset__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc2dfa43f__0;

    // INTERNAL VARIABLES
    Vusb_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vusb_tb___024root(Vusb_tb__Syms* symsp, const char* namep);
    ~Vusb_tb___024root();
    VL_UNCOPYABLE(Vusb_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
