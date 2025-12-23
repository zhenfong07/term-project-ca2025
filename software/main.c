/*
 * main.c - PURE SOFTWARE VERIFICATION
 * Mục tiêu: Chứng minh FreeRTOS chạy đa nhiệm thông qua Log UART
 */

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

/* --- HARDWARE ADDRESSES --- */
#define UART_BASE       0x40000000
#define UART_TX_DATA    ( *(volatile uint32_t *)(UART_BASE + 0x10) )

/* --- DRIVER UART (Blind Mode) --- */
/* Ghi thẳng không cần chờ (để tránh bị treo nếu Hardware Status lỗi) */
void uart_putc(char c) {
    UART_TX_DATA = c;
    /* Delay nhỏ để máy tính kịp nhận (quan trọng trong simulation) */
    for(volatile int i=0; i<500; i++); 
}

void uart_puts(const char *s) {
    while (*s) uart_putc(*s++);
}

/* --- TASKS --- */

/* Task A: In chữ AAAAA... */
void vTaskA(void *pvParameters) {
    TickType_t xLastWakeTime = xTaskGetTickCount();
    const TickType_t xFrequency = pdMS_TO_TICKS(500); // 0.5 giây

    for (;;) {
        uart_puts("Task A: Ping\r\n");
        
        /* Task này sẽ ngủ 500ms -> Nhường CPU cho Task B */
        vTaskDelayUntil(&xLastWakeTime, xFrequency);
    }
}

/* Task B: In chữ BBBBB... */
void vTaskB(void *pvParameters) {
    TickType_t xLastWakeTime = xTaskGetTickCount();
    const TickType_t xFrequency = pdMS_TO_TICKS(500); // 0.5 giây
    
    /* Chạy lệch pha một chút */
    vTaskDelay(pdMS_TO_TICKS(250));

    for (;;) {
        uart_puts("Task B: Pong\r\n");
        
        /* Task này sẽ ngủ 500ms -> Nhường CPU lại cho Task A */
        vTaskDelayUntil(&xLastWakeTime, xFrequency);
    }
}


/* --- MAIN --- */
int main(void) {
    uart_puts("\r\n=== SOFTWARE VERIFICATION START ===\r\n");

    /* Tạo 2 Task cùng độ ưu tiên */
    xTaskCreate(vTaskA, "TaskA", 256, NULL, 1, NULL);
    xTaskCreate(vTaskB, "TaskB", 256, NULL, 1, NULL);

    uart_puts("Starting Scheduler...\r\n");
    
    /* Bắt đầu FreeRTOS */
    /* Nếu hàm này chạy thành công, nó sẽ không bao giờ return */
    vTaskStartScheduler();

    /* Nếu chạy đến đây là LỖI (Hết RAM hoặc lỗi code start) */
    uart_puts("ERROR: Scheduler failed to start!\r\n");
    for (;;);
    return 0;
}