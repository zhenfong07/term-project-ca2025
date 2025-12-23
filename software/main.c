/*
 * main.c - VGA PRIORITY TEST
 * Objective: Skip UART checks to force VGA to run
 */

#include <stdint.h>

#define UART_BASE       0x40000000
#define UART_TX_DATA    ( *(volatile uint32_t *)(UART_BASE + 0x10) )

#define VGA_BASE        0x20000000
#define VGA_CTRL        ( *(volatile uint32_t *)(VGA_BASE + 0x04) )
#define VGA_PALETTE(i)  ( *(volatile uint32_t *)(VGA_BASE + 0x20 + ((i)<<2)) )

/* "Blind" UART Driver - Does not check status */
/* Helps avoid hanging if hardware is not ready */
void uart_putc(char c) {
    UART_TX_DATA = c; 
    // Add a small delay to let the computer process
    for(int i=0; i<1000; i++) __asm__("nop");
}

void uart_puts(const char *s) {
    while (*s) uart_putc(*s++);
}

void busy_wait(int count) {
    volatile int i;
    for (i = 0; i < count; i++) __asm__("nop");
}

int main(void) {
    /* 1. TEST VGA IMMEDIATELY (First instruction) */
    VGA_CTRL = 1; // Turn on screen
    
    // Write RED color to Palette 0 (Background)
    VGA_PALETTE(0) = 0xE0; 

    /* 2. Send via UART (If text appears -> UART works. If not -> ignore) */
    uart_puts("VGA Red Test\r\n");

    /* 3. Loop to change colors continuously */
    while (1) {
        // GREEN
        VGA_PALETTE(0) = 0x1C; 
        busy_wait(500000); // Delay ~0.5s

        // WHITE
        VGA_PALETTE(0) = 0xFF; 
        busy_wait(500000);
        
        // RED
        VGA_PALETTE(0) = 0xE0;
        busy_wait(500000);
    }

    return 0;
}