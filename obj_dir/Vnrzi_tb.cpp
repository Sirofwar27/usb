// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vnrzi_tb__pch.h"

//============================================================
// Constructors

Vnrzi_tb::Vnrzi_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vnrzi_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vnrzi_tb::Vnrzi_tb(const char* _vcname__)
    : Vnrzi_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vnrzi_tb::~Vnrzi_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vnrzi_tb___024root___eval_debug_assertions(Vnrzi_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vnrzi_tb___024root___eval_static(Vnrzi_tb___024root* vlSelf);
void Vnrzi_tb___024root___eval_initial(Vnrzi_tb___024root* vlSelf);
void Vnrzi_tb___024root___eval_settle(Vnrzi_tb___024root* vlSelf);
void Vnrzi_tb___024root___eval(Vnrzi_tb___024root* vlSelf);

void Vnrzi_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vnrzi_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vnrzi_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vnrzi_tb___024root___eval_static(&(vlSymsp->TOP));
        Vnrzi_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vnrzi_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vnrzi_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vnrzi_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vnrzi_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vnrzi_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vnrzi_tb___024root___eval_final(Vnrzi_tb___024root* vlSelf);

VL_ATTR_COLD void Vnrzi_tb::final() {
    Vnrzi_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vnrzi_tb::hierName() const { return vlSymsp->name(); }
const char* Vnrzi_tb::modelName() const { return "Vnrzi_tb"; }
unsigned Vnrzi_tb::threads() const { return 1; }
void Vnrzi_tb::prepareClone() const { contextp()->prepareClone(); }
void Vnrzi_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
