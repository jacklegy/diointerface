#ifndef _LED_INTERFACE_H
#define _LED_INTERFACE_H

#include <stdio.h>

typedef enum {
	LED_1,
	LED_2,
	LED_3,
	LED_4,
    LED_5,
	LED_6,
	LED_7,
	LED_8,
	USER_LED_ALL
}bsp_led_t;


typedef enum
{
 led_err_n,
 err
}led_err_t;


led_err_t  LED_Init  (void);

led_err_t  LED_On    (bsp_led_t  led);

led_err_t  LED_Off   (bsp_led_t  led);

led_err_t  LED_Toggle(bsp_led_t  led);



#ifdef _cplusplus
}/*extern "C"*/
#endif


#endif /* LED_INTERFACE_H */

