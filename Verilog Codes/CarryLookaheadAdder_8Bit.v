`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:45 03/26/2017 
// Design Name: 
// Module Name:    CarryLookaheadAdder_8Bit 
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
module CarryLookaheadAdder_8Bit(
	 input [7:0] A,
	 input [7:0] B,
	 input Cin,
    output [7:0] Sum,
    output Cout
    );
	 
	 CarryLookaheadAdder_4Bit CLA1(A[3:0], B[3:0], Cin, Sum[3:0], Cout1);
	 CarryLookaheadAdder_4Bit CLA2(A[7:4], B[7:4], Cout1, Sum[7:4], Cout);

endmodule
