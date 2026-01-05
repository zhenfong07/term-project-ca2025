

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
//Changed from 0x1880 to 0x1888
#define portINITIAL_MSTATUS     ( 0x1888 )

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

/* FIX #2: Configure xPortStartScheduler with proper CSR setup
 * 
 * This function is critical for FreeRTOS to work correctly on RISC-V hardware.
 * It must configure three essential CSR registers before starting the scheduler:
 * 
 * 1. mtvec  - Machine Trap Vector: Points to interrupt handler address
 * 2. mie    - Machine Interrupt Enable: Enables specific interrupt sources
 * 3. mstatus - Machine Status: Enables global interrupts
 * 
 * Without proper configuration, the CPU will not handle timer interrupts correctly
 * and FreeRTOS task switching will fail.
 */
BaseType_t xPortStartScheduler( void )
{
    extern void xPortStartFirstTask( void );
    extern void freertos_risc_v_trap_handler( void );  // Defined in portasm.S

    #if ( configASSERT_DEFINED == 1 )
    {
        configASSERT( ( xISRStackTop & portBYTE_ALIGNMENT_MASK ) == 0 );
    }
    #endif

    /* STEP 1: Configure trap vector (mtvec register)
     * 
     * The mtvec register stores the address of the interrupt/exception handler.
     * When any interrupt occurs (timer, external, ecall), the CPU will jump to
     * this address. We point it to freertos_risc_v_trap_handler (in portasm.S).
     * 
     * Without this, interrupts will jump to address 0x00 and crash!
     */
    __asm__ volatile(
        "la t0, freertos_risc_v_trap_handler\n"  // Load handler address
        "csrw mtvec, t0\n"                        // Write to mtvec CSR
        ::: "t0"
    );

    /* STEP 2: Setup initial timer interrupt
     * 
     * Configure mtimecmp register to trigger the first tick interrupt.
     * This sets up when the next context switch will occur.
     */
    vPortSetupTimerInterrupt();

    /* STEP 3: Enable specific interrupt sources in mie register
     * 
     * The mie (Machine Interrupt Enable) register controls which interrupt
     * sources are enabled. We need to enable:
     * 
     * Bit 7  (0x80)  = MTIE  Machine Timer Interrupt Enable
     * Bit 11 (0x800) = MEIE  Machine External Interrupt Enable
     * 
     * Combined: 0x880 = 0b100010000000
     * 
     * Even if mstatus.MIE is set, interrupts won't fire unless their
     * corresponding bit in mie is also set.
     */
    __asm__ volatile(
        "li t0, 0x880\n"     // Load 0x880 (bits 7 and 11)
        "csrs mie, t0\n"     // Set bits in mie register (OR operation)
        ::: "t0"
    );

    /* STEP 4: Enable global interrupts in mstatus register
     * 
     * The mstatus.MIE bit (bit 3) is the global interrupt enable.
     * Even if mie bits are set, no interrupts will fire if MIE=0.
     * 
     * This is the final gate - once we set this bit, interrupts are live!
     * 
     * Note: portINITIAL_MSTATUS already has MIE=1 (0x1888), but we set it
     * explicitly here to be absolutely certain interrupts are enabled.
     */
    __asm__ volatile(
        "li t0, 0x08\n"      // Load 0x08 (bit 3 = MIE)
        "csrs mstatus, t0\n" // Set MIE bit in mstatus
        ::: "t0"
    );

    /* STEP 5: Start the first task
     * 
     * This function (defined in portasm.S) loads the first task's context
     * from pxCurrentTCB and begins execution. After this point, FreeRTOS
     * is running and tasks will be scheduled by timer interrupts.
     * 
     * This function never returns - control is transferred to the task.
     */
    xPortStartFirstTask();

    /* Should never reach here - scheduler runs forever */
    return pdFALSE;
}

/* Placeholder function - scheduler never ends */
void vPortEndScheduler( void ) 
{ 
    /* FreeRTOS scheduler runs forever, this function should never be called */
    for( ; ; ); 
}

/* External interrupt handler placeholder (not used in this implementation) */
void vPortExternalInterruptHandler( void ) {}

/* Critical section management */
void vTaskEnterCritical( void ) 
{ 
    portDISABLE_INTERRUPTS(); 
    xCriticalNesting++; 
}

void vTaskExitCritical( void ){
    if (xCriticalNesting > 0){
        xCriticalNesting--;
        if( xCriticalNesting == 0 ) portENABLE_INTERRUPTS();
    }
}

