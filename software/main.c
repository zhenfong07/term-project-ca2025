#include "FreeRTOS.h"
#include "task.h"

volatile int working = 0;

void test_task(void *arg) {
    while (1) {
        working++;
        for (volatile int i = 0; i < 100000; i++);
    }
}

int main(void) {
    xTaskCreate(
        test_task,
        "test",
        256,
        NULL,
        1,
        NULL
    );

    vTaskStartScheduler();

    
    while (1);
}
