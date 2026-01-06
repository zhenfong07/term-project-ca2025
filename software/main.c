#include "FreeRTOS.h"
#include "task.h"

/* UART peripheral registers */
#define UART_BASE       0x40000000
#define UART_STATUS     (*(volatile uint32_t*)(UART_BASE + 0x00))
#define UART_RECV       (*(volatile uint32_t*)(UART_BASE + 0x0C))
#define UART_SEND       (*(volatile uint32_t*)(UART_BASE + 0x10))

/* ==========================================================
 * UART TX Functions
 * ========================================================== */

/**
 * Wait for TX ready before sending
 */
static inline void uart_putc(char c) {
    while (!(UART_STATUS & 0x01)) {
        /* Wait for TX ready (bit 0) */
        /* Timer interrupts can still fire during this loop */
    }
    UART_SEND = (uint32_t)c;
}

void uart_puts(const char *s) {
    while (*s) {
        uart_putc(*s++);
    }
}

/* ====================================================================
 * UART RX Functions
 * ==================================================================== */

/**
check if RX data is available (non-blocking)
 * returns: 1 if data available, 0 otherwise
 */
static inline int uart_rx_available(void) {
    return (UART_STATUS & 0x02) != 0;  /* Check RX valid (bit 1) */
}

/**
 * read received character (should only be called if data available)
 * 
 * only called after uart_rx_available() check, so data is guaranteed
 * to be available and this won't block indefinitely
 */
static inline char uart_getc(void) {
    return (char)(UART_RECV & 0xFF);
}

/* ===============================================================
 * Task counters (for debugging/monitoring)
 * =============================================================== */
volatile int task1_count = 0;
volatile int task2_count = 0;

/* ========================================================
 * Task 1: UART TX - Periodic message sender
 * ======================================================== */

/**
 * Task 1 sends periodic UART messages
 * 
 * SAFETY+FEATURES:
 * - Always calls taskYIELD() at end of loop
 * - Timer interrupts can fire during uart_puts()
 * - Scheduler continues to run normally
 */
void vTask1(void *pvParameters) {
    (void) pvParameters;
    
    for (;;) {
        task1_count++;
        uart_puts("Task 1: Hello from FreeRTOS!\n");
        
        /* CRITICAL: Always yield to allow scheduler to run */
        taskYIELD(); 
    }
}

/* =============================================================
 * Task 2: UART RX - Echo server (Non-blocking design)
 * ============================================================= */

/**
 * Task 2 echoes received UART data
 * 
 * SAFETY_FEATURES:
 * - Uses uart_rx_available() to check before reading (non-blocking)
 * - If no data available, immediately yields (doesn't block)
 * - Timer interrupts work normally
 * - Scheduler ticks continue as expected
 * 
 *_BEHAVIOR:
 * - If UART RX data available: Read, echo, then yield
 * - If no UART RX data: Immediately yield 
 * 
 * This ensures the task never blocks waiting for RX data, which would
 * prevent the scheduler from running and cause tests to fail.
 */
void vTask2(void *pvParameters) {
    (void) pvParameters;
    
    for (;;) {
        task2_count++;
        
        /* NON-BLOCKING CHECK: Only process RX if data available */
        if (uart_rx_available()) {
            char received = uart_getc();
            
            /* Echo back with formatting */
            uart_puts("Task 2 Echo: [");
            uart_putc(received);
            uart_puts("]\n");
        }
        /* If no RX data, skip directly to yield (fast path) */
        
        /* CRITICAL: Always yield, regardless of RX data availability */
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

/* ============================================
 * FreeRTOS Hooks - Error handling
 * ======================================== */

/**
 * Called if a call to pvPortMalloc() fails because there is insufficient
 * free memory available in the FreeRTOS heap.
 */
void vApplicationMallocFailedHook(void) { 
    /* Hang here for debugging */
    while(1);
}

/**
 * Called if a stack overflow is detected.
 * 
 * @param_xTask Handle of the task that overflowed its stack
 * @param_pcTaskName Name of the task that overflowed
 */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) { 
    (void) xTask;
    (void) pcTaskName;
    
    /* Hang here for debugging */
    while(1);
}
