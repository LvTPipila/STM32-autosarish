#include <stdio.h>
#include "./McAL/IoD/Dio/src/dotProduct.h"
#include "./McAL/McD/Mcu/src/Mcu.h"


int main(void)
{
  /*
  *((unsigned int *)0x400FE608U) = 0x20U;
  *((unsigned int *)0x40025400U) = 0x0EU;
  *((unsigned int *)0x4002551CU) = 0x0EU;

  while(1)
  {
	int count = 0;
	*((unsigned int *)0x40025028U) = 0x02U;
	while(count < 1000000)
	{
	  ++count;
	}
	*((unsigned int *)0x400FE608U) = 0x04U;
	count = 0;
	while(count < 1000000)
	{
	  ++count;
	}
    *((unsigned int *)0x400FE608U) = 0x08U;
	count = 0;
    while(count < 1000000)
	{
	  ++count;
	}
  }
  */

  const Mcu_ConfigType Mcu_ConfigPtr = {0};
  Mcu_Init(&Mcu_ConfigPtr);
/*
  for(unsigned char n = 0; n<3; n++)
  {
    printf("result[%d] = %d\n", n, res[n]);
  }
 */ 

  return 0;
}

