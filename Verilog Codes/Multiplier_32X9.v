`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:58 03/25/2017 
// Design Name: 
// Module Name:    Multiplier_32X9 
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
/*module FullAdder(
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
	 
	 wire [7:0] S0;
	 wire [6:0] Co;
	 FullAdder FA0(A[0],B[0],Cin,S0[0],Co[0]);
	 FullAdder FA1(A[1],B[1],Co[0],S0[1],Co[1]);
	 FullAdder FA2(A[2],B[2],Co[1],S0[2],Co[2]);
	 FullAdder FA3(A[3],B[3],Co[2],S0[3],Co[3]);
	 FullAdder FA4(A[4],B[4],Co[3],S0[4],Co[4]);
	 FullAdder FA5(A[5],B[5],Co[4],S0[5],Co[5]);
	 FullAdder FA6(A[6],B[6],Co[5],S0[6],Co[6]);
	 FullAdder FA7(A[7],B[7],Co[6],S0[7],Cout);

	 //Overflow Check
	 xor(O,Cout,Co[6]);
	 //and(S[0],S0[0],~O);
	 //and(S[1],S0[1],~O);
	 //and(S[2],S0[2],~O);
	 //and(S[3],S0[3],~O);
	 //and(S[4],S0[4],~O);
	 //and(S[5],S0[5],~O);
	 //and(S[6],S0[6],~O);
	 //and(S[7],S0[7],~O);

endmodule

module adder32bit(
	 input [31:0] A,
    input [31:0] B,
	 input Cin,
    output [31:0] S,
    output Cout,
	 output O
	 );
	 
	 wire [31:0] S1;
	 adder8bit A1(A[7:0], B[7:0], Cin, S1[7:0], Cout1, O1);
	 adder8bit A2(A[15:8], B[15:8], Cout1, S1[15:8], Cout2, O2);
	 adder8bit A3(A[23:16], B[23:16], Cout2, S1[23:16], Cout3, O3);
	 adder8bit A4(A[31:24], B[31:24], Cout3, S1[31:24], Cout, O);
	 
	 //Overflow Check
	 assign S = S1 & ~O;
	 
endmodule*/
// Perform signed 33X33
// If A is unsigned or if A is signed and MSB of A is 0, then MSB of Q is 0, else 1
module Multiplier_32X9(
    input [31:0] Q0,
    input [8:0] M0,
	 input SAM,
	 input able,
    output reg [39:0] Product 
    );
	 integer i;
	 reg Q_1;
	 integer count;
	 reg clk;
	 wire [32:0] Sum,Difference;
	 wire t1,t2,t3,t4;
	 reg [32:0] A; //A is a 33-bit register which stores higher order 33 bits in the 66-bit product
	 reg [32:0] Q; //Q is a 33-bit register which stores lower order 33 bits in the 66-bit product
	 reg [32:0] M;
	 initial 
	 begin
		Q = (SAM == 0) ? {0, Q0} : (Q0[31] == 0) ? {0, Q0} : {1, Q0};
		A = 0;
		Q_1 = 0;
		count = 33;
		clk = 0;
		M = (M0[8] == 1) ? {24'b111111111111111111111111, M0} : {24'b000000000000000000000000, M0};
	 end    
	 always 
	 begin
		#2 clk = ~clk;
	 end

	 always @(Q0, M0, SAM, able)
	 begin
		Q = (SAM == 1 && Q0[31] == 1) ? {1, Q0} : {0, Q0};
		count = 33;
		A = 0;
		Q_1 = 0;
		clk = 0;
		M = (M0[8] == 1) ? {24'b111111111111111111111111, M0} : {24'b000000000000000000000000, M0};
	 end 

	 adder33bit Add(A,M,0,Sum,t1,t2);
	 adder33bit Subtract(A,~M,1,Difference,t3,t4);
			
	 always @(posedge clk)
	 begin
		if(able == 0)
		begin
			A <= 0;
			Q <= 0;
			Q_1 <= 0;
		end
		else if(count > 0)
		begin
			if(Q[0] == 0 && Q_1 == 1)
				A <= Sum;
			else if(Q[0] == 1 && Q_1 == 0)
				A <= Difference;
			Q_1 <= Q[0];
			for (i = 0; i < 32; i = i+1) 
			begin
				Q[i] <= Q[i+1];
			end
			#2 Q[32] <= A[0];
			#2 for (i = 0; i < 32; i = i+1) 
			begin
				A[i] <= A[i+1];
			end
			count <= count-1;
		end
		Product = {A[6:0], Q};
	end

endmodule
