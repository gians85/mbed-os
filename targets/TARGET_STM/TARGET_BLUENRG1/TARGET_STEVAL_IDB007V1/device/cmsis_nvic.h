/*
 * cmsis_nvic.h
 *
 *  Created on: 17 nov 2017
 *      Author: Gianluca
 */

#ifndef MBED_CMSIS_NVIC_H
#define MBED_CMSIS_NVIC_H

// CORE: 16 vectors = 64 bytes from 0x00 to 0x3C
// MCU Peripherals: 32 vectors = 128 bytes from 0x40 to 0xBC
// Total: 48 vectors = 192 bytes (0xC0) to be reserved in RAM
#define NVIC_NUM_VECTORS      48
#define NVIC_USER_IRQ_OFFSET  16

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

void NVIC_SetVector(IRQn_Type IRQn, uint32_t vector);
uint32_t NVIC_GetVector(IRQn_Type IRQn);

#ifdef __cplusplus
}
#endif




#endif /* MBED_OS_TARGETS_TARGET_STM_TARGET_BLUENRG1_TARGET_STEVAL_IDB007V1_DEVICE_CMSIS_NVIC_H_ */
