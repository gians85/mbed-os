/* mbed Microcontroller Library
 * *******************************************
 * *******************************************
 */
#include "cmsis.h"
#include "BlueNRG1_sysCtrl.h"

// This function is called after RAM initialization and before main.
void mbed_sdk_init()
{
#ifdef stm32
	    // Update the SystemCoreClock variable.
	    SystemCoreClockUpdate();
	    HAL_Init();

	#if TARGET_STM32F7
	    // Enable CPU L1-Cache
	    SCB_EnableICache();
	    SCB_EnableDCache();
	#endif /* TARGET_STM32F7 */

	    /* Configure the System clock source, PLL Multiplier and Divider factors,
	       AHB/APBx prescalers and Flash settings */
	    SetSysClock();
	    SystemCoreClockUpdate();
#endif

	// Before this mbed_sdk_init() is called SystemInit():
	//   Remap the vector table
	//   Configure all the interrupts priority.
	//   Device Configuration
	//   Disable all the peripherals clock except NVM, SYSCTR, PKA and RNG
	//   enable irq

	//The HAL_SYSTICK_Config()function calls the SysTick_Config() function
	/* Configure SysTick to generate interrupt */
	SysTick_Config(SYST_CLOCK/1000 - 1);
}
