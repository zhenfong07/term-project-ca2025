# Toolchain prefix
CROSS_COMPILE = riscv64-unknown-elf-
CC = $(CROSS_COMPILE)gcc
OBJCOPY = $(CROSS_COMPILE)objcopy
OBJDUMP = $(CROSS_COMPILE)objdump

# Source directories
FREERTOS_DIR = freertos
PORT_DIR = $(FREERTOS_DIR)/portable

# Compiler flags
# -march=rv32i_zicsr -mabi=ilp32 : Base 32-bit RISC-V architecture with CSR support
# -mcmodel=medany              : Allow access to arbitrary memory addresses (important for 32-bit RAM)
# -ffreestanding               : Bare-metal environment (no host OS)
CFLAGS = -march=rv32i_zicsr -mabi=ilp32 -mcmodel=medany \
         -O2 -g -Wall \
         -I. \
         -I$(FREERTOS_DIR)/include \
         -I$(PORT_DIR) \
         -ffreestanding -nostartfiles \
         -DportasmHANDLE_INTERRUPT=handle_trap

# Linker flags
# -T link.lds                  : Use a custom linker script for memory layout
# -Wl,--gc-sections            : Remove unused sections to reduce memory footprint
LDFLAGS = -T link.lds -nostartfiles -nostdlib   -Wl,--gc-sections

# Source files
# Includes: main application, startup code, port layer, and FreeRTOS kernel
SRCS = main.c \
       start.S \
       $(PORT_DIR)/port.c \
       $(PORT_DIR)/portasm.S \
       $(FREERTOS_DIR)/tasks.c \
       $(FREERTOS_DIR)/list.c \
       $(FREERTOS_DIR)/queue.c \
       $(FREERTOS_DIR)/timers.c \
       $(FREERTOS_DIR)/heap_4.c

# Convert .c/.S source list to .o object list
OBJS = $(SRCS:.c=.o)
OBJS := $(OBJS:.S=.o)

# Output target name
TARGET = main

# --- Build rules ---

all: $(TARGET).asmbin $(TARGET).asm

# 1. Link object files into an ELF executable
$(TARGET).elf: $(OBJS) link.lds
	@echo "Linking $@"
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $@

# 2. Generate binary file (for loading into Verilator simulation)
$(TARGET).asmbin: $(TARGET).elf
	@echo "Creating binary $@"
	$(OBJCOPY) -O binary $< $@

# 3. Generate disassembly file (for instruction-level debugging)
$(TARGET).asm: $(TARGET).elf
	@echo "Creating disassembly $@"
	$(OBJDUMP) -D $< > $@

# Rule to compile C source files
%.o: %.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to compile Assembly source files
%.o: %.S
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJS) $(TARGET).elf $(TARGET).asmbin $(TARGET).asm

.PHONY: all clean
