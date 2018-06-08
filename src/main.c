/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "stm32f4xx.h"
#include "string.h"
//#include "stm32f4xx_i2c.h"
#include "stm32f4_discovery.h"
#include <math.h>
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MaxMsgSize 64
/* ----global variables---- */
char recvUARTmsg[MaxMsgSize] = {0};
uint8_t recvUARTmsgPos = 0;
/* ------declarations------ */
int lengthOfString(char *);

void setOutPP(char port, int number)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	if(port == 'D')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
	}
	if(port == 'A')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	}
	if(port == 'E')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	}
	if(port == 'C')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	}
	if(port == 'B')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	}

	if(number == 0)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	}
	if(number == 1)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	}
	if(number == 2)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	}
	if(number == 3)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	}
	if(number == 4)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	}
	if(number == 5)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	}
	if(number == 6)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
	}
	if(number == 7)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	}
	if(number == 8)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
	}
	if(number == 9)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	}
	if(number == 10)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	}
	if(number == 11)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	}
	if(number == 12)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	}
	if(number == 13)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	}
	if(number == 14)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	}
	if(number == 15)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	}

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	if(port == 'D')
	{
		GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
	if(port == 'A')
	{
		GPIO_Init(GPIOA, &GPIO_InitStructure);
	}
	if(port == 'E')
	{
		GPIO_Init(GPIOE, &GPIO_InitStructure);
	}
	if(port == 'C')
	{
		GPIO_Init(GPIOC, &GPIO_InitStructure);
	}
	if(port == 'B')
	{
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	}
}

void setOutOD(char port, int number)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	if(port == 'D')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
	}
	if(port == 'A')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	}
	if(port == 'E')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	}
	if(port == 'C')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	}
	if(port == 'B')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	}

	if(number == 0)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	}
	if(number == 1)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	}
	if(number == 2)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	}
	if(number == 3)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	}
	if(number == 4)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	}
	if(number == 5)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	}
	if(number == 6)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
	}
	if(number == 7)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	}
	if(number == 8)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
	}
	if(number == 9)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	}
	if(number == 10)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	}
	if(number == 11)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	}
	if(number == 12)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	}
	if(number == 13)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	}
	if(number == 14)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	}
	if(number == 15)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	}

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_OD;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	if(port == 'D')
	{
		GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
	if(port == 'A')
	{
		GPIO_Init(GPIOA, &GPIO_InitStructure);
	}
	if(port == 'E')
	{
		GPIO_Init(GPIOE, &GPIO_InitStructure);
	}
	if(port == 'C')
	{
		GPIO_Init(GPIOC, &GPIO_InitStructure);
	}
	if(port == 'B')
	{
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	}
}

void setInFloat(char port, int number)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	if(port == 'D')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
	}
	if(port == 'A')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	}
	if(port == 'E')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	}
	if(port == 'C')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	}
	if(port == 'B')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	}

	if(number == 0)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	}
	if(number == 1)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	}
	if(number == 2)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	}
	if(number == 3)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	}
	if(number == 4)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	}
	if(number == 5)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	}
	if(number == 6)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
	}
	if(number == 7)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	}
	if(number == 8)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
	}
	if(number == 9)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	}
	if(number == 10)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	}
	if(number == 11)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	}
	if(number == 12)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	}
	if(number == 13)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	}
	if(number == 14)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	}
	if(number == 15)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	}

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;

	if(port == 'D')
	{
		GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
	if(port == 'A')
	{
		GPIO_Init(GPIOA, &GPIO_InitStructure);
	}
	if(port == 'E')
	{
		GPIO_Init(GPIOE, &GPIO_InitStructure);
	}
	if(port == 'C')
	{
		GPIO_Init(GPIOC, &GPIO_InitStructure);
	}
	if(port == 'B')
	{
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	}

}

void setInUp(char port, int number)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	if(port == 'D')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
	}
	if(port == 'A')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	}
	if(port == 'E')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	}
	if(port == 'C')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	}
	if(port == 'B')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	}

	if(number == 0)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	}
	if(number == 1)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	}
	if(number == 2)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	}
	if(number == 3)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	}
	if(number == 4)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	}
	if(number == 5)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	}
	if(number == 6)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
	}
	if(number == 7)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	}
	if(number == 8)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
	}
	if(number == 9)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	}
	if(number == 10)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	}
	if(number == 11)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	}
	if(number == 12)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	}
	if(number == 13)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	}
	if(number == 14)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	}
	if(number == 15)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	}

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;

	if(port == 'D')
	{
		GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
	if(port == 'A')
	{
		GPIO_Init(GPIOA, &GPIO_InitStructure);
	}
	if(port == 'E')
	{
		GPIO_Init(GPIOE, &GPIO_InitStructure);
	}
	if(port == 'C')
	{
		GPIO_Init(GPIOC, &GPIO_InitStructure);
	}
	if(port == 'B')
	{
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	}
}

void setInDown(char port, int number)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	if(port == 'D')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);
	}
	if(port == 'A')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA, ENABLE);
	}
	if(port == 'E')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	}
	if(port == 'C')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	}
	if(port == 'B')
	{
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	}

	if(number == 0)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
	}
	if(number == 1)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	}
	if(number == 2)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	}
	if(number == 3)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	}
	if(number == 4)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	}
	if(number == 5)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
	}
	if(number == 6)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
	}
	if(number == 7)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	}
	if(number == 8)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
	}
	if(number == 9)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
	}
	if(number == 10)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	}
	if(number == 11)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	}
	if(number == 12)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	}
	if(number == 13)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	}
	if(number == 14)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
	}
	if(number == 15)
	{
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
	}

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;

	if(port == 'D')
	{
		GPIO_Init(GPIOD, &GPIO_InitStructure);
	}
	if(port == 'A')
	{
		GPIO_Init(GPIOA, &GPIO_InitStructure);
	}
	if(port == 'E')
	{
		GPIO_Init(GPIOE, &GPIO_InitStructure);
	}
	if(port == 'C')
	{
		GPIO_Init(GPIOC, &GPIO_InitStructure);
	}
	if(port == 'B')
	{
		GPIO_Init(GPIOB, &GPIO_InitStructure);
	}
}

void setBit(char port, int number)
{
	if(port == 'A')
	{
	  if(number == 1)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_SetBits(GPIOA, GPIO_Pin_15);
	  }
	}
	if(port == 'B')
	{
	  if(number == 1)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_SetBits(GPIOB, GPIO_Pin_15);
	  }
	}
	if(port == 'C')
	{
	  if(number == 1)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_SetBits(GPIOC, GPIO_Pin_15);
	  }
	}
	if(port == 'D')
	{
	  if(number == 1)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_SetBits(GPIOD, GPIO_Pin_15);
	  }
	}
	if(port == 'E')
	{
	  if(number == 1)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_SetBits(GPIOE, GPIO_Pin_15);
	  }
	}
}

void resetBit(char port, int number)
{
	if(port == 'A')
	{
	  if(number == 1)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_ResetBits(GPIOA, GPIO_Pin_15);
	  }
	}
	if(port == 'B')
	{
	  if(number == 1)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_ResetBits(GPIOB, GPIO_Pin_15);
	  }
	}
	if(port == 'C')
	{
	  if(number == 1)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_ResetBits(GPIOC, GPIO_Pin_15);
	  }
	}
	if(port == 'D')
	{
	  if(number == 1)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_ResetBits(GPIOD, GPIO_Pin_15);
	  }
	}
	if(port == 'E')
	{
	  if(number == 1)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_1);
	  }
	  if(number == 2)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_2);
	  }
	  if(number == 3)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_3);
	  }
	  if(number == 4)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_4);
	  }
	  if(number == 5)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_5);
	  }
	  if(number == 6)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_6);
	  }
	  if(number == 7)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_7);
	  }
	  if(number == 8)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_8);
	  }
	  if(number == 9)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_9);
	  }
	  if(number == 10)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_10);
	  }
	  if(number == 11)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_11);
	  }
	  if(number == 12)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_12);
	  }
	  if(number == 13)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_13);
	  }
	  if(number == 14)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_14);
	  }
	  if(number == 15)
	  {
	      GPIO_ResetBits(GPIOE, GPIO_Pin_15);
	  }
	}

}

void wyswietl1(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);
}

