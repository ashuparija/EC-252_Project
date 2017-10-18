`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:20:12 03/27/2017 
// Design Name: 
// Module Name:    VariablePrecisionMultiplier 
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
module VariablePrecisionMultiplier(
	 input [31:0] A,
	 input [31:0] B,
    input SA,
    input SB,
    input prec1,
    input prec0,
    output [63:0] OUT
    );
	 
	 wire samsb, sammsb, samlsb, salsb, salmsb, sallsb; 
	 wire sbmmsb, sbmlsb, sblmsb, sbllsb;
    wire [6:1] S;
    wire [4:1] able;
    wire [4:1] SAM;
	 
	 ControlUnit CU(SA, SB, prec1, prec0, samsb, sammsb, samlsb, salsb, salmsb, sallsb, sbmmsb, sbmlsb, sblmsb, sbllsb, S, able, SAM);
	 
	 wire [8:0] InB1, InB2, InB3, InB4;
	 SignExtend9Bits_8Bits S9E_1(B[31:24], sbmmsb, InB1);
	 SignExtend9Bits_8Bits S9E_2(B[23:16], sbmlsb, InB2);
	 SignExtend9Bits_8Bits S9E_3(B[15:8], sblmsb, InB3);
	 SignExtend9Bits_8Bits S9E_4(B[7:0], sbllsb, InB4);
	 
	 wire [31:0] a_31_16, a_31_24, a_23_16, a_15_0, a_15_8, a_7_0; 
	 SignExtend32Bits_16Bits S32E_1(A[31:16], samsb, a_31_16);
	 SignExtend32Bits_8Bits S32E_2(A[31:24], sammsb, a_31_24);
	 SignExtend32Bits_8Bits S32E_3(A[23:16], samlsb, a_23_16);
	 SignExtend32Bits_16Bits S32E_4(A[15:0], salsb, a_15_0);
	 SignExtend32Bits_8Bits S32E_5(A[15:8], salmsb, a_15_8);
	 SignExtend32Bits_8Bits S32E_6(A[7:0], sallsb, a_7_0);
	 
	 wire [31:0] mux1_1, mux1_2, mux1_3, mux1_4;
	 wire [31:0] InA1, InA2, InA3, InA4;
	 MUX_32Bits MUX1_1(a_31_16, a_31_24, S[1], mux1_1);
	 MUX_32Bits MUX1_2(a_31_16, a_23_16, S[1], mux1_2);
	 MUX_32Bits MUX1_3(a_15_0, a_15_8, S[1], mux1_3);
	 MUX_32Bits MUX1_4(a_15_0, a_7_0, S[1], mux1_4);
	 MUX_32Bits MUX2_1(A[31:0], mux1_1, S[2], InA1);
	 MUX_32Bits MUX2_2(A[31:0], mux1_2, S[2], InA2);
	 MUX_32Bits MUX3_1(A[31:0], mux1_3, S[3], InA3);
	 MUX_32Bits MUX3_2(A[31:0], mux1_4, S[3], InA4);
	 
	 wire [39:0] PR1, PR2, PR3, PR4;
	 Multiplier_32X9 M1(InA1, InB1, SAM[1], able[1], PR1);
	 Multiplier_32X9 M2(InA2, InB2, SAM[2], able[2], PR2);
	 Multiplier_32X9 M3(InA3, InB3, SAM[3], able[3], PR3);
	 Multiplier_32X9 M4(InA4, InB4, SAM[4], able[4], PR4);
	 
	 wire [47:0] RIS1, RIS2, RIS3, RIS4;
	 ShiftLeft8Bits_40Bits SH8L_1(PR1, RIS1);
	 SignExtend48Bits_40Bits S48E_1(PR2, 1, RIS2);	// REFER: Signed bit of S48E = ?
	 ShiftLeft8Bits_40Bits SH8L_2(PR3, RIS3);
	 SignExtend48Bits_40Bits S48E_2(PR4, 1, RIS4);	// REFER: Signed bit of S48E = ?
	 
	 wire [47:0] SUM1, SUM2;
	 wire Cout1, Cout2;
	 CarryLookaheadAdder_48Bit CPA1(RIS1, RIS2, 0, SUM1, Cout1);
	 CarryLookaheadAdder_48Bit CPA2(RIS3, RIS4, 0, SUM2, Cout2);
	 
	 wire [63:0] PPR1, PPR2;
	 ShiftLeft16Bits_48Bits SH16L(SUM1, PPR1);
	 SignExtend64Bits_48Bits S64E(SUM2, 1, PPR2);	// REFER: Signed bit of S64E = ?
	 
	 wire [63:0] cpa3;
	 wire Cout3; 
	 CarryLookaheadAdder_64Bit CPA3(PPR1, PPR2, 0, cpa3, Cout3);
	 
	 wire [63:0] mux5, mux4;
	 MUX_64Bits MUX5(cpa3, PPR2, S[5], mux5);
	 MUX_64Bits MUX4({PR1[15:0], PR2[15:0], PR3[15:0], PR4[15:0]}, {SUM1[31:0], SUM2[31:0]}, S[4], mux4);
	 MUX_64Bits MUX6(mux5, mux4, S[6], OUT);

endmodule
