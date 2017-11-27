/*
 * BlueNRGx_gpio.h
 *
 *  Created on: 23 nov 2017
 *      Author: Gianluca
 */

#ifndef MBED_OS_TARGETS_TARGET_STM_TARGET_BLUENRG1_DEVICE_BLUENRGX_GPIO_H_
#define MBED_OS_TARGETS_TARGET_STM_TARGET_BLUENRG1_DEVICE_BLUENRGX_GPIO_H_

#include "BlueNRG1_gpio.h"
#include "BlueNRG1_sysCtrl.h"

#define  GPIO_NOPULL        (0x00000000U)   /*!< No Pull-up or Pull-down activation  */
#define  GPIO_PULLUP        (0x00000001U)   /*!< Pull-up activation                  */
#define  GPIO_PULLDOWN      (0x00000002U)   /*!< Pull-down activation                */

#define GPIO_IP_WITHOUT_BRR


#undef GPIOC_BASE
#undef GPIOD_BASE
#undef GPIOE_BASE
#undef GPIOH_BASE

#define ENABLE 1
#define NC (int)0xFFFFFFFF

#define __HAL_RCC_GPIOA_CLK_ENABLE() SysCtrl_PeripheralClockCmd(CLOCK_PERIPH_GPIO, ENABLE)
#define __HAL_RCC_GPIOB_CLK_ENABLE() SysCtrl_PeripheralClockCmd(CLOCK_PERIPH_GPIO, ENABLE)

#define GPIO_TypeDef	GPIO_Type
#define IDR             DATA
#define BSRR			DATC

#define LL_GPIO_SetPinMode(obj->gpio, obj->ll_pin, LL_GPIO_MODE_INPUT)	GPIO_InitStructure.GPIO_Mode = GPIO_Input;
#define LL_GPIO_SetPinMode(obj->gpio, obj->ll_pin, LL_GPIO_MODE_OUTPUT)		GPIO_InitStructure.GPIO_Mode = GPIO_Output;


#endif /* MBED_OS_TARGETS_TARGET_STM_TARGET_BLUENRG1_DEVICE_BLUENRGX_GPIO_H_ */
