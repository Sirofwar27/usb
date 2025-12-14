`timescale 1ns/1ps

module nrzi_decoder (
    input  logic clk,
    input  logic reset,
    input  logic nrzi_in,      // incoming NRZI signal
    input  logic bit_valid,    // 1 when new bit is present
    output logic bit_out       // decoded data bit (0/1)
);

    logic prev_nrzi;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            prev_nrzi <= 1'b1;   // starting reference level (same as encoder)
            bit_out   <= 1'b0;
        end
        else if (bit_valid) begin
            // NRZI RULE (DECODE):
            // if no change  -> bit = 1
            // if toggle     -> bit = 0
            if (nrzi_in == prev_nrzi)
                bit_out <= 1'b1;    // no transition → data = 1
            else
                bit_out <= 1'b0;    // transition → data = 0

            prev_nrzi <= nrzi_in;   // update reference
        end
    end

endmodule
