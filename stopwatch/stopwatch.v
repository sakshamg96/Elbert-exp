`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:57 08/03/2019 
// Design Name: 
// Module Name:    stopwatch 
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
module stopwatch(

input clk,
input rst,
input start,
input sync_clr,
input dir,
output [2:0] en,
output [7:0] sseg
    );

localparam START = 3'h0;
localparam wait_before_count = 3'h1;
localparam COUNTING = 3'h2;
localparam wait_before_pause = 3'h3;
localparam PAUSE = 3'h4;

reg [20:0] cnt;
reg [9:0] hex;
wire [11:0] BCD;
wire [3:0] BCD_out;
reg [2:0] state;

always @(posedge clk, negedge rst) begin
	if(!rst) begin
		cnt <= 0;
	end
	else begin
		if(cnt == 21'd1199999) begin
			cnt <= 0;
		end
		else begin
			cnt <= cnt + 1;
		end
	end
end

/*always @(posedge clk, negedge rst) begin
	if(!rst) begin
		hex <= 0;
	end
	else begin

		end
	end
end*/

always @(posedge clk, negedge rst)
begin
	if(!rst) begin
		state <= START;
		hex <= 0;
	end
	else begin
		case(state)
			START: begin
				hex <= 0;
				if(!start) begin
					state <= wait_before_count;
				end
			end
			wait_before_count: begin
				if(start) begin
					state <= COUNTING;
				end
			end
			COUNTING: begin
				if(!start) begin
					state <= wait_before_pause;
				end
				else if(!sync_clr) begin
					state <= START;
				end
				else begin
					if(cnt == 21'd1199999) begin
						if (dir) begin
							if(hex==10'd999) begin
								hex <= 10'd0;
							end
							else begin
								hex <= hex + 10'b1;								
							end
						end
						else begin
							if(hex==10'd0) begin
								hex <= 10'd999;
							end
							else begin
								hex <= hex - 10'b1;
							end
						end
					end
				end
			end
			wait_before_pause: begin
				if(start) begin
					state <= PAUSE;
				end
			end
			PAUSE: begin
				if(!start) begin
					state <= wait_before_count;
				end
				else if(!sync_clr) begin
					state <= START;
				end
			end
		endcase
	end
end

hex_BCD h1(.hex(hex), .BCD(BCD));
disp_mux #(4'h4) d1 (.clk(clk), .rst(rst), .in0(BCD[3:0]), .in1(BCD[7:4]), .in2(BCD[11:8]), .sseg(BCD_out), .en(en));
hex_sseg sseg_decoder_1(.hex(BCD_out), .dp(~en[1]), .seg(sseg));

endmodule
