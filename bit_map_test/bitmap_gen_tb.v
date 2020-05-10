`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:33:22 05/10/2020
// Design Name:   bitmap_gen
// Module Name:   D:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/bit_map_test/bitmap_gen_tb.v
// Project Name:  bit_map_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bitmap_gen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bitmap_gen_tb;

	// Inputs
	reg clk;
	reg rst_n;
	reg btn;
	reg [2:0] sw;
	reg video_on;
	reg [10:0] pixel_x;
	reg [10:0] pixel_y;

	// Outputs
	wire [7:0] rgb;

	// Instantiate the Unit Under Test (UUT)
	bitmap_gen uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.btn(btn), 
		.sw(sw), 
		.video_on(video_on), 
		.pixel_x(pixel_x), 
		.pixel_y(pixel_y), 
		.rgb(rgb)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		btn = 0;
		sw = 0;
		video_on = 0;
		pixel_x = 0;
		pixel_y = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

