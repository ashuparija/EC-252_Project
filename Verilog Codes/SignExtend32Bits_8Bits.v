`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:16 03/25/2017 
// Design Name: 
// Module Name:    SignExtend32Bits_8Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Sign Extend To 32 Bits, Input is 8 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module SignExtend32Bits_8Bits(
    input [7:0] X,
    input Signed,
    output reg [31:0] Y
    );
	 
	 always@(X, Signed)
		case(Signed)
			0: Y = {24'b000000000000000000000000, X};
			1: Y = (X[7] == 1) ? {24'b111111111111111111111111, X} : {24'b000000000000000000000000, X};
		endcase
	 
endmodule
