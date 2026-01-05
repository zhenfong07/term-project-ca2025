OUTPUT_ARCH("riscv")
ENTRY(_start)

MEMORY
{
  /* Define a 32KB RAM region starting at address 0x00001000 (EntryAddress) */
  /* This matches Parameters.EntryAddress in the testbench */
  RAM (rwx) : ORIGIN = 0x00001000, LENGTH = 28K
}

SECTIONS
{
  /* 1. Code section (.text) */
  .text : {
    *(.text.init)   /* Startup code (start.S) must be placed first at address 0 */
    *(.text*)       /* Main program code */
    *(.rodata*)     /* Read-only data (constants) */
    . = ALIGN(4);
  } > RAM

  /* 2. Initialized data section (.data) */
  .data : {
    . = ALIGN(4);
    _sdata = .;     /* Mark the start of the data section */
    *(.data*)
    *(.sdata*)
    . = ALIGN(4);
    _edata = .;     /* Mark the end of the data section */
  } > RAM

  /* 3. Uninitialized data section (.bss) - will be zero-initialized */
  .bss : {
    . = ALIGN(4);
    _sbss = .;      /* Mark the start of the bss section */
    *(.bss*)
    *(.sbss*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;      /* Mark the end of the bss section */
  } > RAM

  /* 4. Define Heap and Stack regions for FreeRTOS */
  . = ALIGN(16);
  _heap_start = .; /* FreeRTOS heap_4 allocation starts from here */

  /* Place the stack top at the end of RAM */
  _stack_top = ORIGIN(RAM) + LENGTH(RAM);
}
