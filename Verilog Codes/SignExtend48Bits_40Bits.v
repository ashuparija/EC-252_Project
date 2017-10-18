`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:19:58 03/25/2017 
// Design Name: 
// Module Name:    SignExtend48Bits_40Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Sign Extend To 48 Bits, Input is 40 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignExtend48Bits_40Bits(
    input [39:0] X,
    input Signed,
    output reg [47:0] Y
    );
	 
	 always@(X, Signed)
		case(Signed)
			0: Y = {8'b00000000, X};
			1: Y = (X[39] == 1) ? {8'b11111111, X} : {8'b00000000, X};
		endcase

endmodule
