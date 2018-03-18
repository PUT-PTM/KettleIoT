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
#include "stm32f4_discovery.h"
#include "math.h"


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

	TIM_Cmd(TIM5, ENABLE);
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
	//inicjalizacja wejœcia ADC
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
	//ustawienie rozdzielczoœci przetwornika na maksymaln¹ (12 bitów)
	ADC_InitStructure.ADC_Resolution = ADC_Resolution_12b;
	//wy³¹czenie trybu skanowania (odczytywaæ bêdziemy jedno wejœcie ADC
	//w trybie skanowania automatycznie wykonywana jest konwersja na wielu //wejœciach/kana³ach)
	ADC_InitStructure.ADC_ScanConvMode = DISABLE;
	//w³¹czenie ci¹g³ego trybu pracy
	ADC_InitStructure.ADC_ContinuousConvMode = ENABLE;
	//wy³¹czenie zewnêtrznego wyzwalania
	//konwersja mo¿e byæ wyzwalana timerem, stanem wejœcia itd. (szczegó³y w //dokumentacji)
	ADC_InitStructure.ADC_ExternalTrigConv = ADC_ExternalTrigConv_T1_CC1;
	ADC_InitStructure.ADC_ExternalTrigConvEdge = ADC_ExternalTrigConvEdge_None;
	//wartoœæ binarna wyniku bêdzie podawana z wyrównaniem do prawej
	//funkcja do odczytu stanu przetwornika ADC zwraca wartoœæ 16-bitow¹
	//dla przyk³adu, wartoœæ 0xFF wyrównana w prawo to 0x00FF, w lewo 0x0FF0
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

	//W nastêpnej kolejnoœci nale¿y skonfigurowaæ wybrany kana³ ADC:
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
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA , ENABLE); // zegar dla portu GPIO z którego wykorzystany zostanie pin jako wyjœcie DAC (PA4)
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_DAC, ENABLE); // zegar dla modu³u DAC

	GPIO_InitTypeDef GPIO_InitStructure;
	//inicjalizacja wyjœcia DAC
	GPIO_InitStructure.GPIO_Pin = PinSource;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(PortSource, &GPIO_InitStructure);

	DAC_InitTypeDef DAC_InitStructure;
	//wy³¹czenie zewnêtrznego wyzwalania
	//konwersja mo¿e byæ wyzwalana timerem, stanem wejœcia itd. (szczegó³y w dokumentacji)
	DAC_InitStructure.DAC_Trigger = DAC_Trigger_None;
	//nast. 2 linie - wy³¹czamy generator predefiniowanych przebiegów //wyjœciowych (wartoœci zadajemy sami, za pomoc¹ odpowiedniej funkcji)
	DAC_InitStructure.DAC_WaveGeneration = DAC_WaveGeneration_None;
	DAC_InitStructure.DAC_LFSRUnmask_TriangleAmplitude = DAC_LFSRUnmask_Bit0;
	//w³¹czamy buforowanie sygna³u wyjœciowego
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

void setupUSART()
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
	USART_InitStructure.USART_BaudRate = 9600;
	// d³ugoœæ s³owa (USART_WordLength_8b lub USART_WordLength_9b)
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	// liczba bitów stopu (USART_StopBits_1, USART_StopBits_0_5, USART_StopBits_2, USART_StopBits_1_5)
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	// sprawdzanie parzystoœci (USART_Parity_No, USART_Parity_Even, USART_Parity_Odd)
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
void USART3_IRQHandler(void)
{

	//czekaj na opró¿nienie bufora wyjœciowego
	while(USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET);
	// wyslanie danych
	USART_SendData(USART3, 'A');
	// czekaj az dane zostana wyslane
	while (USART_GetFlagStatus(USART3, USART_FLAG_TC) == RESET);


	if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET)
    {
		// odebrany bajt znajduje sie w rejestrze USART3->DR
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

	for(;;){

		if(!GPIO_ReadInputDataBit(GPIOA, GPIO_Pin_1))
		{
			setBit('D', 12);
			resetBit('E', 1);
		}
		else
		{
			resetBit('D', 12);
			setBit('E', 1);
		}

	}

}



