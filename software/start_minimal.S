// Minimal start.S without FreeRTOS
    .section .text.init
    .global _start
    .global _exit

_start:
    // Set up stack
    la sp, _stack_top
    andi sp, sp, -16
    
    // Clear BSS
    la t0, _sbss
    la t1, _ebss
    bge t0, t1, zero_bss_end
zero_bss_loop:
    sw zero, 0(t0)
    addi t0, t0, 4
    blt t0, t1, zero_bss_loop
zero_bss_end:

    // Call main
    call main

_exit:
    j _exit
