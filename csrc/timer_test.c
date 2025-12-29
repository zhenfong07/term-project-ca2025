// SPDX-License-Identifier: MIT
// Timer Interrupt Integration Test
//
// This test validates the complete timer interrupt flow:
// 1. CSR configuration (mstatus, mie, mtvec)
// 2. Timer configuration via AXI4-Lite (mtimecmp)
// 3. Interrupt triggering when mtime >= mtimecmp
// 4. Handler execution with MIP verification
// 5. Clean return from interrupt
//
// Test Sequence:
//   - Configure CSRs for machine-mode interrupts
//   - Write mtimecmp = current_mtime + 100 cycles
//   - Wait in loop until interrupt fires
//   - Handler verifies MIP.MTIP (bit 7) is set
//   - Clear interrupt by writing higher mtimecmp
//   - Return to main and report success
//
// Expected Results:
//   TEST_RESULT = 0x1 : Timer interrupt triggered and handled correctly
//   TEST_RESULT = 0x2 : MIP.MTIP was set in handler
//   TEST_RESULT = 0x3 : Both checks passed (SUCCESS)
//   TEST_RESULT = 0xF : Timeout - interrupt never fired

#include "mmio.h"

// Magic value to signal test completion
#define TEST_DONE_MAGIC 0xCAFEF00Du

// Machine Timer memory-mapped registers (AXI4-Lite, base 0x60000000)
#define MTIME_LOW      ((volatile unsigned int*)0x60000000)
#define MTIME_HIGH     ((volatile unsigned int*)0x60000004)
#define MTIMECMP_LOW   ((volatile unsigned int*)0x60000008)
#define MTIMECMP_HIGH  ((volatile unsigned int*)0x6000000C)

// Global flag set by interrupt handler
volatile unsigned int interrupt_fired = 0;
volatile unsigned int mip_value = 0;

// CSR access helpers
static inline unsigned int read_csr_mip(void)
{
    unsigned int value;
    asm volatile("csrr %0, mip" : "=r"(value));
    return value;
}

static inline unsigned int read_csr_mstatus(void)
{
    unsigned int value;
    asm volatile("csrr %0, mstatus" : "=r"(value));
    return value;
}

static inline unsigned int read_csr_mie(void)
{
    unsigned int value;
    asm volatile("csrr %0, mie" : "=r"(value));
    return value;
}

static inline void write_csr_mstatus(unsigned int value)
{
    asm volatile("csrw mstatus, %0" : : "r"(value));
}

static inline void write_csr_mie(unsigned int value)
{
    asm volatile("csrw mie, %0" : : "r"(value));
}

static inline void write_csr_mtvec(unsigned int value)
{
    asm volatile("csrw mtvec, %0" : : "r"(value));
}

// Forward declaration of trap handler (defined in init.S)
extern void __trap_entry(void);

// C interrupt handler called from assembly trap_handler
void trap_handler(void)
{
    // Read MIP to identify interrupt source
    mip_value = read_csr_mip();
    
    // Check if MTIP (bit 7) is set
    if (mip_value & (1 << 7)) {
        interrupt_fired = 1;
        
        // Clear interrupt by writing higher mtimecmp
        // Set to max value to prevent re-triggering
        *MTIMECMP_LOW = 0xFFFFFFFF;
        *MTIMECMP_HIGH = 0xFFFFFFFF;
    }
}

int main(void)
{
    unsigned int test_result = 0;
    unsigned int timeout = 1000000;  // Large timeout to prevent false failures
    
    // Step 1: Read current mtime
    unsigned int current_mtime_low = *MTIME_LOW;
    unsigned int current_mtime_high = *MTIME_HIGH;
    
    // Step 2: Set mtimecmp = mtime + 100 (interrupt in ~100 cycles)
    unsigned int target_time = current_mtime_low + 100;
    *MTIMECMP_LOW = target_time;
    *MTIMECMP_HIGH = current_mtime_high;  // Keep high word same
    
    // Step 3: Configure trap vector (point to __trap_entry in init.S)
    write_csr_mtvec((unsigned int)__trap_entry);
    
    // Step 4: Enable global interrupts (mstatus.MIE = 1, bit 3)
    unsigned int mstatus = read_csr_mstatus();
    mstatus |= (1 << 3);  // Set MIE bit
    write_csr_mstatus(mstatus);
    
    // Step 5: Enable timer interrupt (mie.MTIE = 1, bit 7)
    unsigned int mie = read_csr_mie();
    mie |= (1 << 7);  // Set MTIE bit
    write_csr_mie(mie);
    
    // Step 6: Wait for interrupt (with timeout)
    while (!interrupt_fired && timeout > 0) {
        timeout--;
        // Busy wait - interrupt should fire when mtime >= mtimecmp
    }
    
    // Step 7: Check results
    if (timeout == 0) {
        // Timeout - interrupt never fired
        test_result = 0xF;
    } else {
        // Interrupt fired
        test_result |= 0x1;
        
        // Check if MIP.MTIP was set
        if (mip_value & (1 << 7)) {
            test_result |= 0x2;
        }
    }
    
    // Report results
    *TEST_RESULT = test_result;
    *TEST_DONE_FLAG = TEST_DONE_MAGIC;
    
    // Halt
    while (1) {
        asm volatile("wfi");
    }
    
    return 0;
}
