#include "FreeRTOS.h"
#include "task.h"

#define UART_BASE       0x40000000
#define UART_SEND       (*(volatile unsigned int *)(UART_BASE + 0x00))
#define UART_RECV       (*(volatile unsigned int *)(UART_BASE + 0x04))
#define UART_STATUS     (*(volatile unsigned int *)(UART_BASE + 0x08))

// Wait for TX ready before sending
void uart_putc(char c) {
    while (!(UART_STATUS & 0x01));  // Wait for TX ready (bit 0)
    UART_SEND = c;
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
    //  Task 1
    xTaskCreate(vTask1, "Task1", 256, NULL, 1, NULL);
    
    //  Task 2 
    xTaskCreate(vTask2, "Task2", 256, NULL, 1, NULL);
    uart_puts("Starting FreeRTOS Scheduler...\n");

    vTaskStartScheduler();

    // (Heap)
    while (1);
}

void vApplicationMallocFailedHook(void) { while(1); }
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) { while(1); }