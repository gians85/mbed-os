/*
 * system_bluenrg1.h
 *
 *  Created on: 17 nov 2017
 *      Author: Gianluca
 */


/**
  * @brief Define to prevent recursive inclusion
  */
#ifndef __SYSTEM_BLUENRG1_H
#define __SYSTEM_BLUENRG1_H

#ifdef __cplusplus
 extern "C" {
#endif

/** @addtogroup BLUENRG1_System_Includes
  * @{
  */

/**
  * @}
  */


/** @addtogroup BLUENRG1_System_Exported_types
  * @{
  */
  /* This variable is updated in three ways:
      1) by calling CMSIS function SystemCoreClockUpdate()
      3) by calling HAL API function HAL_RCC_GetHCLKFreq()
      3) by calling HAL API function HAL_RCC_ClockConfig()
         Note: If you use this function to configure the system clock; then there
               is no need to call the 2 first functions listed above, since SystemCoreClock
               variable is updated automatically.
  */
extern uint32_t SystemCoreClock;          /*!< System Clock Frequency (Core Clock) */
extern const uint8_t AHBPrescTable[16];   /*!< AHB prescalers table values */
extern const uint8_t APBPrescTable[8];    /*!< APB prescalers table values */

/**
  * @}
  */

/** @addtogroup BLUENRG1_System_Exported_Functions
  * @{
  */

extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
extern void SetSysClock(void);

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

/**
  * @}
  */



#endif /* MBED_OS_TARGETS_TARGET_STM_TARGET_BLUENRG1_TARGET_STEVAL_IDB007V1_DEVICE_SYSTEM_BLUENRG1_H_ */
