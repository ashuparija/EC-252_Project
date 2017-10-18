`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:36:53 03/29/2017
// Design Name:   VariablePrecisionMultiplier
// Module Name:   /media/akilarif/Akil/Studies/Semester 4/EC-252 Xilinx Projects/VariablePrecisionMultiplier/TestBench_VPAC.v
// Project Name:  VariablePrecisionMultiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: VariablePrecisionMultiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestBench_VPAC;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg SA;
	reg SB;
	reg prec1;
	reg prec0;

	// Outputs
	wire [63:0] OUT;

	// Instantiate the Unit Under Test (UUT)
	VariablePrecisionMultiplier uut (
		.A(A), 
		.B(B), 
		.SA(SA), 
		.SB(SB), 
		.prec1(prec1), 
		.prec0(prec0), 
		.OUT(OUT)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		SA = 0;
		SB = 0;
		prec1 = 0;
		prec0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
			 A = 32'b00000000000000000000000000000011; B = 32'b00000000000000000000000000000010; SA = 0; SB = 0; prec1 = 0; prec0 = 0;
		#500 A = 32'b10000000000000000000000000000011; B = 32'b00000000000000000000000000000010; SA = 0; SB = 0; prec1 = 0; prec0 = 0;
		#500 A = 32'b10000000000000000000000000000011; B = 32'b00000000000000000000000000000010; SA = 1; SB = 0; prec1 = 0; prec0 = 0;
		#500 A = 32'b00000000000000000000000000000011; B = 32'b10000000000000000000000000000010; SA = 0; SB = 1; prec1 = 0; prec0 = 0;
		#500 A = 32'b00001100000000000000000000000011; B = 32'b00000000000000000000000000000010; SA = 0; SB = 0; prec1 = 0; prec0 = 1;
		#500 A = 32'b00000000011000000000000110000011; B = 32'b00000000010000000000000000000010; SA = 0; SB = 0; prec1 = 1; prec0 = 0;
		#500 A = 32'b00000100000001000000001000000011; B = 32'b00010000000010000000010000000010; SA = 0; SB = 0; prec1 = 1; prec0 = 1;
	end
      
endmodule

