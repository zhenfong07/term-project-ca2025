/*
 * FreeRTOS RISC-V Port Assembly for 4-soc
 */
    .section .text
    .global xPortStartFirstTask
    .global freertos_risc_v_trap_handler
    .extern pxCurrentTCB
    .extern xTaskIncrementTick
    .extern vTaskSwitchContext
    .extern vPortSetupTimerInterrupt

    .align 4

/*  Scheduler 
 * 
 */
xPortStartFirstTask:
    la t0, pxCurrentTCB
    lw t0, 0(t0)        
    lw sp, 0(t0)        
    j portRESTORE_CONTEXT

/* * TRAP HANDLER 
 * 
 */
freertos_risc_v_trap_handler:
    /*  (Save Context) */
    addi sp, sp, -128
    
   
    sw x1,  4(sp)
    sw x5,  8(sp)
    sw x6,  12(sp)
    sw x7,  16(sp)
    sw x8,  20(sp)
    sw x9,  24(sp)
    sw x10, 28(sp)
    sw x11, 32(sp)
    sw x12, 36(sp)
    sw x13, 40(sp)
    sw x14, 44(sp)
    sw x15, 48(sp)
    sw x16, 52(sp)
    sw x17, 56(sp)
    sw x18, 60(sp)
    sw x19, 64(sp)
    sw x20, 68(sp)
    sw x21, 72(sp)
    sw x22, 76(sp)
    sw x23, 80(sp)
    sw x24, 84(sp)
    sw x25, 88(sp)
    sw x26, 92(sp)
    sw x27, 96(sp)
    sw x28, 100(sp)
    sw x29, 104(sp)
    sw x30, 108(sp)
    sw x31, 112(sp)

    /*  CSR*/
    csrr t0, mepc
    sw t0, 0(sp)        /* Save address*/
    
    csrr t0, mstatus
    sw t0, 120(sp)      /* Offset 120 */

    /* Update new SP into TCB of present task */
    la t0, pxCurrentTCB
    lw t0, 0(t0)
    sw sp, 0(t0)

    /* Interupt */
    csrr a0, mcause
    
    
    li t0, 0x80000007
    beq a0, t0, handle_timer

    /*  ECALL (Environment Call - portYIELD) */
    /* Code = 11 (Machine Mode Ecall) */
    li t0, 11
    beq a0, t0, handle_ecall
    
    /* */
    j restore_context

handle_timer:
    /* FreeRTOS */
    call xTaskIncrementTick
    
    /* Reset Timer */
    call vPortSetupTimerInterrupt 
    
    /*  */
    bne a0, zero, switch_context
    j restore_context

handle_ecall:
   
    csrr t0, mepc
    addi t0, t0, 4
    csrw mepc, t0
    
    /* Ecall  Context (Yield) */
    j switch_context

switch_context:
  
    call vTaskSwitchContext

restore_context:
   
    
   
    la t0, pxCurrentTCB
    lw t0, 0(t0)
    lw sp, 0(t0)

portRESTORE_CONTEXT:
    /*  CSR */
    lw t0, 120(sp)
    csrw mstatus, t0
    
    lw t0, 0(sp)
    csrw mepc, t0

   
    lw x1,  4(sp)
    lw x5,  8(sp)
    lw x6,  12(sp)
    lw x7,  16(sp)
    lw x8,  20(sp)
    lw x9,  24(sp)
    lw x10, 28(sp)
    lw x11, 32(sp)
    lw x12, 36(sp)
    lw x13, 40(sp)
    lw x14, 44(sp)
    lw x15, 48(sp)
    lw x16, 52(sp)
    lw x17, 56(sp)
    lw x18, 60(sp)
    lw x19, 64(sp)
    lw x20, 68(sp)
    lw x21, 72(sp)
    lw x22, 76(sp)
    lw x23, 80(sp)
    lw x24, 84(sp)
    lw x25, 88(sp)
    lw x26, 92(sp)
    lw x27, 96(sp)
    lw x28, 100(sp)
    lw x29, 104(sp)
    lw x30, 108(sp)
    lw x31, 112(sp)

    addi sp, sp, 128
    mret
