`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:19:25 11/24/2019
// Design Name:   vga_test
// Module Name:   D:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/vga_test/vga_tb.v
// Project Name:  vga_test
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module vga_tb;

	// Inputs
	reg clk_12;
	reg rst_n;
	reg [7:0] sw;

	// Outputs
	wire hsync;
	wire vsync;
	wire [7:0] rgb;

	// Instantiate the Unit Under Test (UUT)
	vga_test uut (
		.clk_12(clk_12), 
		.rst_n(rst_n), 
		.sw(sw), 
		.hsync(hsync), 
		.vsync(vsync), 
		.rgb(rgb)
	);

	initial begin
		// Initialize Inputs
		clk_12 = 0;
		rst_n = 0;
		sw = 0;
		#10 rst_n = 1;
		#2000;
	end
	
always #1 clk_12 = ~clk_12;	
      
endmodule

