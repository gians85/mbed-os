/* mbed Microcontroller Library
 * CMSIS-style functionality to support dynamic vectors
 *******************************************************************************
 *******************************************************************************
 */ 

#ifndef MBED_CMSIS_NVIC_H
#define MBED_CMSIS_NVIC_H

// CORE: 16 vectors = 64 bytes from 0x00 to 0x3F
// MCU Peripherals: 32 vectors = 128 bytes from 0x40 to 0xBF
// Total: 48 vectors = 192 bytes (0xC0) to be reserved in RAM
#define NVIC_NUM_VECTORS      48
#define NVIC_USER_IRQ_OFFSET  16

#include "cmsis.h"
#include "misc.h"

#ifdef __cplusplus
extern "C" {
#endif

//void NVIC_SetVector(IRQn_Type IRQn, uint32_t vector);
//uint32_t NVIC_GetVector(IRQn_Type IRQn);

#ifdef __cplusplus
}
#endif

#endif
