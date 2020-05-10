`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:49 05/03/2020 
// Design Name: 
// Module Name:    bit_map_test 
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
module bit_map_test(

input clk_12,
input rst_n,
input btn,
input [2:0] sw,
output hsync, vsync,
output [7:0] rgb
    );
	 
//Clocks
wire clk_80;

//Video
wire [10:0] pixel_x, pixel_y;
wire video_on;
wire [7:0] rgb_bitmap;
	 
	vga_sync vga_sync_0(.clk(clk_80), .rst_n(rst_n), .hsync(hsync), .vsync(vsync), .pixel_x(pixel_x), .pixel_y(pixel_y), .video_on(video_on));
	clock_inst clock_inst_0(.CLKIN_IN(clk_12), .RST_IN(!rst_n), .CLKFX_OUT(clk_80), .CLKIN_IBUFG_OUT(), .CLK0_OUT());
	bitmap_gen bitmap_gen_inst(.clk(clk_80), .rst_n(rst_n), .btn(btn), .sw(sw), .pixel_x(pixel_x), .video_on(video_on), .pixel_y(pixel_y), .rgb(rgb_bitmap));
	
	//assign rgb = {1'b0,rgb_bitmap[2],2'b11,rgb_bitmap[1],2'b11,rgb_bitmap[0]};
	assign rgb = rgb_bitmap;


endmodule
