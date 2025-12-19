#ifndef PORTMACRO_H
#define PORTMACRO_H

#ifdef __cplusplus
extern "C" {
#endif

/* Type definitions. */
#define portCHAR        char
#define portFLOAT       float
#define portDOUBLE      double
#define portLONG        long
#define portSHORT       short
#define portSTACK_TYPE  uint32_t
#define portBASE_TYPE   long

typedef portSTACK_TYPE StackType_t;
typedef long BaseType_t;
typedef unsigned long UBaseType_t;

#if ( configUSE_16_BIT_TICKS == 1 )
    typedef uint16_t TickType_t;
    #define portMAX_DELAY ( TickType_t ) 0xffff
#else
    typedef uint32_t TickType_t;
    #define portMAX_DELAY ( TickType_t ) 0xffffffffUL
#endif

/* Architecture specifics. */
#define portSTACK_GROWTH            ( -1 )
#define portTICK_PERIOD_MS          ( ( TickType_t ) 1000 / configTICK_RATE_HZ )
#define portBYTE_ALIGNMENT          16

/* Scheduler utilities. */
extern void vTaskSwitchContext( void );
#define portYIELD()                 __asm volatile( "ecall" );
#define portEND_SWITCHING_ISR( xSwitchRequired ) if( xSwitchRequired ) vTaskSwitchContext()
#define portYIELD_FROM_ISR( x )     portEND_SWITCHING_ISR( x )

/* Critical section management. */
extern void vTaskEnterCritical( void );
extern void vTaskExitCritical( void );
#define portDISABLE_INTERRUPTS()    __asm volatile( "csrc mstatus, 8" )
#define portENABLE_INTERRUPTS()     __asm volatile( "csrs mstatus, 8" )
#define portENTER_CRITICAL()        vTaskEnterCritical()
#define portEXIT_CRITICAL()         vTaskExitCritical()

/* Task function macros. */
#define portTASK_FUNCTION_PROTO( vFunction, pvParameters ) void vFunction( void *pvParameters )
#define portTASK_FUNCTION( vFunction, pvParameters ) void vFunction( void *pvParameters )

#define portNOP() __asm volatile( "nop" )

#ifdef __cplusplus
}
#endif

#endif /* PORTMACRO_H */
