`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:24:54 08/17/2019 
// Design Name: 
// Module Name:    parking_lot 
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
module parking_lot(

input clk,
input rst_n,
input a, b,
output [7:0] sseg,
output [2:0] en
    );

localparam unblock = 1'b1,
			  block = 1'b0;
localparam entry_1 = 3'h0,
			  entry_2 = 3'h1,
			  entry_3 = 3'h2,
			  exit_1	 = 3'h3,
			  exit_2	 = 3'h4,
			  exit_3	 = 3'h5,
			  idle	 = 3'h6;
			  
wire [3:0] bcd_curr;	
reg [9:0] hex;
wire [11:0] BCD;	
reg inc, dec;	  
			  
reg [2:0] state_reg, state_next;			  

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		state_reg <= idle;
	end
	else begin
		state_reg <= state_next;
	end
end			  
					
always @* begin
	inc = 1'b0;
	dec = 1'b0;
	state_next = state_reg;
	case(state_reg)
		idle: begin
			case({a,b})
				{block,unblock}: begin
					state_next = entry_1;
				end
				{unblock,block}: begin
					state_next = exit_1;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
		entry_1: begin
			case({a,b})
				{block,unblock}: begin
					state_next = entry_1;
				end
				{block,block}: begin
					state_next = entry_2;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
		entry_2: begin
			case({a,b})
				{block,block}: begin
					state_next = entry_2;
				end
				{unblock,block}: begin
					state_next = entry_3;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
		entry_3: begin
			case({a,b})
				{unblock,block}: begin
					state_next = entry_3;
				end
				{unblock,unblock}: begin
					state_next = idle;
					inc = 1'b1;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
		exit_1: begin
			case({a,b})
				{unblock,block}: begin
					state_next = exit_1;
				end
				{block,block}: begin
					state_next = exit_2;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
		exit_2: begin
			case({a,b})
				{block,block}: begin
					state_next = exit_2;
				end
				{block,unblock}: begin
					state_next = exit_3;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
		exit_3: begin
			case({a,b})
				{block,unblock}: begin
					state_next = exit_3;
				end
				{unblock,unblock}: begin
					state_next = idle;
					dec = 1'b1;
				end
				default: begin
					state_next = idle;
				end
			endcase
		end
	endcase
end

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		hex <= 0;
	end
	else begin
		case({inc,dec})
			2'b10: begin
				if (hex!='d999) begin
					hex <= hex + 1;
				end
			end
			2'b01: begin
				if (hex!=0) begin
					hex <= hex - 1;
				end
			end
		endcase
	end
end

hex_BCD h1 (.hex(hex), .BCD(BCD));
disp_mux #(.width(4)) d1 (.clk(clk), .rst(rst_n), .in0(BCD[3:0]), .in1(BCD[7:4]), .in2(BCD[11:8]), .sseg(bcd_curr), .en(en)); 
hex_sseg ins_hex (.hex(bcd_curr), .seg(sseg), .dp(1'b0));

endmodule

