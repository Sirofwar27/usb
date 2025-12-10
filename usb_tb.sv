`timescale 1ns/1ps

module usb_tb;

    // Declarations without initialization
    logic       clk;
    logic       reset;
    logic [3:0] count;

    // Initialize once in an initial block
    initial begin
        clk   = 0;
        reset = 1;
        count = 0;
    end

    // "DUT" logic inside the testbench
    always_ff @(posedge clk or posedge reset) begin
        if (reset)
            count <= 0;
        else
            count <= count + 1;
    end

    // Clock generator: 10 ns period
    always #5 clk = ~clk;

    initial begin
        $display(" time   clk reset count");

        // Hold reset high for 3 cycles
        repeat (3) @(posedge clk);

        reset = 0; // release reset

        // Run 10 cycles
        repeat (10) begin
            @(posedge clk);
            $display("%4t    %0d     %0d     %0d", $time, clk, reset, count);
        end

        $finish;
    end

endmodule

