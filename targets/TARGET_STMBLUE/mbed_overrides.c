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

}
