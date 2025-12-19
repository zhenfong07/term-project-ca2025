module Memory(
  input         clock,
  input  [31:0] io_bundle_address, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input  [31:0] io_bundle_write_data, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input         io_bundle_write_enable, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input         io_bundle_write_strobe_0, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input         io_bundle_write_strobe_1, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input         io_bundle_write_strobe_2, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input         io_bundle_write_strobe_3, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  output [31:0] io_bundle_read_data, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  output [31:0] io_instruction, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  input  [31:0] io_debug_read_address, // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
  output [31:0] io_debug_read_data // @[4-soc/src/main/scala/peripheral/Memory.scala 60:14]
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_21;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] mem_0 [0:8191]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_0_io_bundle_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_0_io_bundle_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_0_io_bundle_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_0_io_debug_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_0_io_debug_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_0_io_debug_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_0_io_instruction_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_0_io_instruction_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_0_io_instruction_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_0_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_0_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_0_MPORT_mask; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_0_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  reg  mem_0_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_0_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_0_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_0_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_0_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_0_io_instruction_MPORT_addr_pipe_0;
  reg [7:0] mem_1 [0:8191]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_1_io_bundle_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_1_io_bundle_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_1_io_bundle_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_1_io_debug_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_1_io_debug_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_1_io_debug_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_1_io_instruction_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_1_io_instruction_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_1_io_instruction_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_1_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_1_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_1_MPORT_mask; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_1_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  reg  mem_1_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_1_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_1_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_1_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_1_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_1_io_instruction_MPORT_addr_pipe_0;
  reg [7:0] mem_2 [0:8191]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_2_io_bundle_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_2_io_bundle_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_2_io_bundle_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_2_io_debug_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_2_io_debug_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_2_io_debug_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_2_io_instruction_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_2_io_instruction_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_2_io_instruction_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_2_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_2_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_2_MPORT_mask; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_2_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  reg  mem_2_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_2_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_2_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_2_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_2_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_2_io_instruction_MPORT_addr_pipe_0;
  reg [7:0] mem_3 [0:8191]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_3_io_bundle_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_3_io_bundle_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_3_io_bundle_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_3_io_debug_read_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_3_io_debug_read_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_3_io_debug_read_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_3_io_instruction_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_3_io_instruction_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_3_io_instruction_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [7:0] mem_3_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire [12:0] mem_3_MPORT_addr; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_3_MPORT_mask; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  wire  mem_3_MPORT_en; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  reg  mem_3_io_bundle_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_3_io_bundle_read_data_MPORT_addr_pipe_0;
  reg  mem_3_io_debug_read_data_MPORT_en_pipe_0;
  reg [12:0] mem_3_io_debug_read_data_MPORT_addr_pipe_0;
  reg  mem_3_io_instruction_MPORT_en_pipe_0;
  reg [12:0] mem_3_io_instruction_MPORT_addr_pipe_0;
  wire [31:0] _T = {{2'd0}, io_bundle_address[31:2]}; // @[4-soc/src/main/scala/peripheral/Memory.scala 77:34]
  wire [15:0] io_bundle_read_data_lo = {mem_1_io_bundle_read_data_MPORT_data,mem_0_io_bundle_read_data_MPORT_data}; // @[4-soc/src/main/scala/peripheral/Memory.scala 80:78]
  wire [15:0] io_bundle_read_data_hi = {mem_3_io_bundle_read_data_MPORT_data,mem_2_io_bundle_read_data_MPORT_data}; // @[4-soc/src/main/scala/peripheral/Memory.scala 80:78]
  wire [31:0] _io_debug_read_data_T = {{2'd0}, io_debug_read_address[31:2]}; // @[4-soc/src/main/scala/peripheral/Memory.scala 81:58]
  wire [15:0] io_debug_read_data_lo = {mem_1_io_debug_read_data_MPORT_data,mem_0_io_debug_read_data_MPORT_data}; // @[4-soc/src/main/scala/peripheral/Memory.scala 81:82]
  wire [15:0] io_debug_read_data_hi = {mem_3_io_debug_read_data_MPORT_data,mem_2_io_debug_read_data_MPORT_data}; // @[4-soc/src/main/scala/peripheral/Memory.scala 81:82]
  wire [31:0] _io_instruction_T = {{2'd0}, io_instruction_address[31:2]}; // @[4-soc/src/main/scala/peripheral/Memory.scala 82:59]
  wire [15:0] io_instruction_lo = {mem_1_io_instruction_MPORT_data,mem_0_io_instruction_MPORT_data}; // @[4-soc/src/main/scala/peripheral/Memory.scala 82:83]
  wire [15:0] io_instruction_hi = {mem_3_io_instruction_MPORT_data,mem_2_io_instruction_MPORT_data}; // @[4-soc/src/main/scala/peripheral/Memory.scala 82:83]
  assign mem_0_io_bundle_read_data_MPORT_en = mem_0_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_0_io_bundle_read_data_MPORT_addr = mem_0_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_0_io_bundle_read_data_MPORT_data = mem_0[mem_0_io_bundle_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_0_io_debug_read_data_MPORT_en = mem_0_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_0_io_debug_read_data_MPORT_addr = mem_0_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_0_io_debug_read_data_MPORT_data = mem_0[mem_0_io_debug_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_0_io_instruction_MPORT_en = mem_0_io_instruction_MPORT_en_pipe_0;
  assign mem_0_io_instruction_MPORT_addr = mem_0_io_instruction_MPORT_addr_pipe_0;
  assign mem_0_io_instruction_MPORT_data = mem_0[mem_0_io_instruction_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_0_MPORT_data = io_bundle_write_data[7:0];
  assign mem_0_MPORT_addr = _T[12:0];
  assign mem_0_MPORT_mask = io_bundle_write_strobe_0;
  assign mem_0_MPORT_en = io_bundle_write_enable;
  assign mem_1_io_bundle_read_data_MPORT_en = mem_1_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_1_io_bundle_read_data_MPORT_addr = mem_1_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_1_io_bundle_read_data_MPORT_data = mem_1[mem_1_io_bundle_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_1_io_debug_read_data_MPORT_en = mem_1_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_1_io_debug_read_data_MPORT_addr = mem_1_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_1_io_debug_read_data_MPORT_data = mem_1[mem_1_io_debug_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_1_io_instruction_MPORT_en = mem_1_io_instruction_MPORT_en_pipe_0;
  assign mem_1_io_instruction_MPORT_addr = mem_1_io_instruction_MPORT_addr_pipe_0;
  assign mem_1_io_instruction_MPORT_data = mem_1[mem_1_io_instruction_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_1_MPORT_data = io_bundle_write_data[15:8];
  assign mem_1_MPORT_addr = _T[12:0];
  assign mem_1_MPORT_mask = io_bundle_write_strobe_1;
  assign mem_1_MPORT_en = io_bundle_write_enable;
  assign mem_2_io_bundle_read_data_MPORT_en = mem_2_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_2_io_bundle_read_data_MPORT_addr = mem_2_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_2_io_bundle_read_data_MPORT_data = mem_2[mem_2_io_bundle_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_2_io_debug_read_data_MPORT_en = mem_2_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_2_io_debug_read_data_MPORT_addr = mem_2_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_2_io_debug_read_data_MPORT_data = mem_2[mem_2_io_debug_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_2_io_instruction_MPORT_en = mem_2_io_instruction_MPORT_en_pipe_0;
  assign mem_2_io_instruction_MPORT_addr = mem_2_io_instruction_MPORT_addr_pipe_0;
  assign mem_2_io_instruction_MPORT_data = mem_2[mem_2_io_instruction_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_2_MPORT_data = io_bundle_write_data[23:16];
  assign mem_2_MPORT_addr = _T[12:0];
  assign mem_2_MPORT_mask = io_bundle_write_strobe_2;
  assign mem_2_MPORT_en = io_bundle_write_enable;
  assign mem_3_io_bundle_read_data_MPORT_en = mem_3_io_bundle_read_data_MPORT_en_pipe_0;
  assign mem_3_io_bundle_read_data_MPORT_addr = mem_3_io_bundle_read_data_MPORT_addr_pipe_0;
  assign mem_3_io_bundle_read_data_MPORT_data = mem_3[mem_3_io_bundle_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_3_io_debug_read_data_MPORT_en = mem_3_io_debug_read_data_MPORT_en_pipe_0;
  assign mem_3_io_debug_read_data_MPORT_addr = mem_3_io_debug_read_data_MPORT_addr_pipe_0;
  assign mem_3_io_debug_read_data_MPORT_data = mem_3[mem_3_io_debug_read_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_3_io_instruction_MPORT_en = mem_3_io_instruction_MPORT_en_pipe_0;
  assign mem_3_io_instruction_MPORT_addr = mem_3_io_instruction_MPORT_addr_pipe_0;
  assign mem_3_io_instruction_MPORT_data = mem_3[mem_3_io_instruction_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
  assign mem_3_MPORT_data = io_bundle_write_data[31:24];
  assign mem_3_MPORT_addr = _T[12:0];
  assign mem_3_MPORT_mask = io_bundle_write_strobe_3;
  assign mem_3_MPORT_en = io_bundle_write_enable;
  assign io_bundle_read_data = {io_bundle_read_data_hi,io_bundle_read_data_lo}; // @[4-soc/src/main/scala/peripheral/Memory.scala 80:78]
  assign io_instruction = {io_instruction_hi,io_instruction_lo}; // @[4-soc/src/main/scala/peripheral/Memory.scala 82:83]
  assign io_debug_read_data = {io_debug_read_data_hi,io_debug_read_data_lo}; // @[4-soc/src/main/scala/peripheral/Memory.scala 81:82]
  always @(posedge clock) begin
    if (mem_0_MPORT_en & mem_0_MPORT_mask) begin
      mem_0[mem_0_MPORT_addr] <= mem_0_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
    end
    mem_0_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_0_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_0_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_0_io_debug_read_data_MPORT_addr_pipe_0 <= _io_debug_read_data_T[12:0];
    end
    mem_0_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_0_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
    if (mem_1_MPORT_en & mem_1_MPORT_mask) begin
      mem_1[mem_1_MPORT_addr] <= mem_1_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
    end
    mem_1_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_1_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_1_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_1_io_debug_read_data_MPORT_addr_pipe_0 <= _io_debug_read_data_T[12:0];
    end
    mem_1_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_1_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
    if (mem_2_MPORT_en & mem_2_MPORT_mask) begin
      mem_2[mem_2_MPORT_addr] <= mem_2_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
    end
    mem_2_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_2_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_2_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_2_io_debug_read_data_MPORT_addr_pipe_0 <= _io_debug_read_data_T[12:0];
    end
    mem_2_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_2_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
    if (mem_3_MPORT_en & mem_3_MPORT_mask) begin
      mem_3[mem_3_MPORT_addr] <= mem_3_MPORT_data; // @[4-soc/src/main/scala/peripheral/Memory.scala 70:24]
    end
    mem_3_io_bundle_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_3_io_bundle_read_data_MPORT_addr_pipe_0 <= _T[12:0];
    end
    mem_3_io_debug_read_data_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_3_io_debug_read_data_MPORT_addr_pipe_0 <= _io_debug_read_data_T[12:0];
    end
    mem_3_io_instruction_MPORT_en_pipe_0 <= 1'h1;
    if (1'h1) begin
      mem_3_io_instruction_MPORT_addr_pipe_0 <= _io_instruction_T[12:0];
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_0[initvar] = _RAND_0[7:0];
  _RAND_7 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_1[initvar] = _RAND_7[7:0];
  _RAND_14 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_2[initvar] = _RAND_14[7:0];
  _RAND_21 = {1{`RANDOM}};
  for (initvar = 0; initvar < 8192; initvar = initvar+1)
    mem_3[initvar] = _RAND_21[7:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  mem_0_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mem_0_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_2[12:0];
  _RAND_3 = {1{`RANDOM}};
  mem_0_io_debug_read_data_MPORT_en_pipe_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  mem_0_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_4[12:0];
  _RAND_5 = {1{`RANDOM}};
  mem_0_io_instruction_MPORT_en_pipe_0 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  mem_0_io_instruction_MPORT_addr_pipe_0 = _RAND_6[12:0];
  _RAND_8 = {1{`RANDOM}};
  mem_1_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  mem_1_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_9[12:0];
  _RAND_10 = {1{`RANDOM}};
  mem_1_io_debug_read_data_MPORT_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  mem_1_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_11[12:0];
  _RAND_12 = {1{`RANDOM}};
  mem_1_io_instruction_MPORT_en_pipe_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  mem_1_io_instruction_MPORT_addr_pipe_0 = _RAND_13[12:0];
  _RAND_15 = {1{`RANDOM}};
  mem_2_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  mem_2_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_16[12:0];
  _RAND_17 = {1{`RANDOM}};
  mem_2_io_debug_read_data_MPORT_en_pipe_0 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  mem_2_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_18[12:0];
  _RAND_19 = {1{`RANDOM}};
  mem_2_io_instruction_MPORT_en_pipe_0 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  mem_2_io_instruction_MPORT_addr_pipe_0 = _RAND_20[12:0];
  _RAND_22 = {1{`RANDOM}};
  mem_3_io_bundle_read_data_MPORT_en_pipe_0 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  mem_3_io_bundle_read_data_MPORT_addr_pipe_0 = _RAND_23[12:0];
  _RAND_24 = {1{`RANDOM}};
  mem_3_io_debug_read_data_MPORT_en_pipe_0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  mem_3_io_debug_read_data_MPORT_addr_pipe_0 = _RAND_25[12:0];
  _RAND_26 = {1{`RANDOM}};
  mem_3_io_instruction_MPORT_en_pipe_0 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  mem_3_io_instruction_MPORT_addr_pipe_0 = _RAND_27[12:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionROM(
  input         clock,
  input  [31:0] io_address, // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 18:14]
  output [31:0] io_data // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 18:14]
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] mem [0:398]; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 24:45]
  wire  mem_io_data_MPORT_en; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 24:45]
  wire [8:0] mem_io_data_MPORT_addr; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 24:45]
  wire [31:0] mem_io_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 24:45]
  wire [31:0] _wordAddress_T_1 = io_address - 32'h1000; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 29:33]
  wire [29:0] wordAddress = _wordAddress_T_1[31:2]; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 29:60]
  assign mem_io_data_MPORT_en = 1'h1;
  assign mem_io_data_MPORT_addr = wordAddress[8:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign mem_io_data_MPORT_data = mem[mem_io_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 24:45]
  `else
  assign mem_io_data_MPORT_data = mem_io_data_MPORT_addr >= 9'h18f ? _RAND_0[31:0] : mem[mem_io_data_MPORT_addr]; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 24:45]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign io_data = mem_io_data_MPORT_data; // @[4-soc/src/main/scala/peripheral/InstructionROM.scala 30:11]
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
  integer initvar;
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_0 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
  `endif // RANDOMIZE
  $readmemh("/home/phong/Term-project-CA2025/4-soc/verilog/uart.asmbin.txt", mem);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ROMLoader(
  input         clock,
  input         reset,
  output [31:0] io_bundle_address, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output [31:0] io_bundle_write_data, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output        io_bundle_write_enable, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output        io_bundle_write_strobe_0, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output        io_bundle_write_strobe_1, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output        io_bundle_write_strobe_2, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output        io_bundle_write_strobe_3, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output [31:0] io_rom_address, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  input  [31:0] io_rom_data, // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
  output        io_load_finished // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] address; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 21:24]
  reg  valid; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 22:24]
  wire [33:0] _GEN_10 = {address, 2'h0}; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 31:40]
  wire [34:0] _io_bundle_address_T = {{1'd0}, _GEN_10}; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 31:40]
  wire [34:0] _io_bundle_address_T_2 = _io_bundle_address_T + 35'h1000; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 31:55]
  wire [31:0] _address_T_1 = address + 32'h1; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 33:39]
  wire  _GEN_0 = address == 32'h18e | valid; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 34:40 35:13 22:24]
  wire [34:0] _GEN_3 = address <= 32'h18e ? _io_bundle_address_T_2 : 35'h0; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 25:26 28:37 31:28]
  assign io_bundle_address = _GEN_3[31:0];
  assign io_bundle_write_data = address <= 32'h18e ? io_rom_data : 32'h0; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 26:26 28:37 30:28]
  assign io_bundle_write_enable = address <= 32'h18e; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:16]
  assign io_bundle_write_strobe_0 = address <= 32'h18e; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:16]
  assign io_bundle_write_strobe_1 = address <= 32'h18e; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:16]
  assign io_bundle_write_strobe_2 = address <= 32'h18e; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:16]
  assign io_bundle_write_strobe_3 = address <= 32'h18e; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:16]
  assign io_rom_address = _io_bundle_address_T_2[31:0]; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 41:18]
  assign io_load_finished = valid; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 38:20]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 21:24]
      address <= 32'h0; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 21:24]
    end else if (address <= 32'h18e) begin // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:37]
      address <= _address_T_1; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 33:28]
    end
    if (reset) begin // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 22:24]
      valid <= 1'h0; // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 22:24]
    end else if (address <= 32'h18e) begin // @[4-soc/src/main/scala/peripheral/ROMLoader.scala 28:37]
      valid <= _GEN_0;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  address = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  valid = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Control(
  input        io_jump_flag, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input        io_jump_instruction_id, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [4:0] io_rs1_id, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [4:0] io_rs2_id, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input        io_memory_read_enable_ex, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [4:0] io_rd_ex, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input        io_memory_read_enable_mem, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [4:0] io_rd_mem, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input        io_memory_write_enable_mem, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [1:0] io_regs_write_source_ex, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [1:0] io_regs_write_source_mem, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [1:0] io_regs_write_source_wb, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  input  [4:0] io_rd_wb, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  output       io_if_flush, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  output       io_id_flush, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  output       io_pc_stall, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  output       io_if_stall, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  output       io_branch_hazard, // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
  output       io_jal_jalr_hazard // @[4-soc/src/main/scala/riscv/core/Control.scala 55:14]
);
  wire  _ex_hazard_for_branch_T = io_rd_ex != 5'h0; // @[4-soc/src/main/scala/riscv/core/Control.scala 96:14]
  wire  _ex_hazard_for_branch_T_1 = io_jump_instruction_id & _ex_hazard_for_branch_T; // @[4-soc/src/main/scala/riscv/core/Control.scala 95:53]
  wire  _ex_hazard_for_branch_T_4 = io_rd_ex == io_rs1_id | io_rd_ex == io_rs2_id; // @[4-soc/src/main/scala/riscv/core/Control.scala 97:29]
  wire  ex_hazard_for_branch = _ex_hazard_for_branch_T_1 & _ex_hazard_for_branch_T_4; // @[4-soc/src/main/scala/riscv/core/Control.scala 96:22]
  wire  store_load_hazard = io_memory_write_enable_mem & io_memory_read_enable_ex; // @[4-soc/src/main/scala/riscv/core/Control.scala 111:54]
  wire  _jal_jalr_hazard_ex_T_2 = io_regs_write_source_ex == 2'h3 & _ex_hazard_for_branch_T; // @[4-soc/src/main/scala/riscv/core/Control.scala 125:96]
  wire  jal_jalr_hazard_ex = _jal_jalr_hazard_ex_T_2 & _ex_hazard_for_branch_T_4; // @[4-soc/src/main/scala/riscv/core/Control.scala 126:22]
  wire  _jal_jalr_hazard_mem_T_1 = io_rd_mem != 5'h0; // @[4-soc/src/main/scala/riscv/core/Control.scala 140:15]
  wire  _jal_jalr_hazard_mem_T_2 = io_regs_write_source_mem == 2'h3 & _jal_jalr_hazard_mem_T_1; // @[4-soc/src/main/scala/riscv/core/Control.scala 139:98]
  wire  _jal_jalr_hazard_mem_T_5 = io_rd_mem == io_rs1_id | io_rd_mem == io_rs2_id; // @[4-soc/src/main/scala/riscv/core/Control.scala 141:30]
  wire  jal_jalr_hazard_mem = _jal_jalr_hazard_mem_T_2 & _jal_jalr_hazard_mem_T_5; // @[4-soc/src/main/scala/riscv/core/Control.scala 140:23]
  wire  _jal_jalr_hazard_wb_T_1 = io_rd_wb != 5'h0; // @[4-soc/src/main/scala/riscv/core/Control.scala 157:14]
  wire  _jal_jalr_hazard_wb_T_2 = io_regs_write_source_wb == 2'h3 & _jal_jalr_hazard_wb_T_1; // @[4-soc/src/main/scala/riscv/core/Control.scala 156:96]
  wire  _jal_jalr_hazard_wb_T_5 = io_rd_wb == io_rs1_id | io_rd_wb == io_rs2_id; // @[4-soc/src/main/scala/riscv/core/Control.scala 158:29]
  wire  jal_jalr_hazard_wb = _jal_jalr_hazard_wb_T_2 & _jal_jalr_hazard_wb_T_5; // @[4-soc/src/main/scala/riscv/core/Control.scala 157:22]
  wire  _T_2 = (io_jump_instruction_id | io_memory_read_enable_ex) & _ex_hazard_for_branch_T; // @[4-soc/src/main/scala/riscv/core/Control.scala 166:59]
  wire  _T_6 = _T_2 & _ex_hazard_for_branch_T_4; // @[4-soc/src/main/scala/riscv/core/Control.scala 169:24]
  wire  _T_7 = io_jump_instruction_id & io_memory_read_enable_mem; // @[4-soc/src/main/scala/riscv/core/Control.scala 180:33]
  wire  _T_9 = _T_7 & _jal_jalr_hazard_mem_T_1; // @[4-soc/src/main/scala/riscv/core/Control.scala 181:37]
  wire  _T_13 = _T_9 & _jal_jalr_hazard_mem_T_5; // @[4-soc/src/main/scala/riscv/core/Control.scala 182:29]
  wire  _T_14 = _T_6 | _T_13; // @[4-soc/src/main/scala/riscv/core/Control.scala 177:7]
  wire  _T_15 = _T_14 | store_load_hazard; // @[4-soc/src/main/scala/riscv/core/Control.scala 189:9]
  wire  _T_16 = _T_15 | jal_jalr_hazard_ex; // @[4-soc/src/main/scala/riscv/core/Control.scala 195:9]
  wire  _T_17 = _T_16 | jal_jalr_hazard_mem; // @[4-soc/src/main/scala/riscv/core/Control.scala 201:9]
  wire  _T_18 = _T_17 | jal_jalr_hazard_wb; // @[4-soc/src/main/scala/riscv/core/Control.scala 207:9]
  wire  _is_load_use_hazard_T_1 = io_memory_read_enable_ex & _ex_hazard_for_branch_T; // @[4-soc/src/main/scala/riscv/core/Control.scala 227:55]
  wire  is_load_use_hazard = _is_load_use_hazard_T_1 & _ex_hazard_for_branch_T_4; // @[4-soc/src/main/scala/riscv/core/Control.scala 228:24]
  wire  is_jal_jalr_hazard = jal_jalr_hazard_ex | jal_jalr_hazard_mem | jal_jalr_hazard_wb; // @[4-soc/src/main/scala/riscv/core/Control.scala 232:72]
  assign io_if_flush = _T_18 ? 1'h0 : io_jump_flag; // @[4-soc/src/main/scala/riscv/core/Control.scala 212:5 86:22]
  assign io_id_flush = _T_18 & (is_load_use_hazard | is_jal_jalr_hazard); // @[4-soc/src/main/scala/riscv/core/Control.scala 212:5 233:17 87:22]
  assign io_pc_stall = _T_17 | jal_jalr_hazard_wb; // @[4-soc/src/main/scala/riscv/core/Control.scala 207:9]
  assign io_if_stall = _T_17 | jal_jalr_hazard_wb; // @[4-soc/src/main/scala/riscv/core/Control.scala 207:9]
  assign io_branch_hazard = _T_18 & ex_hazard_for_branch; // @[4-soc/src/main/scala/riscv/core/Control.scala 212:5 238:22 90:22]
  assign io_jal_jalr_hazard = _T_18 & is_jal_jalr_hazard; // @[4-soc/src/main/scala/riscv/core/Control.scala 212:5 240:24 91:22]
endmodule
module RegisterFile(
  input         clock,
  input         reset,
  input         io_write_enable, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  input  [4:0]  io_write_address, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  input  [31:0] io_write_data, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  input  [4:0]  io_read_address1, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  input  [4:0]  io_read_address2, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  output [31:0] io_read_data1, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  output [31:0] io_read_data2, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  input  [4:0]  io_debug_read_address, // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
  output [31:0] io_debug_read_data // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 22:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] registers_0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_1; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_2; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_3; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_4; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_5; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_6; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_7; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_8; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_9; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_10; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_11; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_12; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_13; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_14; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_15; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_16; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_17; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_18; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_19; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_20; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_21; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_22; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_23; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_24; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_25; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_26; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_27; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_28; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_29; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  reg [31:0] registers_30; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 37:22]
  wire [4:0] _T_5 = io_write_address - 5'h1; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:34]
  wire  _io_read_data1_T = io_read_address1 == 5'h0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 50:22]
  wire  _io_read_data1_T_2 = io_write_enable & io_write_address == io_read_address1; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 53:23]
  wire [4:0] _io_read_data1_T_4 = io_read_address1 - 5'h1; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 55:34]
  wire [31:0] _GEN_94 = 5'h1 == _io_read_data1_T_4 ? registers_1 : registers_0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_95 = 5'h2 == _io_read_data1_T_4 ? registers_2 : _GEN_94; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_96 = 5'h3 == _io_read_data1_T_4 ? registers_3 : _GEN_95; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_97 = 5'h4 == _io_read_data1_T_4 ? registers_4 : _GEN_96; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_98 = 5'h5 == _io_read_data1_T_4 ? registers_5 : _GEN_97; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_99 = 5'h6 == _io_read_data1_T_4 ? registers_6 : _GEN_98; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_100 = 5'h7 == _io_read_data1_T_4 ? registers_7 : _GEN_99; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_101 = 5'h8 == _io_read_data1_T_4 ? registers_8 : _GEN_100; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_102 = 5'h9 == _io_read_data1_T_4 ? registers_9 : _GEN_101; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_103 = 5'ha == _io_read_data1_T_4 ? registers_10 : _GEN_102; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_104 = 5'hb == _io_read_data1_T_4 ? registers_11 : _GEN_103; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_105 = 5'hc == _io_read_data1_T_4 ? registers_12 : _GEN_104; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_106 = 5'hd == _io_read_data1_T_4 ? registers_13 : _GEN_105; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_107 = 5'he == _io_read_data1_T_4 ? registers_14 : _GEN_106; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_108 = 5'hf == _io_read_data1_T_4 ? registers_15 : _GEN_107; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_109 = 5'h10 == _io_read_data1_T_4 ? registers_16 : _GEN_108; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_110 = 5'h11 == _io_read_data1_T_4 ? registers_17 : _GEN_109; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_111 = 5'h12 == _io_read_data1_T_4 ? registers_18 : _GEN_110; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_112 = 5'h13 == _io_read_data1_T_4 ? registers_19 : _GEN_111; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_113 = 5'h14 == _io_read_data1_T_4 ? registers_20 : _GEN_112; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_114 = 5'h15 == _io_read_data1_T_4 ? registers_21 : _GEN_113; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_115 = 5'h16 == _io_read_data1_T_4 ? registers_22 : _GEN_114; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_116 = 5'h17 == _io_read_data1_T_4 ? registers_23 : _GEN_115; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_117 = 5'h18 == _io_read_data1_T_4 ? registers_24 : _GEN_116; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_118 = 5'h19 == _io_read_data1_T_4 ? registers_25 : _GEN_117; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_119 = 5'h1a == _io_read_data1_T_4 ? registers_26 : _GEN_118; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_120 = 5'h1b == _io_read_data1_T_4 ? registers_27 : _GEN_119; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_121 = 5'h1c == _io_read_data1_T_4 ? registers_28 : _GEN_120; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_122 = 5'h1d == _io_read_data1_T_4 ? registers_29 : _GEN_121; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _GEN_123 = 5'h1e == _io_read_data1_T_4 ? registers_30 : _GEN_122; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:{8,8}]
  wire [31:0] _io_read_data1_T_5 = _io_read_data1_T_2 ? io_write_data : _GEN_123; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 52:8]
  wire  _io_read_data2_T = io_read_address2 == 5'h0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 60:22]
  wire  _io_read_data2_T_2 = io_write_enable & io_write_address == io_read_address2; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 63:23]
  wire [4:0] _io_read_data2_T_4 = io_read_address2 - 5'h1; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 65:34]
  wire [31:0] _GEN_125 = 5'h1 == _io_read_data2_T_4 ? registers_1 : registers_0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_126 = 5'h2 == _io_read_data2_T_4 ? registers_2 : _GEN_125; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_127 = 5'h3 == _io_read_data2_T_4 ? registers_3 : _GEN_126; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_128 = 5'h4 == _io_read_data2_T_4 ? registers_4 : _GEN_127; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_129 = 5'h5 == _io_read_data2_T_4 ? registers_5 : _GEN_128; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_130 = 5'h6 == _io_read_data2_T_4 ? registers_6 : _GEN_129; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_131 = 5'h7 == _io_read_data2_T_4 ? registers_7 : _GEN_130; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_132 = 5'h8 == _io_read_data2_T_4 ? registers_8 : _GEN_131; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_133 = 5'h9 == _io_read_data2_T_4 ? registers_9 : _GEN_132; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_134 = 5'ha == _io_read_data2_T_4 ? registers_10 : _GEN_133; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_135 = 5'hb == _io_read_data2_T_4 ? registers_11 : _GEN_134; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_136 = 5'hc == _io_read_data2_T_4 ? registers_12 : _GEN_135; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_137 = 5'hd == _io_read_data2_T_4 ? registers_13 : _GEN_136; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_138 = 5'he == _io_read_data2_T_4 ? registers_14 : _GEN_137; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_139 = 5'hf == _io_read_data2_T_4 ? registers_15 : _GEN_138; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_140 = 5'h10 == _io_read_data2_T_4 ? registers_16 : _GEN_139; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_141 = 5'h11 == _io_read_data2_T_4 ? registers_17 : _GEN_140; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_142 = 5'h12 == _io_read_data2_T_4 ? registers_18 : _GEN_141; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_143 = 5'h13 == _io_read_data2_T_4 ? registers_19 : _GEN_142; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_144 = 5'h14 == _io_read_data2_T_4 ? registers_20 : _GEN_143; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_145 = 5'h15 == _io_read_data2_T_4 ? registers_21 : _GEN_144; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_146 = 5'h16 == _io_read_data2_T_4 ? registers_22 : _GEN_145; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_147 = 5'h17 == _io_read_data2_T_4 ? registers_23 : _GEN_146; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_148 = 5'h18 == _io_read_data2_T_4 ? registers_24 : _GEN_147; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_149 = 5'h19 == _io_read_data2_T_4 ? registers_25 : _GEN_148; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_150 = 5'h1a == _io_read_data2_T_4 ? registers_26 : _GEN_149; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_151 = 5'h1b == _io_read_data2_T_4 ? registers_27 : _GEN_150; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_152 = 5'h1c == _io_read_data2_T_4 ? registers_28 : _GEN_151; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_153 = 5'h1d == _io_read_data2_T_4 ? registers_29 : _GEN_152; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _GEN_154 = 5'h1e == _io_read_data2_T_4 ? registers_30 : _GEN_153; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:{8,8}]
  wire [31:0] _io_read_data2_T_5 = _io_read_data2_T_2 ? io_write_data : _GEN_154; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 62:8]
  wire  _io_debug_read_data_T = io_debug_read_address == 5'h0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 70:27]
  wire  _io_debug_read_data_T_2 = io_write_enable & io_write_address == io_debug_read_address; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 73:23]
  wire [4:0] _io_debug_read_data_T_4 = io_debug_read_address - 5'h1; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 75:39]
  wire [31:0] _GEN_156 = 5'h1 == _io_debug_read_data_T_4 ? registers_1 : registers_0; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_157 = 5'h2 == _io_debug_read_data_T_4 ? registers_2 : _GEN_156; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_158 = 5'h3 == _io_debug_read_data_T_4 ? registers_3 : _GEN_157; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_159 = 5'h4 == _io_debug_read_data_T_4 ? registers_4 : _GEN_158; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_160 = 5'h5 == _io_debug_read_data_T_4 ? registers_5 : _GEN_159; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_161 = 5'h6 == _io_debug_read_data_T_4 ? registers_6 : _GEN_160; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_162 = 5'h7 == _io_debug_read_data_T_4 ? registers_7 : _GEN_161; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_163 = 5'h8 == _io_debug_read_data_T_4 ? registers_8 : _GEN_162; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_164 = 5'h9 == _io_debug_read_data_T_4 ? registers_9 : _GEN_163; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_165 = 5'ha == _io_debug_read_data_T_4 ? registers_10 : _GEN_164; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_166 = 5'hb == _io_debug_read_data_T_4 ? registers_11 : _GEN_165; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_167 = 5'hc == _io_debug_read_data_T_4 ? registers_12 : _GEN_166; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_168 = 5'hd == _io_debug_read_data_T_4 ? registers_13 : _GEN_167; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_169 = 5'he == _io_debug_read_data_T_4 ? registers_14 : _GEN_168; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_170 = 5'hf == _io_debug_read_data_T_4 ? registers_15 : _GEN_169; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_171 = 5'h10 == _io_debug_read_data_T_4 ? registers_16 : _GEN_170; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_172 = 5'h11 == _io_debug_read_data_T_4 ? registers_17 : _GEN_171; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_173 = 5'h12 == _io_debug_read_data_T_4 ? registers_18 : _GEN_172; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_174 = 5'h13 == _io_debug_read_data_T_4 ? registers_19 : _GEN_173; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_175 = 5'h14 == _io_debug_read_data_T_4 ? registers_20 : _GEN_174; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_176 = 5'h15 == _io_debug_read_data_T_4 ? registers_21 : _GEN_175; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_177 = 5'h16 == _io_debug_read_data_T_4 ? registers_22 : _GEN_176; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_178 = 5'h17 == _io_debug_read_data_T_4 ? registers_23 : _GEN_177; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_179 = 5'h18 == _io_debug_read_data_T_4 ? registers_24 : _GEN_178; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_180 = 5'h19 == _io_debug_read_data_T_4 ? registers_25 : _GEN_179; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_181 = 5'h1a == _io_debug_read_data_T_4 ? registers_26 : _GEN_180; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_182 = 5'h1b == _io_debug_read_data_T_4 ? registers_27 : _GEN_181; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_183 = 5'h1c == _io_debug_read_data_T_4 ? registers_28 : _GEN_182; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_184 = 5'h1d == _io_debug_read_data_T_4 ? registers_29 : _GEN_183; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _GEN_185 = 5'h1e == _io_debug_read_data_T_4 ? registers_30 : _GEN_184; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:{8,8}]
  wire [31:0] _io_debug_read_data_T_5 = _io_debug_read_data_T_2 ? io_write_data : _GEN_185; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 72:8]
  assign io_read_data1 = _io_read_data1_T ? 32'h0 : _io_read_data1_T_5; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 49:23]
  assign io_read_data2 = _io_read_data2_T ? 32'h0 : _io_read_data2_T_5; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 59:23]
  assign io_debug_read_data = _io_debug_read_data_T ? 32'h0 : _io_debug_read_data_T_5; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 69:28]
  always @(posedge clock) begin
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h0 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_0 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h1 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_1 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h2 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_2 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h3 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_3 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h4 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_4 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h5 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_5 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h6 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_6 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h7 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_7 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h8 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_8 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h9 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_9 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'ha == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_10 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'hb == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_11 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'hc == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_12 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'hd == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_13 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'he == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_14 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'hf == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_15 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h10 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_16 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h11 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_17 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h12 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_18 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h13 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_19 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h14 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_20 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h15 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_21 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h16 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_22 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h17 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_23 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h18 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_24 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h19 == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_25 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h1a == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_26 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h1b == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_27 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h1c == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_28 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h1d == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_29 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
    if (~reset) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 39:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 40:55]
        if (5'h1e == _T_5) begin // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
          registers_30 <= io_write_data; // @[4-soc/src/main/scala/riscv/core/RegisterFile.scala 42:41]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module BranchTargetBuffer(
  input         clock,
  input         reset,
  input  [31:0] io_pc, // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
  output [31:0] io_predicted_pc, // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
  output        io_predicted_taken, // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
  input         io_update_valid, // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
  input  [31:0] io_update_pc, // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
  input  [31:0] io_update_target, // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
  input         io_update_taken // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 36:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
`endif // RANDOMIZE_REG_INIT
  reg  valid_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_2; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_3; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_5; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_6; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_7; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_8; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_9; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_10; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_11; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_12; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_13; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_14; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg  valid_15; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
  reg [25:0] tags_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_2; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_3; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_5; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_6; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_7; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_8; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_9; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_10; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_11; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_12; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_13; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_14; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [25:0] tags_15; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 51:20]
  reg [31:0] targets_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_2; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_3; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_5; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_6; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_7; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_8; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_9; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_10; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_11; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_12; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_13; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_14; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  reg [31:0] targets_15; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 52:20]
  wire [3:0] pred_index = io_pc[5:2]; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 55:36]
  wire [25:0] pred_tag = io_pc[31:6]; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 56:36]
  wire [25:0] _GEN_1 = 4'h1 == pred_index ? tags_1 : tags_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_2 = 4'h2 == pred_index ? tags_2 : _GEN_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_3 = 4'h3 == pred_index ? tags_3 : _GEN_2; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_4 = 4'h4 == pred_index ? tags_4 : _GEN_3; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_5 = 4'h5 == pred_index ? tags_5 : _GEN_4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_6 = 4'h6 == pred_index ? tags_6 : _GEN_5; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_7 = 4'h7 == pred_index ? tags_7 : _GEN_6; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_8 = 4'h8 == pred_index ? tags_8 : _GEN_7; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_9 = 4'h9 == pred_index ? tags_9 : _GEN_8; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_10 = 4'ha == pred_index ? tags_10 : _GEN_9; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_11 = 4'hb == pred_index ? tags_11 : _GEN_10; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_12 = 4'hc == pred_index ? tags_12 : _GEN_11; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_13 = 4'hd == pred_index ? tags_13 : _GEN_12; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_14 = 4'he == pred_index ? tags_14 : _GEN_13; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire [25:0] _GEN_15 = 4'hf == pred_index ? tags_15 : _GEN_14; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{59,59}]
  wire  _GEN_17 = 4'h1 == pred_index ? valid_1 : valid_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_18 = 4'h2 == pred_index ? valid_2 : _GEN_17; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_19 = 4'h3 == pred_index ? valid_3 : _GEN_18; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_20 = 4'h4 == pred_index ? valid_4 : _GEN_19; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_21 = 4'h5 == pred_index ? valid_5 : _GEN_20; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_22 = 4'h6 == pred_index ? valid_6 : _GEN_21; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_23 = 4'h7 == pred_index ? valid_7 : _GEN_22; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_24 = 4'h8 == pred_index ? valid_8 : _GEN_23; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_25 = 4'h9 == pred_index ? valid_9 : _GEN_24; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_26 = 4'ha == pred_index ? valid_10 : _GEN_25; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_27 = 4'hb == pred_index ? valid_11 : _GEN_26; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_28 = 4'hc == pred_index ? valid_12 : _GEN_27; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_29 = 4'hd == pred_index ? valid_13 : _GEN_28; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_30 = 4'he == pred_index ? valid_14 : _GEN_29; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  _GEN_31 = 4'hf == pred_index ? valid_15 : _GEN_30; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:{38,38}]
  wire  hit = _GEN_31 & _GEN_15 == pred_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:38]
  wire [31:0] _io_predicted_pc_T_1 = io_pc + 32'h4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:61]
  wire [31:0] _GEN_33 = 4'h1 == pred_index ? targets_1 : targets_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_34 = 4'h2 == pred_index ? targets_2 : _GEN_33; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_35 = 4'h3 == pred_index ? targets_3 : _GEN_34; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_36 = 4'h4 == pred_index ? targets_4 : _GEN_35; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_37 = 4'h5 == pred_index ? targets_5 : _GEN_36; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_38 = 4'h6 == pred_index ? targets_6 : _GEN_37; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_39 = 4'h7 == pred_index ? targets_7 : _GEN_38; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_40 = 4'h8 == pred_index ? targets_8 : _GEN_39; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_41 = 4'h9 == pred_index ? targets_9 : _GEN_40; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_42 = 4'ha == pred_index ? targets_10 : _GEN_41; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_43 = 4'hb == pred_index ? targets_11 : _GEN_42; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_44 = 4'hc == pred_index ? targets_12 : _GEN_43; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_45 = 4'hd == pred_index ? targets_13 : _GEN_44; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_46 = 4'he == pred_index ? targets_14 : _GEN_45; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [31:0] _GEN_47 = 4'hf == pred_index ? targets_15 : _GEN_46; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:{28,28}]
  wire [3:0] upd_index = io_update_pc[5:2]; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 55:36]
  wire [25:0] upd_tag = io_update_pc[31:6]; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 56:36]
  wire  _GEN_48 = 4'h0 == upd_index | valid_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_49 = 4'h1 == upd_index | valid_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_50 = 4'h2 == upd_index | valid_2; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_51 = 4'h3 == upd_index | valid_3; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_52 = 4'h4 == upd_index | valid_4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_53 = 4'h5 == upd_index | valid_5; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_54 = 4'h6 == upd_index | valid_6; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_55 = 4'h7 == upd_index | valid_7; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_56 = 4'h8 == upd_index | valid_8; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_57 = 4'h9 == upd_index | valid_9; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_58 = 4'ha == upd_index | valid_10; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_59 = 4'hb == upd_index | valid_11; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_60 = 4'hc == upd_index | valid_12; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_61 = 4'hd == upd_index | valid_13; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_62 = 4'he == upd_index | valid_14; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire  _GEN_63 = 4'hf == upd_index | valid_15; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 73:{26,26}]
  wire [25:0] _GEN_97 = 4'h1 == upd_index ? tags_1 : tags_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_98 = 4'h2 == upd_index ? tags_2 : _GEN_97; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_99 = 4'h3 == upd_index ? tags_3 : _GEN_98; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_100 = 4'h4 == upd_index ? tags_4 : _GEN_99; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_101 = 4'h5 == upd_index ? tags_5 : _GEN_100; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_102 = 4'h6 == upd_index ? tags_6 : _GEN_101; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_103 = 4'h7 == upd_index ? tags_7 : _GEN_102; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_104 = 4'h8 == upd_index ? tags_8 : _GEN_103; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_105 = 4'h9 == upd_index ? tags_9 : _GEN_104; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_106 = 4'ha == upd_index ? tags_10 : _GEN_105; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_107 = 4'hb == upd_index ? tags_11 : _GEN_106; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_108 = 4'hc == upd_index ? tags_12 : _GEN_107; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_109 = 4'hd == upd_index ? tags_13 : _GEN_108; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_110 = 4'he == upd_index ? tags_14 : _GEN_109; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire [25:0] _GEN_111 = 4'hf == upd_index ? tags_15 : _GEN_110; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{49,49}]
  wire  _GEN_113 = 4'h1 == upd_index ? valid_1 : valid_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_114 = 4'h2 == upd_index ? valid_2 : _GEN_113; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_115 = 4'h3 == upd_index ? valid_3 : _GEN_114; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_116 = 4'h4 == upd_index ? valid_4 : _GEN_115; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_117 = 4'h5 == upd_index ? valid_5 : _GEN_116; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_118 = 4'h6 == upd_index ? valid_6 : _GEN_117; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_119 = 4'h7 == upd_index ? valid_7 : _GEN_118; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_120 = 4'h8 == upd_index ? valid_8 : _GEN_119; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_121 = 4'h9 == upd_index ? valid_9 : _GEN_120; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_122 = 4'ha == upd_index ? valid_10 : _GEN_121; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_123 = 4'hb == upd_index ? valid_11 : _GEN_122; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_124 = 4'hc == upd_index ? valid_12 : _GEN_123; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_125 = 4'hd == upd_index ? valid_13 : _GEN_124; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_126 = 4'he == upd_index ? valid_14 : _GEN_125; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_127 = 4'hf == upd_index ? valid_15 : _GEN_126; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:{29,29}]
  wire  _GEN_128 = 4'h0 == upd_index ? 1'h0 : valid_0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_129 = 4'h1 == upd_index ? 1'h0 : valid_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_130 = 4'h2 == upd_index ? 1'h0 : valid_2; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_131 = 4'h3 == upd_index ? 1'h0 : valid_3; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_132 = 4'h4 == upd_index ? 1'h0 : valid_4; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_133 = 4'h5 == upd_index ? 1'h0 : valid_5; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_134 = 4'h6 == upd_index ? 1'h0 : valid_6; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_135 = 4'h7 == upd_index ? 1'h0 : valid_7; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_136 = 4'h8 == upd_index ? 1'h0 : valid_8; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_137 = 4'h9 == upd_index ? 1'h0 : valid_9; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_138 = 4'ha == upd_index ? 1'h0 : valid_10; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_139 = 4'hb == upd_index ? 1'h0 : valid_11; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_140 = 4'hc == upd_index ? 1'h0 : valid_12; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_141 = 4'hd == upd_index ? 1'h0 : valid_13; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_142 = 4'he == upd_index ? 1'h0 : valid_14; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  wire  _GEN_143 = 4'hf == upd_index ? 1'h0 : valid_15; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24 79:{26,26}]
  assign io_predicted_pc = hit ? _GEN_47 : _io_predicted_pc_T_1; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 64:28]
  assign io_predicted_taken = _GEN_31 & _GEN_15 == pred_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 61:38]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_0 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_0 <= _GEN_48;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_0 <= _GEN_128;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_1 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_1 <= _GEN_49;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_1 <= _GEN_129;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_2 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_2 <= _GEN_50;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_2 <= _GEN_130;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_3 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_3 <= _GEN_51;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_3 <= _GEN_131;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_4 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_4 <= _GEN_52;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_4 <= _GEN_132;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_5 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_5 <= _GEN_53;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_5 <= _GEN_133;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_6 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_6 <= _GEN_54;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_6 <= _GEN_134;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_7 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_7 <= _GEN_55;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_7 <= _GEN_135;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_8 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_8 <= _GEN_56;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_8 <= _GEN_136;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_9 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_9 <= _GEN_57;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_9 <= _GEN_137;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_10 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_10 <= _GEN_58;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_10 <= _GEN_138;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_11 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_11 <= _GEN_59;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_11 <= _GEN_139;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_12 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_12 <= _GEN_60;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_12 <= _GEN_140;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_13 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_13 <= _GEN_61;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_13 <= _GEN_141;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_14 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_14 <= _GEN_62;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_14 <= _GEN_142;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
      valid_15 <= 1'h0; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 50:24]
    end else if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        valid_15 <= _GEN_63;
      end else if (_GEN_127 & _GEN_111 == upd_tag) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 78:63]
        valid_15 <= _GEN_143;
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h0 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_0 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h1 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_1 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h2 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_2 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h3 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_3 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h4 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_4 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h5 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_5 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h6 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_6 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h7 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_7 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h8 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_8 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h9 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_9 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'ha == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_10 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hb == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_11 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hc == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_12 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hd == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_13 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'he == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_14 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hf == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
          tags_15 <= upd_tag; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 74:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h0 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_0 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h1 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_1 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h2 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_2 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h3 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_3 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h4 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_4 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h5 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_5 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h6 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_6 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h7 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_7 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h8 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_8 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'h9 == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_9 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'ha == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_10 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hb == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_11 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hc == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_12 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hd == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_13 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'he == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_14 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
    if (io_update_valid) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 67:25]
      if (io_update_taken) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 71:27]
        if (4'hf == upd_index) begin // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
          targets_15 <= io_update_target; // @[4-soc/src/main/scala/riscv/core/BranchTargetBuffer.scala 75:26]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  valid_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  valid_1 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  valid_2 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  valid_3 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  valid_4 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  valid_5 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  valid_6 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  valid_7 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  valid_8 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  valid_9 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  valid_10 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  valid_11 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  valid_12 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  valid_13 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  valid_14 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  valid_15 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  tags_0 = _RAND_16[25:0];
  _RAND_17 = {1{`RANDOM}};
  tags_1 = _RAND_17[25:0];
  _RAND_18 = {1{`RANDOM}};
  tags_2 = _RAND_18[25:0];
  _RAND_19 = {1{`RANDOM}};
  tags_3 = _RAND_19[25:0];
  _RAND_20 = {1{`RANDOM}};
  tags_4 = _RAND_20[25:0];
  _RAND_21 = {1{`RANDOM}};
  tags_5 = _RAND_21[25:0];
  _RAND_22 = {1{`RANDOM}};
  tags_6 = _RAND_22[25:0];
  _RAND_23 = {1{`RANDOM}};
  tags_7 = _RAND_23[25:0];
  _RAND_24 = {1{`RANDOM}};
  tags_8 = _RAND_24[25:0];
  _RAND_25 = {1{`RANDOM}};
  tags_9 = _RAND_25[25:0];
  _RAND_26 = {1{`RANDOM}};
  tags_10 = _RAND_26[25:0];
  _RAND_27 = {1{`RANDOM}};
  tags_11 = _RAND_27[25:0];
  _RAND_28 = {1{`RANDOM}};
  tags_12 = _RAND_28[25:0];
  _RAND_29 = {1{`RANDOM}};
  tags_13 = _RAND_29[25:0];
  _RAND_30 = {1{`RANDOM}};
  tags_14 = _RAND_30[25:0];
  _RAND_31 = {1{`RANDOM}};
  tags_15 = _RAND_31[25:0];
  _RAND_32 = {1{`RANDOM}};
  targets_0 = _RAND_32[31:0];
  _RAND_33 = {1{`RANDOM}};
  targets_1 = _RAND_33[31:0];
  _RAND_34 = {1{`RANDOM}};
  targets_2 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  targets_3 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  targets_4 = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  targets_5 = _RAND_37[31:0];
  _RAND_38 = {1{`RANDOM}};
  targets_6 = _RAND_38[31:0];
  _RAND_39 = {1{`RANDOM}};
  targets_7 = _RAND_39[31:0];
  _RAND_40 = {1{`RANDOM}};
  targets_8 = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  targets_9 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  targets_10 = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  targets_11 = _RAND_43[31:0];
  _RAND_44 = {1{`RANDOM}};
  targets_12 = _RAND_44[31:0];
  _RAND_45 = {1{`RANDOM}};
  targets_13 = _RAND_45[31:0];
  _RAND_46 = {1{`RANDOM}};
  targets_14 = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  targets_15 = _RAND_47[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionFetch(
  input         clock,
  input         reset,
  input         io_stall_flag_ctrl, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_jump_flag_id, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_jump_address_id, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_rom_instruction, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_instruction_valid, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_btb_mispredict, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_btb_correction_addr, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_btb_correct_prediction, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  output [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  output [31:0] io_id_instruction, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  output        io_btb_predicted_taken, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  output [31:0] io_btb_predicted_target, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_btb_update_valid, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_btb_update_pc, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_btb_update_target, // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_btb_update_taken // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire  btb_clock; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire  btb_reset; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire [31:0] btb_io_pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire [31:0] btb_io_predicted_pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire  btb_io_predicted_taken; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire  btb_io_update_valid; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire [31:0] btb_io_update_pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire [31:0] btb_io_update_target; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  wire  btb_io_update_taken; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
  reg [31:0] pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 41:19]
  reg  pending_jump; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 56:34]
  reg [31:0] pending_jump_addr; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 57:34]
  reg  prev_jump_flag; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 65:31]
  reg [31:0] prev_jump_addr; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 66:31]
  wire  _T_2 = ~io_stall_flag_ctrl; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 73:14]
  wire  _GEN_0 = ~io_stall_flag_ctrl ? 1'h0 : pending_jump; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 73:35 75:18 56:34]
  wire  _GEN_1 = io_stall_flag_ctrl & (io_jump_flag_id | prev_jump_flag) | _GEN_0; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 70:67 71:23]
  wire  take_pending = pending_jump & _T_2; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 79:35]
  wire  take_current = io_jump_flag_id & _T_2 & ~pending_jump & ~io_btb_correct_prediction; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 81:78]
  wire  take_btb_correction = io_btb_mispredict & _T_2; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 83:47]
  wire [31:0] _next_pc_T_1 = pc + 32'h4; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 92:49]
  wire [31:0] _next_pc_T_2 = btb_io_predicted_taken ? btb_io_predicted_pc : _next_pc_T_1; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 92:8]
  wire  _next_pc_T_4 = io_stall_flag_ctrl | ~io_instruction_valid; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 97:27]
  wire [31:0] _next_pc_T_5 = _next_pc_T_4 ? pc : _next_pc_T_2; // @[src/main/scala/chisel3/util/Mux.scala 141:16]
  BranchTargetBuffer btb ( // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 44:19]
    .clock(btb_clock),
    .reset(btb_reset),
    .io_pc(btb_io_pc),
    .io_predicted_pc(btb_io_predicted_pc),
    .io_predicted_taken(btb_io_predicted_taken),
    .io_update_valid(btb_io_update_valid),
    .io_update_pc(btb_io_update_pc),
    .io_update_target(btb_io_update_target),
    .io_update_taken(btb_io_update_taken)
  );
  assign io_instruction_address = pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 103:26]
  assign io_id_instruction = io_instruction_valid ? io_rom_instruction : 32'h13; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 104:32]
  assign io_btb_predicted_taken = btb_io_predicted_taken; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 49:27]
  assign io_btb_predicted_target = btb_io_predicted_pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 50:27]
  assign btb_clock = clock;
  assign btb_reset = reset;
  assign btb_io_pc = pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 45:13]
  assign btb_io_update_valid = io_btb_update_valid; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 107:24]
  assign btb_io_update_pc = io_btb_update_pc; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 108:24]
  assign btb_io_update_target = io_btb_update_target; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 109:24]
  assign btb_io_update_taken = io_btb_update_taken; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 110:24]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 41:19]
      pc <= 32'h1000; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 41:19]
    end else if (take_pending) begin // @[src/main/scala/chisel3/util/Mux.scala 141:16]
      pc <= pending_jump_addr;
    end else if (take_btb_correction) begin // @[src/main/scala/chisel3/util/Mux.scala 141:16]
      pc <= io_btb_correction_addr;
    end else if (take_current) begin // @[src/main/scala/chisel3/util/Mux.scala 141:16]
      pc <= io_jump_address_id;
    end else begin
      pc <= _next_pc_T_5;
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 56:34]
      pending_jump <= 1'h0; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 56:34]
    end else begin
      pending_jump <= _GEN_1;
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 57:34]
      pending_jump_addr <= 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 57:34]
    end else if (io_stall_flag_ctrl & (io_jump_flag_id | prev_jump_flag)) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 70:67]
      if (io_jump_flag_id) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 72:29]
        pending_jump_addr <= io_jump_address_id;
      end else begin
        pending_jump_addr <= prev_jump_addr;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 65:31]
      prev_jump_flag <= 1'h0; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 65:31]
    end else begin
      prev_jump_flag <= io_jump_flag_id; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 65:31]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 66:31]
      prev_jump_addr <= 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 66:31]
    end else begin
      prev_jump_addr <= io_jump_address_id; // @[4-soc/src/main/scala/riscv/core/InstructionFetch.scala 66:31]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  pending_jump = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  pending_jump_addr = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  prev_jump_flag = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  prev_jump_addr = _RAND_4[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineRegister(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input         io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [31:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [31:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [31:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 32'h13; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 32'h13; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 32'h13; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 32'h13; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineRegister_1(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input         io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [31:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [31:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [31:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 32'h1000; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 32'h1000; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 32'h1000; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 32'h1000; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineRegister_2(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input         io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [31:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [31:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [31:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 32'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 32'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 32'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 32'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineRegister_3(
  input   clock,
  input   reset,
  input   io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input   io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input   io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output  io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg  out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 1'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 1'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 1'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 1'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IF2ID(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  input         io_flush, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  input  [31:0] io_instruction, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  input  [31:0] io_interrupt_flag, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  input         io_btb_predicted_taken, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  input  [31:0] io_btb_predicted_target, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  output [31:0] io_output_instruction, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  output [31:0] io_output_instruction_address, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  output        io_output_btb_predicted_taken, // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
  output [31:0] io_output_btb_predicted_target // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 12:14]
);
  wire  instruction_clock; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
  wire  instruction_reset; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
  wire  instruction_io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
  wire  instruction_io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
  wire [31:0] instruction_io_in; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
  wire [31:0] instruction_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
  wire  instruction_address_clock; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
  wire  instruction_address_reset; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
  wire  instruction_address_io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
  wire  instruction_address_io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
  wire [31:0] instruction_address_io_in; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
  wire [31:0] instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
  wire  interrupt_flag_clock; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
  wire  interrupt_flag_reset; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
  wire  interrupt_flag_io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
  wire  interrupt_flag_io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
  wire [31:0] interrupt_flag_io_in; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
  wire [31:0] interrupt_flag_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
  wire  btb_predicted_taken_clock; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
  wire  btb_predicted_taken_reset; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
  wire  btb_predicted_taken_io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
  wire  btb_predicted_taken_io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
  wire  btb_predicted_taken_io_in; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
  wire  btb_predicted_taken_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
  wire  btb_predicted_target_clock; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
  wire  btb_predicted_target_reset; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
  wire  btb_predicted_target_io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
  wire  btb_predicted_target_io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
  wire [31:0] btb_predicted_target_io_in; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
  wire [31:0] btb_predicted_target_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
  PipelineRegister instruction ( // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 28:27]
    .clock(instruction_clock),
    .reset(instruction_reset),
    .io_stall(instruction_io_stall),
    .io_flush(instruction_io_flush),
    .io_in(instruction_io_in),
    .io_out(instruction_io_out)
  );
  PipelineRegister_1 instruction_address ( // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 34:35]
    .clock(instruction_address_clock),
    .reset(instruction_address_reset),
    .io_stall(instruction_address_io_stall),
    .io_flush(instruction_address_io_flush),
    .io_in(instruction_address_io_in),
    .io_out(instruction_address_io_out)
  );
  PipelineRegister_2 interrupt_flag ( // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 40:30]
    .clock(interrupt_flag_clock),
    .reset(interrupt_flag_reset),
    .io_stall(interrupt_flag_io_stall),
    .io_flush(interrupt_flag_io_flush),
    .io_in(interrupt_flag_io_in),
    .io_out(interrupt_flag_io_out)
  );
  PipelineRegister_3 btb_predicted_taken ( // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 47:35]
    .clock(btb_predicted_taken_clock),
    .reset(btb_predicted_taken_reset),
    .io_stall(btb_predicted_taken_io_stall),
    .io_flush(btb_predicted_taken_io_flush),
    .io_in(btb_predicted_taken_io_in),
    .io_out(btb_predicted_taken_io_out)
  );
  PipelineRegister_2 btb_predicted_target ( // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 53:36]
    .clock(btb_predicted_target_clock),
    .reset(btb_predicted_target_reset),
    .io_stall(btb_predicted_target_io_stall),
    .io_flush(btb_predicted_target_io_flush),
    .io_in(btb_predicted_target_io_in),
    .io_out(btb_predicted_target_io_out)
  );
  assign io_output_instruction = instruction_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 32:25]
  assign io_output_instruction_address = instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 38:33]
  assign io_output_btb_predicted_taken = btb_predicted_taken_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 51:63]
  assign io_output_btb_predicted_target = btb_predicted_target_io_out; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 57:34]
  assign instruction_clock = clock;
  assign instruction_reset = reset;
  assign instruction_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 30:25]
  assign instruction_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 31:25]
  assign instruction_io_in = io_instruction; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 29:25]
  assign instruction_address_clock = clock;
  assign instruction_address_reset = reset;
  assign instruction_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 36:33]
  assign instruction_address_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 37:33]
  assign instruction_address_io_in = io_instruction_address; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 35:33]
  assign interrupt_flag_clock = clock;
  assign interrupt_flag_reset = reset;
  assign interrupt_flag_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 42:28]
  assign interrupt_flag_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 43:28]
  assign interrupt_flag_io_in = io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 41:28]
  assign btb_predicted_taken_clock = clock;
  assign btb_predicted_taken_reset = reset;
  assign btb_predicted_taken_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 49:33]
  assign btb_predicted_taken_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 50:33]
  assign btb_predicted_taken_io_in = io_btb_predicted_taken; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 48:33]
  assign btb_predicted_target_clock = clock;
  assign btb_predicted_target_reset = reset;
  assign btb_predicted_target_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 55:34]
  assign btb_predicted_target_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 56:34]
  assign btb_predicted_target_io_in = io_btb_predicted_target; // @[4-soc/src/main/scala/riscv/core/IF2ID.scala 54:34]
endmodule
module InstructionDecode(
  input  [31:0] io_instruction, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [31:0] io_reg1_data, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [31:0] io_reg2_data, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [31:0] io_forward_from_mem, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [31:0] io_forward_from_wb, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [1:0]  io_reg1_forward, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [1:0]  io_reg2_forward, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input         io_interrupt_assert, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input  [31:0] io_interrupt_handler_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  input         io_branch_hazard, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [4:0]  io_regs_reg1_read_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [4:0]  io_regs_reg2_read_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [31:0] io_ex_immediate, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ex_aluop1_source, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ex_aluop2_source, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ex_memory_read_enable, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ex_memory_write_enable, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [1:0]  io_ex_reg_write_source, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ex_reg_write_enable, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [4:0]  io_ex_reg_write_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [11:0] io_ex_csr_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ex_csr_write_enable, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_ctrl_jump_instruction, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_clint_jump_flag, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [31:0] io_clint_jump_address, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output        io_if_jump_flag, // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
  output [31:0] io_if_jump_address // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 12:14]
);
  wire [6:0] opcode = io_instruction[6:0]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 45:30]
  wire [2:0] funct3 = io_instruction[14:12]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 46:30]
  wire [4:0] rd = io_instruction[11:7]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 48:30]
  wire [4:0] rs1 = io_instruction[19:15]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 49:30]
  wire [4:0] rs2 = io_instruction[24:20]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 50:30]
  wire  _csr_uses_uimm_T = opcode == 7'h73; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 54:30]
  wire  _csr_uses_uimm_T_1 = funct3 == 3'h5; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 55:12]
  wire  _csr_uses_uimm_T_2 = funct3 == 3'h7; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 56:14]
  wire  _csr_uses_uimm_T_3 = funct3 == 3'h5 | _csr_uses_uimm_T_2; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 55:43]
  wire  _csr_uses_uimm_T_4 = funct3 == 3'h6; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 57:14]
  wire  _csr_uses_uimm_T_5 = _csr_uses_uimm_T_3 | _csr_uses_uimm_T_4; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 56:45]
  wire  csr_uses_uimm = opcode == 7'h73 & _csr_uses_uimm_T_5; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 54:51]
  wire  _uses_rs1_T = opcode == 7'h33; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 59:26]
  wire  _uses_rs1_T_3 = opcode == 7'h3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 60:13]
  wire  _uses_rs1_T_4 = opcode == 7'h33 | opcode == 7'h13 | _uses_rs1_T_3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 59:86]
  wire  _uses_rs1_T_5 = opcode == 7'h23; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 60:48]
  wire  _uses_rs1_T_7 = opcode == 7'h63; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 60:83]
  wire  _uses_rs1_T_9 = opcode == 7'h67; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 61:13]
  wire  _uses_rs1_T_10 = _uses_rs1_T_4 | opcode == 7'h23 | opcode == 7'h63 | _uses_rs1_T_9; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 60:107]
  wire  uses_rs1 = _uses_rs1_T_10 | _csr_uses_uimm_T & ~csr_uses_uimm; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 61:36]
  wire  uses_rs2 = _uses_rs1_T | _uses_rs1_T_5 | _uses_rs1_T_7; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 62:86]
  wire [19:0] _io_ex_immediate_T_1 = io_instruction[31] ? 20'hfffff : 20'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 68:13]
  wire [31:0] _io_ex_immediate_T_3 = {_io_ex_immediate_T_1,io_instruction[31:20]}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 68:8]
  wire [20:0] _io_ex_immediate_T_5 = io_instruction[31] ? 21'h1fffff : 21'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 71:37]
  wire [31:0] _io_ex_immediate_T_7 = {_io_ex_immediate_T_5,io_instruction[30:20]}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 71:32]
  wire [31:0] _io_ex_immediate_T_20 = {_io_ex_immediate_T_5,io_instruction[30:25],rd}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 74:32]
  wire [31:0] _io_ex_immediate_T_26 = {_io_ex_immediate_T_1,io_instruction[7],io_instruction[30:25],io_instruction[11:8]
    ,1'h0}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 75:32]
  wire [31:0] _io_ex_immediate_T_28 = {io_instruction[31:12],12'h0}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 82:32]
  wire [11:0] _io_ex_immediate_T_32 = io_instruction[31] ? 12'hfff : 12'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 85:13]
  wire [31:0] _io_ex_immediate_T_36 = {_io_ex_immediate_T_32,io_instruction[19:12],io_instruction[20],io_instruction[30:
    21],1'h0}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 84:30]
  wire [31:0] _io_ex_immediate_T_38 = 7'h13 == opcode ? _io_ex_immediate_T_7 : _io_ex_immediate_T_3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire  _io_ex_immediate_T_39 = 7'h3 == opcode; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire [31:0] _io_ex_immediate_T_40 = 7'h3 == opcode ? _io_ex_immediate_T_7 : _io_ex_immediate_T_38; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire  _io_ex_immediate_T_41 = 7'h67 == opcode; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire [31:0] _io_ex_immediate_T_42 = 7'h67 == opcode ? _io_ex_immediate_T_7 : _io_ex_immediate_T_40; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire [31:0] _io_ex_immediate_T_44 = 7'h23 == opcode ? _io_ex_immediate_T_20 : _io_ex_immediate_T_42; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire  _io_ex_immediate_T_45 = 7'h63 == opcode; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire [31:0] _io_ex_immediate_T_46 = 7'h63 == opcode ? _io_ex_immediate_T_26 : _io_ex_immediate_T_44; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire [31:0] _io_ex_immediate_T_48 = 7'h37 == opcode ? _io_ex_immediate_T_28 : _io_ex_immediate_T_46; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire [31:0] _io_ex_immediate_T_50 = 7'h17 == opcode ? _io_ex_immediate_T_28 : _io_ex_immediate_T_48; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire  _io_ex_immediate_T_51 = 7'h6f == opcode; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  wire  _io_ex_aluop1_source_T = opcode == 7'h17; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 94:12]
  wire  _io_ex_aluop1_source_T_3 = opcode == 7'h6f; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 94:78]
  wire [1:0] _io_ex_reg_write_source_T_1 = _io_ex_immediate_T_39 ? 2'h1 : 2'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 108:4]
  wire [1:0] _io_ex_reg_write_source_T_3 = 7'h73 == opcode ? 2'h2 : _io_ex_reg_write_source_T_1; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 108:4]
  wire [1:0] _io_ex_reg_write_source_T_5 = _io_ex_immediate_T_51 ? 2'h3 : _io_ex_reg_write_source_T_3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 108:4]
  wire  _io_ex_reg_write_enable_T_10 = _uses_rs1_T_4 | _io_ex_aluop1_source_T | opcode == 7'h37 |
    _io_ex_aluop1_source_T_3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 117:105]
  wire  _io_ex_csr_write_enable_T_4 = funct3 == 3'h2; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 123:14]
  wire  _io_ex_csr_write_enable_T_5 = funct3 == 3'h1 | _csr_uses_uimm_T_1 | _io_ex_csr_write_enable_T_4; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 122:83]
  wire  _io_ex_csr_write_enable_T_8 = funct3 == 3'h3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 124:14]
  wire  _io_ex_csr_write_enable_T_9 = _io_ex_csr_write_enable_T_5 | _csr_uses_uimm_T_4 | _io_ex_csr_write_enable_T_8; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 123:85]
  wire  _io_ex_csr_write_enable_T_11 = _io_ex_csr_write_enable_T_9 | _csr_uses_uimm_T_2; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 124:44]
  wire [31:0] _reg1_data_forwarded_T_1 = 2'h0 == io_reg1_forward ? io_reg1_data : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 129:60]
  wire [31:0] _reg1_data_forwarded_T_3 = 2'h2 == io_reg1_forward ? io_forward_from_wb : _reg1_data_forwarded_T_1; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 129:60]
  wire [31:0] reg1_data_forwarded = 2'h1 == io_reg1_forward ? io_forward_from_mem : _reg1_data_forwarded_T_3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 129:60]
  wire [31:0] _reg2_data_forwarded_T_1 = 2'h0 == io_reg2_forward ? io_reg2_data : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 136:60]
  wire [31:0] _reg2_data_forwarded_T_3 = 2'h2 == io_reg2_forward ? io_forward_from_wb : _reg2_data_forwarded_T_1; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 136:60]
  wire [31:0] reg2_data_forwarded = 2'h1 == io_reg2_forward ? io_forward_from_mem : _reg2_data_forwarded_T_3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 136:60]
  wire [31:0] reg1_data = uses_rs1 ? reg1_data_forwarded : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 143:22]
  wire [31:0] reg2_data = uses_rs2 ? reg2_data_forwarded : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 144:22]
  wire  _io_ctrl_jump_instruction_T_2 = _io_ex_aluop1_source_T_3 | _uses_rs1_T_9; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 145:59]
  wire  _branch_taken_T_5 = reg1_data == reg2_data; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 162:48]
  wire  _branch_taken_T_6 = reg1_data != reg2_data; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 163:48]
  wire [31:0] _branch_taken_T_7 = uses_rs1 ? reg1_data_forwarded : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 164:48]
  wire [31:0] _branch_taken_T_8 = uses_rs2 ? reg2_data_forwarded : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 164:67]
  wire  _branch_taken_T_9 = $signed(_branch_taken_T_7) < $signed(_branch_taken_T_8); // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 164:55]
  wire  _branch_taken_T_12 = $signed(_branch_taken_T_7) >= $signed(_branch_taken_T_8); // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 165:55]
  wire  _branch_taken_T_13 = reg1_data < reg2_data; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 166:55]
  wire  _branch_taken_T_14 = reg1_data >= reg2_data; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 167:55]
  wire  _branch_taken_T_18 = 3'h1 == funct3 ? _branch_taken_T_6 : 3'h0 == funct3 & _branch_taken_T_5; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 160:8]
  wire  _branch_taken_T_20 = 3'h4 == funct3 ? _branch_taken_T_9 : _branch_taken_T_18; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 160:8]
  wire  _branch_taken_T_22 = 3'h5 == funct3 ? _branch_taken_T_12 : _branch_taken_T_20; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 160:8]
  wire  _branch_taken_T_24 = 3'h6 == funct3 ? _branch_taken_T_13 : _branch_taken_T_22; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 160:8]
  wire  _branch_taken_T_26 = 3'h7 == funct3 ? _branch_taken_T_14 : _branch_taken_T_24; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 160:8]
  wire  _branch_taken_T_27 = _uses_rs1_T_7 & _branch_taken_T_26; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 157:39]
  wire  _branch_taken_T_28 = _io_ctrl_jump_instruction_T_2 | _branch_taken_T_27; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 156:38]
  wire  branch_taken = ~io_branch_hazard & _branch_taken_T_28; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 154:40]
  wire [31:0] _jalr_target_T_1 = reg1_data + io_ex_immediate; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 174:36]
  wire [31:0] jalr_target = {_jalr_target_T_1[31:1],1'h0}; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 174:24]
  wire [31:0] _io_if_jump_address_T_1 = io_instruction_address + io_ex_immediate; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 181:55]
  wire [31:0] _io_if_jump_address_T_5 = _io_ex_immediate_T_45 ? _io_if_jump_address_T_1 : 32'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 179:27]
  wire [31:0] _io_if_jump_address_T_7 = _io_ex_immediate_T_51 ? _io_if_jump_address_T_1 : _io_if_jump_address_T_5; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 179:27]
  wire [31:0] _io_if_jump_address_T_9 = _io_ex_immediate_T_41 ? jalr_target : _io_if_jump_address_T_7; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 179:27]
  assign io_regs_reg1_read_address = uses_rs1 ? rs1 : 5'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 64:35]
  assign io_regs_reg2_read_address = uses_rs2 ? rs2 : 5'h0; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 65:35]
  assign io_ex_immediate = 7'h6f == opcode ? _io_ex_immediate_T_36 : _io_ex_immediate_T_50; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 69:4]
  assign io_ex_aluop1_source = opcode == 7'h17 | _uses_rs1_T_7 | opcode == 7'h6f; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 94:68]
  assign io_ex_aluop2_source = _uses_rs1_T ? 1'h0 : 1'h1; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 98:29]
  assign io_ex_memory_read_enable = opcode == 7'h3; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 103:39]
  assign io_ex_memory_write_enable = opcode == 7'h23; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 104:39]
  assign io_ex_reg_write_source = _io_ex_immediate_T_41 ? 2'h3 : _io_ex_reg_write_source_T_5; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 108:4]
  assign io_ex_reg_write_enable = _io_ex_reg_write_enable_T_10 | _uses_rs1_T_9 | _csr_uses_uimm_T; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 118:69]
  assign io_ex_reg_write_address = io_instruction[11:7]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 119:44]
  assign io_ex_csr_address = io_instruction[31:20]; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 120:44]
  assign io_ex_csr_write_enable = _csr_uses_uimm_T & _io_ex_csr_write_enable_T_11; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 121:59]
  assign io_ctrl_jump_instruction = _io_ctrl_jump_instruction_T_2 | _uses_rs1_T_7; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 146:36]
  assign io_clint_jump_flag = io_ctrl_jump_instruction; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 187:22]
  assign io_clint_jump_address = _io_ex_immediate_T_41 ? jalr_target : _io_if_jump_address_T_7; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 191:4]
  assign io_if_jump_flag = branch_taken | io_interrupt_assert; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 172:35]
  assign io_if_jump_address = io_interrupt_assert ? io_interrupt_handler_address : _io_if_jump_address_T_9; // @[4-soc/src/main/scala/riscv/core/InstructionDecode.scala 176:28]
endmodule
module PipelineRegister_7(
  input        clock,
  input        reset,
  input        io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input        io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [4:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [4:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [4:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [4:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 5'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 5'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 5'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 5'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[4:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineRegister_11(
  input        clock,
  input        reset,
  input        io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input        io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [1:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [1:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [1:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 2'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 2'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 2'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 2'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineRegister_18(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input         io_flush, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [11:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [11:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [11:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [11:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 12'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      myreg <= 12'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 12'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_flush) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 19:18]
      out <= 12'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 20:11]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[11:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[11:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ID2EX(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_flush, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [31:0] io_instruction, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [4:0]  io_regs_reg1_read_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [4:0]  io_regs_reg2_read_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_regs_write_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [4:0]  io_regs_write_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [1:0]  io_regs_write_source, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [31:0] io_reg1_data, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [31:0] io_reg2_data, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [31:0] io_immediate, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_aluop1_source, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_aluop2_source, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_csr_write_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [11:0] io_csr_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_memory_read_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input         io_memory_write_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  input  [31:0] io_csr_read_data, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [31:0] io_output_instruction, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [31:0] io_output_instruction_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [4:0]  io_output_regs_reg1_read_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [4:0]  io_output_regs_reg2_read_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output        io_output_regs_write_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [4:0]  io_output_regs_write_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [1:0]  io_output_regs_write_source, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [31:0] io_output_reg1_data, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [31:0] io_output_reg2_data, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [31:0] io_output_immediate, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output        io_output_aluop1_source, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output        io_output_aluop2_source, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output        io_output_csr_write_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [11:0] io_output_csr_address, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output        io_output_memory_read_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output        io_output_memory_write_enable, // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
  output [31:0] io_output_csr_read_data // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 12:14]
);
  wire  instruction_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
  wire  instruction_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
  wire  instruction_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
  wire  instruction_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
  wire [31:0] instruction_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
  wire [31:0] instruction_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
  wire  instruction_address_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
  wire  instruction_address_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
  wire  instruction_address_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
  wire  instruction_address_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
  wire [31:0] instruction_address_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
  wire [31:0] instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
  wire  regs_reg1_read_address_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
  wire  regs_reg1_read_address_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
  wire  regs_reg1_read_address_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
  wire  regs_reg1_read_address_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
  wire [4:0] regs_reg1_read_address_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
  wire [4:0] regs_reg1_read_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
  wire  regs_reg2_read_address_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
  wire  regs_reg2_read_address_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
  wire  regs_reg2_read_address_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
  wire  regs_reg2_read_address_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
  wire [4:0] regs_reg2_read_address_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
  wire [4:0] regs_reg2_read_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
  wire  regs_write_enable_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
  wire  regs_write_enable_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
  wire  regs_write_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
  wire  regs_write_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
  wire  regs_write_enable_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
  wire  regs_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
  wire  regs_write_address_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
  wire  regs_write_address_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
  wire  regs_write_address_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
  wire  regs_write_address_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
  wire [4:0] regs_write_address_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
  wire [4:0] regs_write_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
  wire  regs_write_source_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
  wire  regs_write_source_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
  wire  regs_write_source_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
  wire  regs_write_source_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
  wire [1:0] regs_write_source_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
  wire [1:0] regs_write_source_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
  wire  reg1_data_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
  wire  reg1_data_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
  wire  reg1_data_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
  wire  reg1_data_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
  wire [31:0] reg1_data_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
  wire [31:0] reg1_data_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
  wire  reg2_data_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
  wire  reg2_data_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
  wire  reg2_data_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
  wire  reg2_data_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
  wire [31:0] reg2_data_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
  wire [31:0] reg2_data_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
  wire  immediate_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
  wire  immediate_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
  wire  immediate_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
  wire  immediate_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
  wire [31:0] immediate_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
  wire [31:0] immediate_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
  wire  aluop1_source_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
  wire  aluop1_source_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
  wire  aluop1_source_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
  wire  aluop1_source_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
  wire  aluop1_source_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
  wire  aluop1_source_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
  wire  aluop2_source_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
  wire  aluop2_source_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
  wire  aluop2_source_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
  wire  aluop2_source_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
  wire  aluop2_source_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
  wire  aluop2_source_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
  wire  csr_write_enable_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
  wire  csr_write_enable_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
  wire  csr_write_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
  wire  csr_write_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
  wire  csr_write_enable_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
  wire  csr_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
  wire  csr_address_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
  wire  csr_address_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
  wire  csr_address_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
  wire  csr_address_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
  wire [11:0] csr_address_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
  wire [11:0] csr_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
  wire  memory_read_enable_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
  wire  memory_read_enable_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
  wire  memory_read_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
  wire  memory_read_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
  wire  memory_read_enable_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
  wire  memory_read_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
  wire  memory_write_enable_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
  wire  memory_write_enable_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
  wire  memory_write_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
  wire  memory_write_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
  wire  memory_write_enable_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
  wire  memory_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
  wire  csr_read_data_clock; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
  wire  csr_read_data_reset; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
  wire  csr_read_data_io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
  wire  csr_read_data_io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
  wire [31:0] csr_read_data_io_in; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
  wire [31:0] csr_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
  PipelineRegister instruction ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 53:27]
    .clock(instruction_clock),
    .reset(instruction_reset),
    .io_stall(instruction_io_stall),
    .io_flush(instruction_io_flush),
    .io_in(instruction_io_in),
    .io_out(instruction_io_out)
  );
  PipelineRegister_1 instruction_address ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 59:35]
    .clock(instruction_address_clock),
    .reset(instruction_address_reset),
    .io_stall(instruction_address_io_stall),
    .io_flush(instruction_address_io_flush),
    .io_in(instruction_address_io_in),
    .io_out(instruction_address_io_out)
  );
  PipelineRegister_7 regs_reg1_read_address ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 65:38]
    .clock(regs_reg1_read_address_clock),
    .reset(regs_reg1_read_address_reset),
    .io_stall(regs_reg1_read_address_io_stall),
    .io_flush(regs_reg1_read_address_io_flush),
    .io_in(regs_reg1_read_address_io_in),
    .io_out(regs_reg1_read_address_io_out)
  );
  PipelineRegister_7 regs_reg2_read_address ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 71:38]
    .clock(regs_reg2_read_address_clock),
    .reset(regs_reg2_read_address_reset),
    .io_stall(regs_reg2_read_address_io_stall),
    .io_flush(regs_reg2_read_address_io_flush),
    .io_in(regs_reg2_read_address_io_in),
    .io_out(regs_reg2_read_address_io_out)
  );
  PipelineRegister_3 regs_write_enable ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 77:33]
    .clock(regs_write_enable_clock),
    .reset(regs_write_enable_reset),
    .io_stall(regs_write_enable_io_stall),
    .io_flush(regs_write_enable_io_flush),
    .io_in(regs_write_enable_io_in),
    .io_out(regs_write_enable_io_out)
  );
  PipelineRegister_7 regs_write_address ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 83:34]
    .clock(regs_write_address_clock),
    .reset(regs_write_address_reset),
    .io_stall(regs_write_address_io_stall),
    .io_flush(regs_write_address_io_flush),
    .io_in(regs_write_address_io_in),
    .io_out(regs_write_address_io_out)
  );
  PipelineRegister_11 regs_write_source ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 89:33]
    .clock(regs_write_source_clock),
    .reset(regs_write_source_reset),
    .io_stall(regs_write_source_io_stall),
    .io_flush(regs_write_source_io_flush),
    .io_in(regs_write_source_io_in),
    .io_out(regs_write_source_io_out)
  );
  PipelineRegister_2 reg1_data ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 95:25]
    .clock(reg1_data_clock),
    .reset(reg1_data_reset),
    .io_stall(reg1_data_io_stall),
    .io_flush(reg1_data_io_flush),
    .io_in(reg1_data_io_in),
    .io_out(reg1_data_io_out)
  );
  PipelineRegister_2 reg2_data ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 101:25]
    .clock(reg2_data_clock),
    .reset(reg2_data_reset),
    .io_stall(reg2_data_io_stall),
    .io_flush(reg2_data_io_flush),
    .io_in(reg2_data_io_in),
    .io_out(reg2_data_io_out)
  );
  PipelineRegister_2 immediate ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 107:25]
    .clock(immediate_clock),
    .reset(immediate_reset),
    .io_stall(immediate_io_stall),
    .io_flush(immediate_io_flush),
    .io_in(immediate_io_in),
    .io_out(immediate_io_out)
  );
  PipelineRegister_3 aluop1_source ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 113:29]
    .clock(aluop1_source_clock),
    .reset(aluop1_source_reset),
    .io_stall(aluop1_source_io_stall),
    .io_flush(aluop1_source_io_flush),
    .io_in(aluop1_source_io_in),
    .io_out(aluop1_source_io_out)
  );
  PipelineRegister_3 aluop2_source ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 119:29]
    .clock(aluop2_source_clock),
    .reset(aluop2_source_reset),
    .io_stall(aluop2_source_io_stall),
    .io_flush(aluop2_source_io_flush),
    .io_in(aluop2_source_io_in),
    .io_out(aluop2_source_io_out)
  );
  PipelineRegister_3 csr_write_enable ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 125:32]
    .clock(csr_write_enable_clock),
    .reset(csr_write_enable_reset),
    .io_stall(csr_write_enable_io_stall),
    .io_flush(csr_write_enable_io_flush),
    .io_in(csr_write_enable_io_in),
    .io_out(csr_write_enable_io_out)
  );
  PipelineRegister_18 csr_address ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 131:27]
    .clock(csr_address_clock),
    .reset(csr_address_reset),
    .io_stall(csr_address_io_stall),
    .io_flush(csr_address_io_flush),
    .io_in(csr_address_io_in),
    .io_out(csr_address_io_out)
  );
  PipelineRegister_3 memory_read_enable ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 137:34]
    .clock(memory_read_enable_clock),
    .reset(memory_read_enable_reset),
    .io_stall(memory_read_enable_io_stall),
    .io_flush(memory_read_enable_io_flush),
    .io_in(memory_read_enable_io_in),
    .io_out(memory_read_enable_io_out)
  );
  PipelineRegister_3 memory_write_enable ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 143:35]
    .clock(memory_write_enable_clock),
    .reset(memory_write_enable_reset),
    .io_stall(memory_write_enable_io_stall),
    .io_flush(memory_write_enable_io_flush),
    .io_in(memory_write_enable_io_in),
    .io_out(memory_write_enable_io_out)
  );
  PipelineRegister_2 csr_read_data ( // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 149:29]
    .clock(csr_read_data_clock),
    .reset(csr_read_data_reset),
    .io_stall(csr_read_data_io_stall),
    .io_flush(csr_read_data_io_flush),
    .io_in(csr_read_data_io_in),
    .io_out(csr_read_data_io_out)
  );
  assign io_output_instruction = instruction_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 57:25]
  assign io_output_instruction_address = instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 63:33]
  assign io_output_regs_reg1_read_address = regs_reg1_read_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 69:36]
  assign io_output_regs_reg2_read_address = regs_reg2_read_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 75:36]
  assign io_output_regs_write_enable = regs_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 81:31]
  assign io_output_regs_write_address = regs_write_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 87:32]
  assign io_output_regs_write_source = regs_write_source_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 93:31]
  assign io_output_reg1_data = reg1_data_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 99:23]
  assign io_output_reg2_data = reg2_data_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 105:23]
  assign io_output_immediate = immediate_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 111:23]
  assign io_output_aluop1_source = aluop1_source_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 117:27]
  assign io_output_aluop2_source = aluop2_source_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 123:27]
  assign io_output_csr_write_enable = csr_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 129:30]
  assign io_output_csr_address = csr_address_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 135:25]
  assign io_output_memory_read_enable = memory_read_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 141:32]
  assign io_output_memory_write_enable = memory_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 147:33]
  assign io_output_csr_read_data = csr_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 153:27]
  assign instruction_clock = clock;
  assign instruction_reset = reset;
  assign instruction_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 55:25]
  assign instruction_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 56:25]
  assign instruction_io_in = io_instruction; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 54:25]
  assign instruction_address_clock = clock;
  assign instruction_address_reset = reset;
  assign instruction_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 61:33]
  assign instruction_address_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 62:33]
  assign instruction_address_io_in = io_instruction_address; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 60:33]
  assign regs_reg1_read_address_clock = clock;
  assign regs_reg1_read_address_reset = reset;
  assign regs_reg1_read_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 67:36]
  assign regs_reg1_read_address_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 68:36]
  assign regs_reg1_read_address_io_in = io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 66:36]
  assign regs_reg2_read_address_clock = clock;
  assign regs_reg2_read_address_reset = reset;
  assign regs_reg2_read_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 73:36]
  assign regs_reg2_read_address_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 74:36]
  assign regs_reg2_read_address_io_in = io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 72:36]
  assign regs_write_enable_clock = clock;
  assign regs_write_enable_reset = reset;
  assign regs_write_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 79:31]
  assign regs_write_enable_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 80:31]
  assign regs_write_enable_io_in = io_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 78:31]
  assign regs_write_address_clock = clock;
  assign regs_write_address_reset = reset;
  assign regs_write_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 85:32]
  assign regs_write_address_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 86:32]
  assign regs_write_address_io_in = io_regs_write_address; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 84:32]
  assign regs_write_source_clock = clock;
  assign regs_write_source_reset = reset;
  assign regs_write_source_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 91:31]
  assign regs_write_source_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 92:31]
  assign regs_write_source_io_in = io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 90:31]
  assign reg1_data_clock = clock;
  assign reg1_data_reset = reset;
  assign reg1_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 97:23]
  assign reg1_data_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 98:23]
  assign reg1_data_io_in = io_reg1_data; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 96:23]
  assign reg2_data_clock = clock;
  assign reg2_data_reset = reset;
  assign reg2_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 103:23]
  assign reg2_data_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 104:23]
  assign reg2_data_io_in = io_reg2_data; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 102:23]
  assign immediate_clock = clock;
  assign immediate_reset = reset;
  assign immediate_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 109:23]
  assign immediate_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 110:23]
  assign immediate_io_in = io_immediate; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 108:23]
  assign aluop1_source_clock = clock;
  assign aluop1_source_reset = reset;
  assign aluop1_source_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 115:27]
  assign aluop1_source_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 116:27]
  assign aluop1_source_io_in = io_aluop1_source; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 114:27]
  assign aluop2_source_clock = clock;
  assign aluop2_source_reset = reset;
  assign aluop2_source_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 121:27]
  assign aluop2_source_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 122:27]
  assign aluop2_source_io_in = io_aluop2_source; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 120:27]
  assign csr_write_enable_clock = clock;
  assign csr_write_enable_reset = reset;
  assign csr_write_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 127:30]
  assign csr_write_enable_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 128:30]
  assign csr_write_enable_io_in = io_csr_write_enable; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 126:30]
  assign csr_address_clock = clock;
  assign csr_address_reset = reset;
  assign csr_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 133:25]
  assign csr_address_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 134:25]
  assign csr_address_io_in = io_csr_address; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 132:25]
  assign memory_read_enable_clock = clock;
  assign memory_read_enable_reset = reset;
  assign memory_read_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 139:32]
  assign memory_read_enable_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 140:32]
  assign memory_read_enable_io_in = io_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 138:32]
  assign memory_write_enable_clock = clock;
  assign memory_write_enable_reset = reset;
  assign memory_write_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 145:33]
  assign memory_write_enable_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 146:33]
  assign memory_write_enable_io_in = io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 144:33]
  assign csr_read_data_clock = clock;
  assign csr_read_data_reset = reset;
  assign csr_read_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 151:27]
  assign csr_read_data_io_flush = io_flush; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 152:27]
  assign csr_read_data_io_in = io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/ID2EX.scala 150:27]
endmodule
module ALU(
  input  [3:0]  io_func, // @[4-soc/src/main/scala/riscv/core/ALU.scala 27:14]
  input  [31:0] io_op1, // @[4-soc/src/main/scala/riscv/core/ALU.scala 27:14]
  input  [31:0] io_op2, // @[4-soc/src/main/scala/riscv/core/ALU.scala 27:14]
  output [31:0] io_result // @[4-soc/src/main/scala/riscv/core/ALU.scala 27:14]
);
  wire [31:0] _io_result_T_1 = io_op1 + io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 39:27]
  wire [31:0] _io_result_T_3 = io_op1 - io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 42:27]
  wire [62:0] _GEN_10 = {{31'd0}, io_op1}; // @[4-soc/src/main/scala/riscv/core/ALU.scala 45:27]
  wire [62:0] _io_result_T_5 = _GEN_10 << io_op2[4:0]; // @[4-soc/src/main/scala/riscv/core/ALU.scala 45:27]
  wire [31:0] _io_result_T_6 = io_op1; // @[4-soc/src/main/scala/riscv/core/ALU.scala 48:27]
  wire [31:0] _io_result_T_7 = io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 48:43]
  wire [31:0] _io_result_T_9 = io_op1 ^ io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 51:27]
  wire [31:0] _io_result_T_10 = io_op1 | io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 54:27]
  wire [31:0] _io_result_T_11 = io_op1 & io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 57:27]
  wire [31:0] _io_result_T_13 = io_op1 >> io_op2[4:0]; // @[4-soc/src/main/scala/riscv/core/ALU.scala 60:27]
  wire [31:0] _io_result_T_17 = $signed(io_op1) >>> io_op2[4:0]; // @[4-soc/src/main/scala/riscv/core/ALU.scala 63:52]
  wire  _GEN_0 = 4'ha == io_func & io_op1 < io_op2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 36:13 37:19 66:17]
  wire [31:0] _GEN_1 = 4'h9 == io_func ? _io_result_T_17 : {{31'd0}, _GEN_0}; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 63:17]
  wire [31:0] _GEN_2 = 4'h8 == io_func ? _io_result_T_13 : _GEN_1; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 60:17]
  wire [31:0] _GEN_3 = 4'h7 == io_func ? _io_result_T_11 : _GEN_2; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 57:17]
  wire [31:0] _GEN_4 = 4'h6 == io_func ? _io_result_T_10 : _GEN_3; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 54:17]
  wire [31:0] _GEN_5 = 4'h5 == io_func ? _io_result_T_9 : _GEN_4; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 51:17]
  wire [31:0] _GEN_6 = 4'h4 == io_func ? {{31'd0}, $signed(_io_result_T_6) < $signed(_io_result_T_7)} : _GEN_5; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 48:17]
  wire [62:0] _GEN_7 = 4'h3 == io_func ? _io_result_T_5 : {{31'd0}, _GEN_6}; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 45:17]
  wire [62:0] _GEN_8 = 4'h2 == io_func ? {{31'd0}, _io_result_T_3} : _GEN_7; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 42:17]
  wire [62:0] _GEN_9 = 4'h1 == io_func ? {{31'd0}, _io_result_T_1} : _GEN_8; // @[4-soc/src/main/scala/riscv/core/ALU.scala 37:19 39:17]
  assign io_result = _GEN_9[31:0];
endmodule
module ALUControl(
  input  [6:0] io_opcode, // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 15:14]
  input  [2:0] io_funct3, // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 15:14]
  input  [6:0] io_funct7, // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 15:14]
  output [3:0] io_alu_funct // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 15:14]
);
  wire [3:0] _io_alu_funct_T_1 = io_funct7[5] ? 4'h9 : 4'h8; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 39:41]
  wire  _io_alu_funct_T_2 = 3'h1 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [1:0] _io_alu_funct_T_3 = 3'h1 == io_funct3 ? 2'h3 : 2'h1; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire  _io_alu_funct_T_4 = 3'h2 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [2:0] _io_alu_funct_T_5 = 3'h2 == io_funct3 ? 3'h4 : {{1'd0}, _io_alu_funct_T_3}; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire  _io_alu_funct_T_6 = 3'h3 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [3:0] _io_alu_funct_T_7 = 3'h3 == io_funct3 ? 4'ha : {{1'd0}, _io_alu_funct_T_5}; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire  _io_alu_funct_T_8 = 3'h4 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [3:0] _io_alu_funct_T_9 = 3'h4 == io_funct3 ? 4'h5 : _io_alu_funct_T_7; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire  _io_alu_funct_T_10 = 3'h6 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [3:0] _io_alu_funct_T_11 = 3'h6 == io_funct3 ? 4'h6 : _io_alu_funct_T_9; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire  _io_alu_funct_T_12 = 3'h7 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [3:0] _io_alu_funct_T_13 = 3'h7 == io_funct3 ? 4'h7 : _io_alu_funct_T_11; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire  _io_alu_funct_T_14 = 3'h5 == io_funct3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [3:0] _io_alu_funct_T_15 = 3'h5 == io_funct3 ? _io_alu_funct_T_1 : _io_alu_funct_T_13; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 30:8]
  wire [1:0] _io_alu_funct_T_17 = io_funct7[5] ? 2'h2 : 2'h1; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 49:43]
  wire [1:0] _io_alu_funct_T_21 = _io_alu_funct_T_2 ? 2'h3 : _io_alu_funct_T_17; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire [2:0] _io_alu_funct_T_23 = _io_alu_funct_T_4 ? 3'h4 : {{1'd0}, _io_alu_funct_T_21}; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire [3:0] _io_alu_funct_T_25 = _io_alu_funct_T_6 ? 4'ha : {{1'd0}, _io_alu_funct_T_23}; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire [3:0] _io_alu_funct_T_27 = _io_alu_funct_T_8 ? 4'h5 : _io_alu_funct_T_25; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire [3:0] _io_alu_funct_T_29 = _io_alu_funct_T_10 ? 4'h6 : _io_alu_funct_T_27; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire [3:0] _io_alu_funct_T_31 = _io_alu_funct_T_12 ? 4'h7 : _io_alu_funct_T_29; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire [3:0] _io_alu_funct_T_33 = _io_alu_funct_T_14 ? _io_alu_funct_T_1 : _io_alu_funct_T_31; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 47:8]
  wire  _GEN_1 = 7'h37 == io_opcode | 7'h17 == io_opcode; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 76:20]
  wire  _GEN_2 = 7'h67 == io_opcode | _GEN_1; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 73:20]
  wire  _GEN_3 = 7'h6f == io_opcode | _GEN_2; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 70:20]
  wire  _GEN_4 = 7'h23 == io_opcode | _GEN_3; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 67:20]
  wire  _GEN_5 = 7'h3 == io_opcode | _GEN_4; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 64:20]
  wire  _GEN_6 = 7'h63 == io_opcode | _GEN_5; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 61:20]
  wire [3:0] _GEN_7 = 7'h33 == io_opcode ? _io_alu_funct_T_33 : {{3'd0}, _GEN_6}; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 44:20]
  assign io_alu_funct = 7'h13 == io_opcode ? _io_alu_funct_T_15 : _GEN_7; // @[4-soc/src/main/scala/riscv/core/ALUControl.scala 25:21 27:20]
endmodule
module Execute(
  input  [31:0] io_instruction, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_reg1_data, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_reg2_data, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_immediate, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input         io_aluop1_source, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input         io_aluop2_source, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_csr_read_data, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_forward_from_mem, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [31:0] io_forward_from_wb, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [1:0]  io_reg1_forward, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  input  [1:0]  io_reg2_forward, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  output [31:0] io_mem_alu_result, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  output [31:0] io_mem_reg2_data, // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
  output [31:0] io_csr_write_data // @[4-soc/src/main/scala/riscv/core/Execute.scala 14:14]
);
  wire [3:0] alu_io_func; // @[4-soc/src/main/scala/riscv/core/Execute.scala 38:24]
  wire [31:0] alu_io_op1; // @[4-soc/src/main/scala/riscv/core/Execute.scala 38:24]
  wire [31:0] alu_io_op2; // @[4-soc/src/main/scala/riscv/core/Execute.scala 38:24]
  wire [31:0] alu_io_result; // @[4-soc/src/main/scala/riscv/core/Execute.scala 38:24]
  wire [6:0] alu_ctrl_io_opcode; // @[4-soc/src/main/scala/riscv/core/Execute.scala 39:24]
  wire [2:0] alu_ctrl_io_funct3; // @[4-soc/src/main/scala/riscv/core/Execute.scala 39:24]
  wire [6:0] alu_ctrl_io_funct7; // @[4-soc/src/main/scala/riscv/core/Execute.scala 39:24]
  wire [3:0] alu_ctrl_io_alu_funct; // @[4-soc/src/main/scala/riscv/core/Execute.scala 39:24]
  wire [2:0] funct3 = io_instruction[14:12]; // @[4-soc/src/main/scala/riscv/core/Execute.scala 34:30]
  wire [4:0] uimm = io_instruction[19:15]; // @[4-soc/src/main/scala/riscv/core/Execute.scala 36:30]
  wire [31:0] _reg1_data_T_1 = 2'h1 == io_reg1_forward ? io_forward_from_mem : io_reg1_data; // @[4-soc/src/main/scala/riscv/core/Execute.scala 49:4]
  wire [31:0] reg1_data = 2'h2 == io_reg1_forward ? io_forward_from_wb : _reg1_data_T_1; // @[4-soc/src/main/scala/riscv/core/Execute.scala 49:4]
  wire [31:0] _reg2_data_T_1 = 2'h1 == io_reg2_forward ? io_forward_from_mem : io_reg2_data; // @[4-soc/src/main/scala/riscv/core/Execute.scala 64:4]
  wire [31:0] reg2_data = 2'h2 == io_reg2_forward ? io_forward_from_wb : _reg2_data_T_1; // @[4-soc/src/main/scala/riscv/core/Execute.scala 64:4]
  wire [31:0] _io_csr_write_data_T = ~reg1_data; // @[4-soc/src/main/scala/riscv/core/Execute.scala 83:57]
  wire [31:0] _io_csr_write_data_T_1 = io_csr_read_data & _io_csr_write_data_T; // @[4-soc/src/main/scala/riscv/core/Execute.scala 83:55]
  wire [31:0] _io_csr_write_data_T_2 = io_csr_read_data | reg1_data; // @[4-soc/src/main/scala/riscv/core/Execute.scala 84:55]
  wire [31:0] _io_csr_write_data_T_3 = {27'h0,uimm}; // @[4-soc/src/main/scala/riscv/core/Execute.scala 85:40]
  wire [31:0] _io_csr_write_data_T_5 = ~_io_csr_write_data_T_3; // @[4-soc/src/main/scala/riscv/core/Execute.scala 86:57]
  wire [31:0] _io_csr_write_data_T_6 = io_csr_read_data & _io_csr_write_data_T_5; // @[4-soc/src/main/scala/riscv/core/Execute.scala 86:55]
  wire [31:0] _io_csr_write_data_T_8 = io_csr_read_data | _io_csr_write_data_T_3; // @[4-soc/src/main/scala/riscv/core/Execute.scala 87:55]
  wire [31:0] _io_csr_write_data_T_10 = 3'h1 == funct3 ? reg1_data : 32'h0; // @[4-soc/src/main/scala/riscv/core/Execute.scala 80:4]
  wire [31:0] _io_csr_write_data_T_12 = 3'h3 == funct3 ? _io_csr_write_data_T_1 : _io_csr_write_data_T_10; // @[4-soc/src/main/scala/riscv/core/Execute.scala 80:4]
  wire [31:0] _io_csr_write_data_T_14 = 3'h2 == funct3 ? _io_csr_write_data_T_2 : _io_csr_write_data_T_12; // @[4-soc/src/main/scala/riscv/core/Execute.scala 80:4]
  wire [31:0] _io_csr_write_data_T_16 = 3'h5 == funct3 ? _io_csr_write_data_T_3 : _io_csr_write_data_T_14; // @[4-soc/src/main/scala/riscv/core/Execute.scala 80:4]
  wire [31:0] _io_csr_write_data_T_18 = 3'h7 == funct3 ? _io_csr_write_data_T_6 : _io_csr_write_data_T_16; // @[4-soc/src/main/scala/riscv/core/Execute.scala 80:4]
  ALU alu ( // @[4-soc/src/main/scala/riscv/core/Execute.scala 38:24]
    .io_func(alu_io_func),
    .io_op1(alu_io_op1),
    .io_op2(alu_io_op2),
    .io_result(alu_io_result)
  );
  ALUControl alu_ctrl ( // @[4-soc/src/main/scala/riscv/core/Execute.scala 39:24]
    .io_opcode(alu_ctrl_io_opcode),
    .io_funct3(alu_ctrl_io_funct3),
    .io_funct7(alu_ctrl_io_funct7),
    .io_alu_funct(alu_ctrl_io_alu_funct)
  );
  assign io_mem_alu_result = alu_io_result; // @[4-soc/src/main/scala/riscv/core/Execute.scala 75:21]
  assign io_mem_reg2_data = 2'h2 == io_reg2_forward ? io_forward_from_wb : _reg2_data_T_1; // @[4-soc/src/main/scala/riscv/core/Execute.scala 64:4]
  assign io_csr_write_data = 3'h6 == funct3 ? _io_csr_write_data_T_8 : _io_csr_write_data_T_18; // @[4-soc/src/main/scala/riscv/core/Execute.scala 80:4]
  assign alu_io_func = alu_ctrl_io_alu_funct; // @[4-soc/src/main/scala/riscv/core/Execute.scala 44:22]
  assign alu_io_op1 = io_aluop1_source ? io_instruction_address : reg1_data; // @[4-soc/src/main/scala/riscv/core/Execute.scala 55:20]
  assign alu_io_op2 = io_aluop2_source ? io_immediate : reg2_data; // @[4-soc/src/main/scala/riscv/core/Execute.scala 70:20]
  assign alu_ctrl_io_opcode = io_instruction[6:0]; // @[4-soc/src/main/scala/riscv/core/Execute.scala 33:30]
  assign alu_ctrl_io_funct3 = io_instruction[14:12]; // @[4-soc/src/main/scala/riscv/core/Execute.scala 34:30]
  assign alu_ctrl_io_funct7 = io_instruction[31:25]; // @[4-soc/src/main/scala/riscv/core/Execute.scala 35:30]
endmodule
module PipelineRegister_26(
  input        clock,
  input        reset,
  input        io_stall, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  input  [2:0] io_in, // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
  output [2:0] io_out // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 11:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
  reg [2:0] out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
  assign io_out = out; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 30:10]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
      myreg <= 3'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 17:22]
    end else if (!(io_stall)) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      myreg <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
      out <= 3'h0; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 18:22]
    end else if (io_stall) begin // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 23:25]
      out <= myreg; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 24:11]
    end else begin
      out <= io_in; // @[4-soc/src/main/scala/riscv/core/PipelineRegister.scala 28:13]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  myreg = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  out = _RAND_1[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EX2MEM(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input         io_regs_write_enable, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [1:0]  io_regs_write_source, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [31:0] io_regs_write_address, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [2:0]  io_funct3, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [31:0] io_reg2_data, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input         io_memory_read_enable, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input         io_memory_write_enable, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [31:0] io_alu_result, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  input  [31:0] io_csr_read_data, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output        io_output_regs_write_enable, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [1:0]  io_output_regs_write_source, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [31:0] io_output_regs_write_address, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [31:0] io_output_instruction_address, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [31:0] io_output_funct3, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [31:0] io_output_reg2_data, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output        io_output_memory_read_enable, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output        io_output_memory_write_enable, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [31:0] io_output_alu_result, // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
  output [31:0] io_output_csr_read_data // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 12:14]
);
  wire  regs_write_enable_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
  wire  regs_write_enable_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
  wire  regs_write_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
  wire  regs_write_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
  wire  regs_write_enable_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
  wire  regs_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
  wire  regs_write_source_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
  wire  regs_write_source_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
  wire  regs_write_source_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
  wire  regs_write_source_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
  wire [1:0] regs_write_source_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
  wire [1:0] regs_write_source_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
  wire  regs_write_address_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
  wire  regs_write_address_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
  wire  regs_write_address_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
  wire  regs_write_address_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
  wire [4:0] regs_write_address_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
  wire [4:0] regs_write_address_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
  wire  instruction_address_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
  wire  instruction_address_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
  wire  instruction_address_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
  wire  instruction_address_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
  wire [31:0] instruction_address_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
  wire [31:0] instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
  wire  funct3_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 64:22]
  wire  funct3_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 64:22]
  wire  funct3_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 64:22]
  wire [2:0] funct3_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 64:22]
  wire [2:0] funct3_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 64:22]
  wire  reg2_data_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
  wire  reg2_data_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
  wire  reg2_data_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
  wire  reg2_data_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
  wire [31:0] reg2_data_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
  wire [31:0] reg2_data_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
  wire  alu_result_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
  wire  alu_result_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
  wire  alu_result_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
  wire  alu_result_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
  wire [31:0] alu_result_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
  wire [31:0] alu_result_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
  wire  memory_read_enable_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
  wire  memory_read_enable_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
  wire  memory_read_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
  wire  memory_read_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
  wire  memory_read_enable_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
  wire  memory_read_enable_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
  wire  memory_write_enable_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
  wire  memory_write_enable_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
  wire  memory_write_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
  wire  memory_write_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
  wire  memory_write_enable_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
  wire  memory_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
  wire  csr_read_data_clock; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
  wire  csr_read_data_reset; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
  wire  csr_read_data_io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
  wire  csr_read_data_io_flush; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
  wire [31:0] csr_read_data_io_in; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
  wire [31:0] csr_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
  PipelineRegister_3 regs_write_enable ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 40:33]
    .clock(regs_write_enable_clock),
    .reset(regs_write_enable_reset),
    .io_stall(regs_write_enable_io_stall),
    .io_flush(regs_write_enable_io_flush),
    .io_in(regs_write_enable_io_in),
    .io_out(regs_write_enable_io_out)
  );
  PipelineRegister_11 regs_write_source ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 46:33]
    .clock(regs_write_source_clock),
    .reset(regs_write_source_reset),
    .io_stall(regs_write_source_io_stall),
    .io_flush(regs_write_source_io_flush),
    .io_in(regs_write_source_io_in),
    .io_out(regs_write_source_io_out)
  );
  PipelineRegister_7 regs_write_address ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 52:34]
    .clock(regs_write_address_clock),
    .reset(regs_write_address_reset),
    .io_stall(regs_write_address_io_stall),
    .io_flush(regs_write_address_io_flush),
    .io_in(regs_write_address_io_in),
    .io_out(regs_write_address_io_out)
  );
  PipelineRegister_2 instruction_address ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 58:35]
    .clock(instruction_address_clock),
    .reset(instruction_address_reset),
    .io_stall(instruction_address_io_stall),
    .io_flush(instruction_address_io_flush),
    .io_in(instruction_address_io_in),
    .io_out(instruction_address_io_out)
  );
  PipelineRegister_26 funct3 ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 64:22]
    .clock(funct3_clock),
    .reset(funct3_reset),
    .io_stall(funct3_io_stall),
    .io_in(funct3_io_in),
    .io_out(funct3_io_out)
  );
  PipelineRegister_2 reg2_data ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 70:25]
    .clock(reg2_data_clock),
    .reset(reg2_data_reset),
    .io_stall(reg2_data_io_stall),
    .io_flush(reg2_data_io_flush),
    .io_in(reg2_data_io_in),
    .io_out(reg2_data_io_out)
  );
  PipelineRegister_2 alu_result ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 76:26]
    .clock(alu_result_clock),
    .reset(alu_result_reset),
    .io_stall(alu_result_io_stall),
    .io_flush(alu_result_io_flush),
    .io_in(alu_result_io_in),
    .io_out(alu_result_io_out)
  );
  PipelineRegister_3 memory_read_enable ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 82:34]
    .clock(memory_read_enable_clock),
    .reset(memory_read_enable_reset),
    .io_stall(memory_read_enable_io_stall),
    .io_flush(memory_read_enable_io_flush),
    .io_in(memory_read_enable_io_in),
    .io_out(memory_read_enable_io_out)
  );
  PipelineRegister_3 memory_write_enable ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 88:35]
    .clock(memory_write_enable_clock),
    .reset(memory_write_enable_reset),
    .io_stall(memory_write_enable_io_stall),
    .io_flush(memory_write_enable_io_flush),
    .io_in(memory_write_enable_io_in),
    .io_out(memory_write_enable_io_out)
  );
  PipelineRegister_2 csr_read_data ( // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 94:29]
    .clock(csr_read_data_clock),
    .reset(csr_read_data_reset),
    .io_stall(csr_read_data_io_stall),
    .io_flush(csr_read_data_io_flush),
    .io_in(csr_read_data_io_in),
    .io_out(csr_read_data_io_out)
  );
  assign io_output_regs_write_enable = regs_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 44:31]
  assign io_output_regs_write_source = regs_write_source_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 50:31]
  assign io_output_regs_write_address = {{27'd0}, regs_write_address_io_out}; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 56:32]
  assign io_output_instruction_address = instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 62:33]
  assign io_output_funct3 = {{29'd0}, funct3_io_out}; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 68:20]
  assign io_output_reg2_data = reg2_data_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 74:23]
  assign io_output_memory_read_enable = memory_read_enable_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 86:32]
  assign io_output_memory_write_enable = memory_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 92:33]
  assign io_output_alu_result = alu_result_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 80:24]
  assign io_output_csr_read_data = csr_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 98:27]
  assign regs_write_enable_clock = clock;
  assign regs_write_enable_reset = reset;
  assign regs_write_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 42:31]
  assign regs_write_enable_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 43:31]
  assign regs_write_enable_io_in = io_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 41:31]
  assign regs_write_source_clock = clock;
  assign regs_write_source_reset = reset;
  assign regs_write_source_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 48:31]
  assign regs_write_source_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 49:31]
  assign regs_write_source_io_in = io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 47:31]
  assign regs_write_address_clock = clock;
  assign regs_write_address_reset = reset;
  assign regs_write_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 54:32]
  assign regs_write_address_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 55:32]
  assign regs_write_address_io_in = io_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 53:32]
  assign instruction_address_clock = clock;
  assign instruction_address_reset = reset;
  assign instruction_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 60:33]
  assign instruction_address_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 61:33]
  assign instruction_address_io_in = io_instruction_address; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 59:33]
  assign funct3_clock = clock;
  assign funct3_reset = reset;
  assign funct3_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 66:20]
  assign funct3_io_in = io_funct3; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 65:20]
  assign reg2_data_clock = clock;
  assign reg2_data_reset = reset;
  assign reg2_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 72:23]
  assign reg2_data_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 73:23]
  assign reg2_data_io_in = io_reg2_data; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 71:23]
  assign alu_result_clock = clock;
  assign alu_result_reset = reset;
  assign alu_result_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 78:24]
  assign alu_result_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 79:24]
  assign alu_result_io_in = io_alu_result; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 77:24]
  assign memory_read_enable_clock = clock;
  assign memory_read_enable_reset = reset;
  assign memory_read_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 84:32]
  assign memory_read_enable_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 85:32]
  assign memory_read_enable_io_in = io_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 83:32]
  assign memory_write_enable_clock = clock;
  assign memory_write_enable_reset = reset;
  assign memory_write_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 90:33]
  assign memory_write_enable_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 91:33]
  assign memory_write_enable_io_in = io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 89:33]
  assign csr_read_data_clock = clock;
  assign csr_read_data_reset = reset;
  assign csr_read_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 96:27]
  assign csr_read_data_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 97:27]
  assign csr_read_data_io_in = io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/EX2MEM.scala 95:27]
endmodule
module MemoryAccess(
  input         clock,
  input         reset,
  input  [31:0] io_alu_result, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input  [31:0] io_reg2_data, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input         io_memory_read_enable, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input         io_memory_write_enable, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input  [2:0]  io_funct3, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input  [1:0]  io_regs_write_source, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input  [31:0] io_csr_read_data, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output [31:0] io_wb_memory_read_data, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output [31:0] io_forward_to_ex, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_ctrl_stall_flag, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output [1:0]  io_wb_regs_write_source, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output [31:0] io_bus_address, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_read, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input  [31:0] io_bus_read_data, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input         io_bus_read_valid, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_write, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output [31:0] io_bus_write_data, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_write_strobe_0, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_write_strobe_1, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_write_strobe_2, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_write_strobe_3, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input         io_bus_write_valid, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  output        io_bus_request, // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
  input         io_bus_granted // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 17:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire [1:0] mem_address_index = io_alu_result[1:0]; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 36:40]
  reg [1:0] mem_access_state; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 37:34]
  reg [31:0] latched_memory_read_data; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 41:41]
  reg [1:0] latched_regs_write_source; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 48:42]
  reg [2:0] latched_funct3; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 49:42]
  reg [1:0] latched_address_index; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 50:42]
  wire  _T_2 = mem_access_state == 2'h1; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:25]
  wire [23:0] _processed_data_T_1 = io_bus_read_data[31] ? 24'hffffff : 24'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 116:21]
  wire [31:0] _processed_data_T_3 = {_processed_data_T_1,io_bus_read_data[31:24]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 116:16]
  wire [23:0] _processed_data_T_5 = io_bus_read_data[7] ? 24'hffffff : 24'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 118:30]
  wire [31:0] _processed_data_T_7 = {_processed_data_T_5,io_bus_read_data[7:0]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 118:25]
  wire [23:0] _processed_data_T_9 = io_bus_read_data[15] ? 24'hffffff : 24'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 119:30]
  wire [31:0] _processed_data_T_11 = {_processed_data_T_9,io_bus_read_data[15:8]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 119:25]
  wire [23:0] _processed_data_T_13 = io_bus_read_data[23] ? 24'hffffff : 24'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 120:30]
  wire [31:0] _processed_data_T_15 = {_processed_data_T_13,io_bus_read_data[23:16]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 120:25]
  wire [31:0] _processed_data_T_17 = 2'h0 == latched_address_index ? _processed_data_T_7 : _processed_data_T_3; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_19 = 2'h1 == latched_address_index ? _processed_data_T_11 : _processed_data_T_17; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_21 = 2'h2 == latched_address_index ? _processed_data_T_15 : _processed_data_T_19; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_24 = {24'h0,io_bus_read_data[31:24]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 125:16]
  wire [31:0] _processed_data_T_27 = {24'h0,io_bus_read_data[7:0]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 127:25]
  wire [31:0] _processed_data_T_30 = {24'h0,io_bus_read_data[15:8]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 128:25]
  wire [31:0] _processed_data_T_33 = {24'h0,io_bus_read_data[23:16]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 129:25]
  wire [31:0] _processed_data_T_35 = 2'h0 == latched_address_index ? _processed_data_T_27 : _processed_data_T_24; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_37 = 2'h1 == latched_address_index ? _processed_data_T_30 : _processed_data_T_35; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_39 = 2'h2 == latched_address_index ? _processed_data_T_33 : _processed_data_T_37; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _processed_data_T_40 = latched_address_index == 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 133:35]
  wire [15:0] _processed_data_T_42 = io_bus_read_data[15] ? 16'hffff : 16'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 134:21]
  wire [31:0] _processed_data_T_44 = {_processed_data_T_42,io_bus_read_data[15:0]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 134:16]
  wire [15:0] _processed_data_T_46 = io_bus_read_data[31] ? 16'hffff : 16'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 135:21]
  wire [31:0] _processed_data_T_48 = {_processed_data_T_46,io_bus_read_data[31:16]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 135:16]
  wire [31:0] _processed_data_T_49 = _processed_data_T_40 ? _processed_data_T_44 : _processed_data_T_48; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 132:38]
  wire [31:0] _processed_data_T_53 = {16'h0,io_bus_read_data[15:0]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 139:16]
  wire [31:0] _processed_data_T_56 = {16'h0,io_bus_read_data[31:16]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 140:16]
  wire [31:0] _processed_data_T_57 = _processed_data_T_40 ? _processed_data_T_53 : _processed_data_T_56; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 137:39]
  wire [31:0] _processed_data_T_59 = 3'h0 == latched_funct3 ? _processed_data_T_21 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_61 = 3'h4 == latched_funct3 ? _processed_data_T_39 : _processed_data_T_59; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_63 = 3'h1 == latched_funct3 ? _processed_data_T_49 : _processed_data_T_61; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _processed_data_T_65 = 3'h5 == latched_funct3 ? _processed_data_T_57 : _processed_data_T_63; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] processed_data = 3'h2 == latched_funct3 ? io_bus_read_data : _processed_data_T_65; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [31:0] _GEN_1 = io_bus_read_valid ? processed_data : latched_memory_read_data; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 105:29 146:32 41:41]
  wire  _GEN_4 = io_bus_read_valid ? 1'h0 : 1'h1; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 104:24 105:29 62:24]
  wire  _GEN_6 = io_bus_write_valid ? 1'h0 : 1'h1; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 164:24 166:30 62:24]
  wire [1:0] _GEN_7 = io_bus_granted ? 2'h1 : mem_access_state; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 182:28 183:26 37:34]
  wire  _GEN_8 = 2'h0 == mem_address_index; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 190:27 192:{48,48}]
  wire  _GEN_9 = 2'h1 == mem_address_index; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 190:27 192:{48,48}]
  wire  _GEN_10 = 2'h2 == mem_address_index; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 190:27 192:{48,48}]
  wire  _GEN_11 = 2'h3 == mem_address_index; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 190:27 192:{48,48}]
  wire [4:0] _io_bus_write_data_T_1 = {mem_address_index, 3'h0}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 194:93]
  wire [38:0] _GEN_0 = {{31'd0}, io_reg2_data[7:0]}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 194:71]
  wire [38:0] _io_bus_write_data_T_2 = _GEN_0 << _io_bus_write_data_T_1; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 194:71]
  wire  _T_6 = mem_address_index == 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 198:32]
  wire [31:0] _io_bus_write_data_T_5 = {io_reg2_data[15:0], 16'h0}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 212:13]
  wire [31:0] _GEN_14 = mem_address_index == 2'h0 ? {{16'd0}, io_reg2_data[15:0]} : _io_bus_write_data_T_5; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 198:41 203:29 209:29]
  wire  _GEN_15 = mem_address_index == 2'h0 ? 1'h0 : 1'h1; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 190:27 198:41 206:36]
  wire  _T_7 = io_funct3 == 3'h2; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 214:28]
  wire  _GEN_21 = io_funct3 == 3'h1 ? _T_6 : _T_7; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 197:54]
  wire [31:0] _GEN_23 = io_funct3 == 3'h1 ? _GEN_14 : io_reg2_data; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 188:27 197:54]
  wire  _GEN_24 = io_funct3 == 3'h1 ? _GEN_15 : _T_7; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 197:54]
  wire  _GEN_26 = io_funct3 == 3'h0 ? _GEN_8 : _GEN_21; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 191:48]
  wire  _GEN_27 = io_funct3 == 3'h0 ? _GEN_9 : _GEN_21; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 191:48]
  wire  _GEN_28 = io_funct3 == 3'h0 ? _GEN_10 : _GEN_24; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 191:48]
  wire  _GEN_29 = io_funct3 == 3'h0 ? _GEN_11 : _GEN_24; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 191:48]
  wire [38:0] _GEN_30 = io_funct3 == 3'h0 ? _io_bus_write_data_T_2 : {{7'd0}, _GEN_23}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 191:48 194:27]
  wire [1:0] _GEN_31 = io_bus_granted ? 2'h2 : mem_access_state; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 220:28 221:26 37:34]
  wire [38:0] _GEN_33 = io_memory_write_enable ? _GEN_30 : 39'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 185:40 78:26]
  wire  _GEN_34 = io_memory_write_enable & _GEN_26; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 185:40 79:26]
  wire  _GEN_35 = io_memory_write_enable & _GEN_27; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 185:40 79:26]
  wire  _GEN_36 = io_memory_write_enable & _GEN_28; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 185:40 79:26]
  wire  _GEN_37 = io_memory_write_enable & _GEN_29; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 185:40 79:26]
  wire [1:0] _GEN_38 = io_memory_write_enable ? _GEN_31 : mem_access_state; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 185:40 37:34]
  wire  _GEN_39 = io_memory_read_enable | io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 173:26]
  wire [38:0] _GEN_45 = io_memory_read_enable ? 39'h0 : _GEN_33; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 78:26]
  wire  _GEN_46 = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 80:26]
  wire  _GEN_47 = io_memory_read_enable ? 1'h0 : _GEN_34; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 79:26]
  wire  _GEN_48 = io_memory_read_enable ? 1'h0 : _GEN_35; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 79:26]
  wire  _GEN_49 = io_memory_read_enable ? 1'h0 : _GEN_36; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 79:26]
  wire  _GEN_50 = io_memory_read_enable ? 1'h0 : _GEN_37; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33 79:26]
  wire  _GEN_51 = mem_access_state == 2'h2 | _GEN_39; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 163:24]
  wire  _GEN_52 = mem_access_state == 2'h2 ? _GEN_6 : _GEN_39; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61]
  wire  _GEN_54 = mem_access_state == 2'h2 ? 1'h0 : io_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 74:18]
  wire [38:0] _GEN_58 = mem_access_state == 2'h2 ? 39'h0 : _GEN_45; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 78:26]
  wire  _GEN_59 = mem_access_state == 2'h2 ? 1'h0 : _GEN_46; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 80:26]
  wire  _GEN_60 = mem_access_state == 2'h2 ? 1'h0 : _GEN_47; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 79:26]
  wire  _GEN_61 = mem_access_state == 2'h2 ? 1'h0 : _GEN_48; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 79:26]
  wire  _GEN_62 = mem_access_state == 2'h2 ? 1'h0 : _GEN_49; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 79:26]
  wire  _GEN_63 = mem_access_state == 2'h2 ? 1'h0 : _GEN_50; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61 79:26]
  wire [38:0] _GEN_73 = mem_access_state == 2'h1 ? 39'h0 : _GEN_58; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 78:26]
  wire [1:0] forward_regs_write_source = _T_2 ? latched_regs_write_source : io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 238:38]
  wire [31:0] _io_forward_to_ex_T_1 = io_instruction_address + 32'h4; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 252:72]
  wire [31:0] _io_forward_to_ex_T_3 = 2'h1 == forward_regs_write_source ? io_wb_memory_read_data : io_alu_result; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 248:74]
  wire [31:0] _io_forward_to_ex_T_5 = 2'h2 == forward_regs_write_source ? io_csr_read_data : _io_forward_to_ex_T_3; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 248:74]
  assign io_wb_memory_read_data = mem_access_state == 2'h1 ? _GEN_1 : latched_memory_read_data; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 41:41]
  assign io_forward_to_ex = 2'h3 == forward_regs_write_source ? _io_forward_to_ex_T_1 : _io_forward_to_ex_T_5; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 248:74]
  assign io_ctrl_stall_flag = mem_access_state == 2'h1 ? _GEN_4 : _GEN_52; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54]
  assign io_wb_regs_write_source = _T_2 ? latched_regs_write_source : io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 262:43]
  assign io_bus_address = {io_alu_result[31:2],2'h0}; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 75:89]
  assign io_bus_read = mem_access_state == 2'h1 ? 1'h0 : _GEN_54; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 74:18]
  assign io_bus_write = mem_access_state == 2'h1 ? 1'h0 : _GEN_59; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 80:26]
  assign io_bus_write_data = _GEN_73[31:0];
  assign io_bus_write_strobe_0 = mem_access_state == 2'h1 ? 1'h0 : _GEN_60; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 79:26]
  assign io_bus_write_strobe_1 = mem_access_state == 2'h1 ? 1'h0 : _GEN_61; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 79:26]
  assign io_bus_write_strobe_2 = mem_access_state == 2'h1 ? 1'h0 : _GEN_62; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 79:26]
  assign io_bus_write_strobe_3 = mem_access_state == 2'h1 ? 1'h0 : _GEN_63; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 79:26]
  assign io_bus_request = mem_access_state == 2'h1 | _GEN_51; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54 103:24]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 37:34]
      mem_access_state <= 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 37:34]
    end else if (mem_access_state == 2'h1) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54]
      if (io_bus_read_valid) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 105:29]
        mem_access_state <= 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 61:24]
      end
    end else if (mem_access_state == 2'h2) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61]
      if (io_bus_write_valid) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 166:30]
        mem_access_state <= 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 61:24]
      end
    end else if (io_memory_read_enable) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33]
      mem_access_state <= _GEN_7;
    end else begin
      mem_access_state <= _GEN_38;
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 41:41]
      latched_memory_read_data <= 32'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 41:41]
    end else if (mem_access_state == 2'h1) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54]
      if (io_bus_read_valid) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 105:29]
        if (3'h2 == latched_funct3) begin // @[src/main/scala/chisel3/util/Mux.scala 77:13]
          latched_memory_read_data <= io_bus_read_data;
        end else begin
          latched_memory_read_data <= _processed_data_T_65;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 48:42]
      latched_regs_write_source <= 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 48:42]
    end else if (!(mem_access_state == 2'h1)) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54]
      if (!(mem_access_state == 2'h2)) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61]
        if (io_memory_read_enable) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33]
          latched_regs_write_source <= io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 179:33]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 49:42]
      latched_funct3 <= 3'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 49:42]
    end else if (!(mem_access_state == 2'h1)) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54]
      if (!(mem_access_state == 2'h2)) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61]
        if (io_memory_read_enable) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33]
          latched_funct3 <= io_funct3; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 180:33]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 50:42]
      latched_address_index <= 2'h0; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 50:42]
    end else if (!(mem_access_state == 2'h1)) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 101:54]
      if (!(mem_access_state == 2'h2)) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 155:61]
        if (io_memory_read_enable) begin // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 171:33]
          latched_address_index <= mem_address_index; // @[4-soc/src/main/scala/riscv/core/MemoryAccess.scala 181:33]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mem_access_state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  latched_memory_read_data = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  latched_regs_write_source = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  latched_funct3 = _RAND_3[2:0];
  _RAND_4 = {1{`RANDOM}};
  latched_address_index = _RAND_4[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MEM2WB(
  input         clock,
  input         reset,
  input         io_stall, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input  [31:0] io_alu_result, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input         io_regs_write_enable, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input  [1:0]  io_regs_write_source, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input  [31:0] io_regs_write_address, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input  [31:0] io_memory_read_data, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  input  [31:0] io_csr_read_data, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output [31:0] io_output_instruction_address, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output [31:0] io_output_alu_result, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output        io_output_regs_write_enable, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output [1:0]  io_output_regs_write_source, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output [31:0] io_output_regs_write_address, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output [31:0] io_output_memory_read_data, // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
  output [31:0] io_output_csr_read_data // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 12:14]
);
  wire  alu_result_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
  wire  alu_result_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
  wire  alu_result_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
  wire  alu_result_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
  wire [31:0] alu_result_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
  wire [31:0] alu_result_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
  wire  memory_read_data_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
  wire  memory_read_data_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
  wire  memory_read_data_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
  wire  memory_read_data_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
  wire [31:0] memory_read_data_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
  wire [31:0] memory_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
  wire  regs_write_enable_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
  wire  regs_write_enable_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
  wire  regs_write_enable_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
  wire  regs_write_enable_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
  wire  regs_write_enable_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
  wire  regs_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
  wire  regs_write_source_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
  wire  regs_write_source_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
  wire  regs_write_source_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
  wire  regs_write_source_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
  wire [1:0] regs_write_source_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
  wire [1:0] regs_write_source_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
  wire  regs_write_address_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
  wire  regs_write_address_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
  wire  regs_write_address_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
  wire  regs_write_address_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
  wire [4:0] regs_write_address_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
  wire [4:0] regs_write_address_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
  wire  instruction_address_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
  wire  instruction_address_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
  wire  instruction_address_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
  wire  instruction_address_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
  wire [31:0] instruction_address_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
  wire [31:0] instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
  wire  csr_read_data_clock; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
  wire  csr_read_data_reset; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
  wire  csr_read_data_io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
  wire  csr_read_data_io_flush; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
  wire [31:0] csr_read_data_io_in; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
  wire [31:0] csr_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
  PipelineRegister_2 alu_result ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 33:26]
    .clock(alu_result_clock),
    .reset(alu_result_reset),
    .io_stall(alu_result_io_stall),
    .io_flush(alu_result_io_flush),
    .io_in(alu_result_io_in),
    .io_out(alu_result_io_out)
  );
  PipelineRegister_2 memory_read_data ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 39:32]
    .clock(memory_read_data_clock),
    .reset(memory_read_data_reset),
    .io_stall(memory_read_data_io_stall),
    .io_flush(memory_read_data_io_flush),
    .io_in(memory_read_data_io_in),
    .io_out(memory_read_data_io_out)
  );
  PipelineRegister_3 regs_write_enable ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 45:33]
    .clock(regs_write_enable_clock),
    .reset(regs_write_enable_reset),
    .io_stall(regs_write_enable_io_stall),
    .io_flush(regs_write_enable_io_flush),
    .io_in(regs_write_enable_io_in),
    .io_out(regs_write_enable_io_out)
  );
  PipelineRegister_11 regs_write_source ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 51:33]
    .clock(regs_write_source_clock),
    .reset(regs_write_source_reset),
    .io_stall(regs_write_source_io_stall),
    .io_flush(regs_write_source_io_flush),
    .io_in(regs_write_source_io_in),
    .io_out(regs_write_source_io_out)
  );
  PipelineRegister_7 regs_write_address ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 57:34]
    .clock(regs_write_address_clock),
    .reset(regs_write_address_reset),
    .io_stall(regs_write_address_io_stall),
    .io_flush(regs_write_address_io_flush),
    .io_in(regs_write_address_io_in),
    .io_out(regs_write_address_io_out)
  );
  PipelineRegister_2 instruction_address ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 63:35]
    .clock(instruction_address_clock),
    .reset(instruction_address_reset),
    .io_stall(instruction_address_io_stall),
    .io_flush(instruction_address_io_flush),
    .io_in(instruction_address_io_in),
    .io_out(instruction_address_io_out)
  );
  PipelineRegister_2 csr_read_data ( // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 69:29]
    .clock(csr_read_data_clock),
    .reset(csr_read_data_reset),
    .io_stall(csr_read_data_io_stall),
    .io_flush(csr_read_data_io_flush),
    .io_in(csr_read_data_io_in),
    .io_out(csr_read_data_io_out)
  );
  assign io_output_instruction_address = instruction_address_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 67:33]
  assign io_output_alu_result = alu_result_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 37:24]
  assign io_output_regs_write_enable = regs_write_enable_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 49:31]
  assign io_output_regs_write_source = regs_write_source_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 55:31]
  assign io_output_regs_write_address = {{27'd0}, regs_write_address_io_out}; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 61:32]
  assign io_output_memory_read_data = memory_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 43:30]
  assign io_output_csr_read_data = csr_read_data_io_out; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 73:27]
  assign alu_result_clock = clock;
  assign alu_result_reset = reset;
  assign alu_result_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 35:24]
  assign alu_result_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 36:24]
  assign alu_result_io_in = io_alu_result; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 34:24]
  assign memory_read_data_clock = clock;
  assign memory_read_data_reset = reset;
  assign memory_read_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 41:30]
  assign memory_read_data_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 42:30]
  assign memory_read_data_io_in = io_memory_read_data; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 40:30]
  assign regs_write_enable_clock = clock;
  assign regs_write_enable_reset = reset;
  assign regs_write_enable_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 47:31]
  assign regs_write_enable_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 48:31]
  assign regs_write_enable_io_in = io_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 46:31]
  assign regs_write_source_clock = clock;
  assign regs_write_source_reset = reset;
  assign regs_write_source_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 53:31]
  assign regs_write_source_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 54:31]
  assign regs_write_source_io_in = io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 52:31]
  assign regs_write_address_clock = clock;
  assign regs_write_address_reset = reset;
  assign regs_write_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 59:32]
  assign regs_write_address_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 60:32]
  assign regs_write_address_io_in = io_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 58:32]
  assign instruction_address_clock = clock;
  assign instruction_address_reset = reset;
  assign instruction_address_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 65:33]
  assign instruction_address_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 66:33]
  assign instruction_address_io_in = io_instruction_address; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 64:33]
  assign csr_read_data_clock = clock;
  assign csr_read_data_reset = reset;
  assign csr_read_data_io_stall = io_stall; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 71:27]
  assign csr_read_data_io_flush = 1'h0; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 72:27]
  assign csr_read_data_io_in = io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/MEM2WB.scala 70:27]
