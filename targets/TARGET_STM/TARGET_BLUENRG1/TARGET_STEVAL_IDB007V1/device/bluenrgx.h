/*
 * bluenrgx.h
 *
 *  Created on: 17 nov 2017
 *      Author: Gianluca
 */

#ifndef __BLUENRGX_H_
#define __BLUENRGX_H_

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */

/** @addtogroup Library_configuration_section
  * @{
  */

/**
  * @brief BLUENRG Family
  */
#if !defined  (BLUENRG)
#define BLUENRG
#endif /* BLUENRG */

/* Uncomment the line below according to the target STM32 device used in your
   application
  */

#if !defined (BLUENRG1)
#define BLUENRG1          /*!< BLUENRG1 Devices                                          */
#endif

/*  Tip: To avoid modifying this file each time you need to switch between these
        devices, you can define the device in your toolchain compiler preprocessor.
  */
#if !defined  (USE_HAL_DRIVER)
/**
 * @brief Comment the line below if you will not use the peripherals drivers.
   In this case, these drivers will not be included and the application code will
   be based on direct access to peripherals registers
   */
#define USE_HAL_DRIVER
#endif /* USE_HAL_DRIVER */

/**
  * @brief CMSIS Device version number V2.3.1
  */
#define __STM32F0_DEVICE_VERSION_MAIN   (0x02) /*!< [31:24] main version */
#define __STM32F0_DEVICE_VERSION_SUB1   (0x03) /*!< [23:16] sub1 version */
#define __STM32F0_DEVICE_VERSION_SUB2   (0x01) /*!< [15:8]  sub2 version */
#define __STM32F0_DEVICE_VERSION_RC     (0x00) /*!< [7:0]  release candidate */
#define __STM32F0_DEVICE_VERSION        ((__STM32F0_DEVICE_VERSION_MAIN << 24)\
                                        |(__STM32F0_DEVICE_VERSION_SUB1 << 16)\
                                        |(__STM32F0_DEVICE_VERSION_SUB2 << 8 )\
                                        |(__STM32F0_DEVICE_VERSION_RC))

/**
  * @}
  */

/** @addtogroup Device_Included
  * @{
  */

#if defined(BLUENRG1)
  #include "bluenrg1.h"
#elif defined(BLUENRG2)
#include "bluenrg2.h"
#else
 #error "Please select first the target STM32F0xx device used in your application (in stm32f0xx.h file)"
#endif

/**
  * @}
  */

/** @addtogroup Exported_types
  * @{
  */
typedef enum
{
  RESET = 0,
  SET = !RESET
} FlagStatus, ITStatus;

typedef enum
{
  DISABLE = 0,
  ENABLE = !DISABLE
} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))

typedef enum
{
  ERROR = 0,
  SUCCESS = !ERROR
} ErrorStatus;

/**
  * @}
  */


/** @addtogroup Exported_macros
  * @{
  */
#define SET_BIT(REG, BIT)     ((REG) |= (BIT))

#define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

#define READ_BIT(REG, BIT)    ((REG) & (BIT))

#define CLEAR_REG(REG)        ((REG) = (0x0))

#define WRITE_REG(REG, VAL)   ((REG) = (VAL))

#define READ_REG(REG)         ((REG))

#define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))


/**
  * @}
  */

#if defined (USE_HAL_DRIVER)
 #include "bluenrg1_hal.h"
#endif /* USE_HAL_DRIVER */


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __STM32F0xx_H */
/**
  * @}
  */

/**
  * @}
  */




/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/




#endif /* MBED_OS_TARGETS_TARGET_STM_TARGET_BLUENRG1_TARGET_STEVAL_IDB007V1_DEVICE_BLUENRGX_H_ */
