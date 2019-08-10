`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:32:05 07/28/2019 
// Design Name: 
// Module Name:    dual_priority_encoder 
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
module dual_priority_encoder(

input [11:0] req,
input clk, rst,
output [7:0] sseg,
output [2:0] en
    );
	 
	 wire [3:0] first, second;
	 wire [15:0] first_decode;
	 wire [7:0] third_sseg, second_sseg, first_sseg;
	 //reg [14:0] cnt;
	 wire [11:0] req_second;
	 
	 priority_encoder_12_4 p1(.req(req), .out(first));
	 decoder_4bit ins_decoder(.in(first), .out(first_decode), .en(1'b1));
	 priority_encoder_12_4 p2(.req(req_second), .out(second));
	 assign req_second = req & ~(first_decode[11:0]);
	 
	 hex_sseg h0(.hex(first), .seg(first_sseg));
	 hex_sseg h1(.hex(second), .seg(second_sseg));
	 hex_sseg h2(.hex(4'b0), .seg(third_sseg));
	 
	 /*always @(posedge clk or negedge rst)
	 begin
		if(!rst) begin
			cnt <= 15'b0;
		end
		else begin
			cnt <= cnt + 1;
		end
	 end*/
	 
	 disp_mux d1(.clk(clk), .rst(rst), .in0(third_sseg), .in1(second_sseg), .in2(first_sseg), .sseg(sseg), .en(en));


endmodule
