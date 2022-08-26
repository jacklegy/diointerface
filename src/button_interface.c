#include "button_interface.h"

/**
 * @brief This is an button interface with virtual psychical io addresses to manipulate. 
 * 
 * @author MS
 * 
 */








button_state_t Button_Read  (button_t button)
{

            if (CHECK_BIT(io_inoutregs[button.button_numb],button.button_numb) == true )  
            {
                button.pressed_counter++;
            }
            if (CHECK_BIT(io_inoutregs[button.button_numb],button.button_numb) == false) 
            {
                button.released_counter++;
            }

            if (button.pressed_counter > PRESSED_COUNT )
            {
                button.button_state = PRESSED;
                button.pressed_counter = 0;
            }
            
            if (button.released_counter > RELEASED_COUNT )
            {
                button.button_state = NOT_PRESSED;
                button.released_counter = 0;
            }

            return button.button_state;
}




void isr_1msec(void) //Internal interrupt Period 1ms
{
    printf("ISR STARTED\n");
	Button_Read(button_1);
    printf("ISR ENDED\n");
     
}

