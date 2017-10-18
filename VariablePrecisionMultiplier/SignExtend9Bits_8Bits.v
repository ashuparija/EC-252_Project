`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:27:43 03/25/2017 
// Design Name: 
// Module Name:    SignExtend9Bits_8Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Sign Extend To 9 Bits, Input is 8 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignExtend9Bits_8Bits(
    input [7:0] X,
    input Signed,
    output reg [8:0] Y
    );
	 
	 always@(X, Signed)
		case(Signed)
			0: Y = {1'b0, X};
			1: Y = (X[7] == 1) ? {1'b1, X} : {1'b0, X};
		endcase


endmodule
