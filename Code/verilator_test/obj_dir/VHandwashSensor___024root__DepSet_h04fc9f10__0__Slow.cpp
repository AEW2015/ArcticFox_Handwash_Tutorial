// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHandwashSensor.h for the primary calling header

#include "verilated.h"

#include "VHandwashSensor___024root.h"

VL_ATTR_COLD void VHandwashSensor___024root___initial__TOP__0(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Hello World\nHello World\nHello World\nHello World\nHello World\nHello World\nHello World\nHello World\nHello World\n");
    VL_FINISH_MT("../../Verilog/Test/HandwashSensorTest.v", 110, "");
    vlSelf->HandwashTest__DOT__clk = 0U;
    vlSelf->HandwashTest__DOT__reset = 0U;
    vlSelf->HandwashTest__DOT__acceptLeftHandDistance = 0U;
    vlSelf->HandwashTest__DOT__leftHandDistance = 0U;
    vlSelf->HandwashTest__DOT__acceptLeftHandGain = 0U;
    vlSelf->HandwashTest__DOT__leftHandGain = 0U;
    vlSelf->HandwashTest__DOT__acceptRightHandDistance = 0U;
    vlSelf->HandwashTest__DOT__rightHandDistance = 0U;
    vlSelf->HandwashTest__DOT__acceptRightHandGain = 0U;
    vlSelf->HandwashTest__DOT__rightHandGain = 0U;
}

VL_ATTR_COLD void VHandwashSensor___024root___eval_initial(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__HandwashTest__DOT__clk 
        = vlSelf->__VinpClk__TOP__HandwashTest__DOT__clk;
    VHandwashSensor___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VHandwashSensor___024root___combo__TOP__0(VHandwashSensor___024root* vlSelf);

VL_ATTR_COLD void VHandwashSensor___024root___eval_settle(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___eval_settle\n"); );
    // Body
    VHandwashSensor___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VHandwashSensor___024root___final(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___final\n"); );
}

VL_ATTR_COLD void VHandwashSensor___024root___ctor_var_reset(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->HandwashTest__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->HandwashTest__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->HandwashTest__DOT__acceptLeftHandDistance = VL_RAND_RESET_I(1);
    vlSelf->HandwashTest__DOT__leftHandDistance = VL_RAND_RESET_I(16);
    vlSelf->HandwashTest__DOT__acceptLeftHandGain = VL_RAND_RESET_I(1);
    vlSelf->HandwashTest__DOT__leftHandGain = VL_RAND_RESET_I(8);
    vlSelf->HandwashTest__DOT__acceptRightHandDistance = VL_RAND_RESET_I(1);
    vlSelf->HandwashTest__DOT__rightHandDistance = VL_RAND_RESET_I(16);
    vlSelf->HandwashTest__DOT__acceptRightHandGain = VL_RAND_RESET_I(1);
    vlSelf->HandwashTest__DOT__rightHandGain = VL_RAND_RESET_I(8);
    vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld = VL_RAND_RESET_I(16);
    vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld = VL_RAND_RESET_I(8);
    vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld = VL_RAND_RESET_I(16);
    vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld = VL_RAND_RESET_I(8);
    vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7 = VL_RAND_RESET_I(17);
    vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7 = VL_RAND_RESET_I(17);
    vlSelf->__VinpClk__TOP__HandwashTest__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__HandwashTest__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
