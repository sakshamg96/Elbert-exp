`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:26:24 08/03/2019 
// Design Name: 
// Module Name:    hex_BCD 
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
module hex_BCD(

input [9:0] hex,
output reg [11:0] BCD
    );
	 
integer i;

//binary to bcd decoder
always @(*) begin
	BCD = 12'b0;
	BCD = {BCD[8:0],hex[9:7]};
	for(i=3;i<10;i=i+1) begin
		if(BCD[3:0] > 4'h4) begin
			BCD[3:0] = BCD[3:0] + 4'h3;
		end
		if(BCD[7:4] > 4'h4) begin
			BCD[7:4] = BCD[7:4] + 4'h3;
		end
		if(BCD[11:8] > 4'h4) begin
			BCD[11:8] = BCD[11:8] + 4'h3;
		end
		BCD = {BCD[10:0],hex[9-i]};
	end
end

endmodule
