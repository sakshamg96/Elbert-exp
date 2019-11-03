`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:24:06 08/25/2019
// Design Name:   BCD2bin
// Module Name:   C:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/BCD2bin/testbench.v
// Project Name:  BCD2bin
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: BCD2bin
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg clk;
	reg rst_n;
	reg [7:0] BCD;

	// Outputs
	wire [6:0] bin;

	// Instantiate the Unit Under Test (UUT)
	BCD2bin uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.BCD(BCD), 
		.bin(bin)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		BCD = 0;

		// Wait 100 ns for global reset to finish
		#1;
		rst_n = 1;
		BCD = 'b01000010;
		#100;
		BCD = 'b00010011;
		#100;
		$finish;
		// Add stimulus here

	end
	
	always
		#5 clk = ~clk;
      
endmodule

