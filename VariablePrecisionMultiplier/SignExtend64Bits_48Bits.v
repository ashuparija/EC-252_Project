`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:22:00 03/25/2017 
// Design Name: 
// Module Name:    SignExtend64Bits_48Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Sign Extend To 64 Bits, Input is 48 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignExtend64Bits_48Bits(
    input [47:0] X,
    input Signed,
    output reg [63:0] Y
    );
	 
	 always@(X, Signed)
		case(Signed)
			0: Y = {16'b0000000000000000, X};
			1: Y = (X[47] == 1) ? {16'b1111111111111111, X} : {16'b0000000000000000, X};
		endcase

endmodule
