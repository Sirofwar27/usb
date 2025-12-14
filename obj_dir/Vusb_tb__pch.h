// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Precompiled header
//
// Internal details; most user sources do not need this header,
// unless using verilator public meta comments.
// Suggest use Vusb_tb.h instead.

#ifndef VERILATED_VUSB_TB__PCH_H_
#define VERILATED_VUSB_TB__PCH_H_  // guard

// GCC and Clang only will precompile headers (PCH) for the first header.
// So, make sure this is the one and only PCH.
// If multiple module's includes are needed, use individual includes.
#ifdef VL_PCH_INCLUDED
# error "Including multiple precompiled header files"
#endif
#define VL_PCH_INCLUDED


#include "verilated.h"

#include "Vusb_tb__Syms.h"
#include "Vusb_tb.h"

// Additional include files added using '--compiler-include'

#endif  // guard
