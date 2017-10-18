`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:07 03/26/2017 
// Design Name: 
// Module Name:    CarryLookaheadAdder_16Bit 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CarryLookaheadAdder_16Bit(
    input [15:0] A,
	 input [15:0] B,
	 input Cin,
    output [15:0] Sum,
    output Cout
    );
	 
	 CarryLookaheadAdder_8Bit CLA1(A[7:0], B[7:0], Cin, Sum[7:0], Cout1);
	 CarryLookaheadAdder_8Bit CLA2(A[15:8], B[15:8], Cout1, Sum[15:8], Cout);

endmodule