void wyswietl2(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//e
	setOutPP(AdoHchar[4], AdoHint[4]);
	resetBit(AdoHchar[4], AdoHint[4]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl3(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl4(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//f
	setOutPP(AdoHchar[5], AdoHint[5]);
	resetBit(AdoHchar[5], AdoHint[5]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl5(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//f
	setOutPP(AdoHchar[5], AdoHint[5]);
	resetBit(AdoHchar[5], AdoHint[5]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl6(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//e
	setOutPP(AdoHchar[4], AdoHint[4]);
	resetBit(AdoHchar[4], AdoHint[4]);

	//f
	setOutPP(AdoHchar[5], AdoHint[5]);
	resetBit(AdoHchar[5], AdoHint[5]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl7(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);
}

void wyswietl8(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//e
	setOutPP(AdoHchar[4], AdoHint[4]);
	resetBit(AdoHchar[4], AdoHint[4]);

	//f
	setOutPP(AdoHchar[5], AdoHint[5]);
	resetBit(AdoHchar[5], AdoHint[5]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl9(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//f
	setOutPP(AdoHchar[5], AdoHint[5]);
	resetBit(AdoHchar[5], AdoHint[5]);

	//g
	setOutPP(AdoHchar[6], AdoHint[6]);
	resetBit(AdoHchar[6], AdoHint[6]);
}

void wyswietl0(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	//segment
	if(segment == 1)
	{
		setOutPP(segmentChar[0], segmentInt[0]);
		setBit(segmentChar[0], segmentInt[0]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 2)
	{
		setOutPP(segmentChar[1], segmentInt[1]);
		setBit(segmentChar[1], segmentInt[1]);

		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 3)
	{
		setOutPP(segmentChar[2], segmentInt[2]);
		setBit(segmentChar[2], segmentInt[2]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[0], segmentInt[0]);
		resetBit(segmentChar[3], segmentInt[3]);
	}
	if(segment == 4)
	{
		setOutPP(segmentChar[3], segmentInt[3]);
		setBit(segmentChar[3], segmentInt[3]);

		resetBit(segmentChar[1], segmentInt[1]);
		resetBit(segmentChar[2], segmentInt[2]);
		resetBit(segmentChar[0], segmentInt[0]);
	}

	//a
	setOutPP(AdoHchar[0], AdoHint[0]);
	resetBit(AdoHchar[0], AdoHint[0]);

	//b
	setOutPP(AdoHchar[1], AdoHint[1]);
	resetBit(AdoHchar[1], AdoHint[1]);

	//c
	setOutPP(AdoHchar[2], AdoHint[2]);
	resetBit(AdoHchar[2], AdoHint[2]);

	//d
	setOutPP(AdoHchar[3], AdoHint[3]);
	resetBit(AdoHchar[3], AdoHint[3]);

	//e
	setOutPP(AdoHchar[4], AdoHint[4]);
	resetBit(AdoHchar[4], AdoHint[4]);

	//f
	setOutPP(AdoHchar[5], AdoHint[5]);
	resetBit(AdoHchar[5], AdoHint[5]);
}

void wyswietlnic(int segment, char AdoHchar[8], int AdoHint[8], char segmentChar[4], int segmentInt[4])
{
	setInFloat(AdoHchar[0], AdoHint[0]);
	setInFloat(AdoHchar[1], AdoHint[1]);
	setInFloat(AdoHchar[2], AdoHint[2]);
	setInFloat(AdoHchar[3], AdoHint[3]);
	setInFloat(AdoHchar[4], AdoHint[4]);
	setInFloat(AdoHchar[5], AdoHint[5]);
	setInFloat(AdoHchar[6], AdoHint[6]);
	setInFloat(AdoHchar[7], AdoHint[7]);
}

void setupTimerUp2(int period, int prescaler, uint8_t preemptionpriority, uint8_t subpriority)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = period;
	TIM_TimeBaseStructure.TIM_Prescaler = prescaler;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode =  TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);

	makeNVIC(TIM2_IRQn, preemptionpriority, subpriority);

	TIM_ClearITPendingBit(TIM2, TIM_IT_Update);
	TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);

	TIM_Cmd(TIM2, ENABLE);
}

void setupTimerUp3(int period, int prescaler, uint8_t preemptionpriority, uint8_t subpriority)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = period;
	TIM_TimeBaseStructure.TIM_Prescaler = prescaler;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode =  TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM3, &TIM_TimeBaseStructure);

	makeNVIC(TIM3_IRQn, preemptionpriority, subpriority);

	TIM_Cmd(TIM3, ENABLE);
}

void setupTimerUp4(int period, int prescaler, uint8_t preemptionpriority, uint8_t subpriority)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = period;
	TIM_TimeBaseStructure.TIM_Prescaler = prescaler;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode =  TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM4, &TIM_TimeBaseStructure);

	makeNVIC(TIM4_IRQn, preemptionpriority, subpriority);

	TIM_Cmd(TIM4, ENABLE);
}

void setupTimerUp5(int period, int prescaler, uint8_t preemptionpriority, uint8_t subpriority)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5, ENABLE);
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = period;
	TIM_TimeBaseStructure.TIM_Prescaler = prescaler;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode =  TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM5, &TIM_TimeBaseStructure);

	makeNVIC(TIM5_IRQn, preemptionpriority, subpriority);

	//TIM_Cmd(TIM5, ENABLE);
}

void setupTimerUp7(int period, int prescaler, uint8_t preemptionpriority, uint8_t subpriority)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM7, ENABLE);
	TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
	TIM_TimeBaseStructure.TIM_Period = period;
	TIM_TimeBaseStructure.TIM_Prescaler = prescaler;
	TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
	TIM_TimeBaseStructure.TIM_CounterMode =  TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM7, &TIM_TimeBaseStructure);

	makeNVIC(TIM7_IRQn, preemptionpriority, subpriority);

	TIM_Cmd(TIM7, ENABLE);
}

void setupPWM2ch1(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM2, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC1Init(TIM2, &TIM_OC);
	TIM_OC1PreloadConfig(TIM2, TIM_OCPreload_Enable);

	TIM_Cmd(TIM2, ENABLE);

	TIM2->CCR1 = 0;
}

void setupPWM2ch2(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM2, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC2Init(TIM2, &TIM_OC);
	TIM_OC2PreloadConfig(TIM2, TIM_OCPreload_Enable);

	TIM_Cmd(TIM2, ENABLE);

	TIM2->CCR2 = 0;
}

void setupPWM2ch3(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM2, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC3Init(TIM2, &TIM_OC);
	TIM_OC3PreloadConfig(TIM2, TIM_OCPreload_Enable);

	TIM_Cmd(TIM2, ENABLE);

	TIM2->CCR3 = 0;
}

void setupPWM2ch4(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM2, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC4Init(TIM2, &TIM_OC);
	TIM_OC4PreloadConfig(TIM2, TIM_OCPreload_Enable);

	TIM_Cmd(TIM2, ENABLE);

	TIM2->CCR4 = 0;
}

void setupPWM3ch1(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM3, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC1Init(TIM3, &TIM_OC);
	TIM_OC1PreloadConfig(TIM3, TIM_OCPreload_Enable);

	TIM3->CCR1 = 0;

	TIM_Cmd(TIM3, ENABLE);
}

void setupPWM3ch2(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM3, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC2Init(TIM3, &TIM_OC);
	TIM_OC2PreloadConfig(TIM3, TIM_OCPreload_Enable);

	TIM_Cmd(TIM3, ENABLE);

	TIM3->CCR2 = 0;
}

void setupPWM3ch3(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM3, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC3Init(TIM3, &TIM_OC);
	TIM_OC3PreloadConfig(TIM3, TIM_OCPreload_Enable);

	TIM_Cmd(TIM3, ENABLE);

	TIM3->CCR3 = 0;
}

void setupPWM3ch4(int period, int prescaler)
{
	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM3, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC4Init(TIM3, &TIM_OC);
	TIM_OC4PreloadConfig(TIM3, TIM_OCPreload_Enable);

	TIM_Cmd(TIM3, ENABLE);

	TIM3->CCR4 = 0;
}

void setupPWM4ch1(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM4, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC1Init(TIM4, &TIM_OC);
	TIM_OC1PreloadConfig(TIM4, TIM_OCPreload_Enable);

	TIM4->CCR1 = 0;

	TIM_Cmd(TIM4, ENABLE);
}

void setupPWM4ch2(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM4, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC2Init(TIM4, &TIM_OC);
	TIM_OC2PreloadConfig(TIM4, TIM_OCPreload_Enable);

	TIM4->CCR2 = 0;

	TIM_Cmd(TIM4, ENABLE);
}

void setupPWM4ch3(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM4, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC3Init(TIM4, &TIM_OC);
	TIM_OC3PreloadConfig(TIM4, TIM_OCPreload_Enable);

	TIM_Cmd(TIM4, ENABLE);

	TIM4->CCR3 = 0;
}

void setupPWM4ch4(int period, int prescaler)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM4, ENABLE);

	TIM_TimeBaseInitTypeDef Timer;
	Timer.TIM_Period = period;
	Timer.TIM_Prescaler = prescaler;
	Timer.TIM_ClockDivision = TIM_CKD_DIV1;
	Timer.TIM_CounterMode = TIM_CounterMode_Down;
	TIM_TimeBaseInit(TIM4, &Timer);

	TIM_OCInitTypeDef TIM_OC;
	TIM_OC.TIM_OCMode = TIM_OCMode_PWM1;
	TIM_OC.TIM_OutputState = TIM_OutputState_Enable;
	TIM_OC.TIM_Pulse = 0;
	TIM_OC.TIM_OCPolarity = TIM_OCPolarity_High;

	/*konf kanalow*/
	TIM_OC4Init(TIM4, &TIM_OC);
	TIM_OC4PreloadConfig(TIM4, TIM_OCPreload_Enable);

	TIM_Cmd(TIM4, ENABLE);

	TIM4->CCR4 = 0;
}

void makeNVIC(uint8_t Channel, uint8_t preemptionpriority, uint8_t subpriority)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SYSCFG, ENABLE);

	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_1);

	NVIC_InitTypeDef NVIC_InitStructure;
	NVIC_InitStructure.NVIC_IRQChannel = Channel;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = preemptionpriority;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = subpriority;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
}

void makeEXTI(uint32_t Line, uint8_t PortSource, uint8_t PinSource)
{
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Line = Line;
	EXTI_InitStructure.EXTI_Mode = EXTI_Mode_Interrupt;
	EXTI_InitStructure.EXTI_Trigger = EXTI_Trigger_Rising;
	EXTI_InitStructure.EXTI_LineCmd = ENABLE;
	EXTI_Init(&EXTI_InitStructure);

	SYSCFG_EXTILineConfig(PortSource, PinSource);
}