endmodule
module WriteBack(
  input  [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [31:0] io_alu_result, // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [31:0] io_memory_read_data, // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [1:0]  io_regs_write_source, // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 12:14]
  input  [31:0] io_csr_read_data, // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 12:14]
  output [31:0] io_regs_write_data // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 12:14]
);
  wire [31:0] _io_regs_write_data_T_1 = io_instruction_address + 32'h4; // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 28:72]
  wire [31:0] _io_regs_write_data_T_3 = 2'h1 == io_regs_write_source ? io_memory_read_data : io_alu_result; // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 24:4]
  wire [31:0] _io_regs_write_data_T_5 = 2'h2 == io_regs_write_source ? io_csr_read_data : _io_regs_write_data_T_3; // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 24:4]
  assign io_regs_write_data = 2'h3 == io_regs_write_source ? _io_regs_write_data_T_1 : _io_regs_write_data_T_5; // @[4-soc/src/main/scala/riscv/core/WriteBack.scala 24:4]
endmodule
module Forwarding(
  input  [4:0] io_rs1_id, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input  [4:0] io_rs2_id, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input  [4:0] io_rs1_ex, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input  [4:0] io_rs2_ex, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input  [4:0] io_rd_mem, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input        io_reg_write_enable_mem, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input  [4:0] io_rd_wb, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  input        io_reg_write_enable_wb, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  output [1:0] io_reg1_forward_id, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  output [1:0] io_reg2_forward_id, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  output [1:0] io_reg1_forward_ex, // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
  output [1:0] io_reg2_forward_ex // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 60:14]
);
  wire  _T_2 = io_rd_mem != 5'h0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 80:72]
  wire  _T_6 = io_rd_wb != 5'h0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 84:75]
  wire [1:0] _GEN_0 = io_reg_write_enable_wb & io_rs1_ex == io_rd_wb & io_rd_wb != 5'h0 ? 2'h2 : 2'h0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 84:84 87:24 90:24]
  wire [1:0] _GEN_2 = io_reg_write_enable_wb & io_rs2_ex == io_rd_wb & _T_6 ? 2'h2 : 2'h0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 100:24 103:24 98:84]
  wire [1:0] _GEN_4 = io_reg_write_enable_wb & io_rs1_id == io_rd_wb & _T_6 ? 2'h2 : 2'h0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 117:84 119:24 122:24]
  wire [1:0] _GEN_6 = io_reg_write_enable_wb & io_rs2_id == io_rd_wb & _T_6 ? 2'h2 : 2'h0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 131:84 133:24 136:24]
  assign io_reg1_forward_id = io_reg_write_enable_mem & io_rs1_id == io_rd_mem & _T_2 ? 2'h1 : _GEN_4; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 111:81 116:24]
  assign io_reg2_forward_id = io_reg_write_enable_mem & io_rs2_id == io_rd_mem & _T_2 ? 2'h1 : _GEN_6; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 126:81 130:24]
  assign io_reg1_forward_ex = io_reg_write_enable_mem & io_rs1_ex == io_rd_mem & io_rd_mem != 5'h0 ? 2'h1 : _GEN_0; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 80:81 83:24]
  assign io_reg2_forward_ex = io_reg_write_enable_mem & io_rs2_ex == io_rd_mem & _T_2 ? 2'h1 : _GEN_2; // @[4-soc/src/main/scala/riscv/core/Forwarding.scala 94:81 97:24]
