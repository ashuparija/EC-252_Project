`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:32:03 03/25/2017 
// Design Name: 
// Module Name:    ShiftLeft8Bits_40Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Left Shift By 8 Bits, Input is 40 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftLeft8Bits_40Bits(
    input [39:0] X,
    output reg [47:0] Y
    );
	 
	 always@(X)
		Y = {X, 8'b00000000};

endmodule
