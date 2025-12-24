#include "FreeRTOS.h"
#include "task.h"


volatile int task1_count = 0;
volatile int task2_count = 0;

void vTask1(void *pvParameters) {
    while (1) {
        task1_count++;
       
        taskYIELD(); 
    }
}

void vTask2(void *pvParameters) {
    while (1) {
        task2_count++;
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

    vTaskStartScheduler();

    // (Heap)
    while (1){
         __asm__ volatile ("nop");
    }
}

void vApplicationMallocFailedHook(void) { while(1); }
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) { while(1); }