// Demonstrates:
// - FreeRTOS coordinating VGA peripheral
// - Multitasking with two tasks
// - Mutex-based resource sharing
// - Real hardware-mapped I/O

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"


#define VGA_BASE            0x20000000u
#define VGA_ID              ((volatile uint32_t *)(VGA_BASE + 0x00))
#define VGA_STATUS          ((volatile uint32_t *)(VGA_BASE + 0x04))
#define VGA_UPLOAD_ADDR     ((volatile uint32_t *)(VGA_BASE + 0x10))
#define VGA_STREAM_DATA     ((volatile uint32_t *)(VGA_BASE + 0x14))
#define VGA_CTRL            ((volatile uint32_t *)(VGA_BASE + 0x20))
#define VGA_PALETTE(n)      ((volatile uint32_t *)(VGA_BASE + 0x24 + ((n) << 2)))

#define VGA_EXPECTED_ID     0x56474131u  /* 'VGA1' */

/* VGA Constants */
#define VGA_FRAME_WIDTH     64
#define VGA_FRAME_HEIGHT    64
#define VGA_FRAME_SIZE      (VGA_FRAME_WIDTH * VGA_FRAME_HEIGHT)
#define VGA_PIXELS_PER_WORD 8
#define VGA_WORDS_PER_FRAME (VGA_FRAME_SIZE / VGA_PIXELS_PER_WORD)

#include "nyancat-frames.h"

static SemaphoreHandle_t xVGAMutex = NULL;
static volatile uint32_t current_frame = 0;

//VGA Helper Functions===================

/**
 * Initialize VGA color palette with Nyancat colors
 */
static void vga_init_palette(void) {
    for (int i = 0; i < 14; i++) {
        *VGA_PALETTE(i) = nyancat_palette[i] & 0x3F;
    }
    for (int i = 14; i < 16; i++) {
        *VGA_PALETTE(i) = 0x00;
    }
}

/**
 * Upload a Nyancat frame to VGA memory
 * Uses prepacked frame data from nyancat-frames.h
 */
static void vga_upload_nyancat_frame(int frame_index) {
    if (frame_index < 0 || frame_index >= VGA_NUM_FRAMES)
        return;
    
    *VGA_UPLOAD_ADDR = ((uint32_t)(frame_index & 0xF) << 16) | 0;
    
    for (int i = 0; i < VGA_WORDS_PER_FRAME; i++) {
        *VGA_STREAM_DATA = nyancat_frames[frame_index][i];
    }
}

/* ============================================================================
 * Task 1: Nyancat Animation Task
 * 
 * Responsibilities:
 * - Upload all 12 Nyancat frames to VGA memory
 * - Coordinate VGA access via mutex
 * - Allow scheduler to run during uploads
 * ============================================================================ */
void vNyancatAnimationTask(void *pvParameters) {
    (void)pvParameters;
    
    //Upload all 12 frames during initialization
    for (int frame = 0; frame < VGA_NUM_FRAMES; frame++) {
        //take mutex to access VGA peripheral
        if (xSemaphoreTake(xVGAMutex, portMAX_DELAY) == pdTRUE) {
            vga_upload_nyancat_frame(frame);
            xSemaphoreGive(xVGAMutex);
        }
        
        taskYIELD();
    }
    
    for (;;) {
        for (volatile int i = 0; i < 100000; i++) {
            taskYIELD();
        }
    }
}

/* ============================================================================
 * Task 2: Nyancat Display Control Task
 * 
 * Responsibilities:
 * - Cycle through 12 Nyancat frames for animation
 * - Control frame timing (~20Hz animation)
 * - Coordinate VGA access via mutex
 * ============================================================================ */
void vNyancatControlTask(void *pvParameters) {
    (void)pvParameters;
    
    //wait for animation task to upload frames
    for (volatile int i = 0; i < 50000; i++) {
        taskYIELD();
    }
    
    //Animation loop: cycle through all 12 frames
    for (;;) {
        //take mutex to change displayed frame
        if (xSemaphoreTake(xVGAMutex, portMAX_DELAY) == pdTRUE) {
            //set which frame to display and enable VGA
            *VGA_CTRL = (current_frame << 4) | 0x01;
            
            uint32_t status = *VGA_STATUS;
            (void)status;
            
            xSemaphoreGive(xVGAMutex);
        }
        
        ///next frame (cycle through all 12 frames)
        current_frame = (current_frame + 1) % VGA_NUM_FRAMES;
        
        //frame display time: ~50K cycles for ~20Hz animation
        //delay allows scheduler to switch tasks */
        for (volatile int i = 0; i < 50000; i++) {
            taskYIELD();  //allows timer interrupts
        }
    }
}

//Hardware setup =================== 

void prvSetupHardware(void) {
    /* Verify VGA peripheral presence */
    uint32_t vga_id = *VGA_ID;
    if (vga_id != VGA_EXPECTED_ID) {
        /* VGA not present - may be in simulation without VGA */
        /* Continue anyway - code will still demonstrate multitasking */
    }
    
    /* Initialize VGA color palette */
    vga_init_palette();
    
    /* Enable VGA display */
    *VGA_CTRL = 0x01;
}

int main(void) {
    prvSetupHardware();
    
    /* Create mutex for VGA access coordination */
    xVGAMutex = xSemaphoreCreateMutex();
    if (xVGAMutex == NULL) {
        /* Mutex creation failed - hang for debugging */
        while (1);
    }
    
    /* Create Task 1: Nyancat Animation Upload (priority 2) */
    xTaskCreate(vNyancatAnimationTask,"Nyancat", 256, NULL, 2, NULL);
    
    /* Create Task 2: Display Control (priority 1) */
    xTaskCreate(vNyancatControlTask,"Display", 128, NULL, 1, NULL);
    vTaskStartScheduler();
    while (1) {
    }
    
    return 0;
}


void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    (void)xTask;
    (void)pcTaskName;
    while (1);
}

void vApplicationMallocFailedHook(void) {
    while (1);
}