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
     // Create the VCD file
      $dumpfile("nrzi_decode_tb.vcd");
      $dumpvars(0, nrzi_decode_tb);
      reset = 1;
      data = 7'b1101001;
    //   #5 reset = 0;
      repeat (2) @(posedge clk);
     reset = 0;
      // Simulate for a while to generate waveform
      #100000 $finish;  //

    end

    initial begin
        // reset     = 1;
        // bit_in    = 0;
        // bit_valid = 0;
        // data      = 7'b1101001;
        // i         = 0;

        // repeat (3) @(posedge clk);
        // reset = 0;
        // #5;
        $display(" time | bit_in | NRZI | decoded_bit ");
            bit_valid=1'b1;
        for (i = 6; i >= 0; i = i - 1) begin
            // @(posedge clk);
            bit_in    = data[i];
            // bit_valid = 1'b1;

            // @(negedge clk);
             @(posedge clk);
            $display("%4t |   %0b    |  %0b   |      %0b",
                     $time, bit_in, nrzi_out, decoded_bit);
        end

        // @(posedge clk);
        bit_valid = 0;

       repeat(2) @(posedge clk);
        $finish;
    end

endmodule
