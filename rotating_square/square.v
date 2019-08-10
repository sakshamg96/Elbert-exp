`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:18:57 08/10/2019 
// Design Name: 
// Module Name:    square 
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
//`define cw 0;
//`define ccw 1;
module square(

input clk,
input rst_n,
input pause,
input dir,
output reg [7:0] sseg,
output reg [2:0] en
    );

parameter cw = 1'b0;
parameter ccw = 1'b1;
parameter N =25;
reg [N-1:0] cnt;
reg u_sq, l_sq;

/*always @(posedge clk, negedge rst) begin
	if(!rst_n) begin
		pause_reg <= 0;
	end
	else begin
		pause_reg <= pause;
	end
end

assign pause_tick = !pause && pause_reg;*/

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		cnt <= 0;
	end
	else begin
		if(cnt[N-1:N-3] == 3'b110) begin
			cnt <= 0;
		end
		else if (pause) begin
			cnt <= cnt + 1;
		end
		//cnt <= cnt + 1;
	end
end

always @(*) begin
	case(cnt[N-1:N-3])
		3'b000,3'b101: begin
			en[2:0] = 110;
		end
		3'b001,3'b100: begin
			en[2:0] = 101;
		end
		3'b010,3'b011: begin
			en[2:0] = 011;
		end
		default: begin
			en[2:0] = 110;
		end
	endcase
end

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		l_sq <= 0;
		u_sq <= 0;
	end
	else begin
	case(dir)
		cw: begin
			if(cnt[N-1:N-3] == 3'b000) begin
				l_sq <= 1'b0;
				u_sq <= 1'b1;
			end
			else if(cnt[N-1:N-3] == 3'b011) begin
				l_sq <= 1'b1;
				u_sq <= 1'b0;
			end
		end
		ccw: begin
			if(cnt[N-1:N-3] == 3'b000) begin
				l_sq <= 1'b1;
				u_sq <= 1'b0;
			end
			else if(cnt[N-1:N-3] == 3'b011) begin
				l_sq <= 1'b0;
				u_sq <= 1'b1;
			end
		end
	endcase
	end
end

always @(*) begin
	case({u_sq,l_sq})
		2'b10: begin
			sseg = 8'b00111001;
		end
		2'b01: begin
			sseg = 8'b11000101;
		end
		default: begin
			sseg = 8'b11000101;
		end
	endcase
end

endmodule
