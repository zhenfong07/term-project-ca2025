#include "FreeRTOS.h"
#include "task.h"

#define UART_BASE       0x40000000
#define UART_TX_DATA    (*(volatile uint32_t*)(UART_BASE + 0x10))
#define UART_STATUS     (*(volatile uint32_t*)(UART_BASE + 0x14))

// Wait for TX ready before sending
void uart_putc(char c) {
    while (!(UART_STATUS & 0x40));  // Wait for TX FIFO not full (bit 6)
    UART_TX_DATA = c;
}

void uart_puts(const char *s) {
    while (*s) {
        uart_putc(*s++);
    }
}
volatile int task1_count = 0;
volatile int task2_count = 0;

void vTask1(void *pvParameters) {
    while (1) {
        task1_count++;
        uart_puts("Task 1: Hello from FreeRTOS!\n");
       
        taskYIELD(); 
    }
}

void vTask2(void *pvParameters) {
    while (1) {
        task2_count++;
        uart_puts("Task 2: Running smoothly...\n");
        taskYIELD();
    }
}

void prvSetupHardware(void) {
}

int main(void) {
    xTaskCreate(vTask1, "Task1", 128, NULL, 1, NULL);
    xTaskCreate(vTask2, "Task2", 128, NULL, 1, NULL);
    vTaskStartScheduler();

    while (1);
}


void vApplicationMallocFailedHook(void) { while(1); }
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) { while(1); }
