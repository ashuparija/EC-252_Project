`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:20:06 03/26/2017 
// Design Name: 
// Module Name:    CarryLookaheadAdder_48Bit 
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
module CarryLookaheadAdder_48Bit(
    input [47:0] A,
	 input [47:0] B,
	 input Cin,
    output [47:0] Sum,
    output Cout
    );
	 
	 CarryLookaheadAdder_32Bit CLA1(A[31:0], B[31:0], Cin, Sum[31:0], Cout1);
	 CarryLookaheadAdder_16Bit CLA2(A[47:32], B[47:32], Cout1, Sum[47:32], Cout);

endmodule
