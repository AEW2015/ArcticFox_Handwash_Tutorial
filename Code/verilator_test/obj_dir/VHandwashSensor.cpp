// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VHandwashSensor.h"
#include "VHandwashSensor__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VHandwashSensor::VHandwashSensor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VHandwashSensor__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VHandwashSensor::VHandwashSensor(const char* _vcname__)
    : VHandwashSensor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VHandwashSensor::~VHandwashSensor() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VHandwashSensor___024root___eval_initial(VHandwashSensor___024root* vlSelf);
void VHandwashSensor___024root___eval_settle(VHandwashSensor___024root* vlSelf);
void VHandwashSensor___024root___eval(VHandwashSensor___024root* vlSelf);
QData VHandwashSensor___024root___change_request(VHandwashSensor___024root* vlSelf);
#ifdef VL_DEBUG
void VHandwashSensor___024root___eval_debug_assertions(VHandwashSensor___024root* vlSelf);
#endif  // VL_DEBUG
void VHandwashSensor___024root___final(VHandwashSensor___024root* vlSelf);

static void _eval_initial_loop(VHandwashSensor__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VHandwashSensor___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VHandwashSensor___024root___eval_settle(&(vlSymsp->TOP));
        VHandwashSensor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VHandwashSensor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../Verilog/Test/HandwashSensorTest.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VHandwashSensor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VHandwashSensor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHandwashSensor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VHandwashSensor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VHandwashSensor___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VHandwashSensor___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../Verilog/Test/HandwashSensorTest.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VHandwashSensor___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VHandwashSensor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VHandwashSensor::final() {
    VHandwashSensor___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VHandwashSensor::hierName() const { return vlSymsp->name(); }
const char* VHandwashSensor::modelName() const { return "VHandwashSensor"; }
unsigned VHandwashSensor::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VHandwashSensor::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VHandwashSensor___024root__trace_init_top(VHandwashSensor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHandwashSensor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHandwashSensor___024root*>(voidSelf);
    VHandwashSensor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VHandwashSensor___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VHandwashSensor___024root__trace_register(VHandwashSensor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VHandwashSensor::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VHandwashSensor___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
