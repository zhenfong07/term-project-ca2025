

#include "FreeRTOS.h"
#include "task.h"
#include "portmacro.h"

/* --- CUSTOM STRING LIBRARY --- */
void *memset(void *dest, int c, size_t n) {
    unsigned char *p = (unsigned char *)dest;
    while (n--) *p++ = (unsigned char)c;
    return dest;
}

void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    while (n--) *d++ = *s++;
    return dest;
}

int memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = s1, *p2 = s2;
    while (n--) {
        if (*p1 != *p2) return *p1 - *p2;
        p1++; p2++;
    }
    return 0;
}

size_t strlen(const char *s) {
    size_t len = 0;
    while (*s++) len++;
    return len;
}

/* --- HARDWARE DEFINITIONS --- */
#define CLINT_MTIMECMP_LOW  ( *(volatile uint32_t * )( configMTIMECMP_BASE_ADDRESS + 0x0 ) )
#define CLINT_MTIMECMP_HIGH ( *(volatile uint32_t * )( configMTIMECMP_BASE_ADDRESS + 0x4 ) )
#define CLINT_MTIME_LOW     ( *(volatile uint32_t * )( configMTIME_BASE_ADDRESS + 0x0 ) )
#define CLINT_MTIME_HIGH    ( *(volatile uint32_t * )( configMTIME_BASE_ADDRESS + 0x4 ) )

#define portINITIAL_MSTATUS     ( 0x1880 ) 

/* Stack */
#ifdef configISR_STACK_SIZE_WORDS
    static __attribute__( ( aligned( 16 ) ) ) StackType_t xISRStack[ configISR_STACK_SIZE_WORDS ] = { 0 };
    const StackType_t xISRStackTop = ( StackType_t ) &( xISRStack[ configISR_STACK_SIZE_WORDS & ~portBYTE_ALIGNMENT_MASK ] );
#else
    extern const uint32_t __freertos_irq_stack_top[];
    const StackType_t xISRStackTop = ( StackType_t ) __freertos_irq_stack_top;
#endif

size_t xCriticalNesting = 0;
size_t * pxCriticalNesting = &xCriticalNesting;

/* --- SETUP TIMER --- */
void vPortSetupTimerInterrupt( void )
{
    uint32_t ulCurrentTimeLow, ulCurrentTimeHigh;
    uint32_t ulNextTimeLow, ulNextTimeHigh;
    uint32_t ulTickIncrement = configCPU_CLOCK_HZ / configTICK_RATE_HZ;

    // Read current time atomically
    do {
        ulCurrentTimeHigh = CLINT_MTIME_HIGH;
        ulCurrentTimeLow = CLINT_MTIME_LOW;
    } while( ulCurrentTimeHigh != CLINT_MTIME_HIGH );

    uint64_t ullNextTime = ( ( uint64_t ) ulCurrentTimeHigh << 32 ) | ulCurrentTimeLow;
    ullNextTime += ulTickIncrement;

    ulNextTimeLow = ( uint32_t ) ( ullNextTime & 0xFFFFFFFFUL );
    ulNextTimeHigh = ( uint32_t ) ( ullNextTime >> 32 );

    // Set timer compare to schedule next tick
    CLINT_MTIMECMP_LOW = 0xFFFFFFFF; // Avoid spurious interrupts
    CLINT_MTIMECMP_HIGH = ulNextTimeHigh;
    CLINT_MTIMECMP_LOW = ulNextTimeLow;
}

/* --- INITIALIZE TASK STACK --- */
StackType_t *pxPortInitialiseStack( StackType_t *pxTopOfStack, TaskFunction_t pxCode, void *pvParameters )
{
    /*For 16 byte stack*/
    pxTopOfStack = ( StackType_t * ) ( ( ( uintptr_t ) pxTopOfStack ) & ~((uintptr_t)0xF) );
    pxTopOfStack-=32;
    for (int i=0;i<32;i++){
        pxTopOfStack[i] = ( StackType_t ) 0;
    }

     pxTopOfStack[0] = ( StackType_t ) pxCode;

     pxTopOfStack[7] = ( StackType_t ) pvParameters;

     pxTopOfStack[30] = ( StackType_t ) portINITIAL_MSTATUS;

     pxTopOfStack[1] = ( StackType_t ) 0;


    

    return pxTopOfStack;
}

/* --- START SCHEDULER (MOST IMPORTANT PART) --- */
BaseType_t xPortStartScheduler( void )
{
    extern void xPortStartFirstTask( void );
    extern void freertos_risc_v_trap_handler( void ); // Assembly interrupt handler

    #if ( configASSERT_DEFINED == 1 )
    {
        configASSERT( ( xISRStackTop & portBYTE_ALIGNMENT_MASK ) == 0 );
    }
    #endif

    /* 1. Set mtvec to FreeRTOS Trap Handler */
    /* Without this, CPU will jump randomly on interrupts! */
    __asm__ volatile( "csrw mtvec, %0" :: "r"( freertos_risc_v_trap_handler ) );

    /* 2. Initialize Timer */
    vPortSetupTimerInterrupt();

    /* 3. Enable Timer (bit 7) and External (bit 11) interrupts */
    __asm volatile ( "csrs mie, %0" ::"r" ( 0x880 ) );

    /* 4. Jump to the first task */
    xPortStartFirstTask();

    return 0;
}

void vPortEndScheduler( void ) { for( ; ; ); }
void vPortExternalInterruptHandler( void ) {}
void vTaskEnterCritical( void ) { portDISABLE_INTERRUPTS(); xCriticalNesting++; }
void vTaskExitCritical( void ){
    if (xCriticalNesting > 0){
        xCriticalNesting--;
        if( xCriticalNesting == 0 ) portENABLE_INTERRUPTS();
    }
}

