#include "stm32f4xx.h"
#include "defines.h"
#include "tm_stm32f4_delay.h"
#include "tm_stm32f4_onewire.h"
//#include "tm_stm32f4_usart.h"
#include "tm_stm32f4_ds18b20.h"
#include "tm_stm32f4_rtc.h"
#include "termostat.h"
#include "esp.h"
#include <stdio.h>
#include <math.h>



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







/*
 *
 *
 *
 * 				RTC
 *
 *
 *
 */

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
char buf[50], buf2[50];
TM_RTC_Time_t datatime;

void TM_RTC_RequestHandler() {

	int t1 = getESPTimeout(); //alarm
	int t2 = getESPTimeout2(); //hold

	if(t1>=0 && t2>=0)
	{
		//najpierw zjedz do alarmu, poxniej zjedz hold
		if(t1 == 0)
		{
			setESPTimeout(t1-10);
			setCzyMaDzialac(1);
		}
		else
		{
			setESPTimeout(t1-1);
			setCzyMaDzialac(0);
		}
	}
	else if(t2>=0 && t1<0)
	{
		if(t2 == 0)
		{
			setESPTimeout2(t2-10);
			setCzyMaDzialac(0);
		}
		else
		{
			setESPTimeout2(t2-1);
			setCzyMaDzialac(1);
		}
	}
	else if(t1>=0 && t2<0)
	{
		if(t1 == 0)
		{
			setESPTimeout(t1-1);
			setCzyMaDzialac(1);
		}
		else
		{
			setESPTimeout(t1-1);
			setCzyMaDzialac(0);
		}
	}
	else if(t2==-1 && t1==-1)
	{
		setCzyMaDzialac(1);
	}
	else if(t2<-1 && t1 < 0)
	{
		setCzyMaDzialac(0);
	}

}
void TM_RTC_AlarmAHandler(void) {

}

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
 *
 *
 *
 * 				RTC
 *
 *
 *
 */

















int main(void) {
	/* Initialize system */
	SystemInit();

	/* Initialize delay */
	TM_DELAY_Init();

	/* ESP */
	setupTimerUp5(9999,8399,0x00,0x00);
	setupUSART(9600);
	initializeEspAsServer();
	resetEspRxBuffer();

	/* TERMOSTAT */
	initTermostat();

	setOutPP('D', 12);



/*
 *
 *
 *
 * 				RTC
 *
 *
 *
 */

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

	if (!TM_RTC_Init(TM_RTC_ClockSource_Internal)) {
		/* RTC was first time initialized */
		/* Do your stuff here */
		/* eg. set default time */
	}

	TM_RTC_Interrupts(TM_RTC_Int_1s);

	datatime.hours = 0;
	datatime.minutes = 59;
	datatime.seconds = 55;
	datatime.year = 14;
	datatime.month = 6;
	datatime.date = 30;
	datatime.day = 1;

	TM_RTC_SetDateTime(&datatime, TM_RTC_Format_BIN);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

/*
 *
 *
 *
 * 				RTC
 *
 *
 *
 */








	while (1) {
		HandleHttpRequests();
		KettleWhile();
	}
}
