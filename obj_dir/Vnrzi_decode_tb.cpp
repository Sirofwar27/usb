// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnrzi_decode_tb__pch.h"

//============================================================
// Constructors

Vnrzi_decode_tb::Vnrzi_decode_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnrzi_decode_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnrzi_decode_tb::Vnrzi_decode_tb(const char* _vcname__)
    : Vnrzi_decode_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnrzi_decode_tb::~Vnrzi_decode_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnrzi_decode_tb___024root___eval_debug_assertions(Vnrzi_decode_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vnrzi_decode_tb___024root___eval_static(Vnrzi_decode_tb___024root* vlSelf);
void Vnrzi_decode_tb___024root___eval_initial(Vnrzi_decode_tb___024root* vlSelf);
void Vnrzi_decode_tb___024root___eval_settle(Vnrzi_decode_tb___024root* vlSelf);
void Vnrzi_decode_tb___024root___eval(Vnrzi_decode_tb___024root* vlSelf);

void Vnrzi_decode_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnrzi_decode_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnrzi_decode_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnrzi_decode_tb___024root___eval_static(&(vlSymsp->TOP));
        Vnrzi_decode_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vnrzi_decode_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnrzi_decode_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnrzi_decode_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vnrzi_decode_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vnrzi_decode_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnrzi_decode_tb___024root___eval_final(Vnrzi_decode_tb___024root* vlSelf);

VL_ATTR_COLD void Vnrzi_decode_tb::final() {
    Vnrzi_decode_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnrzi_decode_tb::hierName() const { return vlSymsp->name(); }
const char* Vnrzi_decode_tb::modelName() const { return "Vnrzi_decode_tb"; }
unsigned Vnrzi_decode_tb::threads() const { return 1; }
void Vnrzi_decode_tb::prepareClone() const { contextp()->prepareClone(); }
void Vnrzi_decode_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
