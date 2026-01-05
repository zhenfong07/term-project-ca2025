// Minimal C test - Just write 'X' to UART (no FreeRTOS)

#define UART_BASE       0x40000000
#define UART_SEND       (*(volatile unsigned int *)(UART_BASE + 0x10))

void c_main(void) {
    // Write 'X' to UART
    UART_SEND = 'X';
    
    // Infinite loop
    while (1) {
        // Delay
        for (volatile int i = 0; i < 10000; i++);
        UART_SEND = 'Y';
    }
}
