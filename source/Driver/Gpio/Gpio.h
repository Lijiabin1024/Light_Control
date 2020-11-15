#ifndef __GPIO_H_
#define __GPIO_H_

/****************灯具控制管脚重定义*******************/
#define LIGHT_MID_GPIO	GPIOC
#define LIGHT_MID_PIN	GPIO_PIN_5

#define LIGHT_LEF_GPIO	GPIOC
#define LIGHT_LEF_PIN	GPIO_PIN_6

#define LIGHT_RIG_GPIO	GPIOC
#define LIGHT_RIG_PIN	GPIO_PIN_7

/****************灯具状态采样管脚重定义*****************/
#define ADC_MID_GPIO	GPIOC
#define ADC_MID_PIN		GPIO_PIN_4

#define ADC_LEF_GPIO	GPIOD
#define	ADC_LEF_PIN		GPIO_PIN_2

#define	ADC_RIG_GPIO	GPIOD
#define	ADC_RIG_PIN		GPIO_PIN_3

/****************通信管脚重定义**********************/
#define UART_RX_GPIO	GPIOD
#define UART_RX_PIN		GPIO_PIN_4

#define UART_TX_GPIO	GPIOD
#define UART_TX_PIN		GPIO_PIN_5

typedef struct
{
	GPIO_TypeDef 		*LightGpio;
	GPIO_Pin_TypeDef	LightPin;
	FunctionalState		LightStatus;
}stLightStatus;

extern stLightStatus sLightStatus[];

extern void Gpio_Init(void);
extern void Light_Status(stLightStatus stpLightStatus);

#endif