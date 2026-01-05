# ULTRA MINIMAL - Just blast UART continuously
# No BSS clear, no function calls, NOTHING

    .section .text.init
    .global _start

_start:
    # Load UART TX register address (UART_BASE + 0x10)
    lui t0, 0x40000         # t0 = 0x40000000 (UART_BASE)
    addi t0, t0, 0x10       # t0 = 0x40000010 (REG_TX_DATA)
    
loop:
    # Write 'A' (0x41) to UART
    li t1, 0x41             # t1 = 'A'
    sw t1, 0(t0)            # UART_TX_DATA = 'A'
    
    # Small delay
    li t2, 1000
delay:
    addi t2, t2, -1
    bnez t2, delay
    
    # Loop forever
    j loop
