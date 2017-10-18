`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:25:30 03/27/2017 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
    input SA,
    input SB,
    input prec1,
    input prec0,
    output reg samsb,
    output reg sammsb,
    output reg samlsb,
    output reg salsb,
    output reg salmsb,
    output reg sallsb,
    output reg sbmmsb,
    output reg sbmlsb,
    output reg sblmsb,
    output reg sbllsb,
    output reg [6:1] S,
    output reg [4:1] able,
    output reg [4:1] SAM
    );
	 
	 reg[15:0] control;
	 reg help1;
	 reg help2;
	 always@(SA, SB, prec1, prec0)
	 begin
		 if (prec1 == 0 && prec0 == 0)
		 begin
			  if(SA == 0 && SB == 0)
			  begin
				  control = 16'b0000000011000000;
			  end
			  else if(SA == 0 && SB == 1)
			  begin
				  control = 16'b0010000011000000;
			  end
			  else if(SA == 1 && SB == 0)
			  begin
				  control = 16'b0000001111000000;
			  end
			  else if(SA == 1 && SB == 1)
			  begin
				  control = 16'b0010001111000000;
			  end
		 end
	 
		 else if(prec1 == 0 && prec0 == 1)
		 begin
			  if(SA == 0 && SB == 0)
			  begin
				  control = 16'b0000000001000010;
			  end
			  else if(SA == 0 && SB == 1)
			  begin
				  control = 16'b0000100001000010;
			  end
			  else if(SA == 1 && SB == 0)
			  begin
				  control = 16'b0000000101000010;
			  end
			  else if(SA == 1 && SB == 1)
			  begin
				  control = 16'b0000100101000010;
			  end
		 end
	 
		 else if(prec1 == 1 && prec0 == 0)
		 begin
			  if(SA == 0 && SB == 0)
			  begin
				  control = 16'b0000000011011101;
			  end
			  else if(SA == 0 && SB == 1)
			  begin
				  control = 16'b0010100011011101;
			  end
			  else if(SA == 1 && SB == 0)
			  begin
				  control = 16'b1000001111011101;
			  end
			  else if(SA == 1 && SB == 1)
			  begin
				  control = 16'b1010101111011101;
			  end
		 end
	 
		 else if (prec1 == 1 && prec0 == 1)
		 begin
			  if(SA == 0 && SB == 0)
			  begin
				  control = 16'b0000000011111001;
			  end
			  else if(SA == 0 && SB == 1)
			  begin
				  control = 16'b0011110011111001;
			  end
			  else if(SA == 1 && SB == 0)
			  begin
				  control = 16'b0100001111111001;
			  end
			  else if (SA == 1 && SB == 1)
			  begin
				  control = 16'b0111111111111001;
			  end
		 end
	 
		 samsb = control[15];
		 salsb = control[15];
		 sammsb = control[14];	 
		 samlsb = control[14];
		 salmsb = control[14];
		 sallsb = control[14];
		 sbmmsb = control[13];
		 sbmlsb = control[12];
		 sblmsb = control[11];
		 sbllsb = control[10];
		 help1 = control[9];
		 help2 = control[8];
		 SAM = {help2,help2,help1,help1};
		 able = {1'b1, 1'b1, control[6], control[7]};
		 S = {control[0], control[1], control[2], control[3], control[4], control[5]};
	 end

endmodule
