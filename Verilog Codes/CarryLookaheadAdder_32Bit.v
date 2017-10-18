`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:25 03/26/2017 
// Design Name: 
// Module Name:    CarryLookaheadAdder_32Bit 
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
module CarryLookaheadAdder_32Bit(
    input [31:0] A,
	 input [31:0] B,
	 input Cin,
    output [31:0] Sum,
    output Cout
    );
	 
	 CarryLookaheadAdder_16Bit CLA1(A[15:0], B[15:0], Cin, Sum[15:0], Cout1);
	 CarryLookaheadAdder_16Bit CLA2(A[31:16], B[31:16], Cout1, Sum[31:16], Cout);

endmodule
