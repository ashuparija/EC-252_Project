`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:30 03/27/2017 
// Design Name: 
// Module Name:    MUX_64Bits 
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
module MUX_64Bits(
    input [63:0] A,
    input [63:0] B,
    input Select,
    output reg [63:0] Y
    );
	
	always@(A, B, Select)
		case(Select)
			0: Y = A;
			1:	Y = B;
		endcase

endmodule
