`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:53 07/27/2019 
// Design Name: 
// Module Name:    hex_sseg 
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
module hex_sseg(

input [3:0] hex,
input dp,
output reg [7:0] seg
    );

always @(*)
begin
	case({dp,hex})
    5'h0: seg = 8'b00000011;
    5'h1: seg = 8'b10011111;
    5'h2: seg = 8'b00100101;
    5'h3: seg = 8'b00001101;
    5'h4: seg = 8'b10011001;
    5'h5: seg = 8'b01001001;
    5'h6: seg = 8'b01000001;
    5'h7: seg = 8'b00011111;
    5'h8: seg = 8'b00000001;
    5'h9: seg = 8'b00001001;
	 5'ha: seg = 8'b00010001;
	 5'hb: seg = 8'b11000001;
	 5'hc: seg = 8'b01100011;
	 5'hd: seg = 8'b10000101;
	 5'he: seg = 8'b01100001;
	 5'hf: seg = 8'b01110001;
    5'h10: seg = 8'b00000010;
    5'h11: seg = 8'b10011110;
    5'h12: seg = 8'b00100100;
    5'h13: seg = 8'b00001100;
    5'h14: seg = 8'b10011000;
    5'h15: seg = 8'b01001000;
    5'h16: seg = 8'b01000000;
    5'h17: seg = 8'b00011110;
    5'h18: seg = 8'b00000000;
    5'h19: seg = 8'b00001000;
	 5'h1a: seg = 8'b00010000;
	 5'h1b: seg = 8'b11000000;
	 5'h1c: seg = 8'b01100010;
	 5'h1d: seg = 8'b10000100;
	 5'h1e: seg = 8'b01100000;
	 5'h1f: seg = 8'b01110000;	 
    default: seg = 8'b00000010;
	endcase
end

endmodule