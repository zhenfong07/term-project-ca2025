// Minimal test without FreeRTOS
// Just print to UART and loop

#define UART_BASE       0x40000000
#define UART_SEND       (*(volatile unsigned int *)(UART_BASE + 0x00))

void uart_putc(char c) {
    UART_SEND = c;
}

void uart_puts(const char *s) {
    while (*s) {
        uart_putc(*s++);
    }
}

int main(void) {
    // Print test message
    uart_puts("Hello from bare metal!\n");
    
    // Infinite loop
    while (1) {
        uart_putc('.');
        for (volatile int i = 0; i < 100000; i++);
    }
}
