
#include "led_interface.h"

/**
 * @brief This is an LED interface without driver functions. Proper functions can be directly
 *        added before case return lines. 
 * @author MS
 * 
 */




/**
*********************************************************************************************************
*                                           LED_Init()
*
* Description : Pseudo Init. 

* Argument(s) : none.
*
* Return(s)   : none.
*
* Note(s)     : none.
*********************************************************************************************************
*/

led_err_t  LED_Init  (void)
{


 return  led_err_n;
}



/**
*********************************************************************************************************
*                                            LED_On()
*
* @Description : Turn ON a specific LED
* @Author	   : MS
* @Argument(s) : led    The ID of the LED to control.
*
*                   LED_n        	Turns on nth user LED
*                   USER_LED_ALL    Turns on all user LEDs
*
* Return(s)   :  led_err_n or err.
*
* Note(s)     : Returns can be configured under further development.
*********************************************************************************************************/

led_err_t  LED_On    (bsp_led_t  led)
{
	switch (led) {

	        case LED_1:
                 printf("LED1 IS ON\n");
	             return  led_err_n;
	             break;


	        case LED_2:
	        	 
	             return  led_err_n;
	             break;


	        case LED_3:
	        	 
	             return  led_err_n;
	             break;

	        case LED_4:
	        	 
	             return  led_err_n;
	             break;


            case LED_5:
	              
	             return  led_err_n;
	             break;


	        case LED_6:
	        	 
	             return  led_err_n;
	             break;


	        case LED_7:
	        	 
	             return  led_err_n;
	             break;

	        case LED_8:
	        	 
	             return  led_err_n;
	             break;

            case USER_LED_ALL:
	        	 
	             return  led_err_n;
	             break;

	        default:
	        	return  led_err_n;
	             break;

				}

}




/**
*********************************************************************************************************
*                                            LED_Off()
*
* @Description : Turn ON a specific LED
* @Author	   : MS
* @Argument(s) : led    The ID of the LED to control.
*
*                   LED_n        	Turns off nth user LED
*                   USER_LED_ALL    Turns off all user LEDs
*
* Return(s)   :  led_err_n or err.
*
* Note(s)     : Returns can be configured under further development.
*********************************************************************************************************/


led_err_t  LED_Off (bsp_led_t led){

	switch (led) {

	        case LED_1:
	              
	             return  led_err_n;
	             break;


	        case LED_2:
	        	 
	             return  led_err_n;
	             break;


	        case LED_3:
	        	 
	             return  led_err_n;
	             break;

	        case LED_4:
	        	 
	             return  led_err_n;
	             break;


            case LED_5:
	              
	             return  led_err_n;
	             break;


	        case LED_6:
	        	 
	             return  led_err_n;
	             break;


	        case LED_7:
	        	 
	             return  led_err_n;
	             break;

	        case LED_8:
	        	 
	             return  led_err_n;
	             break;

            case USER_LED_ALL:
	        	 
	             return  led_err_n;
	             break;

	        default:
	        	return  led_err_n;
	             break;

				}

}



/**
*********************************************************************************************************
*                                          LED_Toggle()
*
* Description : Toggles a specific LED.
* @author	MS
* Argument(s) : led    The ID of the LED to control.
*
*                   LED_n           Toggles nth user LED LD1
*                   USER_LED_ALL    Toggles all user LEDs
*
* Return(s)   : led_err_t.
*
* Note(s)     : none.
*********************************************************************************************************
*/


led_err_t  LED_Toggle(bsp_led_t  led)
{
	switch (led) {

	        case LED_1:
	              
	             return  led_err_n;
	             break;


	        case LED_2:
	        	 
	             return  led_err_n;
	             break;


	        case LED_3:
	        	 
	             return  led_err_n;
	             break;

	        case LED_4:
	        	 
	             return  led_err_n;
	             break;


            case LED_5:
	              
	             return  led_err_n;
	             break;


	        case LED_6:
	        	 
	             return  led_err_n;
	             break;


	        case LED_7:
	        	 
	             return  led_err_n;
	             break;

	        case LED_8:
	        	 
	             return  led_err_n;
	             break;

            case USER_LED_ALL:
	        	 
	             return  led_err_n;
	             break;

	        default:
	        	return  led_err_n;
	             break;

				}
}





