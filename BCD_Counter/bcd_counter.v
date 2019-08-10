`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:54 06/16/2019 
// Design Name: 
// Module Name:    bcd_counter 
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
module bcd_counter(

output reg [7:0] seg,
output reg [2:0] com,
input clk,rst
    );
wire rstp;
assign rstp = !rst;
reg [31:0] cnt;
//reg [3:0] One, Ten, Hundred;

always @(posedge clk or posedge rstp)
begin
	if(rstp)
		cnt <= 0;
	else if(cnt[31:22]==10'd999)
		cnt <= 0;
	else
		cnt <= cnt + 1;
end
integer i;
reg [11:0] BCD;

//binary to bcd decoder
always @(cnt[31:22]) begin
	BCD = 12'b0;
	BCD = {BCD[10:0],cnt[31]};
	for(i=1;i<10;i=i+1) begin
		if(BCD[3:0] > 4'h4) begin
			BCD[3:0] = BCD[3:0] + 4'h3;
		end
		if(BCD[7:4] > 4'h4) begin
			BCD[7:4] = BCD[7:4] + 4'h3;
		end
		if(BCD[11:8] > 4'h4) begin
			BCD[11:8] = BCD[11:8] + 4'h3;
		end
		BCD = {BCD[10:0],cnt[31-i]};
	end
end

/*
always @(posedge cnt[20] or posedge rst)
begin
	if(rst)
		BCD = 0;
	else
	begin
		BCD = BCD + 16'd1;
		if(BCD[3:0]==4'b1010)
			BCD = BCD + 16'h0006;
		if(BCD[7:4]==4'b1010)
			BCD = BCD + 16'h0060;
		if(BCD[11:8]==4'b1010)
			BCD = BCD + 16'h0600;
		if(BCD[15:12]==4'b1010)
			BCD = BCD + 16'h6000;	
	end	
end*/

reg [3:0] sev_seg;
//multiplexing 4 seven segment displays
always @(posedge cnt[14] or posedge rstp)
begin
	if(rstp)
	begin
		com <= 3'b110;
	end
	else
		com <= {com[0],com[2:1]};
end

//assigning appropriate bcd digits
always @(*)
begin
		case(com)
			3'b011 : sev_seg <= BCD[11:8];
			3'b101 : sev_seg <= BCD[7:4];
			3'b110 : sev_seg <= BCD[3:0];
			default : sev_seg <= 4'b0000;
		endcase
end

//7 segment decoder
always @(*)
begin
	case(sev_seg)
    4'h0: seg = 8'b00000011;
    4'h1: seg = 8'b10011111;
    4'h2: seg = 8'b00100101;
    4'h3: seg = 8'b00001101;
    4'h4: seg = 8'b10011001;
    4'h5: seg = 8'b01001001;
    4'h6: seg = 8'b01000001;
    4'h7: seg = 8'b00011111;
    4'h8: seg = 8'b00000001;
    4'h9: seg = 8'b00001001;
	 4'ha: seg = 8'b00010001;
	 4'hb: seg = 8'b11000001;
	 4'hc: seg = 8'b01100011;
	 4'hd: seg = 8'b10000101;
	 4'he: seg = 8'b01100001;
	 4'hf: seg = 8'b01110001;
    default: seg = 8'b00000010;
endcase
end

endmodule
