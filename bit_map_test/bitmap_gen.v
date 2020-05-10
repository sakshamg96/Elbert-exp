`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:50:03 05/03/2020 
// Design Name: 
// Module Name:    bitmap_gen 
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
module bitmap_gen
#(
	parameter MAP_SIZE_X = 7,
	parameter MAP_SIZE_Y = 7
)
(

input clk,
input rst_n,
input btn,
input [2:0] sw,
input video_on,
input [10:0] pixel_x,
input [10:0] pixel_y,
output [7:0] rgb
    );

wire refr_tick;
wire btn_tick;
reg btn_reg;
wire bitmap_on;
//RAM signals
wire we;
wire [MAP_SIZE_X+MAP_SIZE_Y-1:0] read_addr, write_addr;
wire [2:0] read_data;

//DOT signals
wire [MAP_SIZE_X-1:0] dot_x_next;
wire [MAP_SIZE_Y-1:0] dot_y_next;
reg [MAP_SIZE_X-1:0] dot_x_reg;
reg [MAP_SIZE_Y-1:0] dot_y_reg;

wire [6:0] vel_x_next, vel_y_next;
reg [6:0] vel_x_reg, vel_y_reg;

localparam DOT_V_P = 1;
localparam DOT_V_N = -1;
localparam MAX_X = 2**MAP_SIZE_X;
localparam MAX_Y = 2**MAP_SIZE_Y;

assign read_addr = {pixel_y[MAP_SIZE_Y-1:0], pixel_x[MAP_SIZE_X-1:0]};
assign write_addr = {dot_y_reg[6:0],dot_x_reg[6:0]};
assign we = 'b1;

assign bitmap_on = (pixel_x < 2**MAP_SIZE_X) && (pixel_y < 2**MAP_SIZE_Y);

dual_port_ram_sync #(.ADDR_WIDTH(14), .DATA_WIDTH(3)) ram_0(.clk(clk), .we(we), .addr_a(write_addr), .addr_b(read_addr), .din_a(sw), .dout_b(read_data));

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		btn_reg <= 'b0;
	end
	else begin
		btn_reg <= btn;
	end
end

assign btn_tick = btn & ~btn_reg;

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		dot_x_reg <= 50;
		dot_y_reg <= 100;
		vel_x_reg <= DOT_V_N;
		vel_y_reg <= DOT_V_P;
	end
	else begin
		dot_x_reg <= dot_x_next;
		dot_y_reg <= dot_y_next;
		vel_x_reg <= vel_x_next;
		vel_y_reg <= vel_y_next;
	end
end

assign dot_x_next = btn_tick ? pixel_x[MAP_SIZE_X-1:0] : (refr_tick ? dot_x_reg + vel_x_reg : dot_x_reg);
assign dot_y_next = btn_tick ? pixel_y[MAP_SIZE_Y-1:0] : (refr_tick ? dot_y_reg + vel_y_reg : dot_y_reg);

assign vel_x_next = (dot_x_reg >= (MAX_X-2)) ? DOT_V_N : ( dot_x_reg <= 1 ? DOT_V_P : vel_x_reg);
assign vel_y_next = (dot_y_reg >= (MAX_Y-2)) ? DOT_V_N : ( dot_y_reg <= 1 ? DOT_V_P : vel_y_reg);

assign refr_tick = (pixel_y == 601) && (pixel_x == 0);

//assign rgb = (bitmap_on && video_on) ? ((pixel_x[MAP_SIZE_X-1:0] == dot_x_reg && pixel_y[MAP_SIZE_Y-1:0] == dot_y_reg) ? read_data : 'h3f) : 'b0;
assign rgb = video_on ? (bitmap_on ? {{2{read_data[2]}},{3{read_data[1]}},{3{read_data[0]}}} : 8'h3f) : 8'b0;
//assign rgb = (bitmap_on && video_on) ?  3'b011 : 3'b0;

endmodule