void setupADC(uint32_t PortSource,uint32_t PinSource, int ADCnumber, int ADCchnum)
{
	//zmienic
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE);

	if(ADCnumber == 1)
	{
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC1, ENABLE); // zegar dla modu³u ADC1
	}
	if(ADCnumber == 2)
	{
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC2, ENABLE); // zegar dla modu³u ADC1
	}
	if(ADCnumber == 3)
	{
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_ADC3, ENABLE); // zegar dla modu³u ADC1
	}

	GPIO_InitTypeDef GPIO_InitStructure;
	//inicjalizacja wejcia ADC
	GPIO_InitStructure.GPIO_Pin = PinSource;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(PortSource, &GPIO_InitStructure);

	//wspolna konfiguracja ADC

	ADC_CommonInitTypeDef ADC_CommonInitStructure;
	// niezale¿ny tryb pracy przetworników
	ADC_CommonInitStructure.ADC_Mode = ADC_Mode_Independent;
	// zegar g³ówny podzielony przez 2
	ADC_CommonInitStructure.ADC_Prescaler = ADC_Prescaler_Div2;
	// opcja istotna tylko dla trybu multi ADC
	ADC_CommonInitStructure.ADC_DMAAccessMode = ADC_DMAAccessMode_Disabled;
	// czas przerwy pomiêdzy kolejnymi konwersjami
	ADC_CommonInitStructure.ADC_TwoSamplingDelay = ADC_TwoSamplingDelay_5Cycles;
	ADC_CommonInit(&ADC_CommonInitStructure);

	ADC_InitTypeDef ADC_InitStructure;
	//ustawienie rozdzielczoci przetwornika na maksymaln¹ (12 bitów)
	ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;
	//wy³¹czenie trybu skanowania (odczytywaæ bêdziemy jedno wejcie ADC
	//w trybie skanowania automatycznie wykonywana jest konwersja na wielu //wejciach/kana³ach)
	ADC_InitStructure.ADC_ScanConvMode = DISABLE;
	//w³¹czenie ci¹g³ego trybu pracy
	ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;
	//wy³¹czenie zewnêtrznego wyzwalania
	//konwersja mo¿e byæ wyzwalana timerem, stanem wejcia itd. (szczegó³y w //dokumentacji)
	ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_T1_CC1;
	ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;
	//wartoæ binarna wyniku bêdzie podawana z wyrównaniem do prawej
	//funkcja do odczytu stanu przetwornika ADC zwraca wartoæ 16-bitow¹
	//dla przyk³adu, wartoæ 0xFF wyrównana w prawo to 0x00FF, w lewo 0x0FF0
	ADC_InitStructure.ADC_DataAlign = ADC_DataAlign_Right;
	//liczba konwersji równa 1, bo 1 kana³
	ADC_InitStructure.ADC_NbrOfConversion = 1;
	// zapisz wype³nion¹ strukturê do rejestrów przetwornika numer 1

	if(ADCnumber == 1)
	{
		ADC_Init(ADC1, &ADC_InitStructure);
	}
	if(ADCnumber == 2)
	{
		ADC_Init(ADC2, &ADC_InitStructure);
	}
	if(ADCnumber == 3)
	{
		ADC_Init(ADC3, &ADC_InitStructure);
	}

	//W nastêpnej kolejnoci nale¿y skonfigurowaæ wybrany kana³ ADC:
	if(ADCnumber == 1)
	{
	  if(ADCchnum == 1)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_1, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 2)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_2, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 3)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_3, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 4)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_4, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 5)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_5, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 6)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_6, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 7)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_7, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 8)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_8, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 9)  {
	      ADC_RegularChannelConfig(ADC1, ADC_Channel_9, 1, ADC_SampleTime_84Cycles);
	  }
	}
	if(ADCnumber == 2)
	{
	  if(ADCchnum == 1)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_1, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 2)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_2, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 3)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_3, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 4)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_4, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 5)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_5, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 6)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_6, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 7)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_7, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 8)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_8, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 9)  {
	      ADC_RegularChannelConfig(ADC2, ADC_Channel_9, 1, ADC_SampleTime_84Cycles);
	  }
	}
	if(ADCnumber == 3)
	{
	  if(ADCchnum == 1)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_1, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 2)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_2, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 3)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_3, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 4)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_4, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 5)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_5, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 6)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_6, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 7)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_7, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 8)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_8, 1, ADC_SampleTime_84Cycles);
	  }
	  if(ADCchnum == 9)  {
	      ADC_RegularChannelConfig(ADC3, ADC_Channel_9, 1, ADC_SampleTime_84Cycles);
	  }
	}


	if(ADCnumber == 1)
	{
		ADC_Cmd(ADC1, ENABLE);
	}
	if(ADCnumber == 2)
	{
		ADC_Cmd(ADC2, ENABLE);
	}
	if(ADCnumber == 3)
	{
		ADC_Cmd(ADC3, ENABLE);
	}
}
void setupDAC(uint32_t PortSource,uint32_t PinSource, int DACchnum)
{
	//zmienic
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE); // zegar dla portu GPIO z którego wykorzystany zostanie pin jako wyjcie DAC (PA4)
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_DAC, ENABLE); // zegar dla modu³u DAC

	GPIO_InitTypeDef GPIO_InitStructure;
	//inicjalizacja wyjcia DAC
	GPIO_InitStructure.GPIO_Pin = PinSource;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(PortSource, &GPIO_InitStructure);

	DAC_InitTypeDef DAC_InitStructure;
	//wy³¹czenie zewnêtrznego wyzwalania
	//konwersja mo¿e byæ wyzwalana timerem, stanem wejcia itd. (szczegó³y w dokumentacji)
	DAC_InitStructure.DAC_Trigger = DAC_Trigger_None;
	//nast. 2 linie - wy³¹czamy generator predefiniowanych przebiegów //wyjciowych (wartoci zadajemy sami, za pomoc¹ odpowiedniej funkcji)
	DAC_InitStructure.DAC_WaveGeneration = DAC_WaveGeneration_None;
	DAC_InitStructure.DAC_LFSRUnmask_TriangleAmplitude = DAC_LFSRUnmask_Bit0;
	//w³¹czamy buforowanie sygna³u wyjciowego
	DAC_InitStructure.DAC_OutputBuffer = DAC_OutputBuffer_Enable;

	if(DACchnum == 1)
	{
		DAC_Init(DAC_Channel_1, &DAC_InitStructure);
		DAC_Cmd(DAC_Channel_1, ENABLE);
	}
	if(DACchnum == 2)
	{
		DAC_Init(DAC_Channel_2, &DAC_InitStructure);
		DAC_Cmd(DAC_Channel_2, ENABLE);
	}
	//DAC_SetChannel1Data(DAC_Align_12b_R, 0xFFF);
}
//void setupI2C(){
//	// Włączenie zegara I2C
//	RCC_APB1PeriphClockCmd(RCC_APB1Periph_I2C1, ENABLE);
//	// Włączenie zegara od GPIOB
//	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
//
//	// Ustawienie pinów SCL (PB8) i SDA (PB7)
//	GPIO_InitTypeDef GPIO_InitStruct;
//	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_7 | GPIO_Pin_8;
//	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF;
//	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
//	GPIO_InitStruct.GPIO_OType = GPIO_OType_OD; // Open-drain
//	GPIO_InitStruct.GPIO_PuPd = GPIO_PuPd_UP;
//	GPIO_Init(GPIOB, &GPIO_InitStruct);
//
//	// Połączenie I2C z pinami
//	GPIO_PinAFConfig(GPIOB, GPIO_PinSource8, GPIO_AF_I2C1); // SCL
//	GPIO_PinAFConfig(GPIOB, GPIO_PinSource7, GPIO_AF_I2C1); // SDA
//
//	Ustawienie parametrów I2C odbywa się za pomocą struktury I2C_InitTypeDef:
//
//	// Ustawienie I2C
//	I2C_InitTypeDef I2C_InitStruct;
//	// Predkosc transmisji - 100kHz
//	I2C_InitStruct.I2C_ClockSpeed = 100000;
//	// Wybór I2C (inne możliwosci dotyczą SMBUS)
//	I2C_InitStruct.I2C_Mode = I2C_Mode_I2C;
//	// Współczynnik wypełnienia 50%
//	I2C_InitStruct.I2C_DutyCycle = I2C_DutyCycle_2;
//	// Adres w trybie Slave, pole nieistotne w trybie Master
//	I2C_InitStruct.I2C_OwnAddress1 = I2C1_SLAVE_ADDRESS7;
//	// ACK - potwierdzenie odbioru
//	I2C_InitStruct.I2C_Ack = I2C_Ack_Enable;
//	// Długosc adresacji urządzeń - 7bitów
//	I2C_InitStruct.I2C_AcknowledgedAddress = I2C_AcknowledgedAddress_7bit;
//	// init I2C1 - zapisanie ustawień na konkretny numer I2C
//	I2C_Init(I2C1, &I2C_InitStruct);
//
//	// Włączenie I2C1
//	I2C_Cmd(I2C1, ENABLE);
//
//
//}
//
//
///* I2Cx --> w naszym pzypadku I2C1
// * address --> 7-bitowy adres urzadzenia
// * direction --> kierunek transmisji danych:
// * I2C_Direction_Tranmitter dla transmisji danych z urzadzenia Master
// * I2C_Direction_Receiver dla odbioru danych przez urządzenie Master
// */
//void I2C_start(I2C_TypeDef* I2Cx, uint8_t address, uint8_t direction) {
//	// Oczekiwanie na zwolnienie magistrali I2C, żeby nie powodować kolizji
//	while (I2C_GetFlagStatus(I2Cx, I2C_FLAG_BUSY));
//
//	// Wygenerowanie sygnału START
//	I2C_GenerateSTART(I2Cx, ENABLE);
//
//	// Oczekiwanie na potwierdzenie od Slave'a, że odebrał sygnał START
//	while (!I2C_CheckEvent(I2Cx, I2C_EVENT_MASTER_MODE_SELECT));
//
//	// Adresacja urządzenia Slave i wybór kierunku transmisji danych
//	I2C_Send7bitAddress(I2Cx, address, direction);
//
//	// Oczekiwanie na potwierdzenie kierunku transmisji
//	if (direction == I2C_Direction_Transmitter) {
//		while(!I2C_CheckEvent(I2Cx, I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED));
//	} else if (direction == I2C_Direction_Receiver) {
//		while (!I2C_CheckEvent(I2Cx, I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED));
//	}
//}
//
//
///* Zakończenie transmisji i zwolnienie magistrali */
//void I2C_stop(I2C_TypeDef* I2Cx) {
//	// Wygenerowanie sygnału STOP
//	I2C_GenerateSTOP(I2Cx, ENABLE);
//}
//
//
///* Wysyłanie danych po I2C */
//void I2C_write(I2C_TypeDef* I2Cx, uint8_t data) {
//	I2C_SendData(I2Cx, data);
//	// Oczekiwanie na zakończenie transmisji
//	while (!I2C_CheckEvent(I2Cx, I2C_EVENT_MASTER_BYTE_TRANSMITTED));
//}
//
//
///* Funkcja odbierająca 1 bajt danych oraz w zależnosci od parametru ACK:
// * - jeżeli ENABLE -> potwierdzająca odbiór (oznacza chęć odbioru jeszcze 1 bajtu)
// * - jeżeli DISABLE -> NIE potwierdzająca odbioru (zakończenie odczytu)*/
//uint8_t I2C_read(I2C_TypeDef* I2Cx, uint8_t ACK) {
//// Włączenie/Wyłączenie potwierdzenia odbioru
//	I2C_AcknowledgeConfig(I2Cx, ACK);
//	// Oczekiwania aż odebranie bajtu danych zostanie zakończone
//	while (!I2C_CheckEvent(I2Cx, I2C_EVENT_MASTER_BYTE_RECEIVED));
//	// Odczyt odebranych danych z I2C
//	uint8_t data = I2C_ReceiveData(I2Cx);
//	return data;
//}




