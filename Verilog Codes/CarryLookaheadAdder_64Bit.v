`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:41 03/26/2017 
// Design Name: 
// Module Name:    CarryLookaheadAdder_64Bit 
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
module CarryLookaheadAdder_64Bit(
    input [63:0] A,
	 input [63:0] B,
	 input Cin,
    output [63:0] Sum,
    output Cout
    );
	 
	 CarryLookaheadAdder_32Bit CLA1(A[31:0], B[31:0], Cin, Sum[31:0], Cout1);
	 CarryLookaheadAdder_32Bit CLA2(A[63:32], B[63:32], Cout1, Sum[63:32], Cout);

endmodule
