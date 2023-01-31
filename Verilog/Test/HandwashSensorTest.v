module HandwashTest;


//6) Instantiate the handwash sensor with the TestModule automation.
/*[TestModule HandwashSensor]*/
/*<>*/parameter threshold = 1500;
/*<>*/reg clk;
/*<>*/reg reset;
/*<>*/reg acceptLeftHandDistance;
/*<>*/reg [15:0] leftHandDistance;
/*<>*/reg acceptLeftHandGain;
/*<>*/reg [7:0] leftHandGain;
/*<>*/reg acceptRightHandDistance;
/*<>*/reg [15:0] rightHandDistance;
/*<>*/reg acceptRightHandGain;
/*<>*/reg [7:0] rightHandGain;
/*<>*/wire waterOn;
/*<>*/HandwashSensor unitUnderTest_HandwashSensor (
/*<>*/    .clk(clk),
/*<>*/    .reset(reset),
/*<>*/    .acceptLeftHandDistance(acceptLeftHandDistance),
/*<>*/    .leftHandDistance(leftHandDistance),
/*<>*/    .acceptLeftHandGain(acceptLeftHandGain),
/*<>*/    .leftHandGain(leftHandGain),
/*<>*/    .acceptRightHandDistance(acceptRightHandDistance),
/*<>*/    .rightHandDistance(rightHandDistance),
/*<>*/    .acceptRightHandGain(acceptRightHandGain),
/*<>*/    .rightHandGain(rightHandGain),
/*<>*/    .waterOn(waterOn)
/*<>*/);
/*<>*/
/*<>*/
/*<>*/always #50 clk = !clk;
/*<>*/
/*<>*/initial begin
/*<>*/    clk = 0;
/*<>*/    reset = 0;
/*<>*/    acceptLeftHandDistance = 0;
/*<>*/    leftHandDistance = 0;
/*<>*/    acceptLeftHandGain = 0;
/*<>*/    leftHandGain = 0;
/*<>*/    acceptRightHandDistance = 0;
/*<>*/    rightHandDistance = 0;
/*<>*/    acceptRightHandGain = 0;
/*<>*/    rightHandGain = 0;
/*<>*/end

//We've written the test bench for you, look at it in simulation to see the
//handwash sensor call for the water to be on when the distance times gain
//for one of the hands is under the threshold, 1500.
initial begin

    #1000;


reset = 1;
    #1000;
    reset = 0;
$display("Hello World");
    #5000;

    leftHandDistance = 3000; #500;
    acceptLeftHandDistance = 1; #350;
    acceptLeftHandDistance = 0; #350;
    leftHandDistance = 0; # 500;
$display("Hello World");
    leftHandGain = 8'b10011000; #500;
    acceptLeftHandGain = 1; #350;
    acceptLeftHandGain = 0; #350;
    leftHandGain = 0; # 500;
$display("Hello World");
    rightHandDistance = 6000; #500;
    acceptRightHandDistance = 1; #350;
    acceptRightHandDistance = 0; #350;
    rightHandDistance = 0; # 500;
$display("Hello World");
    rightHandGain = 8'b01110111; #500;
    acceptRightHandGain = 1; #350;
    acceptRightHandGain = 0; #350;
    rightHandGain = 0; # 500;
$display("Hello World");

    #25000;

    leftHandDistance = 1200; #500;
    acceptLeftHandDistance = 1; #350;
    acceptLeftHandDistance = 0; #350;
    leftHandDistance = 0; # 500;
$display("Hello World");
    rightHandDistance = 3200; #500;
    acceptRightHandDistance = 1; #350;
    acceptRightHandDistance = 0; #350;
    rightHandDistance = 0; # 500;

    #25000;
$display("Hello World");
    leftHandDistance = 1600; #500;
    acceptLeftHandDistance = 1; #350;
    acceptLeftHandDistance = 0; #350;
    leftHandDistance = 0; # 500;

    rightHandDistance = 1800; #500;
    acceptRightHandDistance = 1; #350;
    acceptRightHandDistance = 0; #350;
    rightHandDistance = 0; # 500;
$display("Hello World");

    #20000;
$display("Hello World");
    $finish;

end

endmodule