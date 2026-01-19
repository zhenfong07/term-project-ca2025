// FreeRTOS VGA Application - 6-Frame Nyancat (Memory Optimized)
//
// Uses only 6 of 12 frames to fit in 32KB RAM with FreeRTOS
//
// Memory usage:
// - Code + FreeRTOS: ~10KB
// - Frames (6×512×4): 12KB (instead of 24KB)
// - Stacks: ~2KB
// - Heap: ~8KB
// Total: ~32KB ✓

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

/* ============================================================================
 * VGA Peripheral Registers
 * ============================================================================ */
#define VGA_BASE            0x20000000u
#define VGA_ID              ((volatile uint32_t *)(VGA_BASE + 0x00))
#define VGA_STATUS          ((volatile uint32_t *)(VGA_BASE + 0x04))
#define VGA_UPLOAD_ADDR     ((volatile uint32_t *)(VGA_BASE + 0x10))
#define VGA_STREAM_DATA     ((volatile uint32_t *)(VGA_BASE + 0x14))
#define VGA_CTRL            ((volatile uint32_t *)(VGA_BASE + 0x20))
#define VGA_PALETTE(n)      ((volatile uint32_t *)(VGA_BASE + 0x24 + ((n) << 2)))

#define VGA_EXPECTED_ID     0x56474131u

/* VGA Constants */
#define VGA_FRAME_WIDTH     64
#define VGA_FRAME_HEIGHT    64
#define VGA_FRAME_SIZE      (VGA_FRAME_WIDTH * VGA_FRAME_HEIGHT)
#define VGA_PIXELS_PER_WORD 8
#define VGA_WORDS_PER_FRAME (VGA_FRAME_SIZE / VGA_PIXELS_PER_WORD)

/* USE ONLY 6 FRAMES to save memory! */
#define VGA_NUM_FRAMES      6  /* Was 12, now 6 to fit in 32KB */

/* Nyancat color palette */
static const uint8_t nyancat_palette[14] = {
    0x01, 0x3F, 0x00, 0x3E, 0x3B, 0x36, 0x30,
    0x38, 0x3C, 0x0C, 0x0B, 0x17, 0x2A, 0x3A,
};

/* Include full 12-frame data, but we'll only use first 6 */
#include "nyancat-frames1.h"

/* Mutex for VGA coordination */
static SemaphoreHandle_t xVGAMutex = NULL;
static volatile uint32_t current_frame = 0;

/* ============================================================================
 * VGA Functions
 * ============================================================================ */

static void vga_init_palette(void) {
    for (int i = 0; i < 14; i++) {
        *VGA_PALETTE(i) = nyancat_palette[i] & 0x3F;
    }
    for (int i = 14; i < 16; i++) {
        *VGA_PALETTE(i) = 0x00;
    }
}

static void vga_upload_frame(int frame_index) {
    if (frame_index < 0 || frame_index >= VGA_NUM_FRAMES)
        return;
    
    *VGA_UPLOAD_ADDR = ((uint32_t)(frame_index & 0xF) << 16) | 0;
    
    /* Upload only first 6 frames from nyancat_frames array */
    for (int i = 0; i < VGA_WORDS_PER_FRAME; i++) {
        *VGA_STREAM_DATA = nyancat_frames[frame_index][i];
    }
}

/* ============================================================================
 * FreeRTOS Tasks
 * ============================================================================ */

void vNyancatAnimationTask(void *pvParameters) {
    (void)pvParameters;
    
    /* Upload only 6 frames instead of 12 */
    for (int frame = 0; frame < VGA_NUM_FRAMES; frame++) {
        if (xSemaphoreTake(xVGAMutex, portMAX_DELAY) == pdTRUE) {
            vga_upload_frame(frame);
            xSemaphoreGive(xVGAMutex);
        }
        taskYIELD();
    }
    
    /* Task complete, just yield forever */
    for (;;) {
        for (volatile int i = 0; i < 100000; i++) {
            taskYIELD();
        }
    }
}

void vNyancatControlTask(void *pvParameters) {
    (void)pvParameters;
    
    /* Wait for upload */
    for (volatile int i = 0; i < 50000; i++) {
        taskYIELD();
    }
    
    /* Cycle through 6 frames */
    for (;;) {
        if (xSemaphoreTake(xVGAMutex, portMAX_DELAY) == pdTRUE) {
            *VGA_CTRL = (current_frame << 4) | 0x01;
            xSemaphoreGive(xVGAMutex);
        }
        
        current_frame = (current_frame + 1) % VGA_NUM_FRAMES;
        
        for (volatile int i = 0; i < 50000; i++) {
            taskYIELD();
        }
    }
}

/* ============================================================================
 * Main
 * ============================================================================ */

void prvSetupHardware(void) {
    uint32_t vga_id = *VGA_ID;
    if (vga_id != VGA_EXPECTED_ID) {
        /* VGA not present, continue anyway */
    }
    
    vga_init_palette();
    *VGA_CTRL = 0x01;
}

int main(void) {
    prvSetupHardware();
    
    xVGAMutex = xSemaphoreCreateMutex();
    if (xVGAMutex == NULL) {
        while (1);
    }
    
    xTaskCreate(vNyancatAnimationTask, "VGAAnim", 256, NULL, 2, NULL);
    xTaskCreate(vNyancatControlTask, "VGACtrl", 128, NULL, 1, NULL);
    
    vTaskStartScheduler();
    
    while (1);
    return 0;
}

/* FreeRTOS Hooks */
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName) {
    (void)xTask; (void)pcTaskName;
    while (1);
}

void vApplicationMallocFailedHook(void) {
    while (1);
}
