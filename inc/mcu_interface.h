#ifndef MCU_INTERFACE_H
#define MCU_INTERFACE_H

#include <stdint.h>

#define GPIOPORTS  (4)
#define NUM_PORT_CHANNELS (8)

/** @brief They should normally and exactly be this kind of pointer arrays to access.

uint32_t volatile *const ioconregs[GPIOPORTS]= 
{
    (uint32_t*)0x99999910,            //IO0_C1
    (uint32_t*)0x99999920,            //IO1_C1
    (uint32_t*)0x99999930,            //IO2_C1
    (uint32_t*)0x99999940             //IO3_C1
};


uint32_t volatile  *const io_inoutregs[GPIOPORTS]= 
{
    (uint32_t*)0x99999970,            //IO0_O1
    (uint32_t*)0x99999980,            //IO1_O2
    (uint32_t*)0x99999990,            //IO2_O3
    (uint32_t*)0x99999999             //IO3_O4
};

*/

/** @brief We are assuming we reached the io registers via 
 *  pointer arrays above. It is trouble to use and compile 
 *  this kind of pointers without knowing x86 arc. 
 *  Actually i did and i have found myself fighting the segmentation fault. 
 * 
 * */
static uint32_t volatile io_inoutregs[GPIOPORTS]= 
{
    0x00000001,            //IO0_O1
    0x00000000,            //IO1_O2
    0x00000000,            //IO2_O3
    0x00000000             //IO3_O4
};



#endif /* MCU_INTERFACE_H */