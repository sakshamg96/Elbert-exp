`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:53 11/24/2019 
// Design Name: 
// Module Name:    vga_test 
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
module vga_test(

input clk_12, rst_n,
input [7:0] sw,
output hsync, vsync,
output [7:0] rgb
    );
	 
	 reg [7:0] rgb_reg;
	 wire video_on;
	 
vga_sync vga_sync_0(.clk(clk), .rst_n(rst_n), .hsync(hsync), .vsync(vsync), .video_on(video_on));
clock_inst clock_inst_0(.CLKIN_IN(clk_12), .RST_IN(!rst_n), .CLKFX_OUT(clk), .CLKIN_IBUFG_OUT(), .CLK0_OUT());

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		rgb_reg <= 'b0;
	end
	else begin
		if(video_on) begin
			rgb_reg <= sw;
		end
	end
end

assign rgb = rgb_reg;	 

endmodule
