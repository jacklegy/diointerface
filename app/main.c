#include "button_interface.h"
#include "led_interface.h"




int main(void) 
{

DIO_Init(DioConfig); // This is supposed to set the IOs in button mode. Check the dio_interface.h / DioConfig array of struct.
LED_Init();        


	isr_1msec();
	if (button_1.button_state == PRESSED)
	{	
		LED_On(LED_1);
	}	

/** @brief I could continue with that but, i did not want to deal with timing issues to make process observable.
while (1)
{
	isr_1msec();
	if (button_1.button_state == PRESSED)
	{	
		LED_On(LED_1);
	}	
} */

return 0;

}









