// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHandwashSensor__Syms.h"


void VHandwashSensor___024root__trace_chg_sub_0(VHandwashSensor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VHandwashSensor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_chg_top_0\n"); );
    // Init
    VHandwashSensor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHandwashSensor___024root*>(voidSelf);
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VHandwashSensor___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VHandwashSensor___024root__trace_chg_sub_0(VHandwashSensor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->HandwashTest__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->HandwashTest__DOT__acceptLeftHandDistance));
        bufp->chgSData(oldp+2,(vlSelf->HandwashTest__DOT__leftHandDistance),16);
        bufp->chgBit(oldp+3,(vlSelf->HandwashTest__DOT__acceptLeftHandGain));
        bufp->chgCData(oldp+4,(vlSelf->HandwashTest__DOT__leftHandGain),8);
        bufp->chgBit(oldp+5,(vlSelf->HandwashTest__DOT__acceptRightHandDistance));
        bufp->chgSData(oldp+6,(vlSelf->HandwashTest__DOT__rightHandDistance),16);
        bufp->chgBit(oldp+7,(vlSelf->HandwashTest__DOT__acceptRightHandGain));
        bufp->chgCData(oldp+8,(vlSelf->HandwashTest__DOT__rightHandGain),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+9,((((0U != (0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7)) 
                               & (0U != (0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7))) 
                              & ((0x5dcU > (0xffffU 
                                            & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7)) 
                                 | (0x5dcU > (0xffffU 
                                              & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7))))));
        bufp->chgSData(oldp+10,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld),16);
        bufp->chgCData(oldp+11,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld),8);
        bufp->chgSData(oldp+12,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld),16);
        bufp->chgCData(oldp+13,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld),8);
        bufp->chgSData(oldp+14,((0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7)),16);
        bufp->chgIData(oldp+15,((0xffffffU & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld)) 
                                                         * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld))))))),24);
        bufp->chgIData(oldp+16,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7),17);
        bufp->chgSData(oldp+17,((0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7)),16);
        bufp->chgIData(oldp+18,((0xffffffU & (IData)(
                                                     (0x7ffffffffffULL 
                                                      & ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld)) 
                                                         * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld))))))),24);
        bufp->chgIData(oldp+19,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7),17);
        bufp->chgIData(oldp+20,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld),25);
        bufp->chgIData(oldp+21,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld),18);
        bufp->chgQData(oldp+22,((0x7ffffffffffULL & 
                                 ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld)) 
                                  * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld))))),43);
        bufp->chgIData(oldp+24,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld),25);
        bufp->chgIData(oldp+25,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld),18);
        bufp->chgQData(oldp+26,((0x7ffffffffffULL & 
                                 ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld)) 
                                  * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld))))),43);
    }
    bufp->chgBit(oldp+28,(vlSelf->HandwashTest__DOT__clk));
}

void VHandwashSensor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_cleanup\n"); );
    // Init
    VHandwashSensor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHandwashSensor___024root*>(voidSelf);
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
