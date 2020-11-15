#include "Include.h"

void Driver_Init()
{
	CLK_DeInit();
    CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV2);
    CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
    CLK_HSECmd(DISABLE);

	Gpio_Init();
	Uart_Init();
	Adc_Init();
	Tim_Init();
	return;
}