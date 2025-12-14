// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNRZI_TB__SYMS_H_
#define VERILATED_VNRZI_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vnrzi_tb.h"

// INCLUDE MODULE CLASSES
#include "Vnrzi_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vnrzi_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vnrzi_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vnrzi_tb___024root             TOP;

    // CONSTRUCTORS
    Vnrzi_tb__Syms(VerilatedContext* contextp, const char* namep, Vnrzi_tb* modelp);
    ~Vnrzi_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
