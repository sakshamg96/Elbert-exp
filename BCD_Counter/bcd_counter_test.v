`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:39:01 07/24/2019
// Design Name:   bcd_counter
// Module Name:   C:/Users/Saksham/Desktop/Elbert V2/Codes/BCD_Counter/bcd_counter_test.v
// Project Name:  BCD_Counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bcd_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module bcd_counter_test;

	// Inputs
	reg clk;
	reg rst;

	// Outputs
	wire [7:0] seg;
	wire [2:0] com;

	// Instantiate the Unit Under Test (UUT)
	bcd_counter uut (
		.seg(seg), 
		.com(com), 
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#1;
		rst = 1;
        
		// Add stimulus here

	end
	always
		#5 clk <= ~clk;
      
endmodule

