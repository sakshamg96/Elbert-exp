`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:03:05 07/27/2019 
// Design Name: 
// Module Name:    disp_mux 
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
module disp_mux
#(
	parameter width=4'h8
)
(

input clk,
input rst,
input [width-1:0] in0, in1, in2,
output reg [width-1:0] sseg,
output reg [2:0] en
    );
	 localparam N=17;
	 reg [N-1:0] cnt;
	 
	 /*always @(posedge clk or negedge rst)
	 begin
		if(!rst) begin
			en <= 3'b110;
		end
		else begin
			en <= {en[1:0],en[2]};
		end
	 end*/
	 
	 /*always @*
	 begin
		case(en)
			3'b110: begin
				sseg = in0;
			end
			3'b101: begin
				sseg = in1;
			end
			3'b011: begin
				sseg = in2;
			end
			default: begin
				sseg = in0;
			end
		endcase
	 end*/
	 
	 always @*
	 begin
		case(cnt[N-1:N-2])
			3'b00: begin
				sseg = in0;
				en = 3'b110;
			end
			3'b01: begin
				sseg = in1;
				en = 3'b101;
			end
			3'b10: begin
				sseg = in2;
				en = 3'b011;
			end
			default: begin
				sseg = in0;
				en = 3'b110;
			end
		endcase
	 end
	 
	 always @(posedge clk, negedge rst)
	 begin
		if(!rst) begin
			cnt <= 'b0;
		end
		else begin
		//cnt <= cnt + 1;
			if(cnt[N-1:N-2]==2'b11) begin
				cnt <= 'b0;
			end
			else begin
				cnt <= cnt + 1;
			end
		end
	 end

endmodule
