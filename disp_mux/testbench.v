`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:35:33 07/28/2019
// Design Name:   disp_mux
// Module Name:   C:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/disp_mux/testbench.v
// Project Name:  disp_mux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: disp_mux
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
	reg rst;
	reg [7:0] in0;
	reg [7:0] in1;
	reg [7:0] in2;

	// Outputs
	wire [7:0] sseg;
	wire [2:0] en;

	// Instantiate the Unit Under Test (UUT)
	disp_mux uut (
		.clk(clk), 
		.rst(rst), 
		.in0(in0), 
		.in1(in1), 
		.in2(in2), 
		.sseg(sseg), 
		.en(en)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		in0 = 0;
		in1 = 0;
		in2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 1;
        
		// Add stimulus here

	end
	always
		#5 clk = ~clk;
      
endmodule

