`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:32:24 03/25/2017 
// Design Name: 
// Module Name:    ShiftLeft16Bits_48Bits 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Left Shift By 16 Bits, Input is 48 Bits
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ShiftLeft16Bits_48Bits(
    input [47:0] X,
    output reg [63:0] Y
    );
	 
	 always@(X)
		Y = {X, 16'b0000000000000000};

endmodule
