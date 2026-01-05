# Large ASM test - 100+ bytes to test ROM loader

    .section .text.init
    .global _start

_start:
    # Load UART TX register address
    lui t0, 0x40000
    addi t0, t0, 0x10
    
    # Write sequence "ABC" to UART
    li t1, 0x41          # 'A'
    sw t1, 0(t0)
    
    # Delay
    li t2, 5000
delay1:
    addi t2, t2, -1
    bnez t2, delay1
    
    # Write 'B'
    li t1, 0x42
    sw t1, 0(t0)
    
    # Delay
    li t2, 5000
delay2:
    addi t2, t2, -1
    bnez t2, delay2
    
    # Write 'C'
    li t1, 0x43
    sw t1, 0(t0)
    
    # Delay
    li t2, 5000
delay3:
    addi t2, t2, -1
    bnez t2, delay3
    
    # Infinite loop writing 'X'
loop:
    li t1, 0x58
    sw t1, 0(t0)
    
    li t2, 10000
delay4:
    addi t2, t2, -1
    bnez t2, delay4
    
    j loop
