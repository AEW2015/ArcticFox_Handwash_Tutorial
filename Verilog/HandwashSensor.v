module HandwashSensor(

    //1a) Add a clock automation, since the sensor doesn't need to be fast, we suggest a 10 MHz clock
    /*[Clock 10 MHz]*/
    input clk,

    //1b) Add a reset automation
    /*[Reset]*/
    input reset,

    input acceptLeftHandDistance,
    input [15:0] leftHandDistance,

    input acceptLeftHandGain,
    input [7:0] leftHandGain,

    input acceptRightHandDistance,
    input [15:0] rightHandDistance,

    input acceptRightHandGain,
    input [7:0] rightHandGain,

    output waterOn
);


//2) For the next 4 regs, leftHandDistanceHeld, leftHandGainHeld, rightHandDistanceHeld, and rightHandGainHeld,
//   add a HoldWhenAccept automation with no items. We are going to make a custom automation! Go to the
//   Automations > HoldWhenAccept.cs for Step 3).
/*[HoldWhenAccept]*/
reg [15:0] leftHandDistanceHeld;
/*<>*/always@(posedge clk)  begin
/*<>*/    if(reset)
/*<>*/        leftHandDistanceHeld <= 0;
/*<>*/    else if(acceptLeftHandDistance)
/*<>*/        leftHandDistanceHeld <= leftHandDistance;
/*<>*/    else
/*<>*/        leftHandDistanceHeld <= leftHandDistanceHeld;
/*<>*/end
/*[HoldWhenAccept]*/
reg [7:0] leftHandGainHeld;
/*<>*/always@(posedge clk)  begin
/*<>*/    if(reset)
/*<>*/        leftHandGainHeld <= 0;
/*<>*/    else if(acceptLeftHandGain)
/*<>*/        leftHandGainHeld <= leftHandGain;
/*<>*/    else
/*<>*/        leftHandGainHeld <= leftHandGainHeld;
/*<>*/end
/*[HoldWhenAccept]*/
reg [15:0] rightHandDistanceHeld;
/*<>*/always@(posedge clk)  begin
/*<>*/    if(reset)
/*<>*/        rightHandDistanceHeld <= 0;
/*<>*/    else if(acceptRightHandDistance)
/*<>*/        rightHandDistanceHeld <= rightHandDistance;
/*<>*/    else
/*<>*/        rightHandDistanceHeld <= rightHandDistanceHeld;
/*<>*/end
/*[HoldWhenAccept]*/
reg [7:0] rightHandGainHeld;
/*<>*/always@(posedge clk)  begin
/*<>*/    if(reset)
/*<>*/        rightHandGainHeld <= 0;
/*<>*/    else if(acceptRightHandGain)
/*<>*/        rightHandGainHeld <= rightHandGain;
/*<>*/    else
/*<>*/        rightHandGainHeld <= rightHandGainHeld;
/*<>*/end

//4) We need to calculate the distance of the left and right hands. Calculate the distance by multiplying
//   the left hand's distance by it's gain, and shift the result right by 7. In the example, we assume
//   that the gain is an 8 bit fixed point number with 7 decimal places. We recommend using the Calculate
//   automation to abstract away the multiplication.
//
//   You can pass an equation to the Calculate automation. Therefore, you could pass in an equation such as
//   leftHandDistanceHeld * leftHandGainHeld >> 7
//Calculate doc: https://icii.notion.site/Calculate-966443024d5d4d2db38f8db8b51f4424 (TODO: shorten url later)
/*[Calculate leftHandDistanceHeld * leftHandGainHeld >> 7]*/
/*<>*///Info: Please note, the result wire: leftHand, has a width (16) less than the calculation's result (17)
wire [15:0] leftHand;
/*<>*/wire [23:0] leftHandDistanceHeld_Mult_leftHandGainHeld;
/*<>*/DSP48_AxB dsp_leftHandDistanceHeld_Mult_leftHandGainHeld(
/*<>*/    .CLK(clk),
/*<>*/    .A({ {9{1'b0}}, leftHandDistanceHeld}),
/*<>*/    .B({ {10{1'b0}}, leftHandGainHeld}),
/*<>*/    .P(leftHandDistanceHeld_Mult_leftHandGainHeld)
/*<>*/);
/*<>*/reg [16:0] leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7;
/*<>*/always@(posedge clk) begin
/*<>*/    if(reset)
/*<>*/        leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7 <= 0;
/*<>*/    else
/*<>*/        leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7 <= leftHandDistanceHeld_Mult_leftHandGainHeld >> 7;
/*<>*/end
/*<>*/assign leftHand = leftHandDistanceHeld_Mult_leftHandGainHeld_ShiftR_7;

//5) Similary, we want to do the same for the right.

/*[Calculate rightHandDistanceHeld * rightHandGainHeld >> 7]*/
/*<>*///Info: Please note, the result wire: rightHand, has a width (16) less than the calculation's result (17)
wire [15:0] rightHand;
/*<>*/wire [23:0] rightHandDistanceHeld_Mult_rightHandGainHeld;
/*<>*/DSP48_AxB dsp_rightHandDistanceHeld_Mult_rightHandGainHeld(
/*<>*/    .CLK(clk),
/*<>*/    .A({ {9{1'b0}}, rightHandDistanceHeld}),
/*<>*/    .B({ {10{1'b0}}, rightHandGainHeld}),
/*<>*/    .P(rightHandDistanceHeld_Mult_rightHandGainHeld)
/*<>*/);
/*<>*/reg [16:0] rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7;
/*<>*/always@(posedge clk) begin
/*<>*/    if(reset)
/*<>*/        rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7 <= 0;
/*<>*/    else
/*<>*/        rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7 <= rightHandDistanceHeld_Mult_rightHandGainHeld >> 7;
/*<>*/end
/*<>*/assign rightHand = rightHandDistanceHeld_Mult_rightHandGainHeld_ShiftR_7;

parameter threshold = 1500;
assign waterOn = leftHand != 0 && rightHand != 0 && (leftHand < threshold || rightHand < threshold);

endmodule

module DSP48_AxB
   (CLK,
    A,
    B,
    P);
  
  input CLK;
  input [24:0]A;
  input [17:0]B;
  output [42:0]P;

assign P = A*B;

endmodule