endmodule
module CLINT(
  input  [31:0] io_interrupt_flag, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_instruction_id, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_instruction_address_if, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input         io_jump_flag, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_jump_address, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  output [31:0] io_id_interrupt_handler_address, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  output        io_id_interrupt_assert, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_csr_bundle_mstatus, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_csr_bundle_mepc, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_csr_bundle_mcause, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_csr_bundle_mtvec, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  input  [31:0] io_csr_bundle_mie, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  output [31:0] io_csr_bundle_mstatus_write_data, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  output [31:0] io_csr_bundle_mepc_write_data, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  output [31:0] io_csr_bundle_mcause_write_data, // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
  output        io_csr_bundle_direct_write_enable // @[4-soc/src/main/scala/riscv/core/CLINT.scala 20:14]
);
  wire  interrupt_enable_global = io_csr_bundle_mstatus[3]; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 34:56]
  wire  interrupt_enable_timer = io_csr_bundle_mie[7]; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 35:52]
  wire  interrupt_enable_external = io_csr_bundle_mie[11]; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 36:52]
  wire [31:0] instruction_address = io_jump_flag ? io_jump_address : io_instruction_address_if; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 38:32]
  wire [31:0] mstatus_disable_interrupt = {io_csr_bundle_mstatus[31:4],1'h0,io_csr_bundle_mstatus[2:0]}; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 43:76]
  wire [31:0] mstatus_recover_interrupt = {io_csr_bundle_mstatus[31:4],io_csr_bundle_mstatus[7],io_csr_bundle_mstatus[2:
    0]}; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 45:62]
  wire  interrupt_source_enabled = io_interrupt_flag[0] ? interrupt_enable_timer : interrupt_enable_external; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 48:37]
  wire [3:0] _io_csr_bundle_mcause_write_data_T_1 = 32'h73 == io_instruction_id ? 4'hb : 4'ha; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 60:6]
  wire [3:0] _io_csr_bundle_mcause_write_data_T_3 = 32'h100073 == io_instruction_id ? 4'h3 :
    _io_csr_bundle_mcause_write_data_T_1; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 60:6]
  wire [31:0] _io_csr_bundle_mcause_write_data_T_5 = io_interrupt_flag[0] ? 32'h80000007 : 32'h8000000b; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 72:45]
  wire  _T_6 = io_instruction_id == 32'h30200073; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 76:32]
  wire [31:0] _GEN_0 = io_instruction_id == 32'h30200073 ? mstatus_recover_interrupt : io_csr_bundle_mstatus; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 76:58 77:39 84:39]
  wire [31:0] _GEN_4 = io_instruction_id == 32'h30200073 ? io_csr_bundle_mepc : 32'h0; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 76:58 82:39 89:39]
  wire [31:0] _GEN_5 = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled ?
    mstatus_disable_interrupt : _GEN_0; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 69:113 70:39]
  wire [31:0] _GEN_6 = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled ?
    instruction_address : io_csr_bundle_mepc; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 69:113 71:39]
  wire [31:0] _GEN_7 = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled ?
    _io_csr_bundle_mcause_write_data_T_5 : io_csr_bundle_mcause; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 69:113 72:39]
  wire  _GEN_8 = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled | _T_6; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 69:113 73:39]
  wire [31:0] _GEN_9 = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled ?
    io_csr_bundle_mtvec : _GEN_4; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 69:113 75:39]
  assign io_id_interrupt_handler_address = io_instruction_id == 32'h73 | io_instruction_id == 32'h100073 ?
    io_csr_bundle_mtvec : _GEN_9; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 54:101 68:39]
  assign io_id_interrupt_assert = io_instruction_id == 32'h73 | io_instruction_id == 32'h100073 | _GEN_8; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 54:101 66:39]
  assign io_csr_bundle_mstatus_write_data = io_instruction_id == 32'h73 | io_instruction_id == 32'h100073 ?
    mstatus_disable_interrupt : _GEN_5; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 54:101 55:38]
  assign io_csr_bundle_mepc_write_data = io_instruction_id == 32'h73 | io_instruction_id == 32'h100073 ?
    instruction_address : _GEN_6; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 54:101 56:38]
  assign io_csr_bundle_mcause_write_data = io_instruction_id == 32'h73 | io_instruction_id == 32'h100073 ? {{28'd0},
    _io_csr_bundle_mcause_write_data_T_3} : _GEN_7; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 54:101 57:37]
  assign io_csr_bundle_direct_write_enable = io_instruction_id == 32'h73 | io_instruction_id == 32'h100073 | _GEN_8; // @[4-soc/src/main/scala/riscv/core/CLINT.scala 54:101 66:39]
