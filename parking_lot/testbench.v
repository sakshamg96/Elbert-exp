`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:31 08/18/2019
// Design Name:   parking_lot
// Module Name:   C:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/parking_lot/testbench.v
// Project Name:  parking_lot
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parking_lot
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
	reg a;
	reg b;

	// Outputs
	wire [7:0] sseg;
	wire [2:0] en;

	// Instantiate the Unit Under Test (UUT)
	parking_lot uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.a(a), 
		.b(b), 
		.sseg(sseg), 
		.en(en)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		a = 1;
		b = 1;
		// Wait 100 ns for global reset to finish
		#5;
      rst_n = 1;
		#5;
		a = 0;
		#10;
		b = 0;
		#10;
		a = 1;
		#10;
		b = 1;
		#20;
		$finish;	
		// Add stimulus here
	end
	
	always
		#5 clk = ~clk;
      
endmodule