void setupUSART(uint32_t baud)
{
	// wlaczenie taktowania wybranego portu
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	// wlaczenie taktowania wybranego uk³adu USART
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

	// konfiguracja linii Rx i Tx
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10 | GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	// ustawienie funkcji alternatywnej dla pinów (USART)
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource10, GPIO_AF_USART3);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource11, GPIO_AF_USART3);

	USART_InitTypeDef USART_InitStructure;
	// predkosc transmisji (mozliwe standardowe opcje: 9600, 19200, 38400, 57600, 115200, ...)
	USART_InitStructure.USART_BaudRate = baud;
	// d³ugoæ s³owa (USART_WordLength_8b lub USART_WordLength_9b)
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	// liczba bitów stopu (USART_StopBits_1, USART_StopBits_0_5, USART_StopBits_2, USART_StopBits_1_5)
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	// sprawdzanie parzystoci (USART_Parity_No, USART_Parity_Even, USART_Parity_Odd)
	USART_InitStructure.USART_Parity = USART_Parity_No;
	// sprzêtowa kontrola przep³ywu (USART_HardwareFlowControl_None, USART_HardwareFlowControl_RTS, USART_HardwareFlowControl_CTS, USART_HardwareFlowControl_RTS_CTS)
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	// tryb nadawania/odbierania (USART_Mode_Rx, USART_Mode_Rx )
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	// konfiguracja
	USART_Init(USART3, &USART_InitStructure);

	//struktura do konfiguracji kontrolera NVIC
	NVIC_InitTypeDef NVIC_InitStructure;
	// wlaczenie przerwania zwi¹zanego z odebraniem danych (pozostale zrodla przerwan zdefiniowane sa w pliku stm32f4xx_usart.h)
	USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);
	NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	// konfiguracja kontrolera przerwan
	NVIC_Init(&NVIC_InitStructure);
	// wlaczenie przerwan od ukladu USART
	NVIC_EnableIRQ(USART3_IRQn);

	// wlaczenie ukladu USART
	USART_Cmd(USART3, ENABLE);
}

uint8_t usartGetChar(void)
{
	// czekaj na odebranie danych
       while (USART_GetFlagStatus(USART3, USART_FLAG_RXNE) == RESET);

   	return USART_ReceiveData(USART3);
}

void TIM2_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM2, TIM_IT_Update) != RESET)
	{
		// miejsce na kod wywo³ywany w momencie wyst¹pienia przerwania
	}
}
void TIM3_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM3, TIM_IT_Update) != RESET)
    {
		// miejsce na kod wywo³ywany w momencie wyst¹pienia przerwania
        TIM_ClearITPendingBit(TIM3, TIM_IT_Update);
    }
}
void TIM4_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM4, TIM_IT_Update) != RESET)
    {
		// miejsce na kod wywo³ywany w momencie wyst¹pienia przerwania
        TIM_ClearITPendingBit(TIM4, TIM_IT_Update);
    }
}
void TIM5_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM5, TIM_IT_Update) != RESET)
    {
		// miejsce na kod wywo³ywany w momencie wyst¹pienia przerwania
        TIM_ClearITPendingBit(TIM5, TIM_IT_Update);
    }
}
void EXTI1_IRQHandler(void)
{
	if(EXTI_GetITStatus(EXTI_Line1) != RESET)
    {
		// miejsce na kod wywo³ywany w momencie wyst¹pienia przerwania
		EXTI_ClearITPendingBit(EXTI_Line1);
   	}
}
/****this buffer stores data received from ESP****/
#define BUFFER_SIZE 1500
#define REQ_LINE_BUFF_SIZE 70
#define UNKNOWN 0x00
#define NULL 0x00
#define OK 1
#define ERROR 2
#define FAIL 3
#define READY 4
#define READY_TO_WRITE_TCP 5
#define SERVER_MODE 0
#define AP_MODE 1

/*************************************/
uint8_t digital_out_1 = 0; //on-off

char alarm[5]="12:00";
char hold[5]="15:15";
float temp=90.2;
int setting=0;
float currTemp=48.5;
char is_connected[5]="true";
char is_heating[5]="false";

/*************************************/
//all possible get requests listed here
const char get_index[]="GET /index.html";
const char get_root[]="GET / ";
const char get_ustawienia[] = "GET /example.json";
const char set[]="GET /set";

//const  char get_toggle_digitalOut[]={"GET /digital_outputs/toggle"};
//const  char get_status_dig_out[]={"GET /digital_outputs/status"};
//const char get_on[]="GET /on ";
/*************************************/

//const char index_html[]="<!DOCTYPE html>\n<html>\n<head></head>\n<body>\n<p>\n<a href=\" /on\"><button class=\"button\">ON</button></a>\n</p>\n</body>\n</html>";
//const char index_html[]={"<!DOCTYPE html>\n<html>\n<head>\n<title>esp</title>\n<script src=https://ajax.googleapis.com/ajax/libs/jquery/3.1.1/jquery.min.js></script>\n<script>$(document).ready(function(){setInterval(\"getDigitalOutputsStatus()\",4000)});function digital_output_toggle(b){var a=\"/digital_outputs/toggle?pin=\"+b+\"&\"+Math.floor(Math.random()*100000);$.ajax({type:\"GET\",dataType:\"text\",url:a,success:function(c){if(c==\"1\"){$(\"#\"+b).html(\"OFF\")}else{if(c==\"0\"){$(\"#\"+b).html(\"ON\")}else{alert(\"could not toggle digital output\")}}},timeout:2000})}function getDigitalOutputsStatus(){var b=\"/digital_outputs/status?\"+Math.floor(Math.random()*10000000);$.ajax({type:\"GET\",dataType:\"json\",url:b,success:function(a){if(a.digital_outputs.dout1[\"state\"]==1){$(\"#dout1\").html(\"OFF\")}else{$(\"#dout1\").html(\"ON\")}},timeout:2000})};</script>\n</head>\n<body>\n<header>\n<h1>KettleIoT</h1>\n</header>\n<section>\n<table>\n<tr>\n<th>Digital Ouput</th>\n<th>Option</th>\n</tr>\n<tr>\n<td>DOut1</td>\n<td><button id=dout1 class=button onclick=\"digital_output_toggle('dout1')\">ON</button>\n</td>\n</tr>\n</table>\n</section>\n</body>\n</html>\n"};
//ok
//const char index_html[]={"<html><head><title>KettleIoT</title><meta charset=\"UTF-8\"><style>body{background:rgb(11,9,10);color:rgb(255,255,255);text-align:center;margin:20px 0 0 0;min-width:1000px;}.margins{width:900px;display:inline-block;text-align:left;margin:0;}#title{text-align:center;font-family:'Times New Roman',serif;font-size:36px;font-weight:bold;margin-bottom:40px;margin-top:30px;}.container{background:rgb(235,235,235);margin-top:15px;text-align:center;padding:10px;color:rgb(0,0,0);}.container .title{font-size:18px;font-family:'Times New Roman', serif;color:rgb(0,0,0);margin-bottom:5px;}.container div{text-align:center;}.container .save{text-align:right;}#screen{background:rgba(0,0,0,0.9);color:rgb(255,255,255);z-index:100;position:fixed;width:100%;height:100%;top:0;left:0;cursor:pointer;}#screen_text{font-size:26px;margin-top:calc(50vh - 30px);}</style><script src=http://code.jquery.com/jquery.min.js></script><script>function komunikat(tekst){$(\"#screen_text\").html(tekst);$(\"#screen\").show(300);setTimeout(function () {$(\"#screen\").hide(300);}, 2000);}function licztemp(){var el = document.getElementById(\"temperatura\");var el2 = document.getElementById(\"wynik_temp\");var temp = parseFloat(el.value);temp = temp.toFixed(1);el2.innerHTML = temp.toString() + \" &deg;C\";}function loadSettings(){$.get(\"example.json\", function(data){var dane = JSON.parse(data);$(\"#temperatura\").val(dane[\"temp\"]);licztemp();$(\"#alarm\").val(dane[\"alarm\"]);$(\"#hold\").val(dane[\"hold\"]);if(dane[\"setting\"] === 0){$(\"#tryb1\").prop(\"checked\", true);}else{$(\"#tryb2\").prop(\"checked\", true);}setInterval(function () {intervalSetting();}, 4000);});}function intervalSetting(){$.get(\"example.json\", function(data){var dane = JSON.parse(data);$(\"#curr_temp\").html(dane[\"curr_temp\"].toString() + \" &deg;C\");if(dane[\"is_connected\"] === true){$(\"#is_connected\").html(\"Czajnik jest podłączony\");$(\"#curr_temp\").show(300);$(\"#is_heating\").show(300);}else{$(\"#is_connected\").html(\"Czajnik jest odłączony\");$(\"#curr_temp\").hide(300);$(\"#is_heating\").hide(300);}if(dane[\"is_heating\"] === true){$(\"#is_heating\").html(\"Trwa podgrzewanie\");}else{$(\"#is_heating\").html(\"Woda podgrzana\");}});}function saveTemp(){$.get(\"set\", {\"temp\":$(\"#temperatura\").val()}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}});}function saveAlarm(){var wartosc = \"\";if($(\"#alarm\").val() === \"\"){wartosc = \"none\";}else{wartosc = $(\"#alarm\").val();}$.get(\"set\", {\"alarm\":wartosc}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}})}function saveHold(){var wartosc = \"\";if($(\"#hold\").val() === \"\"){wartosc = \"none\";}else{wartosc = $(\"#hold\").val();}$.get(\"index.html/set\", {\"hold\":wartosc}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}})}function saveSetting(){var wartosc = \"\";if($(\"#tryb1\").is(\"checked\")){wartosc = 0;}else{wartosc = 1;}$.get(\"set\", {\"setting\":wartosc}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}})}$(document).ready(function () {loadSettings();$(\"#screen\").hide();});</script></head><body><div id=screen onclick=\"$(this).hide(300);\"><div id=screen_text>Czajnik nie jest podłączony</div></div><div class=margins><div id=content><div id=title>KettleIoT</div><div class=container><div class=title>Podtrzymywana temperatura</div><div class=setting><div style=\"width:800px; display:inline-block\"><div style=\"float:left;margin-right:5px;margin-left:3px;\">40</div><input type=\"range\" min=\"40\" max=\"100\" step=\"0.1\" id=temperatura oninput=\"licztemp()\" style=\"float:left;width:calc(100% - 62px);\"><div style=\"float:left;margin-left:5px;\">100</div><div style=\"clear:both;font-size:0;width:0;\">&nbsp;</div></div><div id=wynik_temp></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveTemp()\"></div><script>licztemp();</script></div></div><div class=container><div class=title>Godzina zagotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=alarm></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveAlarm()\"></div></div></div><div class=container><div class=title>Czas podtrzymywania temperatury</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=hold></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveHold()\"></div></div></div><div class=container><div class=title>Tryb gotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb1\" id=tryb1><span>Najpier zagotuj, a później podtrzymuj temperaturę</span><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb2\" id=tryb2><span>Po prostu podtrzymuj temperaturę</span></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveSetting()\"></div></div></div><div class=container><div class=title>Stan czajnika</div><div class=setting><div style=\"width:800px; display:inline-block\"><div id=curr_temp style=\"font-size:25px;\">Ładowanie...</div><div id=is_connected>Ładowanie...</div><div id=is_heating>Ładowanie...</div></div></div></div></div></div></body></html>"};

