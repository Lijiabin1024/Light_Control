#include "Include.h"

int main(void)
{
	disableInterrupts();
	Driver_Init();
	enableInterrupts();

	Light_Status(sLightStatus[2]);

    while(1)
    {
        ;
    }
}