#ifndef __DRIVER_H_
#define __DRIVER_H_

#include "Gpio\Gpio.h"
#include "Uart\Uart.h"
#include "Adc\Adc.h"
#include "Tim\Tim.h"

#define LIGHT_BRIGHT	ENABLE
#define LIGHT_TURNOF	DISABLE

extern void Driver_Init();

#endif
