// `timescale 1ns/1ps

// module nrzi_tb;

//     logic clk;
//     logic reset;
//     logic bit_in;
//     logic bit_valid;
//     logic nrzi_out;
    
//     logic [6:0] data;
//     integer i;
//     // Instantiate DUT
//     nrzi_encoder dut (
//         .clk      (clk),
//         .reset    (reset),
//         .bit_in   (bit_in),
//         .bit_valid(bit_valid),
//         .nrzi_out (nrzi_out)
//     );

//     // Clock generator: 10 ns period
//     initial clk = 0;
//     always #5 clk = ~clk;

//     // Drive stimulus
//     initial begin
//         // Initial values
//         reset     = 1;
//         bit_in    = 0;
//         bit_valid = 0;
//         data = 7'b1101001;
//         i=0;
//     end
//      initial begin
//         // Wait a few cycles in reset
//         repeat (2) @(posedge clk);
//         reset = 0;

       

//         $display(" time   bit_in  nrzi_out");

//         for (i = 6; i >= 0; i--) begin
//             @(posedge clk);
//             bit_in    = data[i];
//             bit_valid = 1'b1;

//             // Wait for encoder update (same clock edge)
//             @(negedge clk);
//             $display("%4t     %0b       %0b", $time, bit_in, nrzi_out);
//         end

//         // stop driving valid
//         @(posedge clk);
//         bit_valid = 0;

//         // finish
//         @(posedge clk);
//         $finish;
//     end

// endmodule
`timescale 1ns/1ps

module nrzi_decode_tb;

    logic clk;
    logic reset;
    logic bit_in;
    logic bit_valid;
    logic nrzi_out;
    logic decoded_bit;

    // Bit pattern: 1 1 0 1 0 0 1
    logic [6:0] data;
    integer i;

    // Instantiate encoder
    nrzi_encoder enc (
        .clk       (clk),
        .reset     (reset),
        .bit_in    (bit_in),
        .bit_valid (bit_valid),
        .nrzi_out  (nrzi_out)
    );

    // Instantiate decoder
    nrzi_decoder dec (
        .clk       (clk),
        .reset     (reset),
        .nrzi_in   (nrzi_out),
        .bit_valid (bit_valid),
        .bit_out   (decoded_bit)
    );

    // Clock: 10 ns
    initial clk = 0;
    always #5 clk = ~clk;

    initial begin
        reset     = 1;
        bit_in    = 0;
        bit_valid = 0;
        data      = 7'b1101001;
        i         = 0;

        repeat (3) @(posedge clk);
        reset = 0;

        $display(" time | bit_in | NRZI | decoded_bit ");

        for (i = 6; i >= 0; i = i - 1) begin
            @(posedge clk);
            bit_in    = data[i];
            bit_valid = 1'b1;

            @(negedge clk);
            $display("%4t |   %0b    |  %0b   |      %0b",
                     $time, bit_in, nrzi_out, decoded_bit);
        end

        @(posedge clk);
        bit_valid = 0;

        @(posedge clk);
        $finish;
    end

endmodule
