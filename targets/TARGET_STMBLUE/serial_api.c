#ifdef DEVICE_SERIAL

#include "serial_api.h"
#include "cmsis.h"
#include "BlueNRG1_uart.h"

int stdio_uart_inited = 0;
serial_t stdio_uart;

void serial_init(serial_t *obj, PinName tx, PinName rx){}

void serial_putc(serial_t *obj, int c){}

int serial_getc(serial_t *obj){}


#endif //DEVICE_SERIAL
