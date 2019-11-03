`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:54:35 08/25/2019 
// Design Name: 
// Module Name:    BCD2bin 
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
module BCD2bin(

input clk,
input rst_n,
input [7:0] BCD,
output [6:0] bin
    );

parameter nshift = 8;

reg [7:0] BCD_reg, BCD_prev, BCD_next;
wire start;
reg [6:0] bin_reg, bin_next;
reg [2:0] shift_count, shift_count_reg;
//reg done;

localparam idle = 1'b0,
			  compute = 1'b1;
reg state_reg, state_next;			  

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		BCD_prev <= 0;
	end
	else begin
		BCD_prev <= BCD;
	end
end

assign start = (BCD != BCD_prev);

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		state_reg <= idle;
		shift_count_reg <= 0;
		BCD_reg <= 0;
		bin_reg <= 0;
	end
	else begin
		state_reg <= state_next;
		shift_count_reg <= shift_count;
		BCD_reg <= BCD_next;
		bin_reg <= bin_next;
	end
end

always @* begin
	state_next = state_reg;
	//done = 'b0;
	shift_count = shift_count_reg;
	bin_next = bin_reg;
	BCD_next = BCD_reg;
	case(state_reg)
		idle: begin
			if(start) begin
				state_next = compute;
				shift_count = 0;
				bin_next = 0;
				BCD_next = BCD;
			end
		end
		compute: begin
			bin_next = {BCD_reg[0],bin_reg[6:1]};
			BCD_next[6:0] = BCD_reg[7:1];
			if(BCD_next[3:0] > 'h4) begin
				BCD_next[3:0] = BCD_next[3:0] - 4'h3;
			end
			shift_count = shift_count_reg + 1;
			if(shift_count == (nshift-1)) begin
				state_next = idle;
				//done = 1'b1;
			end	
		end
	endcase
end

//assign bin = (done=='b1) ? bin_next : bin;
assign bin = bin_reg;

endmodule