//ok
//const char index_html[]={"<html><head><title>KettleIoT</title><meta charset=\"UTF-8\"><style>body{background:rgb(11,9,10);color:rgb(255,255,255);text-align:center;margin:20px 0 0 0;min-width:1000px;}.margins{width:900px;display:inline-block;text-align:left;margin:0;}#title{text-align:center;font-family:'Times New Roman',serif;font-size:36px;font-weight:bold;margin-bottom:40px;margin-top:30px;}.container{background:rgb(235,235,235);margin-top:15px;text-align:center;padding:10px;color:rgb(0,0,0);}.container .title{font-size:18px;font-family:'Times New Roman', serif;color:rgb(0,0,0);margin-bottom:5px;}.container div{text-align:center;}.container .save{text-align:right;}#screen{background:rgba(0,0,0,0.9);color:rgb(255,255,255);z-index:100;position:fixed;width:100%;height:100%;top:0;left:0;cursor:pointer;}#screen_text{font-size:26px;margin-top:calc(50vh - 30px);}</style><script src=http://code.jquery.com/jquery.min.js></script><script>function komunikat(tekst){$(\"#screen_text\").html(tekst);$(\"#screen\").show(300);setTimeout(function () {$(\"#screen\").hide(300);}, 2000);}function licztemp(){var el = document.getElementById(\"temperatura\");var el2 = document.getElementById(\"wynik_temp\");var temp = parseFloat(el.value);temp = temp.toFixed(1);el2.innerHTML = temp.toString() + \" &deg;C\";}function loadSettings(){$.get(\"ustawienia.html\", function(data){var dane = JSON.parse(data);$(\"#temperatura\").val(dane[\"temp\"]);licztemp();$(\"#alarm\").val(dane[\"alarm\"]);$(\"#hold\").val(dane[\"hold\"]);if(dane[\"setting\"] === 0){$(\"#tryb1\").prop(\"checked\", true);}else{$(\"#tryb2\").prop(\"checked\", true);}setInterval(function () {intervalSetting();}, 4000);});}function intervalSetting(){$.get(\"ustawienia.html\", function(data){var dane = JSON.parse(data);$(\"#curr_temp\").html(dane[\"curr_temp\"].toString() + \" &deg;C\");if(dane[\"is_connected\"] === true){$(\"#is_connected\").html(\"Czajnik jest podłączony\");$(\"#curr_temp\").show(300);$(\"#is_heating\").show(300);}else{$(\"#is_connected\").html(\"Czajnik jest odłączony\");$(\"#curr_temp\").hide(300);$(\"#is_heating\").hide(300);}if(dane[\"is_heating\"] === true){$(\"#is_heating\").html(\"Trwa podgrzewanie\");}else{$(\"#is_heating\").html(\"Woda podgrzana\");}});}function saveTemp(){$.get(\"set\", {\"temp\":$(\"#temperatura\").val()}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}});}function saveAlarm(){var wartosc = \"\";if($(\"#alarm\").val() === \"\"){wartosc = \"none\";}else{wartosc = $(\"#alarm\").val();}$.get(\"set\", {\"alarm\":wartosc+'&'}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}})}function saveHold(){var wartosc = \"\";if($(\"#hold\").val() === \"\"){wartosc = \"none\";}else{wartosc = $(\"#hold\").val();}$.get(\"set\", {\"hold\":wartosc}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}})}function saveSetting(){var wartosc = \"\";if($(\"#tryb1\").is(\"checked\")){wartosc = 0;}else{wartosc = 1;}$.get(\"set\", {\"setting\":wartosc}, function (dane) {if(dane === \"ok\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}})}$(document).ready(function () {loadSettings();$(\"#screen\").hide();});</script></head><body><div id=screen onclick=\"$(this).hide(300);\"><div id=screen_text>Czajnik nie jest podłączony</div></div><div class=margins><div id=content><div id=title>KettleIoT</div><div class=container><div class=title>Podtrzymywana temperatura</div><div class=setting><div style=\"width:800px; display:inline-block\"><div style=\"float:left;margin-right:5px;margin-left:3px;\">40</div><input type=\"range\" min=\"40\" max=\"100\" step=\"0.1\" id=temperatura oninput=\"licztemp()\" style=\"float:left;width:calc(100% - 62px);\"><div style=\"float:left;margin-left:5px;\">100</div><div style=\"clear:both;font-size:0;width:0;\">&nbsp;</div></div><div id=wynik_temp></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveTemp()\"></div><script>licztemp();</script></div></div><div class=container><div class=title>Godzina zagotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=alarm></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveAlarm()\"></div></div></div><div class=container><div class=title>Czas podtrzymywania temperatury</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=hold></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveHold()\"></div></div></div><div class=container><div class=title>Tryb gotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb1\" id=tryb1><span>Najpier zagotuj, a później podtrzymuj temperaturę</span><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb2\" id=tryb2><span>Po prostu podtrzymuj temperaturę</span></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveSetting()\"></div></div></div><div class=container><div class=title>Stan czajnika</div><div class=setting><div style=\"width:800px; display:inline-block\"><div id=curr_temp style=\"font-size:25px;\">Ładowanie...</div><div id=is_connected>Ładowanie...</div><div id=is_heating>Ładowanie...</div></div></div></div></div></div></body></html>"};

//const char index_html[]={"<html><head><title>KettleIoT</title><meta charset=\"UTF-8\"><style>body{background:rgb(11,9,10);color:rgb(255,255,255);text-align:center;margin:20px 0 0 0;min-width:1000px;}.margins{width:900px;display:inline-block;text-align:left;margin:0;}#title{text-align:center;font-family:'Times New Roman',serif;font-size:36px;font-weight:bold;margin-bottom:40px;margin-top:30px;}.container{background:rgb(235,235,235);margin-top:15px;text-align:center;padding:10px;color:rgb(0,0,0);}.container .title{font-size:18px;font-family:'Times New Roman', serif;color:rgb(0,0,0);margin-bottom:5px;}.container div{text-align:center;}.container .save{text-align:right;}#screen{background:rgba(0,0,0,0.9);color:rgb(255,255,255);z-index:100;position:fixed;width:100%;height:100%;top:0;left:0;cursor:pointer;}#screen_text{font-size:26px;margin-top:calc(50vh - 30px);}</style><script src=http://code.jquery.com/jquery.min.js></script><script>function komunikat(tekst){$(\"#screen_text\").html(tekst);$(\"#screen\").show(300);setTimeout(function() {$(\"#screen\").hide(300);}, 2000);}function licztemp(){var el = document.getElementById(\"temperatura\");var el2 = document.getElementById(\"wynik_temp\");var temp = parseFloat(el.value);temp = temp.toFixed(1);el2.innerHTML = temp.toString() + \" &deg;C\";}function loadSettings(){$.get(\"ustawienia\", function(data){var dane = JSON.parse(data);$(\"#temperatura\").val(dane[\"temp\"]);licztemp();$(\"#alarm\").val(dane[\"alarm\"]);$(\"#hold\").val(dane[\"hold\"]);if(dane[\"setting\"] === 0){$(\"#tryb1\").prop(\"checked\", true);}else{$(\"#tryb2\").prop(\"checked\", true);}setInterval(function () {intervalSetting();}, 4000);});}function intervalSetting(){$.get(\"ustawienia\", function(data){var dane = JSON.parse(data);$(\"#curr_temp\").html(dane[\"curr_temp\"].toString() + \" &deg;C\");if(dane[\"is_connected\"] === true){$(\"#is_connected\").html(\"Czajnik jest podłączony\");$(\"#curr_temp\").show(300);$(\"#is_heating\").show(300);}else{$(\"#is_connected\").html(\"Czajnik jest odłączony\");$(\"#curr_temp\").hide(300);$(\"#is_heating\").hide(300);}if(dane[\"is_heating\"] === true){$(\"#is_heating\").html(\"Trwa podgrzewanie\");}else{$(\"#is_heating\").html(\"Woda podgrzana\");}});}function saveTemp(){var a = \"/set?temp=\"+$(\"#temperatura\").val();$.ajax({type:\"GET\",dataType:\"text\",url:a,success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}},timeout:2000});}function saveAlarm(){var a=\"/set?alarm=\";if($(\"#alarm\").val()===\"\"){a+=\"none&\";}else{a+=$(\"#alarm\").val()+\"&\";}$.ajax({type:\"GET\",dataType:\"text\",url:a,success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}},timeout:2000});}function saveHold(){var a=\"/set?hold=\";var wartosc = \"\";if($(\"#hold\").val()===\"\"){a+=\"none&\";}else{a+=$(\"#hold\").val()+\"&\";}$.ajax({type:\"GET\",dataType:\"text\",url:a,success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}},timeout:2000});}function saveSetting(){var a=\"/set?setting=\";if($('input[name=\"tryb_gotowania\"]').prop(\"checked\")){a+=0;}else{a+=1;}$.ajax({type:\"GET\",dataType:\"text\",url:a,success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}},timeout:2000});}$(document).ready(function(){loadSettings();$(\"#screen\").hide();});</script></head><body><div id=screen onclick=\"$(this).hide(300);\"><div id=screen_text>Czajnik nie jest podłączony</div></div><div class=margins><div id=content><div id=title>KettleIoT</div><div class=container><div class=title>Podtrzymywana temperatura</div><div class=setting><div style=\"width:800px; display:inline-block\"><div style=\"float:left;margin-right:5px;margin-left:3px;\">40</div><input type=\"range\" min=\"40\" max=\"100\" step=\"0.1\" id=temperatura oninput=\"licztemp()\" style=\"float:left;width:calc(100% - 62px);\"><div style=\"float:left;margin-left:5px;\">100</div><div style=\"clear:both;font-size:0;width:0;\">&nbsp;</div></div><div id=wynik_temp></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveTemp()\"></div><script>licztemp();</script></div></div><div class=container><div class=title>Godzina zagotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=alarm></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveAlarm()\"></div></div></div><div class=container><div class=title>Czas podtrzymywania temperatury</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=hold></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveHold()\"></div></div></div><div class=container><div class=title>Tryb gotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb1\" id=tryb1><span>Najpier zagotuj, a później podtrzymuj temperaturę</span><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb2\" id=tryb2><span>Po prostu podtrzymuj temperaturę</span></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveSetting()\"></div></div></div><div class=container><div class=title>Stan czajnika</div><div class=setting><div style=\"width:800px; display:inline-block\"><div id=curr_temp style=\"font-size:25px;\">Ładowanie...</div><div id=is_connected>Ładowanie...</div><div id=is_heating>Ładowanie...</div></div></div></div></div></div></body></html>"};

