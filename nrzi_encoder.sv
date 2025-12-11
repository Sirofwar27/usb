`timescale 1ns/1ps

module nrzi_encoder (
    input  logic clk,
    input  logic reset,      // active high synchronous reset
    input  logic bit_in,     // serial data bit (1 bit per clock)
    input  logic bit_valid,  // 1 when bit_in is valid on this clock
    output logic nrzi_out    // NRZI encoded output
);

    // Initial state of NRZI line (idle = 1, can choose 0 if you want)
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            nrzi_out <= 1'b1;     // starting level (e.g., J state equivalent)
        end else if (bit_valid) begin
            // NRZI rule:
            // bit 1 -> no change
            // bit 0 -> toggle
            if (bit_in == 1'b0)
                nrzi_out <= ~nrzi_out;
            else
                nrzi_out <= nrzi_out; // hold
        end
    end

endmodule

