/* mbed Microcontroller Library
 *******************************************************************************
 *******************************************************************************
 */
#include "mbed_assert.h"	// arm
#include "gpio_api.h"		// arm
#include "pinmap.h"			// arm
#include "mbed_error.h"		// arm
//#include "pin_device.h"		// stm
#include "BlueNRG1_sysCtrl.h"

extern const uint32_t ll_pin_defines[16];

#define GPIOA_BASE GPIO_BASE

// Enable GPIO clock and return GPIO base address
GPIO_TypeDef *Set_GPIO_Clock(uint32_t port_idx) {
    uint32_t gpio_add = 0;
    switch (port_idx) {
        case PortA:
            gpio_add = GPIOA_BASE;
            //__HAL_RCC_GPIOA_CLK_ENABLE();
            SysCtrl_PeripheralClockCmd(CLOCK_PERIPH_GPIO, ENABLE);
            break;
        default:
            error("Pinmap error: wrong port number.");
            break;
    }
    return (GPIO_TypeDef *) gpio_add;
}

uint32_t gpio_set(PinName pin) {
    MBED_ASSERT(pin != (PinName)NC);

    //pin_function(): pinmap.h:ARM -> pinmap.c:STM
    //pin_function(pin, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, 0));

    return (uint32_t)(1 << ((uint32_t)pin & 0xF)); // Return the pin mask
}

#ifdef stm
void gpio_init(gpio_t *obj, PinName pin) {
    obj->pin = pin;
    if (pin == (PinName)NC) {
        return;
    }


    uint32_t port_index = STM_PORT(pin);

    // Enable GPIO clock
    GPIO_TypeDef *gpio = Set_GPIO_Clock(port_index);

    // Fill GPIO object structure for future use
    obj->mask    = gpio_set(pin);
    obj->gpio  = gpio;
    obj->ll_pin  = ll_pin_defines[STM_PIN(obj->pin)];
    obj->reg_in  = &gpio->IDR;
    obj->reg_set = &gpio->BSRR;
#ifdef GPIO_IP_WITHOUT_BRR
    obj->reg_clr = &gpio->BSRR;
#else
    obj->reg_clr = &gpio->BRR;
#endif
}

void gpio_mode(gpio_t *obj, PinMode mode) {
    pin_mode(obj->pin, mode);
}

inline void gpio_dir(gpio_t *obj, PinDirection direction) {
    if (direction == PIN_INPUT) {
        LL_GPIO_SetPinMode(obj->gpio, obj->ll_pin, LL_GPIO_MODE_INPUT);
    } else {
        LL_GPIO_SetPinMode(obj->gpio, obj->ll_pin, LL_GPIO_MODE_OUTPUT);
    }
}
#endif
