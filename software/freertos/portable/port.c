/*
 * FreeRTOS Kernel V10.4.6 - Modified for 4-soc
 * Based on the standard RISC-V port.
 */

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "portmacro.h"

/* Standard includes. */
#include <string.h>


/* CLINT.scala: 
 * 0x00: mtimecmp
 * 0x08: mtime 
 */
#define CLINT_MTIMECMP_LOW  ( *(volatile uint32_t * )( configMTIMECMP_BASE_ADDRESS + 0x0 ) )
#define CLINT_MTIMECMP_HIGH ( *(volatile uint32_t * )( configMTIMECMP_BASE_ADDRESS + 0x4 ) )
#define CLINT_MTIME_LOW     ( *(volatile uint32_t * )( configMTIME_BASE_ADDRESS + 0x8 ) )
#define CLINT_MTIME_HIGH    ( *(volatile uint32_t * )( configMTIME_BASE_ADDRESS + 0xC ) )

/* Constants */
#define portINITIAL_MSTATUS     ( 0x1880 ) /* MPP=11 (Machine Mode), MPIE=1 (Enable IRQ after return) */

/* The stack used by interrupt service routines. */
#ifdef configISR_STACK_SIZE_WORDS
    static __attribute__( ( aligned( 16 ) ) ) StackType_t xISRStack[ configISR_STACK_SIZE_WORDS ] = { 0 };
    const StackType_t xISRStackTop = ( StackType_t ) &( xISRStack[ configISR_STACK_SIZE_WORDS & ~portBYTE_ALIGNMENT_MASK ] );
#else
    extern const uint32_t __freertos_irq_stack_top[];
    const StackType_t xISRStackTop = ( StackType_t ) __freertos_irq_stack_top;
#endif

/* Debug variables */
size_t xCriticalNesting = 0xaaaaaaaa;
size_t * pxCriticalNesting = &xCriticalNesting;

/*-----------------------------------------------------------*/

/* Sets up the timer to generate the tick interrupt. */
void vPortSetupTimerInterrupt( void )
{
    uint32_t ulCurrentTimeLow, ulCurrentTimeHigh;
    uint32_t ulNextTimeLow, ulNextTimeHigh;
    uint32_t ulTickIncrement = configCPU_CLOCK_HZ / configTICK_RATE_HZ;

    /* Read current mtime (handle 32-bit rollover safely) */
    do {
        ulCurrentTimeHigh = CLINT_MTIME_HIGH;
        ulCurrentTimeLow = CLINT_MTIME_LOW;
    } while( ulCurrentTimeHigh != CLINT_MTIME_HIGH );

    /* Calculate next compare value */
    uint64_t ullNextTime = ( ( uint64_t ) ulCurrentTimeHigh << 32 ) | ulCurrentTimeLow;
    ullNextTime += ulTickIncrement;

    /* Write mtimecmp */
    ulNextTimeLow = ( uint32_t ) ( ullNextTime & 0xFFFFFFFFUL );
    ulNextTimeHigh = ( uint32_t ) ( ullNextTime >> 32 );

    CLINT_MTIMECMP_LOW = 0xFFFFFFFF; // Set high to avoid spurious interrupt during update
    CLINT_MTIMECMP_HIGH = ulNextTimeHigh;
    CLINT_MTIMECMP_LOW = ulNextTimeLow;

    /* Enable Machine Timer Interrupt (mie.MTIP = bit 7) */
    __asm__ volatile( "csrs mie, %0" :: "r"( 0x80 ) );
}

/*-----------------------------------------------------------*/

/*
 * Initialise the stack of a task to look exactly as if a call to
 * portSAVE_CONTEXT had been called.
 */
StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters )
{
    /* Simulate the stack frame as if the task was interrupted */
    /* Registers x1-x31 need to be saved */
    
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x31 (t6) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x30 (t5) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x29 (t4) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x28 (t3) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x27 (s11) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x26 (s10) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x25 (s9) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x24 (s8) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x23 (s7) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x22 (s6) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x21 (s5) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x20 (s4) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x19 (s3) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x18 (s2) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x17 (a7) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x16 (a6) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x15 (a5) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x14 (a4) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x13 (a3) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x12 (a2) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x11 (a1) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)pvParameters; /* x10 (a0) - Task Parameter */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x9 (s1) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x8 (s0/fp) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x7 (t2) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x6 (t1) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x5 (t0) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x4 (tp) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)0xdeadbeef; /* x3 (gp) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)pxCode;     /* x1 (ra) - Return Address (Task Entry) */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)portINITIAL_MSTATUS; /* mstatus */
    pxTopOfStack--;
    *pxTopOfStack = (StackType_t)pxCode;     /* mepc - Program Counter */

    return pxTopOfStack;
}

/*-----------------------------------------------------------*/

BaseType_t xPortStartScheduler( void )
{
    extern void xPortStartFirstTask( void );

    #if ( configASSERT_DEFINED == 1 )
    {
        /* Check alignment of the interrupt stack */
        configASSERT( ( xISRStackTop & portBYTE_ALIGNMENT_MASK ) == 0 );
    }
    #endif

    /* Khởi tạo Timer */
    vPortSetupTimerInterrupt();

    /* Bật ngắt Timer và External Interrupts (bit 7 và 11) */
    __asm volatile ( "csrs mie, %0" ::"r" ( 0x880 ) );

    /* Nhảy vào Task đầu tiên */
    xPortStartFirstTask();

    return 0;
}

/*-----------------------------------------------------------*/

void vPortEndScheduler( void )
{
    /* Not implemented. */
    for( ; ; );
}

/* External interrupt handler placeholder */
void vPortExternalInterruptHandler( void )
{
}

void vTaskEnterCritical( void )
{
    portDISABLE_INTERRUPTS();
    xCriticalNesting++;
}

void vTaskExitCritical( void )
{
    xCriticalNesting--;
    if( xCriticalNesting == 0 )
    {
        portENABLE_INTERRUPTS();
    }
}