const char index_html[]={"<html><head><title>KettleIoT</title><meta charset=\"UTF-8\"><style>body{background:rgb(11,9,10);color:rgb(255,255,255);text-align:center;margin:20px 0 0 0;min-width:1000px;}.margins{width:900px;display:inline-block;text-align:left;margin:0;}#title{text-align:center;font-family:'Times New Roman',serif;font-size:36px;font-weight:bold;margin-bottom:40px;margin-top:30px;}.container{background:rgb(235,235,235);margin-top:15px;text-align:center;padding:10px;color:rgb(0,0,0);}.container .title{font-size:18px;font-family:'Times New Roman', serif;color:rgb(0,0,0);margin-bottom:5px;}.container div{text-align:center;}.container .save{text-align:right;}#screen{background:rgba(0,0,0,0.9);color:rgb(255,255,255);z-index:100;position:fixed;width:100%;height:100%;top:0;left:0;cursor:pointer;}#screen_text{font-size:26px;margin-top:calc(50vh - 30px);}</style><script src=http://code.jquery.com/jquery.min.js></script><script>function komunikat(tekst){$(\"#screen_text\").html(tekst);$(\"#screen\").show(300);setTimeout(function(){$(\"#screen\").hide(300);}, 2000);}function licztemp(){var el = document.getElementById(\"temperatura\");var el2 = document.getElementById(\"wynik_temp\");var temp = parseFloat(el.value);temp = temp.toFixed(1);el2.innerHTML = temp.toString() + \" &deg;C\";}function loadSettings(){$.getJSON(\"example.json&\",function(json) {$(\"#temperatura\").val(json.temp);licztemp();$(\"#alarm\").val(json.alarm);$(\"#hold\").val(json.hold);if(json.setting===0){$(\"#tryb1\").prop(\"checked\", true);}else{$(\"#tryb2\").prop(\"checked\", true);}setTimeout(function() {intervalSetting();}, 1000); }).error(function() { console.log(\"error: loadSettings\"); });}function intervalSetting(){var a=\"example.json&\";$.ajax({type:\"GET\",dataType:\"json\",url:a,timeout:4000,error: function(xmlhttprequest, textstatus, message){if(textstatus===\"timeout\") {console.log(\"error: intervalSetting\");clearInterval(intervalSetting);}},success:function(c){console.log(\"success\",c);$(\"#curr_temp\").html(c[\"curr_temp\"].toString()+\" &deg;C\");if(c[\"is_connected\"]===true){$(\"#is_connected\").html(\"Czajnik jest podłączony\");$(\"#curr_temp\").show(300);$(\"#is_heating\").show(300);}else{$(\"#is_connected\").html(\"Czajnik jest odłączony\");$(\"#curr_temp\").hide(300);$(\"#is_heating\").hide(300);}if(c[\"is_heating\"]===true){$(\"#is_heating\").html(\"Trwa podgrzewanie\");}else{$(\"#is_heating\").html(\"Woda podgrzana\");}},complete:function(data){console.log(\"complete\",data);setTimeout(intervalSetting,1000);}});}function saveTemp(){var a=\"/set?temp=\"+$(\"#temperatura\").val()+\"&\";$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(xmlhttprequest, textstatus, message){console.log(\"got timeout: saveTemp\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}}});}function saveAlarm(){var a=\"/set?alarm=\";if($(\"#alarm\").val()===\"\"){a+=\"none&\";}else{a+=$(\"#alarm\").val()+\"&\";}$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(){console.log(\"error: saveAlarm\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}}});}function saveHold(){var a=\"/set?hold=\";if($(\"#hold\").val()===\"\"){a+=\"none&\";}else{a+=$(\"#hold\").val()+\"&\";}$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(){console.log(\"error: saveHold\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}}});}function saveSetting(){var a=\"/set?setting=\";if($('input[name=\"tryb_gotowania\"]').prop(\"checked\")){a+=0;}else{a+=1;}a+=\"&\";$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(){console.log(\"error: saveSetting\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił błąd\");}}});}$(document).ready(function () {loadSettings();$(\"#screen\").hide();});</script></head><body><div id=screen onclick=\"$(this).hide(300);\"><div id=screen_text>Czajnik nie jest podłączony</div></div><div class=margins><div id=content><div id=title>KettleIoT</div><div class=container><div class=title>Podtrzymywana temperatura</div><div class=setting><div style=\"width:800px; display:inline-block\"><div style=\"float:left;margin-right:5px;margin-left:3px;\">40</div><input type=\"range\" min=\"40\" max=\"100\" step=\"0.1\" id=temperatura oninput=\"licztemp()\" style=\"float:left;width:calc(100% - 62px);\"><div style=\"float:left;margin-left:5px;\">100</div><div style=\"clear:both;font-size:0;width:0;\">&nbsp;</div></div><div id=wynik_temp></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveTemp()\"></div><script>licztemp();</script></div></div><div class=container><div class=title>Godzina zagotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=alarm></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveAlarm()\"></div></div></div><div class=container><div class=title>Czas podtrzymywania temperatury</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=hold></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveHold()\"></div></div></div><div class=container><div class=title>Tryb gotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb1\" id=tryb1><span>Najpier zagotuj, a później podtrzymuj temperaturę</span><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb2\" id=tryb2><span>Po prostu podtrzymuj temperaturę</span></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveSetting()\"></div></div></div><div class=container><div class=title>Stan czajnika</div><div class=setting><div style=\"width:800px; display:inline-block\"><div id=curr_temp style=\"font-size:25px;\">Ładowanie...</div><div id=is_connected>Ładowanie...</div><div id=is_heating>Ładowanie...</div></div></div></div></div></div></body></html>"};


/************global variables************/
char reqLineBuff[REQ_LINE_BUFF_SIZE];
unsigned char reqLineBufIndex=0;

char rxBuff[BUFFER_SIZE];
unsigned int bufferIndexPrimary=0;//primary esp rx buffer index, increments when receive new data
unsigned int bufferIndexForIpdSearch=0;//is used to scan +IPD string from received data
unsigned int bufferIndexForResponseSearch=0;//to be used for reading esp responses like ok,error, fail etc

//char serverIp[16]={"------------"};
//char apSsid[33];
//char apPassword[33];
//unsigned char duty=0;
//unsigned int adc_reading;
char espMode=SERVER_MODE;
/***************************************/

char* codetxt_to_ramtxt(const char* ctxt){
	static char txt[70];
	char i;
	for(i = 0; txt[i] = ctxt[i]; i++);
	return txt;
}
/***********************************/
char toggleOutput(char* pinName);
void toggleSettings(char *buff,char *set, char* val);
/**************function declarations*****************/

void initializeEspAsServer(void);
void extractQueryFieldValue(char *someString, char* field, char* value);
void processReqLine(char * stringToProcess);
void HandleHttpRequests(void);
void sendRequestedPageToClient(char id, const char* page,unsigned int len);
//void sendRequestedPageToClientRam(char id,  char* page,unsigned int len);
void sendMemArrayToEsp(const char*str,unsigned int len);
//void sendStringToEsp(const char* str);
char readEspResponse(void);
//void readIp(char* ipPtr);
void resetEspRxBuffer(void);

/* Returns length of given string in chars [NOT USED IN THIS VERSION]*/
int lengthOfString(char *str);
/*Returns amount of digits in number*/
int get_int_len (int value);
void sendUARTmsg(char *msg);
/**********************************************/

