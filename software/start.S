/*
 * start.S - Startup code for 4-soc RISC-V FreeRTOS
 * Purpose: Set up stack -> Clear BSS -> Call main
 */
    .section .text.init
    .global _start
    .global _exit
    .extern freertos_risc_v_trap_handler

_start:
    la sp, _stack_top
    
    andi sp, sp, -16 /* alignment 16 byte to avoid error when calling FreeRTOS */
    /* 1. Disable global interrupts (safe during startup) */
    la t0, freertos_risc_v_trap_handler
    csrw mtvec, t0
    
    csrw mie, zero
    csrw mip, zero

    
    /* 3. Clear the BSS section (uninitialized global/static variables = 0) */
    /* If not cleared, C global/static variables will contain garbage values */
    la t0, _sbss
    la t1, _ebss
    bge t0, t1, zero_bss_end   /* Skip if BSS is empty */

zero_bss_loop:
    sw zero, 0(t0)
    addi t0, t0, 4
    blt t0, t1, zero_bss_loop
zero_bss_end:

    /* 4. Call the C main() function */
    /* main() creates tasks and calls vTaskStartScheduler() */
    call main

    /* 5. Infinite loop if main() ever returns (error case) */
_exit:
    j _exit
