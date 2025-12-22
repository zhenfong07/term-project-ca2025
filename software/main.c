/*
 * main.c - VGA PRIORITY TEST
 * Mục tiêu: Bỏ qua kiểm tra UART để ép VGA chạy
 */

#include <stdint.h>

#define UART_BASE       0x40000000
#define UART_TX_DATA    ( *(volatile uint32_t *)(UART_BASE + 0x10) )

#define VGA_BASE        0x20000000
#define VGA_CTRL        ( *(volatile uint32_t *)(VGA_BASE + 0x04) )
#define VGA_PALETTE(i)  ( *(volatile uint32_t *)(VGA_BASE + 0x20 + ((i)<<2)) )

/* Driver UART "Mù" (Blind Driver) - Không thèm kiểm tra trạng thái */
/* Giúp tránh bị treo nếu phần cứng chưa sẵn sàng */
void uart_putc(char c) {
    UART_TX_DATA = c; 
    // Thêm delay nhỏ để máy tính kịp xử lý
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
    /* 1. TEST VGA NGAY LẬP TỨC (Dòng lệnh đầu tiên) */
    VGA_CTRL = 1; // Bật màn hình
    
    // Ghi thử màu ĐỎ vào Palette 0 (Nền)
    VGA_PALETTE(0) = 0xE0; 

    /* 2. Gửi UART (Nếu thấy chữ -> UART sống. Nếu không -> Kệ nó) */
    uart_puts("VGA Red Test\r\n");

    /* 3. Vòng lặp đổi màu liên tục */
    while (1) {
        // XANH LÁ
        VGA_PALETTE(0) = 0x1C; 
        busy_wait(500000); // Delay ~0.5s

        // TRẮNG
        VGA_PALETTE(0) = 0xFF; 
        busy_wait(500000);
        
        // ĐỎ
        VGA_PALETTE(0) = 0xE0;
        busy_wait(500000);
    }

    return 0;
}