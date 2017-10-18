`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:33:22 03/27/2017 
// Design Name: 
// Module Name:    adder33bit 
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
module FullAdder(
    input A,
    input B,
    input Cin,
    output S,
    output Cout
    );
	 
	 xor(S,A,B,Cin);
	 wire w1,w2,w3;
	 xor(w1,A,B);
	 and(w2,Cin,w1);
	 and(w3,A,B);
	 or(Cout,w2,w3);
	 
endmodule

module adder8bit(
    input [7:0] A,
    input [7:0] B,
	 input Cin,
    output [7:0] S,
    output Cout,
	 output O
    );
	 
	 //wire [7:0] S0;
	 wire [6:0] C;
	 FullAdder FA0(A[0],B[0],Cin,S[0],C[0]);
	 FullAdder FA1(A[1],B[1],C[0],S[1],C[1]);
	 FullAdder FA2(A[2],B[2],C[1],S[2],C[2]);
	 FullAdder FA3(A[3],B[3],C[2],S[3],C[3]);
	 FullAdder FA4(A[4],B[4],C[3],S[4],C[4]);
	 FullAdder FA5(A[5],B[5],C[4],S[5],C[5]);
	 FullAdder FA6(A[6],B[6],C[5],S[6],C[6]);
	 FullAdder FA7(A[7],B[7],C[6],S[7],Cout);

	 //Overflow Check
	 xor(O,Cout,C[6]);
	 /*and(S[0],S0[0],~O);
	 and(S[1],S0[1],~O);
	 and(S[2],S0[2],~O);
	 and(S[3],S0[3],~O);
	 and(S[4],S0[4],~O);
	 and(S[5],S0[5],~O);
	 and(S[6],S0[6],~O);
	 and(S[7],S0[7],~O);*/

endmodule

module adder9bit(
    input [8:0] A,
    input [8:0] B,
	 input Cin,
    output [8:0] S,
    output Cout,
	 output O
    );
	 
	 //wire [7:0] S0;
	 wire [7:0] C;
	 FullAdder FA0(A[0],B[0],Cin,S[0],C[0]);
	 FullAdder FA1(A[1],B[1],C[0],S[1],C[1]);
	 FullAdder FA2(A[2],B[2],C[1],S[2],C[2]);
	 FullAdder FA3(A[3],B[3],C[2],S[3],C[3]);
	 FullAdder FA4(A[4],B[4],C[3],S[4],C[4]);
	 FullAdder FA5(A[5],B[5],C[4],S[5],C[5]);
	 FullAdder FA6(A[6],B[6],C[5],S[6],C[6]);
	 FullAdder FA7(A[7],B[7],C[6],S[7],C[7]);
	 FullAdder FA8(A[8],B[8],C[7],S[8],Cout);

	 //Overflow Check
	 xor(O,Cout,C[7]);
	 /*and(S[0],S0[0],~O);
	 and(S[1],S0[1],~O);
	 and(S[2],S0[2],~O);
	 and(S[3],S0[3],~O);
	 and(S[4],S0[4],~O);
	 and(S[5],S0[5],~O);
	 and(S[6],S0[6],~O);
	 and(S[7],S0[7],~O);*/

endmodule

module adder33bit(
	 input [32:0] A,
    input [32:0] B,
	 input Cin,
    output [32:0] S,
    output Cout,
	 output O
	 );
	 
	 wire [32:0] S1;
	 adder8bit A1(A[7:0], B[7:0], Cin, S1[7:0], Cout1, O1);
	 adder8bit A2(A[15:8], B[15:8], Cout1, S1[15:8], Cout2, O2);
	 adder8bit A3(A[23:16], B[23:16], Cout2, S1[23:16], Cout3, O3);
	 adder9bit A4(A[32:24], B[32:24], Cout3, S1[32:24], Cout, O);
	 
	 //Overflow Check
	 assign S = S1 & ~O;
	 
endmodule
