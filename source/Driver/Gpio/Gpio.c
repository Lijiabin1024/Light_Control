#include "Include.h"

stLightStatus sLightStatus[3] = {
	{LIGHT_MID_GPIO, LIGHT_MID_PIN, LIGHT_BRIGHT},
	{LIGHT_LEF_GPIO, LIGHT_LEF_PIN, LIGHT_BRIGHT},
	{LIGHT_RIG_GPIO, LIGHT_RIG_PIN, LIGHT_BRIGHT},
};

void Gpio_Init(void)
{
	GPIO_Init(LIGHT_MID_GPIO, LIGHT_MID_PIN, GPIO_MODE_OUT_PP_LOW_FAST);
	GPIO_Init(LIGHT_LEF_GPIO, LIGHT_LEF_PIN, GPIO_MODE_OUT_PP_LOW_FAST);
	GPIO_Init(LIGHT_RIG_GPIO, LIGHT_RIG_PIN, GPIO_MODE_OUT_PP_LOW_FAST);

	GPIO_Init(ADC_MID_GPIO, ADC_MID_PIN, GPIO_MODE_IN_FL_NO_IT);
	GPIO_Init(ADC_LEF_GPIO, ADC_LEF_PIN, GPIO_MODE_IN_FL_NO_IT);
	GPIO_Init(ADC_RIG_GPIO, ADC_RIG_PIN, GPIO_MODE_IN_FL_NO_IT);
}

void Light_Status(stLightStatus LightStatus)
{
	stLightStatus *stpLightStatus = &LightStatus;
	if (stpLightStatus->LightStatus)
		GPIO_WriteHigh(stpLightStatus->LightGpio, stpLightStatus->LightPin);
	else
		GPIO_WriteLow(stpLightStatus->LightGpio, stpLightStatus->LightPin);
}
