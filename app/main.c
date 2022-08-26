#include "button_interface.h"
#include "led_interface.h"




int main(void) 
{

DIO_Init(DioConfig); 
LED_Init();        

	while (1)
	{
	
	delay(2000);
	printf("------------------------");
	isr_1msec();
	if (button_1.button_state == PRESSED)
	{	
		LED_On(LED_1);
	}	

	if (button_1.pressed_counter > 0 )
	{
		printf("debouncing");
	}
	


	}

return 0;

}











