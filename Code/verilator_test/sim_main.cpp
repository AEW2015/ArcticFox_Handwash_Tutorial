  #include "VHandwashSensor.h"
  #include "verilated.h"  
#include "verilated_vcd_c.h"

#include <iostream>
#include <fstream>
#include <sstream>  
#include <string>
#include <cstdlib>
#include <cstdio>
  int main(int argc, char** argv) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      VHandwashSensor* top = new VHandwashSensor{contextp};
        
        VerilatedVcdC* tfp;
        Verilated::traceEverOn(true);

		tfp = new VerilatedVcdC;
		top->trace(tfp, 99);

		std::string vcdname = argv[0];
		vcdname += ".vcd";
		std::cout << vcdname << std::endl;
		tfp->open(vcdname.c_str());
      int main_time = 0;
      tfp->dump(main_time++);
      while (!contextp->gotFinish()) { top->eval(); tfp->dump(main_time++);}
      delete top;
      delete contextp;
      return 0;
  }