char toggleOutput(char* pinName)
{
    if(strcmp(pinName,codetxt_to_ramtxt("dout1"))==0) { //on/off
    	if(digital_out_1){
    		GPIO_ResetBits(GPIOD, GPIO_Pin_14);
    		digital_out_1=0;
    	}
    	else{
    		GPIO_SetBits(GPIOD, GPIO_Pin_14);
    		digital_out_1=1;
    	}

        return digital_out_1;
    }
//     else if(strcmp(pinName,codetxt_to_ramtxt("dout2"))==0) {
//        digital_out_2=!digital_out_2;
//        return digital_out_2;
//    }
//     else if(strcmp(pinName,codetxt_to_ramtxt("dout3"))==0) {
//        digital_out_3=!digital_out_3;
//        return digital_out_3;
//    }
//     else if(strcmp(pinName,codetxt_to_ramtxt("dout4"))==0) {
//        digital_out_4=!digital_out_4;
//        return digital_out_4;
//    }
    else return 2;
}
void toggleSettings(char *buff,char *set, char* val)
{
	//char alarm[5]="12:00";
	//char hold[5]="15:15";
	//float temp=90.2;
	//int setting=0;
	if(strcmp(set,codetxt_to_ramtxt("temp"))==0) {
		temp=(float)atof(val);
		strcpy(buff,"OK");
		//strcat(buff,"OK");
	}
	else if(strcmp(set,codetxt_to_ramtxt("alarm"))==0) {
		strcpy(alarm,val);
		//alarm=val;
		//strcpy(buff,alarm);
		//sprintf(buff,"{\"alarm\":\"%s\"}",alarm);
		strcpy(buff,"OK");
	}
	else if(strcmp(set,codetxt_to_ramtxt("hold"))==0) {
		strcpy(hold,val);
		//hold=val;
		//strcpy(buff,hold);
		//sprintf(buff,"{\"hold\":\"%s\"}",hold);
		strcpy(buff,"OK");
	}
	else if(strcmp(set,codetxt_to_ramtxt("setting"))==0) {
		//scanf(val,"%d",&setting);
		setting=(int)atoi(val);
		//sprintf(buff,"{\"setting\":%d}",setting);
		strcpy(buff,"OK");

	}
}
void resetEspRxBuffer(void)
{
    bufferIndexPrimary=0;
}
void USART3_IRQHandler(void){
	uint16_t buff = 0;
	if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET){
		resetBit('D',15);//debug
		buff = USART3->DR;
		rxBuff[bufferIndexPrimary++] = (char)buff;
		if(bufferIndexPrimary>=BUFFER_SIZE)
			bufferIndexPrimary=0;

	}
}
void initializeEspAsServer(void)
{
	delay(10);
	sendUARTmsg("AT+RST\r\n");
	while(readEspResponse()!=READY);

	sendUARTmsg("AT+CWMODE=1\r\n");
	while(readEspResponse()!=OK);

	sendUARTmsg("AT+CIPMODE=0\r\n");
	while(readEspResponse()!=OK);

	sendUARTmsg("AT+CIPMUX=1\r\n");
	while(readEspResponse()!=OK);

	sendUARTmsg("AT+CWJAP=\"adamP9\",\"babajaga\"\r\n");
	while(readEspResponse()!=OK);

	sendUARTmsg("AT+CIPSERVER=1,80\r\n");
	while(readEspResponse()!=OK);
}
void processReqLine(char * stringToProcess)
{
    char idField;
    char* token;
    char field[10],value[10];
    char someBuffer[300];
    char tempPinState[2]={0x00};
    //char token[60];
    //unsigned int ipdLen;
    //sscanf(webdata,"%c,%d:%s", idField, &ipdLen, token);
    token=strtok(stringToProcess,",:");//token=id
    if(token!=NULL)
    {
        idField=*token;
        token=strtok(NULL,",:");//token=length field
    }
    if(token!=NULL)
    {
        //lengthField=atoi(token);
        token=strtok(NULL,",&");//this is get request
    }
    if(token!=NULL)
    {
        if( (strncmp(token,codetxt_to_ramtxt(get_index),strlen(codetxt_to_ramtxt(get_index)))==0)||
        	(strncmp(token,codetxt_to_ramtxt(get_root),strlen(codetxt_to_ramtxt(get_root)))==0))
        {
            //send requested resource, index.html
            sendRequestedPageToClient(idField,index_html,strlen(index_html));
        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_logo),strlen(codetxt_to_ramtxt(get_logo)))==0)
//        {
//            sendRequestedPageToClient(idField,logo_jpg,1852);
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_dinputs),strlen(codetxt_to_ramtxt(get_dinputs)))==0)
//        {
//            sendRequestedPageToClient(idField,dInputs_html,1499);
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_anoutputs),strlen(codetxt_to_ramtxt(get_anoutputs)))==0)
//        {
//            sendRequestedPageToClient(idField,anOutputs_html,2717);
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_aninputs),strlen(codetxt_to_ramtxt(get_aninputs)))==0)
//        {
//            sendRequestedPageToClient(idField,anInputs_html,1320);
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_style),strlen(codetxt_to_ramtxt(get_style)))==0)
//        {
//            sendRequestedPageToClient(idField,style_css,1192);
//        }
        else if(strncmp(token,codetxt_to_ramtxt(get_ustawienia),strlen(codetxt_to_ramtxt(get_ustawienia)))==0)
        {
        	GPIO_ToggleBits(GPIOD, GPIO_Pin_13);
        	composeKettleStatus(someBuffer);
        	sendRequestedPageToClient(idField,someBuffer,strlen(someBuffer));
        }
        else if(strncmp(token,codetxt_to_ramtxt(set),strlen(codetxt_to_ramtxt(set)))==0)
        {
        	//+IPD,4,329:GET /set?temp=71.6 HTTP/1.1
        	//+IPD,4,329:GET /ustawienia HTTP/1.1
			extractQueryFieldValue(token,field,value);
        	GPIO_ToggleBits(GPIOD, GPIO_Pin_13);
        	if(value!=NULL)
        	{
        		toggleSettings(someBuffer,field,value);
        		sendRequestedPageToClient(idField,someBuffer,strlen(someBuffer));
        	}
        }
//        	else if(strncmp(token,codetxt_to_ramtxt(get_toggle_digitalOut),strlen(codetxt_to_ramtxt(get_toggle_digitalOut)))==0)
//        {
//            extractQueryFieldValue(token,field,value);
//            //GET /digital_outputs/toggle?pin=dout1&852
//            //field -> pin
//            //value -> dout1
//            if(value!=NULL)
//            {
//                char stateOfPin=toggleOutput(value);
//                tempPinState[0]=stateOfPin+48;
//                strcpy(someBuffer,tempPinState);
//                sendRequestedPageToClient(idField,someBuffer,strlen(someBuffer));
//            }
//        }
//        //adam
//        else if(strncmp(token,codetxt_to_ramtxt(get_status_dig_out),strlen(codetxt_to_ramtxt(get_status_dig_out)))==0) { //index page requested?
//        	GPIO_ToggleBits(GPIOD, GPIO_Pin_13);
//        	composeDigitalOutStatus(someBuffer);
//            sendRequestedPageToClient(idField,someBuffer,strlen(someBuffer));
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_status_dig_in),strlen(codetxt_to_ramtxt(get_status_dig_in)))==0){
//            composeDigitalInStatus(someBuffer);
//            sendRequestedPageToClientRam(idField,someBuffer,strlen(someBuffer));
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_status_analog_output),strlen(codetxt_to_ramtxt(get_status_analog_output)))==0) { //index page requested?.
//
//            float reading=duty/255.0;
//            char txt[15];
//            FloatToStr(reading, txt);
//            strcpy(someBuffer,txt);
//            sendRequestedPageToClientRam(idField,someBuffer,strlen(someBuffer));
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_update_analog_output),strlen(codetxt_to_ramtxt(get_update_analog_output)))==0) {
//
//            extractQueryFieldValue(token,field,value);
//            duty=atof(value)*255;
//            pwm1_set_duty(duty);
//            strcpy(someBuffer,value);
//            sendRequestedPageToClientRam(idField,someBuffer,strlen(someBuffer));
//        }
//        else if(strncmp(token,codetxt_to_ramtxt(get_status_analog_inputs),strlen(codetxt_to_ramtxt(get_status_analog_inputs)))==0)
//        {
//            float reading;
//            char txt[15];
//            adc_reading=ADC_Read(0);
//            reading=adc_reading/1023.0;
//            FloatToStr(reading, txt);
//            strcpy(someBuffer,txt);
//            sendRequestedPageToClientRam(idField,someBuffer,strlen(someBuffer));
//        }
//        else//if requested page not found,
//        {
//            sendRequestedPageToClient(idField,notFound_html,27);
//        }
    }
}


void sendMemArrayToEsp(const char*str,unsigned int len)
{
    while(len--){
    	USART_SendData(USART3, *str++);
    	delay(20);
    }
}
void extractQueryFieldValue(char *someString, char* field, char* value)
{
    char* ptr ;
    char *queryStr = strchr(someString, '?');//get query part
    if (queryStr != NULL) {
        queryStr++;//pin=dout1&234234
    }
    //=&
    ptr=strtok(queryStr,"=&");
    if(ptr!=NULL)
    {
        strcpy(field,ptr);
        //=&
        ptr=strtok(NULL,"=&");
    }
    if(ptr!=NULL)
        strcpy(value,ptr);
}
void composeDigitalOutStatus(char* str)
{//"{\"digital_outputs\":{\"dout1\":{\"state\":},\"dout2\":{\"state\":},\"dout3\":{\"state\":},\"dout4\":{\"state\":}}}"
    char pinStatus[2]={0x00};
    strcpy(str,codetxt_to_ramtxt("{\"digital_outputs\":{\"dout1\":{\"state\":"));
    pinStatus[0]=digital_out_1+48;
    strcat(str,pinStatus);
//    strcat(str,codetxt_to_ramtxt("},\"dout2\":{\"state\":"));
//    pinStatus[0]=digital_out_2+48;
//    strcat(str,pinStatus);
//    strcat(str,codetxt_to_ramtxt("},\"dout3\":{\"state\":"));
//    pinStatus[0]=digital_out_3+48;
//    strcat(str,pinStatus);
//    strcat(str,codetxt_to_ramtxt("},\"dout4\":{\"state\":"));
//    pinStatus[0]=digital_out_4+48;
//    strcat(str,pinStatus);
    strcat(str,codetxt_to_ramtxt("}}}"));
}
void composeKettleStatus(char* str)
{

	//float temp=90.2;
	//uint8_t setting;
	//float currTemp;
	//char is_heating[5];

	//{"{\"alarm\":\"12:00\",\"hold\":\"15:15\",\"temp\":90.2,\"setting\":0,\"curr_temp\":25.5,\"is_connected\":true,\"is_heating\":false}"};
//	char pinStatus[5]={0x00};
//    strcpy(str,codetxt_to_ramtxt("{\"digital_outputs\":{\"dout1\":{\"state\":"));
//    strcpy(str,codetxt_to_ramtxt("{\"alarm\":\""));
//    //pinStatus[0]=digital_out_1+48;
//    strcat(str,alarm);
//    strcpy(str,codetxt_to_ramtxt("\",\"hold\":\""));
//    strcat(str,hold);
//    strcpy(str,codetxt_to_ramtxt("\"}"));
	sprintf(str,"{\"alarm\":\"%s\",\"hold\":\"%s\",\"temp\":%.1f,\"setting\":%d,\"curr_temp\":%.1f,\"is_connected\":%s,\"is_heating\":%s}", alarm,hold,temp,setting,currTemp,is_connected,is_heating);
}

