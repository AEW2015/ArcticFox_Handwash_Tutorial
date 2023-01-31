// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHandwashSensor__Syms.h"


VL_ATTR_COLD void VHandwashSensor___024root__trace_init_sub__TOP__0(VHandwashSensor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("HandwashTest ");
    tracep->declBus(c+30,"threshold", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+2,"acceptLeftHandDistance", false,-1);
    tracep->declBus(c+3,"leftHandDistance", false,-1, 15,0);
    tracep->declBit(c+4,"acceptLeftHandGain", false,-1);
    tracep->declBus(c+5,"leftHandGain", false,-1, 7,0);
    tracep->declBit(c+6,"acceptRightHandDistance", false,-1);
    tracep->declBus(c+7,"rightHandDistance", false,-1, 15,0);
    tracep->declBit(c+8,"acceptRightHandGain", false,-1);
    tracep->declBus(c+9,"rightHandGain", false,-1, 7,0);
    tracep->declBit(c+10,"waterOn", false,-1);
    tracep->pushNamePrefix("unitUnderTest_HandwashSensor ");
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+2,"acceptLeftHandDistance", false,-1);
    tracep->declBus(c+3,"leftHandDistance", false,-1, 15,0);
    tracep->declBit(c+4,"acceptLeftHandGain", false,-1);
    tracep->declBus(c+5,"leftHandGain", false,-1, 7,0);
    tracep->declBit(c+6,"acceptRightHandDistance", false,-1);
    tracep->declBus(c+7,"rightHandDistance", false,-1, 15,0);
    tracep->declBit(c+8,"acceptRightHandGain", false,-1);
    tracep->declBus(c+9,"rightHandGain", false,-1, 7,0);
    tracep->declBit(c+10,"waterOn", false,-1);
    tracep->declBus(c+11,"leftHandDistanceHeld", false,-1, 15,0);
    tracep->declBus(c+12,"leftHandGainHeld", false,-1, 7,0);
    tracep->declBus(c+13,"rightHandDistanceHeld", false,-1, 15,0);
    tracep->declBus(c+14,"rightHandGainHeld", false,-1, 7,0);
    tracep->declBus(c+15,"leftHand", false,-1, 15,0);
    tracep->declBus(c+16,"leftHandDistanceHeld_Mult_leftHandGainHeld", false,-1, 23,0);
    tracep->declBus(c+17,"leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7", false,-1, 16,0);
    tracep->declBus(c+18,"rightHand", false,-1, 15,0);
    tracep->declBus(c+19,"rightHandDistanceHeld_Mult_rightHandGainHeld", false,-1, 23,0);
    tracep->declBus(c+20,"rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7", false,-1, 16,0);
    tracep->declBus(c+30,"threshold", false,-1, 31,0);
    tracep->pushNamePrefix("dsp_leftHandDistanceHeld_Mult_leftHandGainHeld ");
    tracep->declBit(c+29,"CLK", false,-1);
    tracep->declBus(c+21,"A", false,-1, 24,0);
    tracep->declBus(c+22,"B", false,-1, 17,0);
    tracep->declQuad(c+23,"P", false,-1, 42,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dsp_rightHandDistanceHeld_Mult_rightHandGainHeld ");
    tracep->declBit(c+29,"CLK", false,-1);
    tracep->declBus(c+25,"A", false,-1, 24,0);
    tracep->declBus(c+26,"B", false,-1, 17,0);
    tracep->declQuad(c+27,"P", false,-1, 42,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VHandwashSensor___024root__trace_init_top(VHandwashSensor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_init_top\n"); );
    // Body
    VHandwashSensor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VHandwashSensor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VHandwashSensor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VHandwashSensor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VHandwashSensor___024root__trace_register(VHandwashSensor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VHandwashSensor___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VHandwashSensor___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VHandwashSensor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VHandwashSensor___024root__trace_full_sub_0(VHandwashSensor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VHandwashSensor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_full_top_0\n"); );
    // Init
    VHandwashSensor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHandwashSensor___024root*>(voidSelf);
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VHandwashSensor___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VHandwashSensor___024root__trace_full_sub_0(VHandwashSensor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHandwashSensor___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->HandwashTest__DOT__reset));
    bufp->fullBit(oldp+2,(vlSelf->HandwashTest__DOT__acceptLeftHandDistance));
    bufp->fullSData(oldp+3,(vlSelf->HandwashTest__DOT__leftHandDistance),16);
    bufp->fullBit(oldp+4,(vlSelf->HandwashTest__DOT__acceptLeftHandGain));
    bufp->fullCData(oldp+5,(vlSelf->HandwashTest__DOT__leftHandGain),8);
    bufp->fullBit(oldp+6,(vlSelf->HandwashTest__DOT__acceptRightHandDistance));
    bufp->fullSData(oldp+7,(vlSelf->HandwashTest__DOT__rightHandDistance),16);
    bufp->fullBit(oldp+8,(vlSelf->HandwashTest__DOT__acceptRightHandGain));
    bufp->fullCData(oldp+9,(vlSelf->HandwashTest__DOT__rightHandGain),8);
    bufp->fullBit(oldp+10,((((0U != (0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7)) 
                             & (0U != (0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7))) 
                            & ((0x5dcU > (0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7)) 
                               | (0x5dcU > (0xffffU 
                                            & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7))))));
    bufp->fullSData(oldp+11,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld),16);
    bufp->fullCData(oldp+12,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld),8);
    bufp->fullSData(oldp+13,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld),16);
    bufp->fullCData(oldp+14,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld),8);
    bufp->fullSData(oldp+15,((0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7)),16);
    bufp->fullIData(oldp+16,((0xffffffU & (IData)((0x7ffffffffffULL 
                                                   & ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld)) 
                                                      * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld))))))),24);
    bufp->fullIData(oldp+17,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7),17);
    bufp->fullSData(oldp+18,((0xffffU & vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7)),16);
    bufp->fullIData(oldp+19,((0xffffffU & (IData)((0x7ffffffffffULL 
                                                   & ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld)) 
                                                      * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld))))))),24);
    bufp->fullIData(oldp+20,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7),17);
    bufp->fullIData(oldp+21,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld),25);
    bufp->fullIData(oldp+22,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld),18);
    bufp->fullQData(oldp+23,((0x7ffffffffffULL & ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandDistanceHeld)) 
                                                  * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__leftHandGainHeld))))),43);
    bufp->fullIData(oldp+25,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld),25);
    bufp->fullIData(oldp+26,(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld),18);
    bufp->fullQData(oldp+27,((0x7ffffffffffULL & ((QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandDistanceHeld)) 
                                                  * (QData)((IData)(vlSelf->HandwashTest__DOT__unitUnderTest_HandwashSensor__DOT__rightHandGainHeld))))),43);
    bufp->fullBit(oldp+29,(vlSelf->HandwashTest__DOT__clk));
    bufp->fullIData(oldp+30,(0x5dcU),32);
}
