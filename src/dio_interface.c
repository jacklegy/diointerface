#include "dio_interface.h"

err_t   DIO_Init(const Config_t  * const config){return err_n;}
uint8_t DIO_ReadChannel(const Channel_t  channel){uint8_t character = 'a'; return character;}
err_t   DIO_WriteChannel(const Channel_t  channel,State_t state){return err_n;}
err_t   DIO_ToggleChannel(const Channel_t  channel){return err_n;}
err_t   DIO_SetChannelMode(const Channel_t  channel, const Mode_t mode){return err_n;}
err_t   DIO_SetFuncMode(const Channel_t  channel, const FuncMode_t fmode){return err_n;}


void delay (int number_of_seconds)
{

    int miliseconds = 1000*number_of_seconds;
    __clock_t start_time  = clock();

    while (clock() < start_time + miliseconds);

}