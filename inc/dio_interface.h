#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


#define CHANNEL_NUMB (8)
/**
 * @brief  Case IO Driver Implementation.
 * @author MS
 * @tparam 
 * @tparam 
 * 
 */


typedef enum 
{
  err_n,
  err_1,
  err_2,
  err_3,
  err_4
}err_t;


typedef enum 
{
  chl_1,
  chl_2,
  chl_3,
  chl_4,
  chl_5,
  chl_6,
  chl_7,
  chl_8, 
}Channel_t;


typedef enum 
{
  fn_1,
  fn_2,
  fn_3,
  fn_4
}FuncMode_t;


typedef enum
{
  INPUT,
  OUTPUT

}Mode_t;


typedef enum
{
  HIGH,
  LOW
}State_t;

typedef struct 
{
  Channel_t Ch;
  Mode_t Md;
  State_t Omd;
  FuncMode_t Fmd;
}Config_t;


static  const Config_t DioConfig[CHANNEL_NUMB] =
{
    {chl_1, INPUT, HIGH, fn_1},
    {chl_2, INPUT, HIGH, fn_1},
    {chl_3, INPUT, HIGH, fn_1},
    {chl_4, INPUT, HIGH, fn_1},
    {chl_5, INPUT, HIGH, fn_1},
    {chl_6, INPUT, HIGH, fn_1},
    {chl_7, INPUT, HIGH, fn_1},
    {chl_8, INPUT, HIGH, fn_1}
};


err_t   DIO_Init(const Config_t  * const config);
uint8_t DIO_ReadChannel(const Channel_t  channel);
err_t   DIO_WriteChannel(const Channel_t  channel,State_t state);
err_t   DIO_ToggleChannel(const Channel_t  channel);
err_t   DIO_SetChannelMode(const Channel_t  channel, const Mode_t mode);
err_t   DIO_SetFuncMode(const Channel_t  channel, const FuncMode_t fmode);

void delay (int number_of_seconds);


#ifdef _cplusplus
}/*extern "C"*/
#endif

#endif /*DIO_H*/



