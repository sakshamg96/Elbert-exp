`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:43:50 08/04/2019
// Design Name:   FIFO
// Module Name:   C:/Personal/G Drive/Digtal System Design/Elbert V2/Codes/FIFO/testbench.v
// Project Name:  FIFO
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FIFO
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
	reg [2:0] data;
	reg wr;
	reg rd;

	// Outputs
	wire [2:0] fout;
	wire full;
	wire empty;

	// Instantiate the Unit Under Test (UUT)
	FIFO uut (
		.clk(clk), 
		.rst(rst), 
		.data(data), 
		.wr(wr), 
		.rd(rd), 
		.fout(fout), 
		.full(full), 
		.empty(empty)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		data = 0;
		wr = 0;
		rd = 0;

		// Wait 100 ns for global reset to finish
		#10;
		rst = 1;
      /*data = 3'b101;
		#10;
		wr = 1;
		#10;
		wr = 0;
		rd = 1;
		#10;
		rd = 0;*/
		#10;
		wr = 1;
		data = 3'b001;
		#10 wr = 0;	
		#10;
		wr = 1;
		data = 3'b010;
		#10 wr=0;
		#10;
		wr = 1;
		data = 3'b011;
		#10 wr=0;
		#10;
		wr = 1;
		data = 3'b100;
		#10 wr=0;
		#10;
		rd = 1;
		#50;
		rd = 0;
		#10;
		$finish;
		// Add stimulus here

	end
	
	always
		#5 clk = ~clk;
      
endmodule

