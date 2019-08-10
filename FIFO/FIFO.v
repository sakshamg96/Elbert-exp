`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:58:35 08/04/2019 
// Design Name: 
// Module Name:    FIFO 
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
module FIFO
#(
	parameter width = 3,
	parameter depth = 2
)
(

input clk,
input rst,
input [width-1:0] data,
input wr, rd,
output reg [width-1:0] fout,
output reg full, empty
    );
	 
	 reg [width-1:0] mem [(2**depth)-1:0];
	 reg [depth-1:0] rd_pointer, wr_pointer; 
	 
	 always @(posedge clk, negedge rst) begin
		if(!rst) begin
			fout <= 0;
		end
		else begin
			if(rd && !empty) begin
				fout <= mem[rd_pointer];
			end
		end
	 end
	 
	 always @(posedge clk, negedge rst) begin
		if(!rst) begin
			//mem <= 0;
		end
		else begin
			if(wr && !full) begin
				mem[wr_pointer] <= data;
			end
		end
	 end

	 always @(posedge clk, negedge rst) begin
		if(!rst) begin
			wr_pointer <= 0;
		end
		else begin
			if(wr && !full) begin
				wr_pointer <= wr_pointer + 1;
			end
		end
	 end	 

	 always @(posedge clk, negedge rst) begin
		if(!rst) begin
			rd_pointer <= 0;
		end
		else begin
			if(rd && !empty) begin
				rd_pointer <= rd_pointer + 1;
			end
		end
	 end

	//assign full = (wr_pointer == rd_pointer - 1)	&& wr;
	//assign empty = (rd_pointer == wr_pointer - 1) && rd;
	
	always @(posedge clk, negedge rst)
	begin
		if(!rst) begin
			full <= 0;
		end
		else begin
			if((wr_pointer == rd_pointer - 2'b1) && wr) begin
				full <= 1;
			end
			else if(wr_pointer == rd_pointer && rd && full) begin
				full <= 0;
			end
		end
	end
	
	always @(posedge clk, negedge rst)
	begin
		if(!rst) begin
			empty <= 1;
		end
		else begin
			if((wr_pointer == rd_pointer) && wr && empty) begin
				empty <= 0;
			end
			else if((rd_pointer == wr_pointer - 2'b1) && rd) begin
				empty <= 1;
			end			
		end
	end

endmodule
