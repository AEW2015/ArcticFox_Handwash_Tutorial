// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VHandwashSensor.h for the primary calling header

#ifndef VERILATED_VHANDWASHSENSOR___024ROOT_H_
#define VERILATED_VHANDWASHSENSOR___024ROOT_H_  // guard

#include "verilated.h"

class VHandwashSensor__Syms;

class VHandwashSensor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ HandwashTest__DOT__clk;
    CData/*0:0*/ HandwashTest__DOT__reset;
    CData/*0:0*/ HandwashTest__DOT__acceptLeftHandDistance;
    CData/*0:0*/ HandwashTest__DOT__acceptLeftHandGain;
    CData/*7:0*/ HandwashTest__DOT__leftHandGain;
    CData/*0:0*/ HandwashTest__DOT__acceptRightHandDistance;
    CData/*0:0*/ HandwashTest__DOT__acceptRightHandGain;
    CData/*7:0*/ HandwashTest__DOT__rightHandGain;
    CData/*7:0*/ HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld;
    CData/*7:0*/ HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld;
    CData/*0:0*/ __VinpClk__TOP__HandwashTest__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__HandwashTest__DOT__clk;
    CData/*0:0*/ __Vchglast__TOP__HandwashTest__DOT__clk;
    SData/*15:0*/ HandwashTest__DOT__leftHandDistance;
    SData/*15:0*/ HandwashTest__DOT__rightHandDistance;
    SData/*15:0*/ HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld;
    SData/*15:0*/ HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld;
    IData/*16:0*/ HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7;
    IData/*16:0*/ HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VHandwashSensor__Syms* const vlSymsp;

    // CONSTRUCTORS
    VHandwashSensor___024root(VHandwashSensor__Syms* symsp, const char* name);
    ~VHandwashSensor___024root();
    VL_UNCOPYABLE(VHandwashSensor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
