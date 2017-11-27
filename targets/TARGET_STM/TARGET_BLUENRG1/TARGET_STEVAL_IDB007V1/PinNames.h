/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright
 *******************************************************************************
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    IO_0  = 0x00,
	IO_1  = 0x01,
	IO_2  = 0x02,
	IO_3  = 0x03,
	IO_4  = 0x04,
	IO_5  = 0x05,
	IO_6  = 0x06,
	IO_7  = 0x07,
	IO_8  = 0x08,
	IO_9  = 0x09,
	IO_10 = 0x0A,
	IO_11 = 0x0B,
	IO_12 = 0x0C,
	IO_13 = 0x0D,
	IO_14 = 0x0E,
	IO_15 = 0x0F,

    /*
    // ADC internal channels
    ADC_TEMP = 0xF0,
    ADC_VREF = 0xF1,
    ADC_VBAT = 0xF2,
    */

	/*
    // Arduino connector namings
    A0          = PA_0,
    A1          = PA_1,
    A2          = PA_4,
    A3          = PB_0,
    A4          = PC_1,
    A5          = PC_0,
    D0          = PA_3,
    D1          = PA_2,
    D2          = PA_10,
    D3          = PB_3,
    D4          = PB_5,
    D5          = PB_4,
    D6          = PB_10,
    D7          = PA_8,
    D8          = PA_9,
    D9          = PC_7,
    D10         = PB_6,
    D11         = PA_7,
    D12         = PA_6,
    D13         = PA_5,
    D14         = PB_9,
    D15         = PB_8,
    */

	// STEVAL_IDB007V1 signals namings
	// DIO
	DIO0 = IO_0,
	DIO1 = IO_1,
	DIO2 = IO_2,
	DIO3 = IO_3,
	DIO4 = IO_4,
	DIO5 = IO_5,
	DIO6 = IO_6,
	DIO7 = IO_7,
	DIO8 = IO_8,
	DIO11 = IO_11,
	DIO12 = IO_12,
	DIO13 = IO_13,
	DIO14 = IO_14,
	// LEDS
	DL1 = DIO6,
	DL2 = DIO7,
	DL3 = DIO14,
	// PUSH BUTTONS
	PUSH1 = DIO5,
	PUSH2 = DIO13,


    // Generic signals namings
    LED1           = DL1,
    LED2           = DL2,
    LED3           = DL3,
	USER_BUTTON    = PUSH1,
    USER_BUTTON_1  = PUSH1,
	USER_BUTTON_2  = PUSH2,

    // Standardized button names
	BUTTON      = USER_BUTTON_1,
    BUTTON1     = USER_BUTTON_1,
	BUTTON2     = USER_BUTTON_2,
    SERIAL_TX   = DIO8,
    SERIAL_RX   = DIO11,
    I2C_SCL     = DIO5,
    I2C_SDA     = DIO4,
    SPI_MOSI    = DIO2,
    SPI_MISO    = DIO3,
    SPI_SCK     = DIO0,
    SPI_CS      = DIO1,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