//to be called for sending some page
void sendRequestedPageToClient(char id, const char* page,unsigned int len)
{
    char atCommandArray[50];
    unsigned int lenOfPacketToTx;
    unsigned int pageToSendAddress=0;
    unsigned int lenOfPacketToTx2=0;
    char tempEspStatus;
    char tempStr[2]={0};
    int timer=0; //time init 0s
    //char lenBuf[7];
    while(len>0)
    {
    	if(len>2048){
    		len-=2048;
    		lenOfPacketToTx=2048;
    	}
    	else{
    		lenOfPacketToTx=len;
    		len=0;
    	}
    	lenOfPacketToTx2=lenOfPacketToTx;
    	//writing below lines because sprintf didn't work for mikroC
		//IntToStr(lenOfPacketToTx, lenBuf);
    	//Ltrim(lenBuf);

    	char *lenBuf = (char*)malloc(get_int_len(lenOfPacketToTx) + 1);
    	if (lenOfPacketToTx < 10)
    	{
    		lenBuf[0] = (lenOfPacketToTx + '0');
    		lenBuf[1] = '\0';
    	}
    	else
    	{
    		int n = get_int_len(lenOfPacketToTx);
    		lenBuf[n] = '\0';
    		int pom = lenOfPacketToTx;
    		while (n > 0)
    		{
    			pom %= 10;
    			lenBuf[--n] = pom + '0';
    			lenOfPacketToTx /= 10;
    			pom = lenOfPacketToTx;
    		}
    	}

        strcpy(atCommandArray, codetxt_to_ramtxt("AT+CIPSEND="));
        tempStr[0]=id;
        strcat(atCommandArray,tempStr);
        strcat(atCommandArray,",");
        strcat(atCommandArray,lenBuf);
        strcat(atCommandArray,"\r\n");

        bufferIndexForResponseSearch=bufferIndexPrimary;
        GPIO_SetBits(GPIOD, GPIO_Pin_12);
        sendUARTmsg(atCommandArray);

        while(1)
        {
        	TIM_Cmd(TIM5,ENABLE);
        	if(TIM_GetFlagStatus(TIM5, TIM_FLAG_Update)) {
        		timer++;
        		if(timer == 3)
        		{
        			GPIO_ResetBits(GPIOD, GPIO_Pin_12);
        			GPIO_ResetBits(GPIOD, GPIO_Pin_13);
        			GPIO_ResetBits(GPIOD, GPIO_Pin_14);
        			GPIO_ResetBits(GPIOD, GPIO_Pin_15);
        			break;
        		}
        		TIM_ClearFlag(TIM5, TIM_FLAG_Update);
        	}
            tempEspStatus=readEspResponse();
            if(tempEspStatus==READY_TO_WRITE_TCP||tempEspStatus==ERROR ||tempEspStatus==FAIL){
            	TIM_Cmd(TIM5,DISABLE); //important
                break;
            }
        }

        //now send page
        if(tempEspStatus==READY_TO_WRITE_TCP)
        {
        	GPIO_ResetBits(GPIOD, GPIO_Pin_12);
        	 //sendUARTmsg(page);
            sendMemArrayToEsp(page+pageToSendAddress,lenOfPacketToTx2);
            do{
                tempEspStatus=readEspResponse();
                GPIO_SetBits(GPIOD, GPIO_Pin_14);
            }
            while(tempEspStatus==UNKNOWN);
            if(tempEspStatus!=OK) {//link broken, don't send more data to this link.

            	break;
            }
            pageToSendAddress+=lenOfPacketToTx2;
        }
        else
            break;
    }

    if(tempEspStatus==OK)
    {

        strcpy(atCommandArray,codetxt_to_ramtxt("AT+CIPCLOSE="));
        tempStr[0]=id;
        strcat(atCommandArray,tempStr);
        strcat(atCommandArray,"\r\n");
        sendUARTmsg(atCommandArray);
        while(readEspResponse()==UNKNOWN);
        GPIO_ResetBits(GPIOD, GPIO_Pin_14);
    }

    //AT+CIPCLOSE=ID CRLF
   /* if(tempEspStatus==READY_TO_WRITE_TCP)
    {
        sprinti(atCommandArray,"AT+CIPCLOSE=%c\r\n",id);
        uart2_write_text(atCommandArray);
        while(readEspResponse()==UNKNOWN);
    }*/
}

void HandleHttpRequests(void){
    char rxByte;
    static char state=0;
    while(bufferIndexForIpdSearch!=bufferIndexPrimary)//that means there is some data
    {
        rxByte=rxBuff[bufferIndexForIpdSearch++];
        //sendUARTmsg(rxByte);
        if(bufferIndexForIpdSearch>=BUFFER_SIZE)
            bufferIndexForIpdSearch=0;
        switch(state)
        {
            case 0:
            if(rxByte=='+')
                state=1;
            break;

            case 1:
            if(rxByte=='I')
                state=2;
            else
                state=0;
            break;

            case 2:
            if(rxByte=='P')
                state=3;
            else
                state=0;
            break;

            case 3:
            if(rxByte=='D')
                state=4;
            else
                state=0;
            break;


            case 4:
            if(rxByte==',')
                state=5;
            else
                state=0;
            break;

            case 5:
            if(rxByte!=0x0d)//end of line not found
            {
                reqLineBuff[reqLineBufIndex++]=rxByte;
            }
            else
            {
                reqLineBuff[reqLineBufIndex]=0x00;
                //sendStringToDebugWindow(reqLineBuff);
                bufferIndexForResponseSearch=bufferIndexForIpdSearch;
                processReqLine(reqLineBuff);
                reqLineBufIndex=0;
                state=0;
            }
            break;

            default:
            state=0;
            break;
        }
    }
}


char readEspResponse(void){
    char rxByte;
    char espResponse=UNKNOWN;
    static char state=0;

    while(bufferIndexForResponseSearch!=bufferIndexPrimary)//that means there is some data
    {
        rxByte=rxBuff[bufferIndexForResponseSearch++];
        //uart1_write(rxByte);//send received byte to debug window
        if(bufferIndexForResponseSearch>=BUFFER_SIZE)
            bufferIndexForResponseSearch=0;

        switch(state)
        {
            case 0:
            if(rxByte=='O') //ok
                state=1;
            else if(rxByte=='E')//error
                state=4;
            else if(rxByte=='F')//fail
                state=10;
            else if(rxByte=='r')//ready
                state=15;
            else if(rxByte=='>')
                state=21;
            break;

            case 1://OK
            if(rxByte=='K')
                state=2;
            else
                state=0;
            break;

            case 2:
            if(rxByte==0x0d)
                state=3;
            else state=0;
            break;

            case 3:
            if(rxByte==0x0A)
                espResponse=OK;
            state=0;
            break;

            case 4://ERROR
            if(rxByte=='R')
                state=5;
            else state=0;
            break;

            case 5:
            if(rxByte=='R')
                state=6;
            else state=0;
            break;

            case 6:
            if(rxByte=='O')
                state=7;
            else state=0;
            break;


            case 7:
            if(rxByte=='R')
                state=8;
            else state=0;
            break;

            case 8:
            if(rxByte==0x0d)
                state=9;
            else state=0;
            break;

            case 9:
            if(rxByte==0x0A)
                espResponse=ERROR;
            state=0;
            break;


            case 10://fail
            if(rxByte=='A')
                state=11;
            else state=0;
            break;


            case 11:
            if(rxByte=='I')
                state=12;
            else state=0;
            break;


            case 12:
            if(rxByte=='L')
                state=13;
            else state=0;

            break;

            case 13:
            if(rxByte==0x0d)
                state=14;
            else state=0;
            break;

            case 14:
            if(rxByte==0x0A)
                espResponse=FAIL;
            state=0;
            break;


            case 15://READY
            if(rxByte=='e')
                state=16;
            else state=0;
            break;


            case 16:
            if(rxByte=='a')
                state=17;
            else state=0;
            break;

            case 17:
            if(rxByte=='d')
                state=18;
            else state=0;
            break;

            case 18:
            if(rxByte=='y')
                state=19;
            else  state=0;
            break;

            case 19:
            if(rxByte==0x0d)
                state=20;
            else state=0;
            break;

            case 20:
            if(rxByte==0x0A)
                espResponse=READY;
            state=0;
            break;

            case 21:
            if(rxByte==0x20)
                espResponse=READY_TO_WRITE_TCP;
            state=0;

            default:
            state=0;
            break;
        }
    }
    return espResponse;
}

/* Returns length of given string in chars [NOT USED IN THIS VERSION]*/
int lengthOfString(char *str){
	int NOsigns = 0;
	while(str[NOsigns] != '\0'){
		NOsigns++;
	}
	return (NOsigns+1);
}
/*Returns amount of digits in number*/
int get_int_len (int value){
  int l=1;
  while(value>9){ l++; value/=10; }
  return l;
}
void delay(int time)
{
    int i;
    for (i = 0; i < time * 4000; i++) {}
}
void sendUARTmsg(char *msg){
	for(uint8_t i=0; msg[i] != '\0'; i++){
		USART_SendData(USART3, msg[i]);
		delay(20);
	}
}

//schemat polaczeniowy dla wyswietlacza

/*char AdoHchar[8] = {'E', 'E', 'E', 'E', 'E', 'E', 'E', 'B'};
int AdoHint[8] =   { 9,  10,  11,  12,  13,  14,  15,  10};*/
//					 |    |    |    |    |    |    |    |
//   segment:        a    b    c    d    e    f    g    h

/*char segmentChar[4] = {'D', 'D', 'D', 'D'};
int segmentInt[4] =   { 9,  10,  11,  12};*/
//                      |    |    |    |
//   blok segmentowy:   1    2    3    4


int main(void)
{
	setInUp('A', 1);
	setOutPP('E', 1);

	setOutPP('D', 12);
	//setBit('D',12);
	setOutPP('D', 13);
	setOutPP('D', 14);
	setOutPP('D', 15);

	setupTimerUp5(9999,8399,0x00,0x00);
	setupUSART(9600);
	//setupI2C();
	//initializeEspAsServer();
	//resetEspRxBuffer();

	// Rozpoczecie transmisji z uC do czujnika
	//I2C_start(I2C1, MCP9800_ADDRESS, I2C_Direction_Transmitter);
	//I2C_write(I2C1, 0x00); // Podanie rejestru, z ktorego nastapi odczyt
	// Zakonczenie transmisji
	//I2C_stop(I2C1);



	for(;;){
		setBit('D',12);
		setBit('D',13);
		setBit('D',14);
		setBit('D',15);
		HandleHttpRequests();



//		if(!GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1))

//		{
//			setBit('D', 12);
//			resetBit('E', 1);
//		}
//		else
//		{
//			resetBit('D', 12);
//			setBit('E', 1);
//		}

	}

}
