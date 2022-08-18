#ifndef _BUTTON_INTERFACE_H
#define _BUTTON_INTERFACE_H 

#include "dio_interface.h"
#include "mcu_interface.h"  

#define BUTTON_COUNT (10)
#define PRESSED_COUNT (20)
#define RELEASED_COUNT (200)
#define CHECK_BIT(VAR,POS) ((VAR) & (1<<(POS)))



typedef enum 
{

BUTTON_N_1,
BUTTON_N_2,
BUTTON_N_3,
BUTTON_N_4,
BUTTON_N_5,
BUTTON_N_6,
BUTTON_N_7,
BUTTON_N_8,
NUMB_OF_BUTTONS

}button_n;

typedef enum 
{
    PRESSED = 0,
    NOT_PRESSED

}button_state_t;



typedef struct
{   
    button_n button_numb;
    uint16_t pressed_counter;
    uint16_t released_counter;
    button_state_t button_state;
}button_t;



static button_t button_1 = {BUTTON_N_1,0,0,PRESSED};
static button_t button_2 = {BUTTON_N_2,0,0,NOT_PRESSED};
static button_t button_3 = {BUTTON_N_3,0,0,NOT_PRESSED};
static button_t button_4 = {BUTTON_N_4,0,0,NOT_PRESSED};
static button_t button_5 = {BUTTON_N_5,0,0,NOT_PRESSED};
static button_t button_6 = {BUTTON_N_6,0,0,NOT_PRESSED};
static button_t button_7 = {BUTTON_N_7,0,0,NOT_PRESSED};
static button_t button_8 = {BUTTON_N_8,0,0,NOT_PRESSED};




button_state_t Button_Read (button_t button);
void isr_1msec(void);

#endif /* _BUTTON_INTERFACE_H */
