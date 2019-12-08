`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:08 11/23/2019 
// Design Name: 
// Module Name:    vga_sync 
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
module vga_sync(
input clk,
input rst_n,
output [10:0] pixel_x, pixel_y,
output hsync, vsync, video_on
    );

//--parameters for display area --//
/*
// -- 1280x720 resolution -- //
localparam HD = 1280;
localparam HF = 110;
localparam HB = 220;
localparam HR = 40;
localparam VD = 720;
localparam VF = 5;
localparam VB = 20;
localparam VR = 5;
*/

// -- 800x600 resolution -- //

localparam HD = 800;
localparam HF = 40;
localparam HB = 88;
localparam HR = 128;
localparam VD = 600;
localparam VF = 1;
localparam VB = 23;
localparam VR = 4;


// -- 640x480 resolution -- //
/*
localparam HD = 640;
localparam HF = 48;
localparam HB = 16;
localparam HR = 96;
localparam VD = 480;
localparam VF = 10;
localparam VB = 33;
localparam VR = 2;
*/

reg [10:0] h_counter, v_counter;
wire h_end, v_end;
reg vsync_reg, hsync_reg;
wire hsync_next, vsync_next;
wire vvideo_on, hvideo_on, video_on_next;
reg video_on_reg;
wire mod2_next, pixel_tick;
reg mod2_reg;

always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		mod2_reg <= 'b0;
	end
	else begin
		mod2_reg <= mod2_next;
	end
end

assign mod2_next = ~mod2_reg;
assign pixel_tick = mod2_reg;

assign h_end = h_counter==(HF+HD+HR+HB-1);
always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		h_counter <= 0;
	end
	else begin
		if(pixel_tick) begin
			if(h_end) begin
				h_counter <= 'b0;
			end	
			else begin	
				h_counter <= h_counter + 'b1;
			end
		end
	end
end

assign v_end = v_counter==(VF+VD+VR+VB-1);
always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		v_counter <= 0;
	end
	else begin
		if(pixel_tick) begin
			if(h_end) begin
				if(v_end) begin
					v_counter <= 'b0;
				end
				else begin
					v_counter <= v_counter + 'b1;
				end
			end
		end
	end
end

//assign hsync_next = (h_counter < HF+HD) || (h_counter < HF+HD+HR+HB && h_counter >= HF+HD+HR);
assign hsync_next = ~((h_counter >= (HD+HB)) & (h_counter <= (HD+HB+HR-1)));
//assign vsync_next = (v_counter < VF+VD) || (v_counter < VF+VD+VR+VB && v_counter >= VF+VD+VR);
assign vsync_next = ~((v_counter >= (VD+VB)) & (v_counter <= (VD+VB+VR-1)));
always @(posedge clk, negedge rst_n) begin
	if(!rst_n) begin
		hsync_reg <= 'b0;
		vsync_reg <= 'b0;
		video_on_reg <= 'b0;
	end
	else begin
		hsync_reg <= hsync_next;
		vsync_reg <= vsync_next;
		video_on_reg <= video_on_next;
	end
end


assign hsync = hsync_reg;
assign vsync = vsync_reg;
assign pixel_x = h_counter;
assign pixel_y = v_counter;
assign hvideo_on = h_counter < HD;
assign vvideo_on = v_counter < VD;
assign video_on_next = hvideo_on & vvideo_on;
assign video_on = video_on_reg;

endmodule
