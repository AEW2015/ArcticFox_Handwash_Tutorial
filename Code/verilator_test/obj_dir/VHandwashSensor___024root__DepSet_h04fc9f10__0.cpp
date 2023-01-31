// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHandwashSensor.h for the primary calling header

#include "verilated.h"

#include "VHandwashSensor___024root.h"

VL_INLINE_OPT void VHandwashSensor___024root___combo__TOP__0(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->HandwashTest__DOT__clk = (1U & (~ (IData)(vlSelf->HandwashTest__DOT__clk)));
}

VL_INLINE_OPT void VHandwashSensor___024root___sequent__TOP__0(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->HandwashTest__DOT__reset) {
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7 = 0U;
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7 = 0U;
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld = 0U;
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld = 0U;
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld = 0U;
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld = 0U;
    } else {
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7 
            = (0x1ffffU & (IData)((0xfffffffffULL & 
                                   (((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld)) 
                                     * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld))) 
                                    >> 7U))));
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7 
            = (0x1ffffU & (IData)((0xfffffffffULL & 
                                   (((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld)) 
                                     * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld))) 
                                    >> 7U))));
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld 
            = ((IData)(vlSelf->HandwashTest__DOT__acceptRightHandGain)
                ? (IData)(vlSelf->HandwashTest__DOT__rightHandGain)
                : (IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld));
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld 
            = ((IData)(vlSelf->HandwashTest__DOT__acceptRightHandDistance)
                ? (IData)(vlSelf->HandwashTest__DOT__rightHandDistance)
                : (IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld));
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld 
            = ((IData)(vlSelf->HandwashTest__DOT__acceptLeftHandGain)
                ? (IData)(vlSelf->HandwashTest__DOT__leftHandGain)
                : (IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld));
        vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld 
            = ((IData)(vlSelf->HandwashTest__DOT__acceptLeftHandDistance)
                ? (IData)(vlSelf->HandwashTest__DOT__leftHandDistance)
                : (IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld));
    }
}

void VHandwashSensor___024root___eval(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___eval\n"); );
    // Body
    VHandwashSensor___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->__VinpClk__TOP__HandwashTest__DOT__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__HandwashTest__DOT__clk)))) {
        VHandwashSensor___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP____VinpClk__TOP__HandwashTest__DOT__clk 
        = vlSelf->__VinpClk__TOP__HandwashTest__DOT__clk;
    vlSelf->__VinpClk__TOP__HandwashTest__DOT__clk 
        = vlSelf->HandwashTest__DOT__clk;
}

QData VHandwashSensor___024root___change_request_1(VHandwashSensor___024root* vlSelf);

VL_INLINE_OPT QData VHandwashSensor___024root___change_request(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___change_request\n"); );
    // Body
    return (VHandwashSensor___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VHandwashSensor___024root___change_request_1(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->HandwashTest__DOT__clk ^ vlSelf->__Vchglast__TOP__HandwashTest__DOT__clk));
    VL_DEBUG_IF( if(__req && ((vlSelf->HandwashTest__DOT__clk ^ vlSelf->__Vchglast__TOP__HandwashTest__DOT__clk))) VL_DBG_MSGF("        CHANGE: ../../Verilog/Test/HandwashSensorTest.v:7: HandwashTest.clk\n"); );
    // Final
    vlSelf->__Vchglast__TOP__HandwashTest__DOT__clk 
        = vlSelf->HandwashTest__DOT__clk;
    return __req;
}

#ifdef VL_DEBUG
void VHandwashSensor___024root___eval_debug_assertions(VHandwashSensor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