endmodule
module CSR(
  input         clock,
  input         reset,
  input  [11:0] io_reg_read_address_id, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input         io_reg_write_enable_ex, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input  [11:0] io_reg_write_address_ex, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input  [31:0] io_reg_write_data_ex, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input  [11:0] io_debug_reg_read_address, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_id_reg_read_data, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_debug_reg_read_data, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_clint_access_bundle_mstatus, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_clint_access_bundle_mepc, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_clint_access_bundle_mcause, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_clint_access_bundle_mtvec, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  output [31:0] io_clint_access_bundle_mie, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input  [31:0] io_clint_access_bundle_mstatus_write_data, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input  [31:0] io_clint_access_bundle_mepc_write_data, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input  [31:0] io_clint_access_bundle_mcause_write_data, // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
  input         io_clint_access_bundle_direct_write_enable // @[4-soc/src/main/scala/riscv/core/CSR.scala 38:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] mstatus; // @[4-soc/src/main/scala/riscv/core/CSR.scala 51:25]
  reg [31:0] mie; // @[4-soc/src/main/scala/riscv/core/CSR.scala 52:25]
  reg [31:0] mtvec; // @[4-soc/src/main/scala/riscv/core/CSR.scala 53:25]
  reg [31:0] mscratch; // @[4-soc/src/main/scala/riscv/core/CSR.scala 54:25]
  reg [31:0] mepc; // @[4-soc/src/main/scala/riscv/core/CSR.scala 55:25]
  reg [31:0] mcause; // @[4-soc/src/main/scala/riscv/core/CSR.scala 56:25]
  reg [63:0] cycles; // @[4-soc/src/main/scala/riscv/core/CSR.scala 57:25]
  wire [63:0] _cycles_T_1 = cycles + 64'h1; // @[4-soc/src/main/scala/riscv/core/CSR.scala 69:20]
  wire [31:0] _io_id_reg_read_data_T_1 = 12'h300 == io_reg_read_address_id ? mstatus : 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_id_reg_read_data_T_3 = 12'h304 == io_reg_read_address_id ? mie : _io_id_reg_read_data_T_1; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_id_reg_read_data_T_5 = 12'h305 == io_reg_read_address_id ? mtvec : _io_id_reg_read_data_T_3; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_id_reg_read_data_T_7 = 12'h340 == io_reg_read_address_id ? mscratch : _io_id_reg_read_data_T_5; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_id_reg_read_data_T_9 = 12'h341 == io_reg_read_address_id ? mepc : _io_id_reg_read_data_T_7; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_id_reg_read_data_T_11 = 12'h342 == io_reg_read_address_id ? mcause : _io_id_reg_read_data_T_9; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_id_reg_read_data_T_13 = 12'hc00 == io_reg_read_address_id ? cycles[31:0] : _io_id_reg_read_data_T_11; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  wire [31:0] _io_debug_reg_read_data_T_1 = 12'h300 == io_debug_reg_read_address ? mstatus : 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire [31:0] _io_debug_reg_read_data_T_3 = 12'h304 == io_debug_reg_read_address ? mie : _io_debug_reg_read_data_T_1; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire [31:0] _io_debug_reg_read_data_T_5 = 12'h305 == io_debug_reg_read_address ? mtvec : _io_debug_reg_read_data_T_3; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire [31:0] _io_debug_reg_read_data_T_7 = 12'h340 == io_debug_reg_read_address ? mscratch :
    _io_debug_reg_read_data_T_5; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire [31:0] _io_debug_reg_read_data_T_9 = 12'h341 == io_debug_reg_read_address ? mepc : _io_debug_reg_read_data_T_7; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire [31:0] _io_debug_reg_read_data_T_11 = 12'h342 == io_debug_reg_read_address ? mcause : _io_debug_reg_read_data_T_9
    ; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire [31:0] _io_debug_reg_read_data_T_13 = 12'hc00 == io_debug_reg_read_address ? cycles[31:0] :
    _io_debug_reg_read_data_T_11; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  wire  _io_clint_access_bundle_mstatus_T = io_reg_write_address_ex == 12'h300; // @[4-soc/src/main/scala/riscv/core/CSR.scala 77:55]
  wire  _io_clint_access_bundle_mstatus_T_1 = io_reg_write_enable_ex & io_reg_write_address_ex == 12'h300; // @[4-soc/src/main/scala/riscv/core/CSR.scala 77:28]
  wire  _io_clint_access_bundle_mtvec_T = io_reg_write_address_ex == 12'h305; // @[4-soc/src/main/scala/riscv/core/CSR.scala 82:55]
  wire  _io_clint_access_bundle_mtvec_T_1 = io_reg_write_enable_ex & io_reg_write_address_ex == 12'h305; // @[4-soc/src/main/scala/riscv/core/CSR.scala 82:28]
  wire  _io_clint_access_bundle_mcause_T = io_reg_write_address_ex == 12'h342; // @[4-soc/src/main/scala/riscv/core/CSR.scala 87:55]
  wire  _io_clint_access_bundle_mcause_T_1 = io_reg_write_enable_ex & io_reg_write_address_ex == 12'h342; // @[4-soc/src/main/scala/riscv/core/CSR.scala 87:28]
  wire  _io_clint_access_bundle_mepc_T = io_reg_write_address_ex == 12'h341; // @[4-soc/src/main/scala/riscv/core/CSR.scala 92:55]
  wire  _io_clint_access_bundle_mepc_T_1 = io_reg_write_enable_ex & io_reg_write_address_ex == 12'h341; // @[4-soc/src/main/scala/riscv/core/CSR.scala 92:28]
  wire  _io_clint_access_bundle_mie_T = io_reg_write_address_ex == 12'h304; // @[4-soc/src/main/scala/riscv/core/CSR.scala 97:55]
  wire  _io_clint_access_bundle_mie_T_1 = io_reg_write_enable_ex & io_reg_write_address_ex == 12'h304; // @[4-soc/src/main/scala/riscv/core/CSR.scala 97:28]
  wire [31:0] _GEN_0 = _io_clint_access_bundle_mcause_T ? io_reg_write_data_ex : mcause; // @[4-soc/src/main/scala/riscv/core/CSR.scala 111:64 112:14 56:25]
  wire [31:0] _GEN_1 = _io_clint_access_bundle_mepc_T ? io_reg_write_data_ex : mepc; // @[4-soc/src/main/scala/riscv/core/CSR.scala 109:62 110:12 55:25]
  wire [31:0] _GEN_2 = _io_clint_access_bundle_mepc_T ? mcause : _GEN_0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 109:62 56:25]
  wire [31:0] _GEN_12 = io_reg_write_address_ex == 12'h340 ? io_reg_write_data_ex : mscratch; // @[4-soc/src/main/scala/riscv/core/CSR.scala 121:66 122:16 54:25]
  assign io_id_reg_read_data = 12'hc80 == io_reg_read_address_id ? cycles[63:32] : _io_id_reg_read_data_T_13; // @[4-soc/src/main/scala/riscv/core/CSR.scala 73:67]
  assign io_debug_reg_read_data = 12'hc80 == io_debug_reg_read_address ? cycles[63:32] : _io_debug_reg_read_data_T_13; // @[4-soc/src/main/scala/riscv/core/CSR.scala 74:70]
  assign io_clint_access_bundle_mstatus = _io_clint_access_bundle_mstatus_T_1 ? io_reg_write_data_ex : mstatus; // @[4-soc/src/main/scala/riscv/core/CSR.scala 76:40]
  assign io_clint_access_bundle_mepc = _io_clint_access_bundle_mepc_T_1 ? io_reg_write_data_ex : mepc; // @[4-soc/src/main/scala/riscv/core/CSR.scala 91:37]
  assign io_clint_access_bundle_mcause = _io_clint_access_bundle_mcause_T_1 ? io_reg_write_data_ex : mcause; // @[4-soc/src/main/scala/riscv/core/CSR.scala 86:39]
  assign io_clint_access_bundle_mtvec = _io_clint_access_bundle_mtvec_T_1 ? io_reg_write_data_ex : mtvec; // @[4-soc/src/main/scala/riscv/core/CSR.scala 81:38]
  assign io_clint_access_bundle_mie = _io_clint_access_bundle_mie_T_1 ? io_reg_write_data_ex : mie; // @[4-soc/src/main/scala/riscv/core/CSR.scala 96:36]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 51:25]
      mstatus <= 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 51:25]
    end else if (io_clint_access_bundle_direct_write_enable) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 102:52]
      mstatus <= io_clint_access_bundle_mstatus_write_data; // @[4-soc/src/main/scala/riscv/core/CSR.scala 103:13]
    end else if (io_reg_write_enable_ex) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 106:38]
      if (_io_clint_access_bundle_mstatus_T) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 107:59]
        mstatus <= io_reg_write_data_ex; // @[4-soc/src/main/scala/riscv/core/CSR.scala 108:15]
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 52:25]
      mie <= 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 52:25]
    end else if (io_reg_write_enable_ex) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 116:32]
      if (_io_clint_access_bundle_mie_T) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 117:55]
        mie <= io_reg_write_data_ex; // @[4-soc/src/main/scala/riscv/core/CSR.scala 118:11]
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 53:25]
      mtvec <= 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 53:25]
    end else if (io_reg_write_enable_ex) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 116:32]
      if (!(_io_clint_access_bundle_mie_T)) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 117:55]
        if (_io_clint_access_bundle_mtvec_T) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 119:63]
          mtvec <= io_reg_write_data_ex; // @[4-soc/src/main/scala/riscv/core/CSR.scala 120:13]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 54:25]
      mscratch <= 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 54:25]
    end else if (io_reg_write_enable_ex) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 116:32]
      if (!(_io_clint_access_bundle_mie_T)) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 117:55]
        if (!(_io_clint_access_bundle_mtvec_T)) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 119:63]
          mscratch <= _GEN_12;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 55:25]
      mepc <= 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 55:25]
    end else if (io_clint_access_bundle_direct_write_enable) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 102:52]
      mepc <= io_clint_access_bundle_mepc_write_data; // @[4-soc/src/main/scala/riscv/core/CSR.scala 104:13]
    end else if (io_reg_write_enable_ex) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 106:38]
      if (!(_io_clint_access_bundle_mstatus_T)) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 107:59]
        mepc <= _GEN_1;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 56:25]
      mcause <= 32'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 56:25]
    end else if (io_clint_access_bundle_direct_write_enable) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 102:52]
      mcause <= io_clint_access_bundle_mcause_write_data; // @[4-soc/src/main/scala/riscv/core/CSR.scala 105:13]
    end else if (io_reg_write_enable_ex) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 106:38]
      if (!(_io_clint_access_bundle_mstatus_T)) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 107:59]
        mcause <= _GEN_2;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/riscv/core/CSR.scala 57:25]
      cycles <= 64'h0; // @[4-soc/src/main/scala/riscv/core/CSR.scala 57:25]
    end else begin
      cycles <= _cycles_T_1; // @[4-soc/src/main/scala/riscv/core/CSR.scala 69:10]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mstatus = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  mie = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  mtvec = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  mscratch = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  mepc = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  mcause = _RAND_5[31:0];
  _RAND_6 = {2{`RANDOM}};
  cycles = _RAND_6[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelinedCPU(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input  [31:0] io_instruction, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input         io_instruction_valid, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output [31:0] io_memory_bundle_address, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_read, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input  [31:0] io_memory_bundle_read_data, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input         io_memory_bundle_read_valid, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_write, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output [31:0] io_memory_bundle_write_data, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_write_strobe_0, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_write_strobe_1, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_write_strobe_2, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_write_strobe_3, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input         io_memory_bundle_write_valid, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output        io_memory_bundle_request, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input         io_memory_bundle_granted, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output [2:0]  io_device_select, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input  [31:0] io_interrupt_flag, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input  [4:0]  io_debug_read_address, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output [31:0] io_debug_read_data, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  input  [11:0] io_csr_debug_read_address, // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
  output [31:0] io_csr_debug_read_data // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 116:14]
);
  wire  ctrl_io_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_jump_instruction_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [4:0] ctrl_io_rs1_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [4:0] ctrl_io_rs2_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_memory_read_enable_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [4:0] ctrl_io_rd_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_memory_read_enable_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [4:0] ctrl_io_rd_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_memory_write_enable_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [1:0] ctrl_io_regs_write_source_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [1:0] ctrl_io_regs_write_source_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [1:0] ctrl_io_regs_write_source_wb; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire [4:0] ctrl_io_rd_wb; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_if_flush; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_id_flush; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_pc_stall; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_if_stall; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_branch_hazard; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  ctrl_io_jal_jalr_hazard; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
  wire  regs_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire  regs_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire  regs_io_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [4:0] regs_io_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [31:0] regs_io_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [4:0] regs_io_read_address1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [4:0] regs_io_read_address2; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [31:0] regs_io_read_data1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [31:0] regs_io_read_data2; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [4:0] regs_io_debug_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire [31:0] regs_io_debug_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
  wire  inst_fetch_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_stall_flag_ctrl; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_jump_flag_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_jump_address_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_rom_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_instruction_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_btb_mispredict; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_btb_correction_addr; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_btb_correct_prediction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_id_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_btb_predicted_taken; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_btb_predicted_target; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_btb_update_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_btb_update_pc; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire [31:0] inst_fetch_io_btb_update_target; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  inst_fetch_io_btb_update_taken; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
  wire  if2id_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire  if2id_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire  if2id_io_stall; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire  if2id_io_flush; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire  if2id_io_btb_predicted_taken; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_btb_predicted_target; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_output_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire  if2id_io_output_btb_predicted_taken; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] if2id_io_output_btb_predicted_target; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
  wire [31:0] id_io_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_reg1_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_forward_from_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_forward_from_wb; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [1:0] id_io_reg1_forward; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [1:0] id_io_reg2_forward; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_interrupt_assert; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_interrupt_handler_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_branch_hazard; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [4:0] id_io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [4:0] id_io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_ex_immediate; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ex_aluop1_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ex_aluop2_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ex_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ex_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [1:0] id_io_ex_reg_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ex_reg_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [4:0] id_io_ex_reg_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [11:0] id_io_ex_csr_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ex_csr_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_ctrl_jump_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_clint_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_clint_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id_io_if_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire [31:0] id_io_if_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
  wire  id2ex_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_stall; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_flush; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [4:0] id2ex_io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [4:0] id2ex_io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [4:0] id2ex_io_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [1:0] id2ex_io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_reg1_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_immediate; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_aluop1_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_aluop2_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_csr_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [11:0] id2ex_io_csr_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_output_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [4:0] id2ex_io_output_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [4:0] id2ex_io_output_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [4:0] id2ex_io_output_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [1:0] id2ex_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_output_reg1_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_output_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_output_immediate; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_output_aluop1_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_output_aluop2_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_output_csr_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [11:0] id2ex_io_output_csr_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_output_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire  id2ex_io_output_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] id2ex_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
  wire [31:0] ex_io_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_reg1_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_immediate; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire  ex_io_aluop1_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire  ex_io_aluop2_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_forward_from_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_forward_from_wb; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [1:0] ex_io_reg1_forward; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [1:0] ex_io_reg2_forward; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_mem_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_mem_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire [31:0] ex_io_csr_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
  wire  ex2mem_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_stall; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [1:0] ex2mem_io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [2:0] ex2mem_io_funct3; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [1:0] ex2mem_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_output_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_output_funct3; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_output_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_output_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  ex2mem_io_output_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_output_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire [31:0] ex2mem_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
  wire  mem_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [2:0] mem_io_funct3; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [1:0] mem_io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_wb_memory_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_forward_to_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [1:0] mem_io_wb_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_bus_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_read; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_bus_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_read_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_write; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire [31:0] mem_io_bus_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_write_strobe_0; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_write_strobe_1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_write_strobe_2; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_write_strobe_3; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_write_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_request; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem_io_bus_granted; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
  wire  mem2wb_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire  mem2wb_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire  mem2wb_io_stall; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire  mem2wb_io_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [1:0] mem2wb_io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_memory_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_output_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire  mem2wb_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [1:0] mem2wb_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_output_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_output_memory_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] mem2wb_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
  wire [31:0] wb_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
  wire [31:0] wb_io_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
  wire [31:0] wb_io_memory_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
  wire [1:0] wb_io_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
  wire [31:0] wb_io_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
  wire [31:0] wb_io_regs_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
  wire [4:0] forwarding_io_rs1_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [4:0] forwarding_io_rs2_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [4:0] forwarding_io_rs1_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [4:0] forwarding_io_rs2_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [4:0] forwarding_io_rd_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire  forwarding_io_reg_write_enable_mem; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [4:0] forwarding_io_rd_wb; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire  forwarding_io_reg_write_enable_wb; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [1:0] forwarding_io_reg1_forward_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [1:0] forwarding_io_reg2_forward_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [1:0] forwarding_io_reg1_forward_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [1:0] forwarding_io_reg2_forward_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
  wire [31:0] clint_io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_instruction_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_instruction_address_if; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire  clint_io_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_id_interrupt_handler_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire  clint_io_id_interrupt_assert; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mstatus; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mepc; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mcause; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mtvec; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mie; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mstatus_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mepc_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire [31:0] clint_io_csr_bundle_mcause_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire  clint_io_csr_bundle_direct_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
  wire  csr_regs_clock; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire  csr_regs_reset; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [11:0] csr_regs_io_reg_read_address_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire  csr_regs_io_reg_write_enable_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [11:0] csr_regs_io_reg_write_address_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_reg_write_data_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [11:0] csr_regs_io_debug_reg_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_id_reg_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_debug_reg_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mstatus; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mepc; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mcause; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mtvec; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mie; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mstatus_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mepc_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire [31:0] csr_regs_io_clint_access_bundle_mcause_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire  csr_regs_io_clint_access_bundle_direct_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
  wire  btb_wrong_direction = if2id_io_output_btb_predicted_taken & id_io_ctrl_jump_instruction & ~id_io_if_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 180:64]
  wire  btb_non_branch = if2id_io_output_btb_predicted_taken & ~id_io_ctrl_jump_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 183:38]
  wire  _btb_wrong_target_T = if2id_io_output_btb_predicted_taken & id_io_if_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 186:40]
  wire  btb_wrong_target = if2id_io_output_btb_predicted_taken & id_io_if_jump_flag &
    if2id_io_output_btb_predicted_target != id_io_if_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 186:56]
  wire  btb_correct_prediction = _btb_wrong_target_T & if2id_io_output_btb_predicted_target == id_io_if_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 189:62]
  wire  _btb_mispredict_T_2 = ~id_io_branch_hazard; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 192:87]
  wire  btb_mispredict = (btb_wrong_direction | btb_non_branch | btb_wrong_target) & ~id_io_branch_hazard; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 192:84]
  wire [31:0] _btb_correction_addr_T_1 = if2id_io_output_instruction_address + 32'h4; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 197:102]
  wire  _btb_should_update_T_3 = ~mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 206:98]
  wire  need_if_flush = ctrl_io_if_flush & ~btb_correct_prediction | btb_mispredict; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 237:69]
  wire [31:0] _id_reg1_data_forwarded_T_1 = 2'h1 == forwarding_io_reg1_forward_id ? mem_io_forward_to_ex :
    regs_io_read_data1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 276:92]
  wire [31:0] _id_reg2_data_forwarded_T_1 = 2'h1 == forwarding_io_reg2_forward_id ? mem_io_forward_to_ex :
    regs_io_read_data2; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 282:92]
  Control ctrl ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 118:26]
    .io_jump_flag(ctrl_io_jump_flag),
    .io_jump_instruction_id(ctrl_io_jump_instruction_id),
    .io_rs1_id(ctrl_io_rs1_id),
    .io_rs2_id(ctrl_io_rs2_id),
    .io_memory_read_enable_ex(ctrl_io_memory_read_enable_ex),
    .io_rd_ex(ctrl_io_rd_ex),
    .io_memory_read_enable_mem(ctrl_io_memory_read_enable_mem),
    .io_rd_mem(ctrl_io_rd_mem),
    .io_memory_write_enable_mem(ctrl_io_memory_write_enable_mem),
    .io_regs_write_source_ex(ctrl_io_regs_write_source_ex),
    .io_regs_write_source_mem(ctrl_io_regs_write_source_mem),
    .io_regs_write_source_wb(ctrl_io_regs_write_source_wb),
    .io_rd_wb(ctrl_io_rd_wb),
    .io_if_flush(ctrl_io_if_flush),
    .io_id_flush(ctrl_io_id_flush),
    .io_pc_stall(ctrl_io_pc_stall),
    .io_if_stall(ctrl_io_if_stall),
    .io_branch_hazard(ctrl_io_branch_hazard),
    .io_jal_jalr_hazard(ctrl_io_jal_jalr_hazard)
  );
  RegisterFile regs ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 119:26]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_write_enable(regs_io_write_enable),
    .io_write_address(regs_io_write_address),
    .io_write_data(regs_io_write_data),
    .io_read_address1(regs_io_read_address1),
    .io_read_address2(regs_io_read_address2),
    .io_read_data1(regs_io_read_data1),
    .io_read_data2(regs_io_read_data2),
    .io_debug_read_address(regs_io_debug_read_address),
    .io_debug_read_data(regs_io_debug_read_data)
  );
  InstructionFetch inst_fetch ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 120:26]
    .clock(inst_fetch_clock),
    .reset(inst_fetch_reset),
    .io_stall_flag_ctrl(inst_fetch_io_stall_flag_ctrl),
    .io_jump_flag_id(inst_fetch_io_jump_flag_id),
    .io_jump_address_id(inst_fetch_io_jump_address_id),
    .io_rom_instruction(inst_fetch_io_rom_instruction),
    .io_instruction_valid(inst_fetch_io_instruction_valid),
    .io_btb_mispredict(inst_fetch_io_btb_mispredict),
    .io_btb_correction_addr(inst_fetch_io_btb_correction_addr),
    .io_btb_correct_prediction(inst_fetch_io_btb_correct_prediction),
    .io_instruction_address(inst_fetch_io_instruction_address),
    .io_id_instruction(inst_fetch_io_id_instruction),
    .io_btb_predicted_taken(inst_fetch_io_btb_predicted_taken),
    .io_btb_predicted_target(inst_fetch_io_btb_predicted_target),
    .io_btb_update_valid(inst_fetch_io_btb_update_valid),
    .io_btb_update_pc(inst_fetch_io_btb_update_pc),
    .io_btb_update_target(inst_fetch_io_btb_update_target),
    .io_btb_update_taken(inst_fetch_io_btb_update_taken)
  );
  IF2ID if2id ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 121:26]
    .clock(if2id_clock),
    .reset(if2id_reset),
    .io_stall(if2id_io_stall),
    .io_flush(if2id_io_flush),
    .io_instruction(if2id_io_instruction),
    .io_instruction_address(if2id_io_instruction_address),
    .io_interrupt_flag(if2id_io_interrupt_flag),
    .io_btb_predicted_taken(if2id_io_btb_predicted_taken),
    .io_btb_predicted_target(if2id_io_btb_predicted_target),
    .io_output_instruction(if2id_io_output_instruction),
    .io_output_instruction_address(if2id_io_output_instruction_address),
    .io_output_btb_predicted_taken(if2id_io_output_btb_predicted_taken),
    .io_output_btb_predicted_target(if2id_io_output_btb_predicted_target)
  );
  InstructionDecode id ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 122:26]
    .io_instruction(id_io_instruction),
    .io_instruction_address(id_io_instruction_address),
    .io_reg1_data(id_io_reg1_data),
    .io_reg2_data(id_io_reg2_data),
    .io_forward_from_mem(id_io_forward_from_mem),
    .io_forward_from_wb(id_io_forward_from_wb),
    .io_reg1_forward(id_io_reg1_forward),
    .io_reg2_forward(id_io_reg2_forward),
    .io_interrupt_assert(id_io_interrupt_assert),
    .io_interrupt_handler_address(id_io_interrupt_handler_address),
    .io_branch_hazard(id_io_branch_hazard),
    .io_regs_reg1_read_address(id_io_regs_reg1_read_address),
    .io_regs_reg2_read_address(id_io_regs_reg2_read_address),
    .io_ex_immediate(id_io_ex_immediate),
    .io_ex_aluop1_source(id_io_ex_aluop1_source),
    .io_ex_aluop2_source(id_io_ex_aluop2_source),
    .io_ex_memory_read_enable(id_io_ex_memory_read_enable),
    .io_ex_memory_write_enable(id_io_ex_memory_write_enable),
    .io_ex_reg_write_source(id_io_ex_reg_write_source),
    .io_ex_reg_write_enable(id_io_ex_reg_write_enable),
    .io_ex_reg_write_address(id_io_ex_reg_write_address),
    .io_ex_csr_address(id_io_ex_csr_address),
    .io_ex_csr_write_enable(id_io_ex_csr_write_enable),
    .io_ctrl_jump_instruction(id_io_ctrl_jump_instruction),
    .io_clint_jump_flag(id_io_clint_jump_flag),
    .io_clint_jump_address(id_io_clint_jump_address),
    .io_if_jump_flag(id_io_if_jump_flag),
    .io_if_jump_address(id_io_if_jump_address)
  );
  ID2EX id2ex ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 123:26]
    .clock(id2ex_clock),
    .reset(id2ex_reset),
    .io_stall(id2ex_io_stall),
    .io_flush(id2ex_io_flush),
    .io_instruction(id2ex_io_instruction),
    .io_instruction_address(id2ex_io_instruction_address),
    .io_regs_reg1_read_address(id2ex_io_regs_reg1_read_address),
    .io_regs_reg2_read_address(id2ex_io_regs_reg2_read_address),
    .io_regs_write_enable(id2ex_io_regs_write_enable),
    .io_regs_write_address(id2ex_io_regs_write_address),
    .io_regs_write_source(id2ex_io_regs_write_source),
    .io_reg1_data(id2ex_io_reg1_data),
    .io_reg2_data(id2ex_io_reg2_data),
    .io_immediate(id2ex_io_immediate),
    .io_aluop1_source(id2ex_io_aluop1_source),
    .io_aluop2_source(id2ex_io_aluop2_source),
    .io_csr_write_enable(id2ex_io_csr_write_enable),
    .io_csr_address(id2ex_io_csr_address),
    .io_memory_read_enable(id2ex_io_memory_read_enable),
    .io_memory_write_enable(id2ex_io_memory_write_enable),
    .io_csr_read_data(id2ex_io_csr_read_data),
    .io_output_instruction(id2ex_io_output_instruction),
    .io_output_instruction_address(id2ex_io_output_instruction_address),
    .io_output_regs_reg1_read_address(id2ex_io_output_regs_reg1_read_address),
    .io_output_regs_reg2_read_address(id2ex_io_output_regs_reg2_read_address),
    .io_output_regs_write_enable(id2ex_io_output_regs_write_enable),
    .io_output_regs_write_address(id2ex_io_output_regs_write_address),
    .io_output_regs_write_source(id2ex_io_output_regs_write_source),
    .io_output_reg1_data(id2ex_io_output_reg1_data),
    .io_output_reg2_data(id2ex_io_output_reg2_data),
    .io_output_immediate(id2ex_io_output_immediate),
    .io_output_aluop1_source(id2ex_io_output_aluop1_source),
    .io_output_aluop2_source(id2ex_io_output_aluop2_source),
    .io_output_csr_write_enable(id2ex_io_output_csr_write_enable),
    .io_output_csr_address(id2ex_io_output_csr_address),
    .io_output_memory_read_enable(id2ex_io_output_memory_read_enable),
    .io_output_memory_write_enable(id2ex_io_output_memory_write_enable),
    .io_output_csr_read_data(id2ex_io_output_csr_read_data)
  );
  Execute ex ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 124:26]
    .io_instruction(ex_io_instruction),
    .io_instruction_address(ex_io_instruction_address),
    .io_reg1_data(ex_io_reg1_data),
    .io_reg2_data(ex_io_reg2_data),
    .io_immediate(ex_io_immediate),
    .io_aluop1_source(ex_io_aluop1_source),
    .io_aluop2_source(ex_io_aluop2_source),
    .io_csr_read_data(ex_io_csr_read_data),
    .io_forward_from_mem(ex_io_forward_from_mem),
    .io_forward_from_wb(ex_io_forward_from_wb),
    .io_reg1_forward(ex_io_reg1_forward),
    .io_reg2_forward(ex_io_reg2_forward),
    .io_mem_alu_result(ex_io_mem_alu_result),
    .io_mem_reg2_data(ex_io_mem_reg2_data),
    .io_csr_write_data(ex_io_csr_write_data)
  );
  EX2MEM ex2mem ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 125:26]
    .clock(ex2mem_clock),
    .reset(ex2mem_reset),
    .io_stall(ex2mem_io_stall),
    .io_regs_write_enable(ex2mem_io_regs_write_enable),
    .io_regs_write_source(ex2mem_io_regs_write_source),
    .io_regs_write_address(ex2mem_io_regs_write_address),
    .io_instruction_address(ex2mem_io_instruction_address),
    .io_funct3(ex2mem_io_funct3),
    .io_reg2_data(ex2mem_io_reg2_data),
    .io_memory_read_enable(ex2mem_io_memory_read_enable),
    .io_memory_write_enable(ex2mem_io_memory_write_enable),
    .io_alu_result(ex2mem_io_alu_result),
    .io_csr_read_data(ex2mem_io_csr_read_data),
    .io_output_regs_write_enable(ex2mem_io_output_regs_write_enable),
    .io_output_regs_write_source(ex2mem_io_output_regs_write_source),
    .io_output_regs_write_address(ex2mem_io_output_regs_write_address),
    .io_output_instruction_address(ex2mem_io_output_instruction_address),
    .io_output_funct3(ex2mem_io_output_funct3),
    .io_output_reg2_data(ex2mem_io_output_reg2_data),
    .io_output_memory_read_enable(ex2mem_io_output_memory_read_enable),
    .io_output_memory_write_enable(ex2mem_io_output_memory_write_enable),
    .io_output_alu_result(ex2mem_io_output_alu_result),
    .io_output_csr_read_data(ex2mem_io_output_csr_read_data)
  );
  MemoryAccess mem ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 126:26]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_alu_result(mem_io_alu_result),
    .io_reg2_data(mem_io_reg2_data),
    .io_memory_read_enable(mem_io_memory_read_enable),
    .io_memory_write_enable(mem_io_memory_write_enable),
    .io_funct3(mem_io_funct3),
    .io_regs_write_source(mem_io_regs_write_source),
    .io_csr_read_data(mem_io_csr_read_data),
    .io_instruction_address(mem_io_instruction_address),
    .io_wb_memory_read_data(mem_io_wb_memory_read_data),
    .io_forward_to_ex(mem_io_forward_to_ex),
    .io_ctrl_stall_flag(mem_io_ctrl_stall_flag),
    .io_wb_regs_write_source(mem_io_wb_regs_write_source),
    .io_bus_address(mem_io_bus_address),
    .io_bus_read(mem_io_bus_read),
    .io_bus_read_data(mem_io_bus_read_data),
    .io_bus_read_valid(mem_io_bus_read_valid),
    .io_bus_write(mem_io_bus_write),
    .io_bus_write_data(mem_io_bus_write_data),
    .io_bus_write_strobe_0(mem_io_bus_write_strobe_0),
    .io_bus_write_strobe_1(mem_io_bus_write_strobe_1),
    .io_bus_write_strobe_2(mem_io_bus_write_strobe_2),
    .io_bus_write_strobe_3(mem_io_bus_write_strobe_3),
    .io_bus_write_valid(mem_io_bus_write_valid),
    .io_bus_request(mem_io_bus_request),
    .io_bus_granted(mem_io_bus_granted)
  );
  MEM2WB mem2wb ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 127:26]
    .clock(mem2wb_clock),
    .reset(mem2wb_reset),
    .io_stall(mem2wb_io_stall),
    .io_instruction_address(mem2wb_io_instruction_address),
    .io_alu_result(mem2wb_io_alu_result),
    .io_regs_write_enable(mem2wb_io_regs_write_enable),
    .io_regs_write_source(mem2wb_io_regs_write_source),
    .io_regs_write_address(mem2wb_io_regs_write_address),
    .io_memory_read_data(mem2wb_io_memory_read_data),
    .io_csr_read_data(mem2wb_io_csr_read_data),
    .io_output_instruction_address(mem2wb_io_output_instruction_address),
    .io_output_alu_result(mem2wb_io_output_alu_result),
    .io_output_regs_write_enable(mem2wb_io_output_regs_write_enable),
    .io_output_regs_write_source(mem2wb_io_output_regs_write_source),
    .io_output_regs_write_address(mem2wb_io_output_regs_write_address),
    .io_output_memory_read_data(mem2wb_io_output_memory_read_data),
    .io_output_csr_read_data(mem2wb_io_output_csr_read_data)
  );
  WriteBack wb ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 128:26]
    .io_instruction_address(wb_io_instruction_address),
    .io_alu_result(wb_io_alu_result),
    .io_memory_read_data(wb_io_memory_read_data),
    .io_regs_write_source(wb_io_regs_write_source),
    .io_csr_read_data(wb_io_csr_read_data),
    .io_regs_write_data(wb_io_regs_write_data)
  );
  Forwarding forwarding ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 129:26]
    .io_rs1_id(forwarding_io_rs1_id),
    .io_rs2_id(forwarding_io_rs2_id),
    .io_rs1_ex(forwarding_io_rs1_ex),
    .io_rs2_ex(forwarding_io_rs2_ex),
    .io_rd_mem(forwarding_io_rd_mem),
    .io_reg_write_enable_mem(forwarding_io_reg_write_enable_mem),
    .io_rd_wb(forwarding_io_rd_wb),
    .io_reg_write_enable_wb(forwarding_io_reg_write_enable_wb),
    .io_reg1_forward_id(forwarding_io_reg1_forward_id),
    .io_reg2_forward_id(forwarding_io_reg2_forward_id),
    .io_reg1_forward_ex(forwarding_io_reg1_forward_ex),
    .io_reg2_forward_ex(forwarding_io_reg2_forward_ex)
  );
  CLINT clint ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 130:26]
    .io_interrupt_flag(clint_io_interrupt_flag),
    .io_instruction_id(clint_io_instruction_id),
    .io_instruction_address_if(clint_io_instruction_address_if),
    .io_jump_flag(clint_io_jump_flag),
    .io_jump_address(clint_io_jump_address),
    .io_id_interrupt_handler_address(clint_io_id_interrupt_handler_address),
    .io_id_interrupt_assert(clint_io_id_interrupt_assert),
    .io_csr_bundle_mstatus(clint_io_csr_bundle_mstatus),
    .io_csr_bundle_mepc(clint_io_csr_bundle_mepc),
    .io_csr_bundle_mcause(clint_io_csr_bundle_mcause),
    .io_csr_bundle_mtvec(clint_io_csr_bundle_mtvec),
    .io_csr_bundle_mie(clint_io_csr_bundle_mie),
    .io_csr_bundle_mstatus_write_data(clint_io_csr_bundle_mstatus_write_data),
    .io_csr_bundle_mepc_write_data(clint_io_csr_bundle_mepc_write_data),
    .io_csr_bundle_mcause_write_data(clint_io_csr_bundle_mcause_write_data),
    .io_csr_bundle_direct_write_enable(clint_io_csr_bundle_direct_write_enable)
  );
  CSR csr_regs ( // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 131:26]
    .clock(csr_regs_clock),
    .reset(csr_regs_reset),
    .io_reg_read_address_id(csr_regs_io_reg_read_address_id),
    .io_reg_write_enable_ex(csr_regs_io_reg_write_enable_ex),
    .io_reg_write_address_ex(csr_regs_io_reg_write_address_ex),
    .io_reg_write_data_ex(csr_regs_io_reg_write_data_ex),
    .io_debug_reg_read_address(csr_regs_io_debug_reg_read_address),
    .io_id_reg_read_data(csr_regs_io_id_reg_read_data),
    .io_debug_reg_read_data(csr_regs_io_debug_reg_read_data),
    .io_clint_access_bundle_mstatus(csr_regs_io_clint_access_bundle_mstatus),
    .io_clint_access_bundle_mepc(csr_regs_io_clint_access_bundle_mepc),
    .io_clint_access_bundle_mcause(csr_regs_io_clint_access_bundle_mcause),
    .io_clint_access_bundle_mtvec(csr_regs_io_clint_access_bundle_mtvec),
    .io_clint_access_bundle_mie(csr_regs_io_clint_access_bundle_mie),
    .io_clint_access_bundle_mstatus_write_data(csr_regs_io_clint_access_bundle_mstatus_write_data),
    .io_clint_access_bundle_mepc_write_data(csr_regs_io_clint_access_bundle_mepc_write_data),
    .io_clint_access_bundle_mcause_write_data(csr_regs_io_clint_access_bundle_mcause_write_data),
    .io_clint_access_bundle_direct_write_enable(csr_regs_io_clint_access_bundle_direct_write_enable)
  );
  assign io_instruction_address = inst_fetch_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 162:35]
  assign io_memory_bundle_address = {3'h0,mem_io_bus_address[28:0]}; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 341:70]
  assign io_memory_bundle_read = mem_io_bus_read; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_write = mem_io_bus_write; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_write_data = mem_io_bus_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_write_strobe_0 = mem_io_bus_write_strobe_0; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_write_strobe_1 = mem_io_bus_write_strobe_1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_write_strobe_2 = mem_io_bus_write_strobe_2; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_write_strobe_3 = mem_io_bus_write_strobe_3; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_memory_bundle_request = mem_io_bus_request; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign io_device_select = mem_io_bus_address[31:29]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 339:13]
  assign io_debug_read_data = regs_io_debug_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 157:30]
  assign io_csr_debug_read_data = csr_regs_io_debug_reg_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 382:38]
  assign ctrl_io_jump_flag = id_io_if_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 133:35]
  assign ctrl_io_jump_instruction_id = id_io_ctrl_jump_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 134:35]
  assign ctrl_io_rs1_id = id_io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 135:35]
  assign ctrl_io_rs2_id = id_io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 136:35]
  assign ctrl_io_memory_read_enable_ex = id2ex_io_output_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 137:35]
  assign ctrl_io_rd_ex = id2ex_io_output_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 138:35]
  assign ctrl_io_memory_read_enable_mem = ex2mem_io_output_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 139:35]
  assign ctrl_io_rd_mem = ex2mem_io_output_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 140:35]
  assign ctrl_io_memory_write_enable_mem = ex2mem_io_output_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 142:35]
  assign ctrl_io_regs_write_source_ex = id2ex_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 144:35]
  assign ctrl_io_regs_write_source_mem = ex2mem_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 145:35]
  assign ctrl_io_regs_write_source_wb = mem2wb_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 147:32]
  assign ctrl_io_rd_wb = mem2wb_io_output_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 148:32]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_write_enable = mem2wb_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 150:25]
  assign regs_io_write_address = mem2wb_io_output_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 151:25]
  assign regs_io_write_data = wb_io_regs_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 152:25]
  assign regs_io_read_address1 = id_io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 153:25]
  assign regs_io_read_address2 = id_io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 154:25]
  assign regs_io_debug_read_address = io_debug_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 156:30]
  assign inst_fetch_clock = clock;
  assign inst_fetch_reset = reset;
  assign inst_fetch_io_stall_flag_ctrl = ctrl_io_pc_stall | mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 163:55]
  assign inst_fetch_io_jump_flag_id = id_io_if_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 164:35]
  assign inst_fetch_io_jump_address_id = id_io_if_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 165:35]
  assign inst_fetch_io_rom_instruction = io_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 166:35]
  assign inst_fetch_io_instruction_valid = io_instruction_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 167:35]
  assign inst_fetch_io_btb_mispredict = (btb_wrong_direction | btb_non_branch | btb_wrong_target) & ~id_io_branch_hazard
    ; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 192:84]
  assign inst_fetch_io_btb_correction_addr = btb_wrong_target ? id_io_if_jump_address : _btb_correction_addr_T_1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 197:32]
  assign inst_fetch_io_btb_correct_prediction = _btb_wrong_target_T & if2id_io_output_btb_predicted_target ==
    id_io_if_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 189:62]
  assign inst_fetch_io_btb_update_valid = (id_io_ctrl_jump_instruction | btb_non_branch) & _btb_mispredict_T_2 & ~
    mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 206:95]
  assign inst_fetch_io_btb_update_pc = if2id_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 208:35]
  assign inst_fetch_io_btb_update_target = id_io_if_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 209:35]
  assign inst_fetch_io_btb_update_taken = id_io_if_jump_flag & id_io_ctrl_jump_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 210:57]
  assign if2id_clock = clock;
  assign if2id_reset = reset;
  assign if2id_io_stall = ctrl_io_if_stall | mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 212:38]
  assign if2id_io_flush = need_if_flush & _btb_should_update_T_3; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 238:50]
  assign if2id_io_instruction = inst_fetch_io_id_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 239:33]
  assign if2id_io_instruction_address = inst_fetch_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 240:33]
  assign if2id_io_interrupt_flag = io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 241:33]
  assign if2id_io_btb_predicted_taken = inst_fetch_io_btb_predicted_taken; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 242:33]
  assign if2id_io_btb_predicted_target = inst_fetch_io_btb_predicted_target; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 243:33]
  assign id_io_instruction = if2id_io_output_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 245:35]
  assign id_io_instruction_address = if2id_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 246:35]
  assign id_io_reg1_data = regs_io_read_data1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 247:35]
  assign id_io_reg2_data = regs_io_read_data2; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 248:35]
  assign id_io_forward_from_mem = mem_io_forward_to_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 249:35]
  assign id_io_forward_from_wb = wb_io_regs_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 250:35]
  assign id_io_reg1_forward = forwarding_io_reg1_forward_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 251:35]
  assign id_io_reg2_forward = forwarding_io_reg2_forward_id; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 252:35]
  assign id_io_interrupt_assert = clint_io_id_interrupt_assert; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 253:35]
  assign id_io_interrupt_handler_address = clint_io_id_interrupt_handler_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 254:35]
  assign id_io_branch_hazard = ctrl_io_branch_hazard; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 255:35]
  assign id2ex_clock = clock;
  assign id2ex_reset = reset;
  assign id2ex_io_stall = mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 257:18]
  assign id2ex_io_flush = ctrl_io_id_flush & (_btb_should_update_T_3 | ctrl_io_jal_jalr_hazard); // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 267:52]
  assign id2ex_io_instruction = if2id_io_output_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 268:32]
  assign id2ex_io_instruction_address = if2id_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 269:32]
  assign id2ex_io_regs_reg1_read_address = id_io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 291:35]
  assign id2ex_io_regs_reg2_read_address = id_io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 292:35]
  assign id2ex_io_regs_write_enable = id_io_ex_reg_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 293:35]
  assign id2ex_io_regs_write_address = id_io_ex_reg_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 294:35]
  assign id2ex_io_regs_write_source = id_io_ex_reg_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 295:35]
  assign id2ex_io_reg1_data = 2'h2 == forwarding_io_reg1_forward_id ? wb_io_regs_write_data :
    _id_reg1_data_forwarded_T_1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 276:92]
  assign id2ex_io_reg2_data = 2'h2 == forwarding_io_reg2_forward_id ? wb_io_regs_write_data :
    _id_reg2_data_forwarded_T_1; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 282:92]
  assign id2ex_io_immediate = id_io_ex_immediate; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 296:35]
  assign id2ex_io_aluop1_source = id_io_ex_aluop1_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 297:35]
  assign id2ex_io_aluop2_source = id_io_ex_aluop2_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 298:35]
  assign id2ex_io_csr_write_enable = id_io_ex_csr_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 299:35]
  assign id2ex_io_csr_address = id_io_ex_csr_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 300:35]
  assign id2ex_io_memory_read_enable = id_io_ex_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 301:35]
  assign id2ex_io_memory_write_enable = id_io_ex_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 302:35]
  assign id2ex_io_csr_read_data = csr_regs_io_id_reg_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 303:35]
  assign ex_io_instruction = id2ex_io_output_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 305:29]
  assign ex_io_instruction_address = id2ex_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 306:29]
  assign ex_io_reg1_data = id2ex_io_output_reg1_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 307:29]
  assign ex_io_reg2_data = id2ex_io_output_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 308:29]
  assign ex_io_immediate = id2ex_io_output_immediate; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 309:29]
  assign ex_io_aluop1_source = id2ex_io_output_aluop1_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 310:29]
  assign ex_io_aluop2_source = id2ex_io_output_aluop2_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 311:29]
  assign ex_io_csr_read_data = id2ex_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 312:29]
  assign ex_io_forward_from_mem = mem_io_forward_to_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 313:29]
  assign ex_io_forward_from_wb = wb_io_regs_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 314:29]
  assign ex_io_reg1_forward = forwarding_io_reg1_forward_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 315:29]
  assign ex_io_reg2_forward = forwarding_io_reg2_forward_ex; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 316:29]
  assign ex2mem_clock = clock;
  assign ex2mem_reset = reset;
  assign ex2mem_io_stall = mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 318:33]
  assign ex2mem_io_regs_write_enable = id2ex_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 319:33]
  assign ex2mem_io_regs_write_source = id2ex_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 320:33]
  assign ex2mem_io_regs_write_address = {{27'd0}, id2ex_io_output_regs_write_address}; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 321:33]
  assign ex2mem_io_instruction_address = id2ex_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 322:33]
  assign ex2mem_io_funct3 = id2ex_io_output_instruction[14:12]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 323:63]
  assign ex2mem_io_reg2_data = ex_io_mem_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 324:33]
  assign ex2mem_io_memory_read_enable = id2ex_io_output_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 325:33]
  assign ex2mem_io_memory_write_enable = id2ex_io_output_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 326:33]
  assign ex2mem_io_alu_result = ex_io_mem_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 327:33]
  assign ex2mem_io_csr_read_data = id2ex_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 328:33]
  assign mem_clock = clock;
  assign mem_reset = reset;
  assign mem_io_alu_result = ex2mem_io_output_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 330:30]
  assign mem_io_reg2_data = ex2mem_io_output_reg2_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 331:30]
  assign mem_io_memory_read_enable = ex2mem_io_output_memory_read_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 332:30]
  assign mem_io_memory_write_enable = ex2mem_io_output_memory_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 333:30]
  assign mem_io_funct3 = ex2mem_io_output_funct3[2:0]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 334:30]
  assign mem_io_regs_write_source = ex2mem_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 335:30]
  assign mem_io_csr_read_data = ex2mem_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 336:30]
  assign mem_io_instruction_address = ex2mem_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 337:30]
  assign mem_io_bus_read_data = io_memory_bundle_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign mem_io_bus_read_valid = io_memory_bundle_read_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign mem_io_bus_write_valid = io_memory_bundle_write_valid; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign mem_io_bus_granted = io_memory_bundle_granted; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 340:20]
  assign mem2wb_clock = clock;
  assign mem2wb_reset = reset;
  assign mem2wb_io_stall = mem_io_ctrl_stall_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 344:33]
  assign mem2wb_io_instruction_address = ex2mem_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 345:33]
  assign mem2wb_io_alu_result = ex2mem_io_output_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 346:33]
  assign mem2wb_io_regs_write_enable = ex2mem_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 347:33]
  assign mem2wb_io_regs_write_source = mem_io_wb_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 350:32]
  assign mem2wb_io_regs_write_address = ex2mem_io_output_regs_write_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 351:32]
  assign mem2wb_io_memory_read_data = mem_io_wb_memory_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 352:32]
  assign mem2wb_io_csr_read_data = ex2mem_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 353:32]
  assign wb_io_instruction_address = mem2wb_io_output_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 355:29]
  assign wb_io_alu_result = mem2wb_io_output_alu_result; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 356:29]
  assign wb_io_memory_read_data = mem2wb_io_output_memory_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 357:29]
  assign wb_io_regs_write_source = mem2wb_io_output_regs_write_source; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 358:29]
  assign wb_io_csr_read_data = mem2wb_io_output_csr_read_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 359:29]
  assign forwarding_io_rs1_id = id_io_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 361:38]
  assign forwarding_io_rs2_id = id_io_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 362:38]
  assign forwarding_io_rs1_ex = id2ex_io_output_regs_reg1_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 363:38]
  assign forwarding_io_rs2_ex = id2ex_io_output_regs_reg2_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 364:38]
  assign forwarding_io_rd_mem = ex2mem_io_output_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 365:38]
  assign forwarding_io_reg_write_enable_mem = ex2mem_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 366:38]
  assign forwarding_io_rd_wb = mem2wb_io_output_regs_write_address[4:0]; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 367:38]
  assign forwarding_io_reg_write_enable_wb = mem2wb_io_output_regs_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 368:38]
  assign clint_io_interrupt_flag = io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 374:35]
  assign clint_io_instruction_id = if2id_io_output_instruction; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 371:35]
  assign clint_io_instruction_address_if = inst_fetch_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 370:35]
  assign clint_io_jump_flag = id_io_clint_jump_flag; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 372:35]
  assign clint_io_jump_address = id_io_clint_jump_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 373:35]
  assign clint_io_csr_bundle_mstatus = csr_regs_io_clint_access_bundle_mstatus; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign clint_io_csr_bundle_mepc = csr_regs_io_clint_access_bundle_mepc; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign clint_io_csr_bundle_mcause = csr_regs_io_clint_access_bundle_mcause; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign clint_io_csr_bundle_mtvec = csr_regs_io_clint_access_bundle_mtvec; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign clint_io_csr_bundle_mie = csr_regs_io_clint_access_bundle_mie; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign csr_regs_clock = clock;
  assign csr_regs_reset = reset;
  assign csr_regs_io_reg_read_address_id = id_io_ex_csr_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 377:38]
  assign csr_regs_io_reg_write_enable_ex = id2ex_io_output_csr_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 378:38]
  assign csr_regs_io_reg_write_address_ex = id2ex_io_output_csr_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 379:38]
  assign csr_regs_io_reg_write_data_ex = ex_io_csr_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 380:38]
  assign csr_regs_io_debug_reg_read_address = io_csr_debug_read_address; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 381:38]
  assign csr_regs_io_clint_access_bundle_mstatus_write_data = clint_io_csr_bundle_mstatus_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign csr_regs_io_clint_access_bundle_mepc_write_data = clint_io_csr_bundle_mepc_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign csr_regs_io_clint_access_bundle_mcause_write_data = clint_io_csr_bundle_mcause_write_data; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
  assign csr_regs_io_clint_access_bundle_direct_write_enable = clint_io_csr_bundle_direct_write_enable; // @[4-soc/src/main/scala/riscv/core/PipelinedCPU.scala 375:23]
endmodule
module AXI4LiteMaster(
  input         clock,
  input         reset,
  output        io_channels_write_address_channel_AWVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_channels_write_address_channel_AWREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output [31:0] io_channels_write_address_channel_AWADDR, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_channels_write_data_channel_WVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_channels_write_data_channel_WREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output [31:0] io_channels_write_data_channel_WDATA, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output [3:0]  io_channels_write_data_channel_WSTRB, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_channels_write_response_channel_BVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_channels_write_response_channel_BREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_channels_read_address_channel_ARVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_channels_read_address_channel_ARREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output [31:0] io_channels_read_address_channel_ARADDR, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_channels_read_data_channel_RVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_channels_read_data_channel_RREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input  [31:0] io_channels_read_data_channel_RDATA, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input  [31:0] io_bundle_address, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_bundle_read, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_bundle_write, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output [31:0] io_bundle_read_data, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input  [31:0] io_bundle_write_data, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_bundle_write_strobe_0, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_bundle_write_strobe_1, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_bundle_write_strobe_2, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  input         io_bundle_write_strobe_3, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_bundle_busy, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_bundle_read_valid, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
  output        io_bundle_write_valid // @[4-soc/src/main/scala/bus/AXI4Lite.scala 229:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 234:22]
  reg [31:0] addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 237:21]
  reg  read_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 242:27]
  reg [31:0] read_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 244:26]
  reg  ARVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 247:24]
  reg  RREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 249:23]
  reg  write_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 255:28]
  reg [31:0] write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 257:27]
  reg  write_strobe_0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
  reg  write_strobe_1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
  reg  write_strobe_2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
  reg  write_strobe_3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
  wire [1:0] io_channels_write_data_channel_WSTRB_lo = {write_strobe_1,write_strobe_0}; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 260:56]
  wire [1:0] io_channels_write_data_channel_WSTRB_hi = {write_strobe_3,write_strobe_2}; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 260:56]
  reg  AWVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 262:24]
  reg  WVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 264:23]
  reg  BREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 266:23]
  wire  _GEN_6 = io_bundle_write | AWVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35 296:22 262:24]
  wire  _GEN_7 = io_bundle_write | WVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35 297:22 264:23]
  wire  _GEN_10 = io_bundle_read & ~io_bundle_write | ARVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48 288:17 247:24]
  wire  _GEN_11 = io_bundle_read & ~io_bundle_write | RREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48 289:17 249:23]
  wire  _GEN_23 = io_channels_read_data_channel_RVALID & RREADY | read_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 308:60 312:20 242:27]
  wire  _GEN_25 = AWVALID & io_channels_write_address_channel_AWREADY ? 1'h0 : AWVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 319:66 320:17 262:24]
  wire  _GEN_26 = WVALID & io_channels_write_data_channel_WREADY ? 1'h0 : WVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 264:23 323:61 325:29]
  wire  _GEN_27 = WVALID & io_channels_write_data_channel_WREADY | BREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 266:23 323:61 326:29]
  wire [2:0] _GEN_29 = WVALID & io_channels_write_data_channel_WREADY ? 3'h5 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 234:22 323:61 328:29]
  wire  _GEN_31 = io_channels_write_response_channel_BVALID & BREADY ? 1'h0 : BREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 339:65 341:21 266:23]
  wire  _GEN_32 = io_channels_write_response_channel_BVALID & BREADY | write_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 339:65 342:21 255:28]
  wire [2:0] _GEN_33 = io_channels_write_response_channel_BVALID & BREADY ? 3'h0 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 339:65 343:21 234:22]
  wire [2:0] _GEN_34 = 3'h3 == state ? 3'h0 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17 352:13 234:22]
  wire [2:0] _GEN_35 = 3'h1 == state ? 3'h0 : _GEN_34; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17 349:13]
  wire  _GEN_36 = 3'h5 == state ? _GEN_25 : AWVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17 262:24]
  wire  _GEN_37 = 3'h5 == state ? _GEN_31 : BREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17 266:23]
  wire  _GEN_38 = 3'h5 == state ? _GEN_32 : write_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17 255:28]
  wire [2:0] _GEN_39 = 3'h5 == state ? _GEN_33 : _GEN_35; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
  assign io_channels_write_address_channel_AWVALID = AWVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 263:45]
  assign io_channels_write_address_channel_AWADDR = addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 239:44]
  assign io_channels_write_data_channel_WVALID = WVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 265:41]
  assign io_channels_write_data_channel_WDATA = write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 258:40]
  assign io_channels_write_data_channel_WSTRB = {io_channels_write_data_channel_WSTRB_hi,
    io_channels_write_data_channel_WSTRB_lo}; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 260:56]
  assign io_channels_write_response_channel_BREADY = BREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 267:45]
  assign io_channels_read_address_channel_ARVALID = ARVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 248:44]
  assign io_channels_read_address_channel_ARADDR = addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 238:44]
  assign io_channels_read_data_channel_RREADY = RREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 250:40]
  assign io_bundle_read_data = read_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 245:23]
  assign io_bundle_busy = state != 3'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 235:27]
  assign io_bundle_read_valid = read_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 243:24]
  assign io_bundle_write_valid = write_valid; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 256:25]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 234:22]
      state <= 3'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 234:22]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (io_bundle_read & ~io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        state <= 3'h2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 290:17]
      end else if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
        state <= 3'h4; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 298:22]
      end
    end else if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (io_channels_read_data_channel_RVALID & RREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 308:60]
        state <= 3'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 313:20]
      end
    end else if (3'h4 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      state <= _GEN_29;
    end else begin
      state <= _GEN_39;
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 237:21]
      addr <= 32'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 237:21]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (io_bundle_read & ~io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        addr <= io_bundle_address; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 287:17]
      end else if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
        addr <= io_bundle_address; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 293:22]
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 242:27]
      read_valid <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 242:27]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      read_valid <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 281:27]
    end else if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      read_valid <= _GEN_23;
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 244:26]
      read_data <= 32'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 244:26]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
        if (io_channels_read_data_channel_RVALID & RREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 308:60]
          read_data <= io_channels_read_data_channel_RDATA; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 310:20]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 247:24]
      ARVALID <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 247:24]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      ARVALID <= _GEN_10;
    end else if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (ARVALID & io_channels_read_address_channel_ARREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 304:65]
        ARVALID <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 305:17]
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 249:23]
      RREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 249:23]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      RREADY <= _GEN_11;
    end else if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (io_channels_read_data_channel_RVALID & RREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 308:60]
        RREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 311:20]
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 255:28]
      write_valid <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 255:28]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      write_valid <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 282:27]
    end else if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(3'h4 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
        write_valid <= _GEN_38;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 257:27]
      write_data <= 32'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 257:27]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
          write_data <= io_bundle_write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 294:22]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
      write_strobe_0 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
          write_strobe_0 <= io_bundle_write_strobe_0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 295:22]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
      write_strobe_1 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
          write_strobe_1 <= io_bundle_write_strobe_1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 295:22]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
      write_strobe_2 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
          write_strobe_2 <= io_bundle_write_strobe_2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 295:22]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
      write_strobe_3 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 259:29]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        if (io_bundle_write) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 291:35]
          write_strobe_3 <= io_bundle_write_strobe_3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 295:22]
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 262:24]
      AWVALID <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 262:24]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        AWVALID <= _GEN_6;
      end
    end else if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (3'h4 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
        AWVALID <= _GEN_25;
      end else begin
        AWVALID <= _GEN_36;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 264:23]
      WVALID <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 264:23]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(io_bundle_read & ~io_bundle_write)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 285:48]
        WVALID <= _GEN_7;
      end
    end else if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (3'h4 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
        WVALID <= _GEN_26;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 266:23]
      BREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 266:23]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
      if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
        if (3'h4 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 279:17]
          BREADY <= _GEN_27;
        end else begin
          BREADY <= _GEN_37;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  addr = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  read_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  read_data = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  ARVALID = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  RREADY = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  write_valid = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  write_data = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  write_strobe_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  write_strobe_1 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  write_strobe_2 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  write_strobe_3 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  AWVALID = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  WVALID = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  BREADY = _RAND_14[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CPU(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [31:0] io_instruction, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_instruction_valid, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_axi4_channels_write_address_channel_AWVALID, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_axi4_channels_write_address_channel_AWREADY, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_axi4_channels_write_address_channel_AWADDR, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_axi4_channels_write_data_channel_WVALID, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_axi4_channels_write_data_channel_WREADY, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_axi4_channels_write_data_channel_WDATA, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output [3:0]  io_axi4_channels_write_data_channel_WSTRB, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_axi4_channels_write_response_channel_BVALID, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_axi4_channels_write_response_channel_BREADY, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_axi4_channels_read_address_channel_ARVALID, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_axi4_channels_read_address_channel_ARREADY, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_axi4_channels_read_address_channel_ARADDR, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_axi4_channels_read_data_channel_RVALID, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_axi4_channels_read_data_channel_RREADY, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [31:0] io_axi4_channels_read_data_channel_RDATA, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [31:0] io_interrupt_flag, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [4:0]  io_debug_read_address, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_debug_read_data, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [11:0] io_csr_debug_read_address, // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_csr_debug_read_data // @[4-soc/src/main/scala/riscv/core/CPU.scala 14:14]
);
  wire  cpu_clock; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_reset; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_instruction; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_instruction_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_memory_bundle_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_read; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_memory_bundle_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_read_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_write; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_memory_bundle_write_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_write_strobe_0; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_write_strobe_1; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_write_strobe_2; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_write_strobe_3; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_write_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_request; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  cpu_io_memory_bundle_granted; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [2:0] cpu_io_device_select; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [4:0] cpu_io_debug_read_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_debug_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [11:0] cpu_io_csr_debug_read_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire [31:0] cpu_io_csr_debug_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
  wire  axi_master_clock; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_reset; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_write_address_channel_AWVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_write_address_channel_AWREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_channels_write_address_channel_AWADDR; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_write_data_channel_WVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_write_data_channel_WREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_channels_write_data_channel_WDATA; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [3:0] axi_master_io_channels_write_data_channel_WSTRB; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_write_response_channel_BVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_write_response_channel_BREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_read_address_channel_ARVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_read_address_channel_ARREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_channels_read_address_channel_ARADDR; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_read_data_channel_RVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_channels_read_data_channel_RREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_channels_read_data_channel_RDATA; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_bundle_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_read; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_write; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_bundle_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire [31:0] axi_master_io_bundle_write_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_write_strobe_0; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_write_strobe_1; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_write_strobe_2; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_write_strobe_3; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_busy; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_read_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  wire  axi_master_io_bundle_write_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
  PipelinedCPU cpu ( // @[4-soc/src/main/scala/riscv/core/CPU.scala 18:23]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_instruction_address(cpu_io_instruction_address),
    .io_instruction(cpu_io_instruction),
    .io_instruction_valid(cpu_io_instruction_valid),
    .io_memory_bundle_address(cpu_io_memory_bundle_address),
    .io_memory_bundle_read(cpu_io_memory_bundle_read),
    .io_memory_bundle_read_data(cpu_io_memory_bundle_read_data),
    .io_memory_bundle_read_valid(cpu_io_memory_bundle_read_valid),
    .io_memory_bundle_write(cpu_io_memory_bundle_write),
    .io_memory_bundle_write_data(cpu_io_memory_bundle_write_data),
    .io_memory_bundle_write_strobe_0(cpu_io_memory_bundle_write_strobe_0),
    .io_memory_bundle_write_strobe_1(cpu_io_memory_bundle_write_strobe_1),
    .io_memory_bundle_write_strobe_2(cpu_io_memory_bundle_write_strobe_2),
    .io_memory_bundle_write_strobe_3(cpu_io_memory_bundle_write_strobe_3),
    .io_memory_bundle_write_valid(cpu_io_memory_bundle_write_valid),
    .io_memory_bundle_request(cpu_io_memory_bundle_request),
    .io_memory_bundle_granted(cpu_io_memory_bundle_granted),
    .io_device_select(cpu_io_device_select),
    .io_interrupt_flag(cpu_io_interrupt_flag),
    .io_debug_read_address(cpu_io_debug_read_address),
    .io_debug_read_data(cpu_io_debug_read_data),
    .io_csr_debug_read_address(cpu_io_csr_debug_read_address),
    .io_csr_debug_read_data(cpu_io_csr_debug_read_data)
  );
  AXI4LiteMaster axi_master ( // @[4-soc/src/main/scala/riscv/core/CPU.scala 26:30]
    .clock(axi_master_clock),
    .reset(axi_master_reset),
    .io_channels_write_address_channel_AWVALID(axi_master_io_channels_write_address_channel_AWVALID),
    .io_channels_write_address_channel_AWREADY(axi_master_io_channels_write_address_channel_AWREADY),
    .io_channels_write_address_channel_AWADDR(axi_master_io_channels_write_address_channel_AWADDR),
    .io_channels_write_data_channel_WVALID(axi_master_io_channels_write_data_channel_WVALID),
    .io_channels_write_data_channel_WREADY(axi_master_io_channels_write_data_channel_WREADY),
    .io_channels_write_data_channel_WDATA(axi_master_io_channels_write_data_channel_WDATA),
    .io_channels_write_data_channel_WSTRB(axi_master_io_channels_write_data_channel_WSTRB),
    .io_channels_write_response_channel_BVALID(axi_master_io_channels_write_response_channel_BVALID),
    .io_channels_write_response_channel_BREADY(axi_master_io_channels_write_response_channel_BREADY),
    .io_channels_read_address_channel_ARVALID(axi_master_io_channels_read_address_channel_ARVALID),
    .io_channels_read_address_channel_ARREADY(axi_master_io_channels_read_address_channel_ARREADY),
    .io_channels_read_address_channel_ARADDR(axi_master_io_channels_read_address_channel_ARADDR),
    .io_channels_read_data_channel_RVALID(axi_master_io_channels_read_data_channel_RVALID),
    .io_channels_read_data_channel_RREADY(axi_master_io_channels_read_data_channel_RREADY),
    .io_channels_read_data_channel_RDATA(axi_master_io_channels_read_data_channel_RDATA),
    .io_bundle_address(axi_master_io_bundle_address),
    .io_bundle_read(axi_master_io_bundle_read),
    .io_bundle_write(axi_master_io_bundle_write),
    .io_bundle_read_data(axi_master_io_bundle_read_data),
    .io_bundle_write_data(axi_master_io_bundle_write_data),
    .io_bundle_write_strobe_0(axi_master_io_bundle_write_strobe_0),
    .io_bundle_write_strobe_1(axi_master_io_bundle_write_strobe_1),
    .io_bundle_write_strobe_2(axi_master_io_bundle_write_strobe_2),
    .io_bundle_write_strobe_3(axi_master_io_bundle_write_strobe_3),
    .io_bundle_busy(axi_master_io_bundle_busy),
    .io_bundle_read_valid(axi_master_io_bundle_read_valid),
    .io_bundle_write_valid(axi_master_io_bundle_write_valid)
  );
  assign io_instruction_address = cpu_io_instruction_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 21:32]
  assign io_axi4_channels_write_address_channel_AWVALID = axi_master_io_channels_write_address_channel_AWVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_write_address_channel_AWADDR = axi_master_io_channels_write_address_channel_AWADDR; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_write_data_channel_WVALID = axi_master_io_channels_write_data_channel_WVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_write_data_channel_WDATA = axi_master_io_channels_write_data_channel_WDATA; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_write_data_channel_WSTRB = axi_master_io_channels_write_data_channel_WSTRB; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_write_response_channel_BREADY = axi_master_io_channels_write_response_channel_BREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_read_address_channel_ARVALID = axi_master_io_channels_read_address_channel_ARVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_read_address_channel_ARADDR = axi_master_io_channels_read_address_channel_ARADDR; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_axi4_channels_read_data_channel_RREADY = axi_master_io_channels_read_data_channel_RREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign io_debug_read_data = cpu_io_debug_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 102:33]
  assign io_csr_debug_read_data = cpu_io_csr_debug_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 105:37]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_instruction = io_instruction; // @[4-soc/src/main/scala/riscv/core/CPU.scala 22:32]
  assign cpu_io_instruction_valid = io_instruction_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 23:32]
  assign cpu_io_memory_bundle_read_data = axi_master_io_bundle_read_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 39:48]
  assign cpu_io_memory_bundle_read_valid = axi_master_io_bundle_read_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 40:48]
  assign cpu_io_memory_bundle_write_valid = axi_master_io_bundle_write_valid; // @[4-soc/src/main/scala/riscv/core/CPU.scala 41:48]
  assign cpu_io_memory_bundle_granted = ~axi_master_io_bundle_busy; // @[4-soc/src/main/scala/riscv/core/CPU.scala 44:51]
  assign cpu_io_interrupt_flag = io_interrupt_flag; // @[4-soc/src/main/scala/riscv/core/CPU.scala 98:29]
  assign cpu_io_debug_read_address = io_debug_read_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 101:33]
  assign cpu_io_csr_debug_read_address = io_csr_debug_read_address; // @[4-soc/src/main/scala/riscv/core/CPU.scala 104:37]
  assign axi_master_clock = clock;
  assign axi_master_reset = reset;
  assign axi_master_io_channels_write_address_channel_AWREADY = io_axi4_channels_write_address_channel_AWREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign axi_master_io_channels_write_data_channel_WREADY = io_axi4_channels_write_data_channel_WREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign axi_master_io_channels_write_response_channel_BVALID = io_axi4_channels_write_response_channel_BVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign axi_master_io_channels_read_address_channel_ARREADY = io_axi4_channels_read_address_channel_ARREADY; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign axi_master_io_channels_read_data_channel_RVALID = io_axi4_channels_read_data_channel_RVALID; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign axi_master_io_channels_read_data_channel_RDATA = io_axi4_channels_read_data_channel_RDATA; // @[4-soc/src/main/scala/riscv/core/CPU.scala 47:24]
  assign axi_master_io_bundle_address = {cpu_io_device_select,cpu_io_memory_bundle_address[28:0]}; // @[4-soc/src/main/scala/riscv/core/CPU.scala 29:51]
  assign axi_master_io_bundle_read = cpu_io_memory_bundle_request & cpu_io_memory_bundle_read; // @[4-soc/src/main/scala/riscv/core/CPU.scala 34:73]
  assign axi_master_io_bundle_write = cpu_io_memory_bundle_request & cpu_io_memory_bundle_write; // @[4-soc/src/main/scala/riscv/core/CPU.scala 35:73]
  assign axi_master_io_bundle_write_data = cpu_io_memory_bundle_write_data; // @[4-soc/src/main/scala/riscv/core/CPU.scala 36:41]
  assign axi_master_io_bundle_write_strobe_0 = cpu_io_memory_bundle_write_strobe_0; // @[4-soc/src/main/scala/riscv/core/CPU.scala 37:41]
  assign axi_master_io_bundle_write_strobe_1 = cpu_io_memory_bundle_write_strobe_1; // @[4-soc/src/main/scala/riscv/core/CPU.scala 37:41]
  assign axi_master_io_bundle_write_strobe_2 = cpu_io_memory_bundle_write_strobe_2; // @[4-soc/src/main/scala/riscv/core/CPU.scala 37:41]
  assign axi_master_io_bundle_write_strobe_3 = cpu_io_memory_bundle_write_strobe_3; // @[4-soc/src/main/scala/riscv/core/CPU.scala 37:41]
endmodule
module AXI4LiteSlave(
  input         clock,
  input         reset,
  input         io_channels_write_address_channel_AWVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_channels_write_address_channel_AWREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input  [31:0] io_channels_write_address_channel_AWADDR, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input         io_channels_write_data_channel_WVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_channels_write_data_channel_WREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input  [31:0] io_channels_write_data_channel_WDATA, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input  [3:0]  io_channels_write_data_channel_WSTRB, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_channels_write_response_channel_BVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input         io_channels_write_response_channel_BREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input         io_channels_read_address_channel_ARVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_channels_read_address_channel_ARREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input  [31:0] io_channels_read_address_channel_ARADDR, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_channels_read_data_channel_RVALID, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input         io_channels_read_data_channel_RREADY, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output [31:0] io_channels_read_data_channel_RDATA, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output [31:0] io_bundle_address, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_bundle_read, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input  [31:0] io_bundle_read_data, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  input         io_bundle_read_valid, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_bundle_write, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output [31:0] io_bundle_write_data, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_bundle_write_strobe_0, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_bundle_write_strobe_1, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_bundle_write_strobe_2, // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
  output        io_bundle_write_strobe_3 // @[4-soc/src/main/scala/bus/AXI4Lite.scala 111:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 116:22]
  reg [31:0] addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 118:21]
  reg  read; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 122:21]
  reg [31:0] read_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 124:26]
  reg  ARREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 127:24]
  reg  RVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 129:23]
  reg  write; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 135:22]
  reg [31:0] write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 137:27]
  reg  write_strobe_0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
  reg  write_strobe_1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
  reg  write_strobe_2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
  reg  write_strobe_3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
  reg  AWREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 142:24]
  reg  WREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 144:23]
  reg  BVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 146:23]
  wire  _GEN_1 = io_channels_write_address_channel_AWVALID | AWREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 160:61 163:17 142:24]
  wire  _GEN_3 = io_channels_read_address_channel_ARVALID | ARREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 156:54 159:17 127:24]
  wire  _GEN_7 = io_channels_read_address_channel_ARVALID & ARREADY | read; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 168:65 172:17 122:21]
  wire [31:0] _GEN_9 = io_bundle_read_valid ? io_bundle_read_data : read_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 178:34 180:19 124:26]
  wire  _GEN_10 = io_bundle_read_valid | RVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 178:34 181:19 129:23]
  wire  _GEN_12 = io_bundle_read_valid ? 1'h0 : read; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 178:34 183:19 122:21]
  wire  _GEN_13 = RVALID & io_channels_read_data_channel_RREADY ? 1'h0 : _GEN_10; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 186:60 188:16]
  wire [2:0] _GEN_14 = RVALID & io_channels_read_data_channel_RREADY ? 3'h0 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 186:60 189:16 116:22]
  wire [31:0] _GEN_15 = io_channels_write_address_channel_AWVALID & AWREADY ? io_channels_write_address_channel_AWADDR
     : addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 194:66 196:17 118:21]
  wire  _GEN_16 = io_channels_write_address_channel_AWVALID & AWREADY ? 1'h0 : AWREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 194:66 197:17 142:24]
  wire  _GEN_17 = io_channels_write_address_channel_AWVALID & AWREADY | WREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 194:66 198:17 144:23]
  wire [2:0] _GEN_18 = io_channels_write_address_channel_AWVALID & AWREADY ? 3'h4 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 194:66 199:17 116:22]
  wire [31:0] _GEN_19 = io_channels_write_data_channel_WVALID & WREADY ? io_channels_write_data_channel_WDATA :
    write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 204:61 206:22 137:27]
  wire  _GEN_20 = io_channels_write_data_channel_WVALID & WREADY ? io_channels_write_data_channel_WSTRB[0] :
    write_strobe_0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 204:61 207:22 139:29]
  wire  _GEN_21 = io_channels_write_data_channel_WVALID & WREADY ? io_channels_write_data_channel_WSTRB[1] :
    write_strobe_1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 204:61 207:22 139:29]
  wire  _GEN_22 = io_channels_write_data_channel_WVALID & WREADY ? io_channels_write_data_channel_WSTRB[2] :
    write_strobe_2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 204:61 207:22 139:29]
  wire  _GEN_23 = io_channels_write_data_channel_WVALID & WREADY ? io_channels_write_data_channel_WSTRB[3] :
    write_strobe_3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 204:61 207:22 139:29]
  wire  _GEN_24 = io_channels_write_data_channel_WVALID & WREADY ? 1'h0 : WREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 204:61 208:22 144:23]
  wire  _GEN_25 = io_channels_write_data_channel_WVALID & WREADY | write; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 135:22 204:61 209:22]
  wire [2:0] _GEN_26 = io_channels_write_data_channel_WVALID & WREADY ? 3'h5 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 116:22 204:61 210:22]
  wire  _GEN_27 = BVALID & io_channels_write_response_channel_BREADY ? 1'h0 : 1'h1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 216:14 219:65 221:16]
  wire [2:0] _GEN_28 = BVALID & io_channels_write_response_channel_BREADY ? 3'h0 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 219:65 222:16 116:22]
  wire  _GEN_29 = 3'h5 == state ? 1'h0 : write; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 215:14 135:22]
  wire  _GEN_30 = 3'h5 == state ? _GEN_27 : BVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 146:23]
  wire [2:0] _GEN_32 = 3'h5 == state ? _GEN_28 : state; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 116:22]
  wire [31:0] _GEN_33 = 3'h4 == state ? _GEN_19 : write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 137:27]
  wire  _GEN_34 = 3'h4 == state ? _GEN_20 : write_strobe_0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_35 = 3'h4 == state ? _GEN_21 : write_strobe_1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_36 = 3'h4 == state ? _GEN_22 : write_strobe_2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_37 = 3'h4 == state ? _GEN_23 : write_strobe_3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_38 = 3'h4 == state ? _GEN_24 : WREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 144:23]
  wire  _GEN_39 = 3'h4 == state ? _GEN_25 : _GEN_29; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
  wire [2:0] _GEN_40 = 3'h4 == state ? _GEN_26 : _GEN_32; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
  wire  _GEN_41 = 3'h4 == state ? BVALID : _GEN_30; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 146:23]
  wire [31:0] _GEN_43 = 3'h3 == state ? _GEN_15 : addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 118:21]
  wire  _GEN_44 = 3'h3 == state ? _GEN_16 : AWREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 142:24]
  wire  _GEN_45 = 3'h3 == state ? _GEN_17 : _GEN_38; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
  wire [2:0] _GEN_46 = 3'h3 == state ? _GEN_18 : _GEN_40; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
  wire [31:0] _GEN_47 = 3'h3 == state ? write_data : _GEN_33; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 137:27]
  wire  _GEN_48 = 3'h3 == state ? write_strobe_0 : _GEN_34; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_49 = 3'h3 == state ? write_strobe_1 : _GEN_35; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_50 = 3'h3 == state ? write_strobe_2 : _GEN_36; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_51 = 3'h3 == state ? write_strobe_3 : _GEN_37; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 139:29]
  wire  _GEN_52 = 3'h3 == state ? write : _GEN_39; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 135:22]
  wire  _GEN_53 = 3'h3 == state ? BVALID : _GEN_41; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17 146:23]
  assign io_channels_write_address_channel_AWREADY = AWREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 143:45]
  assign io_channels_write_data_channel_WREADY = WREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 145:41]
  assign io_channels_write_response_channel_BVALID = BVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 147:45]
  assign io_channels_read_address_channel_ARREADY = ARREADY; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 128:44]
  assign io_channels_read_data_channel_RVALID = RVALID; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 130:40]
  assign io_channels_read_data_channel_RDATA = read_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 125:39]
  assign io_bundle_address = addr; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 119:21]
  assign io_bundle_read = read; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 123:18]
  assign io_bundle_write = write; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 136:19]
  assign io_bundle_write_data = write_data; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 138:24]
  assign io_bundle_write_strobe_0 = write_strobe_0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 140:26]
  assign io_bundle_write_strobe_1 = write_strobe_1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 140:26]
  assign io_bundle_write_strobe_2 = write_strobe_2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 140:26]
  assign io_bundle_write_strobe_3 = write_strobe_3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 140:26]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 116:22]
      state <= 3'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 116:22]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (io_channels_read_address_channel_ARVALID) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 156:54]
        state <= 3'h1; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 158:17]
      end else if (io_channels_write_address_channel_AWVALID) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 160:61]
        state <= 3'h3; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 162:17]
      end
    end else if (3'h1 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (io_channels_read_address_channel_ARVALID & ARREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 168:65]
        state <= 3'h2; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 173:17]
      end
    end else if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      state <= _GEN_14;
    end else begin
      state <= _GEN_46;
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 118:21]
      addr <= 32'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 118:21]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (3'h1 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (io_channels_read_address_channel_ARVALID & ARREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 168:65]
          addr <= io_channels_read_address_channel_ARADDR; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 170:17]
        end
      end else if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        addr <= _GEN_43;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 122:21]
      read <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 122:21]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      read <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 153:13]
    end else if (3'h1 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      read <= _GEN_7;
    end else if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      read <= _GEN_12;
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 124:26]
      read_data <= 32'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 124:26]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          read_data <= _GEN_9;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 127:24]
      ARREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 127:24]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      ARREADY <= _GEN_3;
    end else if (3'h1 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (io_channels_read_address_channel_ARVALID & ARREADY) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 168:65]
        ARREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 171:17]
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 129:23]
      RVALID <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 129:23]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (3'h2 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          RVALID <= _GEN_13;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 135:22]
      write <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 135:22]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      write <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 154:13]
    end else if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        write <= _GEN_52;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 137:27]
      write_data <= 32'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 137:27]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          write_data <= _GEN_47;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
      write_strobe_0 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          write_strobe_0 <= _GEN_48;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
      write_strobe_1 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          write_strobe_1 <= _GEN_49;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
      write_strobe_2 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          write_strobe_2 <= _GEN_50;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
      write_strobe_3 <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 139:29]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          write_strobe_3 <= _GEN_51;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 142:24]
      AWREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 142:24]
    end else if (3'h0 == state) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(io_channels_read_address_channel_ARVALID)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 156:54]
        AWREADY <= _GEN_1;
      end
    end else if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        AWREADY <= _GEN_44;
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 144:23]
      WREADY <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 144:23]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          WREADY <= _GEN_45;
        end
      end
    end
    if (reset) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 146:23]
      BVALID <= 1'h0; // @[4-soc/src/main/scala/bus/AXI4Lite.scala 146:23]
    end else if (!(3'h0 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
      if (!(3'h1 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
        if (!(3'h2 == state)) begin // @[4-soc/src/main/scala/bus/AXI4Lite.scala 151:17]
          BVALID <= _GEN_53;
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  addr = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  read = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  read_data = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  ARREADY = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  RVALID = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  write = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  write_data = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  write_strobe_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  write_strobe_1 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  write_strobe_2 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  write_strobe_3 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  AWREADY = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  WREADY = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  BVALID = _RAND_14[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TestTopModule(
  input         clock,
  input         reset,
  input  [4:0]  io_regs_debug_read_address, // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
  input  [31:0] io_mem_debug_read_address, // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
  output [31:0] io_regs_debug_read_data, // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
  output [31:0] io_mem_debug_read_data, // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
  input  [11:0] io_csr_debug_read_address, // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
  output [31:0] io_csr_debug_read_data, // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
  input  [31:0] io_interrupt_flag // @[4-soc/src/test/scala/riscv/TestTopModule.scala 17:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  mem_clock; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_bundle_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_bundle_write_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire  mem_io_bundle_write_enable; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire  mem_io_bundle_write_strobe_0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire  mem_io_bundle_write_strobe_1; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire  mem_io_bundle_write_strobe_2; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire  mem_io_bundle_write_strobe_3; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_bundle_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_instruction; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_instruction_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_debug_read_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire [31:0] mem_io_debug_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
  wire  instruction_rom_clock; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 28:31]
  wire [31:0] instruction_rom_io_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 28:31]
  wire [31:0] instruction_rom_io_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 28:31]
  wire  rom_loader_clock; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_reset; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire [31:0] rom_loader_io_bundle_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire [31:0] rom_loader_io_bundle_write_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_io_bundle_write_enable; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_io_bundle_write_strobe_0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_io_bundle_write_strobe_1; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_io_bundle_write_strobe_2; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_io_bundle_write_strobe_3; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire [31:0] rom_loader_io_rom_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire [31:0] rom_loader_io_rom_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  rom_loader_io_load_finished; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
  wire  cpu_clock; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_reset; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_instruction_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_instruction; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_instruction_valid; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_write_address_channel_AWVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_write_address_channel_AWREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_axi4_channels_write_address_channel_AWADDR; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_write_data_channel_WVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_write_data_channel_WREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_axi4_channels_write_data_channel_WDATA; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [3:0] cpu_io_axi4_channels_write_data_channel_WSTRB; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_write_response_channel_BVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_write_response_channel_BREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_read_address_channel_ARVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_read_address_channel_ARREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_axi4_channels_read_address_channel_ARADDR; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_read_data_channel_RVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  cpu_io_axi4_channels_read_data_channel_RREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_axi4_channels_read_data_channel_RDATA; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_interrupt_flag; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [4:0] cpu_io_debug_read_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_debug_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [11:0] cpu_io_csr_debug_read_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire [31:0] cpu_io_csr_debug_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
  wire  mem_slave_clock; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_reset; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_write_address_channel_AWVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_write_address_channel_AWREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_channels_write_address_channel_AWADDR; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_write_data_channel_WVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_write_data_channel_WREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_channels_write_data_channel_WDATA; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [3:0] mem_slave_io_channels_write_data_channel_WSTRB; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_write_response_channel_BVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_write_response_channel_BREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_read_address_channel_ARVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_read_address_channel_ARREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_channels_read_address_channel_ARADDR; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_read_data_channel_RVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_channels_read_data_channel_RREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_channels_read_data_channel_RDATA; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_bundle_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_read; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_bundle_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_read_valid; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_write; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire [31:0] mem_slave_io_bundle_write_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_write_strobe_0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_write_strobe_1; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_write_strobe_2; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  wire  mem_slave_io_bundle_write_strobe_3; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
  reg [1:0] CPU_clkdiv; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 36:27]
  wire [1:0] _CPU_next_T_2 = CPU_clkdiv + 2'h1; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 39:57]
  wire  _T = CPU_clkdiv == 2'h0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 43:22]
  wire  loading = ~rom_loader_io_load_finished; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 63:19]
  reg  read_pending; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 77:31]
  Memory mem ( // @[4-soc/src/test/scala/riscv/TestTopModule.scala 27:31]
    .clock(mem_clock),
    .io_bundle_address(mem_io_bundle_address),
    .io_bundle_write_data(mem_io_bundle_write_data),
    .io_bundle_write_enable(mem_io_bundle_write_enable),
    .io_bundle_write_strobe_0(mem_io_bundle_write_strobe_0),
    .io_bundle_write_strobe_1(mem_io_bundle_write_strobe_1),
    .io_bundle_write_strobe_2(mem_io_bundle_write_strobe_2),
    .io_bundle_write_strobe_3(mem_io_bundle_write_strobe_3),
    .io_bundle_read_data(mem_io_bundle_read_data),
    .io_instruction(mem_io_instruction),
    .io_instruction_address(mem_io_instruction_address),
    .io_debug_read_address(mem_io_debug_read_address),
    .io_debug_read_data(mem_io_debug_read_data)
  );
  InstructionROM instruction_rom ( // @[4-soc/src/test/scala/riscv/TestTopModule.scala 28:31]
    .clock(instruction_rom_clock),
    .io_address(instruction_rom_io_address),
    .io_data(instruction_rom_io_data)
  );
  ROMLoader rom_loader ( // @[4-soc/src/test/scala/riscv/TestTopModule.scala 29:31]
    .clock(rom_loader_clock),
    .reset(rom_loader_reset),
    .io_bundle_address(rom_loader_io_bundle_address),
    .io_bundle_write_data(rom_loader_io_bundle_write_data),
    .io_bundle_write_enable(rom_loader_io_bundle_write_enable),
    .io_bundle_write_strobe_0(rom_loader_io_bundle_write_strobe_0),
    .io_bundle_write_strobe_1(rom_loader_io_bundle_write_strobe_1),
    .io_bundle_write_strobe_2(rom_loader_io_bundle_write_strobe_2),
    .io_bundle_write_strobe_3(rom_loader_io_bundle_write_strobe_3),
    .io_rom_address(rom_loader_io_rom_address),
    .io_rom_data(rom_loader_io_rom_data),
    .io_load_finished(rom_loader_io_load_finished)
  );
  CPU cpu ( // @[4-soc/src/test/scala/riscv/TestTopModule.scala 44:21]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_instruction_address(cpu_io_instruction_address),
    .io_instruction(cpu_io_instruction),
    .io_instruction_valid(cpu_io_instruction_valid),
    .io_axi4_channels_write_address_channel_AWVALID(cpu_io_axi4_channels_write_address_channel_AWVALID),
    .io_axi4_channels_write_address_channel_AWREADY(cpu_io_axi4_channels_write_address_channel_AWREADY),
    .io_axi4_channels_write_address_channel_AWADDR(cpu_io_axi4_channels_write_address_channel_AWADDR),
    .io_axi4_channels_write_data_channel_WVALID(cpu_io_axi4_channels_write_data_channel_WVALID),
    .io_axi4_channels_write_data_channel_WREADY(cpu_io_axi4_channels_write_data_channel_WREADY),
    .io_axi4_channels_write_data_channel_WDATA(cpu_io_axi4_channels_write_data_channel_WDATA),
    .io_axi4_channels_write_data_channel_WSTRB(cpu_io_axi4_channels_write_data_channel_WSTRB),
    .io_axi4_channels_write_response_channel_BVALID(cpu_io_axi4_channels_write_response_channel_BVALID),
    .io_axi4_channels_write_response_channel_BREADY(cpu_io_axi4_channels_write_response_channel_BREADY),
    .io_axi4_channels_read_address_channel_ARVALID(cpu_io_axi4_channels_read_address_channel_ARVALID),
    .io_axi4_channels_read_address_channel_ARREADY(cpu_io_axi4_channels_read_address_channel_ARREADY),
    .io_axi4_channels_read_address_channel_ARADDR(cpu_io_axi4_channels_read_address_channel_ARADDR),
    .io_axi4_channels_read_data_channel_RVALID(cpu_io_axi4_channels_read_data_channel_RVALID),
    .io_axi4_channels_read_data_channel_RREADY(cpu_io_axi4_channels_read_data_channel_RREADY),
    .io_axi4_channels_read_data_channel_RDATA(cpu_io_axi4_channels_read_data_channel_RDATA),
    .io_interrupt_flag(cpu_io_interrupt_flag),
    .io_debug_read_address(cpu_io_debug_read_address),
    .io_debug_read_data(cpu_io_debug_read_data),
    .io_csr_debug_read_address(cpu_io_csr_debug_read_address),
    .io_csr_debug_read_data(cpu_io_csr_debug_read_data)
  );
  AXI4LiteSlave mem_slave ( // @[4-soc/src/test/scala/riscv/TestTopModule.scala 47:27]
    .clock(mem_slave_clock),
    .reset(mem_slave_reset),
    .io_channels_write_address_channel_AWVALID(mem_slave_io_channels_write_address_channel_AWVALID),
    .io_channels_write_address_channel_AWREADY(mem_slave_io_channels_write_address_channel_AWREADY),
    .io_channels_write_address_channel_AWADDR(mem_slave_io_channels_write_address_channel_AWADDR),
    .io_channels_write_data_channel_WVALID(mem_slave_io_channels_write_data_channel_WVALID),
    .io_channels_write_data_channel_WREADY(mem_slave_io_channels_write_data_channel_WREADY),
    .io_channels_write_data_channel_WDATA(mem_slave_io_channels_write_data_channel_WDATA),
    .io_channels_write_data_channel_WSTRB(mem_slave_io_channels_write_data_channel_WSTRB),
    .io_channels_write_response_channel_BVALID(mem_slave_io_channels_write_response_channel_BVALID),
    .io_channels_write_response_channel_BREADY(mem_slave_io_channels_write_response_channel_BREADY),
    .io_channels_read_address_channel_ARVALID(mem_slave_io_channels_read_address_channel_ARVALID),
    .io_channels_read_address_channel_ARREADY(mem_slave_io_channels_read_address_channel_ARREADY),
    .io_channels_read_address_channel_ARADDR(mem_slave_io_channels_read_address_channel_ARADDR),
    .io_channels_read_data_channel_RVALID(mem_slave_io_channels_read_data_channel_RVALID),
    .io_channels_read_data_channel_RREADY(mem_slave_io_channels_read_data_channel_RREADY),
    .io_channels_read_data_channel_RDATA(mem_slave_io_channels_read_data_channel_RDATA),
    .io_bundle_address(mem_slave_io_bundle_address),
    .io_bundle_read(mem_slave_io_bundle_read),
    .io_bundle_read_data(mem_slave_io_bundle_read_data),
    .io_bundle_read_valid(mem_slave_io_bundle_read_valid),
    .io_bundle_write(mem_slave_io_bundle_write),
    .io_bundle_write_data(mem_slave_io_bundle_write_data),
    .io_bundle_write_strobe_0(mem_slave_io_bundle_write_strobe_0),
    .io_bundle_write_strobe_1(mem_slave_io_bundle_write_strobe_1),
    .io_bundle_write_strobe_2(mem_slave_io_bundle_write_strobe_2),
    .io_bundle_write_strobe_3(mem_slave_io_bundle_write_strobe_3)
  );
  assign io_regs_debug_read_data = cpu_io_debug_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 86:35]
  assign io_mem_debug_read_data = mem_io_debug_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 101:29]
  assign io_csr_debug_read_data = cpu_io_csr_debug_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 88:35]
  assign mem_clock = clock;
  assign mem_io_bundle_address = loading ? rom_loader_io_bundle_address : mem_slave_io_bundle_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 66:38]
  assign mem_io_bundle_write_data = loading ? rom_loader_io_bundle_write_data : mem_slave_io_bundle_write_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 67:38]
  assign mem_io_bundle_write_enable = loading ? rom_loader_io_bundle_write_enable : mem_slave_io_bundle_write; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 68:38]
  assign mem_io_bundle_write_strobe_0 = loading ? rom_loader_io_bundle_write_strobe_0 :
    mem_slave_io_bundle_write_strobe_0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 69:38]
  assign mem_io_bundle_write_strobe_1 = loading ? rom_loader_io_bundle_write_strobe_1 :
    mem_slave_io_bundle_write_strobe_1; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 69:38]
  assign mem_io_bundle_write_strobe_2 = loading ? rom_loader_io_bundle_write_strobe_2 :
    mem_slave_io_bundle_write_strobe_2; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 69:38]
  assign mem_io_bundle_write_strobe_3 = loading ? rom_loader_io_bundle_write_strobe_3 :
    mem_slave_io_bundle_write_strobe_3; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 69:38]
  assign mem_io_instruction_address = cpu_io_instruction_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 54:32]
  assign mem_io_debug_read_address = io_mem_debug_read_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 100:29]
  assign instruction_rom_clock = clock;
  assign instruction_rom_io_address = rom_loader_io_rom_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 33:30]
  assign rom_loader_clock = clock;
  assign rom_loader_reset = reset;
  assign rom_loader_io_rom_data = instruction_rom_io_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 31:30]
  assign cpu_clock = CPU_clkdiv == 2'h0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 43:22]
  assign cpu_reset = reset;
  assign cpu_io_instruction = mem_io_instruction; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 55:32]
  assign cpu_io_instruction_valid = rom_loader_io_load_finished; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 51:35]
  assign cpu_io_axi4_channels_write_address_channel_AWREADY = mem_slave_io_channels_write_address_channel_AWREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign cpu_io_axi4_channels_write_data_channel_WREADY = mem_slave_io_channels_write_data_channel_WREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign cpu_io_axi4_channels_write_response_channel_BVALID = mem_slave_io_channels_write_response_channel_BVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign cpu_io_axi4_channels_read_address_channel_ARREADY = mem_slave_io_channels_read_address_channel_ARREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign cpu_io_axi4_channels_read_data_channel_RVALID = mem_slave_io_channels_read_data_channel_RVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign cpu_io_axi4_channels_read_data_channel_RDATA = mem_slave_io_channels_read_data_channel_RDATA; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign cpu_io_interrupt_flag = io_interrupt_flag; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 57:27]
  assign cpu_io_debug_read_address = io_regs_debug_read_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 85:35]
  assign cpu_io_csr_debug_read_address = io_csr_debug_read_address; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 87:35]
  assign mem_slave_clock = CPU_clkdiv == 2'h0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 43:22]
  assign mem_slave_reset = reset;
  assign mem_slave_io_channels_write_address_channel_AWVALID = cpu_io_axi4_channels_write_address_channel_AWVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_write_address_channel_AWADDR = cpu_io_axi4_channels_write_address_channel_AWADDR; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_write_data_channel_WVALID = cpu_io_axi4_channels_write_data_channel_WVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_write_data_channel_WDATA = cpu_io_axi4_channels_write_data_channel_WDATA; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_write_data_channel_WSTRB = cpu_io_axi4_channels_write_data_channel_WSTRB; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_write_response_channel_BREADY = cpu_io_axi4_channels_write_response_channel_BREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_read_address_channel_ARVALID = cpu_io_axi4_channels_read_address_channel_ARVALID; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_read_address_channel_ARADDR = cpu_io_axi4_channels_read_address_channel_ARADDR; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_channels_read_data_channel_RREADY = cpu_io_axi4_channels_read_data_channel_RREADY; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 60:27]
  assign mem_slave_io_bundle_read_data = mem_io_bundle_read_data; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 78:36]
  assign mem_slave_io_bundle_read_valid = read_pending; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 79:36]
  always @(posedge clock) begin
    if (reset) begin // @[4-soc/src/test/scala/riscv/TestTopModule.scala 36:27]
      CPU_clkdiv <= 2'h0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 36:27]
    end else if (CPU_clkdiv == 2'h3) begin // @[4-soc/src/test/scala/riscv/TestTopModule.scala 39:20]
      CPU_clkdiv <= 2'h0;
    end else begin
      CPU_clkdiv <= _CPU_next_T_2;
    end
  end
  always @(posedge _T) begin
    if (reset) begin // @[4-soc/src/test/scala/riscv/TestTopModule.scala 77:31]
      read_pending <= 1'h0; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 77:31]
    end else begin
      read_pending <= mem_slave_io_bundle_read & ~loading; // @[4-soc/src/test/scala/riscv/TestTopModule.scala 77:31]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  CPU_clkdiv = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  read_pending = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
