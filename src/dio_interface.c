#include "dio_interface.h"


err_t   DIO_Init(const Config_t  * const config){}
uint8_t DIO_ReadChannel(const Channel_t  channel){}
err_t   DIO_WriteChannel(const Channel_t  channel,State_t state){}
err_t   DIO_ToggleChannel(const Channel_t  channel){}
err_t   DIO_SetChannelMode(const Channel_t  channel, const Mode_t mode){}
err_t   DIO_SetFuncMode(const Channel_t  channel, const FuncMode_t fmode){}
