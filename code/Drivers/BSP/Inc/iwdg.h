/*-----------------------------------------------------------------
Copyright 2017,bingo Inc.All Rights Reserved
License    :�ڲ�
Author	   :
Description:
-----------------------------------------------------------------*/
#ifndef BINGOBIN_DRIVER_IWDG_H_
#define BINGOBIN_DRIVER_IWDG_H_
#include "stdint.h"
/*-----------------------------------------------------------------
Global Defines and Macros
-----------------------------------------------------------------*/

/*-----------------------------------------------------------------
Global Types and Enums
-----------------------------------------------------------------*/

/*-----------------------------------------------------------------
Global Constants
-----------------------------------------------------------------*/

/*-----------------------------------------------------------------
Global Variables
-----------------------------------------------------------------*/

/*-----------------------------------------------------------------
Global Function prototypes
-----------------------------------------------------------------*/
#define TIM14x_IRQHandler               TIM14_IRQHandler

void WDT_init(void);
void IWDG_Config(void);
uint32_t GetLSIFrequency(void);
void IWDG_Refresh(void);

#endif
