`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:08:40 03/25/2017 
// Design Name: 
// Module Name:    SignExtend32Bits_16Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Sign Extend To 32 Bits, Input is 16 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignExtend32Bits_16Bits(
	 input [15:0] X,
    input Signed,
    output reg [31:0] Y
    );
	 
	 always@(X, Signed)
		case(Signed)
			0: Y = {16'b0000000000000000, X};
			1: Y = (X[15] == 1) ? {16'b1111111111111111, X} : {16'b0000000000000000, X};
		endcase

endmodule
