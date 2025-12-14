// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vusb_tb__pch.h"

//============================================================
// Constructors

Vusb_tb::Vusb_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vusb_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vusb_tb::Vusb_tb(const char* _vcname__)
    : Vusb_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vusb_tb::~Vusb_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vusb_tb___024root___eval_debug_assertions(Vusb_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vusb_tb___024root___eval_static(Vusb_tb___024root* vlSelf);
void Vusb_tb___024root___eval_initial(Vusb_tb___024root* vlSelf);
void Vusb_tb___024root___eval_settle(Vusb_tb___024root* vlSelf);
void Vusb_tb___024root___eval(Vusb_tb___024root* vlSelf);

void Vusb_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vusb_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vusb_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vusb_tb___024root___eval_static(&(vlSymsp->TOP));
        Vusb_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vusb_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vusb_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vusb_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vusb_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vusb_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vusb_tb___024root___eval_final(Vusb_tb___024root* vlSelf);

VL_ATTR_COLD void Vusb_tb::final() {
    Vusb_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vusb_tb::hierName() const { return vlSymsp->name(); }
const char* Vusb_tb::modelName() const { return "Vusb_tb"; }
unsigned Vusb_tb::threads() const { return 1; }
void Vusb_tb::prepareClone() const { contextp()->prepareClone(); }
void Vusb_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
