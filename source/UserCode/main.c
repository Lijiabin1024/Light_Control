#include "Include.h"

int main(void)
{
	disableInterrupts();
	Driver_Init();
	enableInterrupts();

    while(1)
    {
        ;
    }
}