#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *----------------------------------------------------------*/

/* CPU RISC-V 32-bit */
#define configUSE_PREEMPTION                    1
#define configUSE_PORT_OPTIMISED_TASK_SELECTION 0
#define configUSE_TICKLESS_IDLE                 0
#define configCPU_CLOCK_HZ                      ( 50000000 ) // Giả sử 50MHz cho Simulation
#define configTICK_RATE_HZ                      ( ( TickType_t ) 1000 )
#define configMAX_PRIORITIES                    ( 5 )
#define configMINIMAL_STACK_SIZE                ( ( unsigned short ) 128 )
#define configTOTAL_HEAP_SIZE                   ( ( size_t ) 4096 ) // 4KB Heap (vì RAM tổng chỉ 32KB)
#define configMAX_TASK_NAME_LEN                 ( 16 )
#define configUSE_16_BIT_TICKS                  0
#define configIDLE_SHOULD_YIELD                 0

/* Hook for event */
#define configUSE_MALLOC_FAILED_HOOK            0
#define configUSE_IDLE_HOOK                     0
#define configUSE_TICK_HOOK                     0

/*  Queue */
#define configUSE_MUTEXES                       1
#define configUSE_RECURSIVE_MUTEXES             1
#define configUSE_COUNTING_SEMAPHORES           1
#define configQUEUE_REGISTRY_SIZE               10
#define configUSE_QUEUE_SETS                    0

/*  Stack Overflow  */
#define configCHECK_FOR_STACK_OVERFLOW          0 // Tắt để tiết kiệm code size

/* RISC-V Specific Configuration - QUAN TRỌNG NHẤT */
/* Timer CLINT */
/*  */
#define configMTIME_BASE_ADDRESS                ( 0x02000000UL )
#define configMTIMECMP_BASE_ADDRESS             ( 0x02000000UL )

/*  ISR (Interrupt Service Routine) */
#define configISR_STACK_SIZE_WORDS              ( 200 )

/* Map  FreeRTOS  */
#define vPortSVCHandler                         freertos_risc_v_trap_handler
#define xPortStartScheduler                     xPortStartScheduler

/* Software Timer definitions */
#define configUSE_TIMERS                        1
#define configTIMER_TASK_PRIORITY               ( configMAX_PRIORITIES - 1 )
#define configTIMER_QUEUE_LENGTH                5
#define configTIMER_TASK_STACK_DEPTH            ( configMINIMAL_STACK_SIZE )

/* Set the following definitions to 1 to include the API function, or 0
to exclude the API function. */
#define INCLUDE_vTaskPrioritySet                1
#define INCLUDE_uxTaskPriorityGet               1
#define INCLUDE_vTaskDelete                     1
#define INCLUDE_vTaskCleanUpResources           1
#define INCLUDE_vTaskSuspend                    1
#define INCLUDE_vTaskDelayUntil                 1
#define INCLUDE_vTaskDelay                      1
#define INCLUDE_eTaskGetState                   1
#define INCLUDE_xTimerPendFunctionCall          1

#endif /* FREERTOS_CONFIG_H */
