// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHandwashSensor.h for the primary calling header

#include "verilated.h"

#include "VHandwashSensor__Syms.h"
#include "VHandwashSensor___024root.h"

void VHandwashSensor___024root___ctor_var_reset(VHandwashSensor___024root* vlSelf);

VHandwashSensor___024root::VHandwashSensor___024root(VHandwashSensor__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VHandwashSensor___024root___ctor_var_reset(this);
}

void VHandwashSensor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VHandwashSensor___024root::~VHandwashSensor___024root() {
}
