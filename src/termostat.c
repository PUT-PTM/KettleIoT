/*
 * termostat.c
 *
 *  Created on: 09.06.2018
 *      Author: m1bor
 */
#include "termostat.h"
#include "esp.h"
//#include "tm_stm32f4_usart.h"
#include "tm_stm32f4_onewire.h"
#include "tm_stm32f4_ds18b20.h"

void ustawNastawe(float nastawa)
{
	kettle_nastawa = nastawa;
}


void ustawTryb(int tryb)
{
	najpierwZagotuj = tryb;
}

void setCzyMaDzialac(int i)
{
	czyMaDzialac = i;
}



void initTermostat()
{
	/* Initialize USART, TX: PB6, RX: PB7 */
	//TM_USART_Init(USART1, TM_USART_PinsPack_2, 115200);
	//TM_USART_Puts(USART1, "\n\n Ladowanie termostatu...\n");

	/* Initialize OneWire on pin PD0 */
	TM_OneWire_Init(&KettleOneWire1, GPIOD, GPIO_Pin_0);

	//TM_USART_Puts(USART1, "Modul OneWire zainicjowany.\n");



	/* ONE WIRE */

	/* Checks for any device on 1-wire */
	kettle_one_wire_devices = TM_OneWire_First(&KettleOneWire1);

	while (kettle_one_wire_devices) {
		/* Get full ROM value, 8 bytes, give location of first byte where to save */
		TM_OneWire_GetFullROM(&KettleOneWire1, kettle_one_wire_device);
		kettle_one_wire_devices = TM_OneWire_Next(&KettleOneWire1);
	}

	//TM_USART_Puts(USART1, "OneWire adres: ");

	/*for (int i = 0; i < 8; i++) {
		sprintf(kettle_buff, "0x%02X ", kettle_one_wire_device[i]);
		TM_USART_Puts(USART1, kettle_buff);
	}
	TM_USART_Puts(USART1, "\n");*/

	/* setup resolution to onewire device */
	TM_DS18B20_SetResolution(&KettleOneWire1, kettle_one_wire_device, TM_DS18B20_Resolution_9bits);



	/* GPIO RELAY */

	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOE, &GPIO_InitStructure);


	/* VARS */
	kettle_counter = 0;
	kettle_nastawa = 50;
	isKettleConnected = 0;
	kettle_temps_counter = 0;
	czyMaDzialac = 1;
	najpierwZagotuj = 0;

	/* TIMERS */
	setupPWM3ch2(99, 839);
	setupPWM3ch3(99, 839);
	setupPWM3ch4(99, 839);

	/*LEDS */
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);

	GPIO_InitTypeDef  GPIO_InitStructure2;

	GPIO_PinAFConfig(GPIOC, GPIO_PinSource7, GPIO_AF_TIM3);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource8, GPIO_AF_TIM3);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource9, GPIO_AF_TIM3);
	GPIO_InitStructure2.GPIO_Pin = GPIO_Pin_7 |  GPIO_Pin_8|  GPIO_Pin_9;
	GPIO_InitStructure2.GPIO_Mode = GPIO_Mode_AF;
	GPIO_Init(GPIOC, &GPIO_InitStructure2);


	/* BEEP'ER */
	GPIO_InitTypeDef  GPIO_InitStructure3;
	GPIO_InitStructure3.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStructure3.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure3.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure3.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure3.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOE, &GPIO_InitStructure3);
	GPIO_ResetBits(GPIOE, GPIO_Pin_2);

	/* ESP */
	setESPIs_heating(0);
	setESPSetting(0);
	setESPHold("00:10");
	setESPalarm("00:02");
}

void connectKettle()
{
	/* ONE WIRE */

	/* Checks for any device on 1-wire */
	kettle_one_wire_devices = TM_OneWire_First(&KettleOneWire1);

	while (kettle_one_wire_devices) {
		/* Get full ROM value, 8 bytes, give location of first byte where to save */
		TM_OneWire_GetFullROM(&KettleOneWire1, kettle_one_wire_device);
		kettle_one_wire_devices = TM_OneWire_Next(&KettleOneWire1);
	}

	/*TM_USART_Puts(USART1, "OneWire adres: ");

	for (int i = 0; i < 8; i++) {
		sprintf(kettle_buff, "0x%02X ", kettle_one_wire_device[i]);
		TM_USART_Puts(USART1, kettle_buff);
	}
	TM_USART_Puts(USART1, "\n");*/

	/* setup resolution to onewire device */
	TM_DS18B20_SetResolution(&KettleOneWire1, kettle_one_wire_device, TM_DS18B20_Resolution_9bits);
}
float getTemperature()
{
	float temp;

	/* Start temperature conversion on all devices on one bus */
	TM_DS18B20_StartAll(&KettleOneWire1);

	/* Wait until all are done on one onewire port */
	while (!TM_DS18B20_AllDone(&KettleOneWire1));

	/* Read temperature from ROM address and store it to temps variable */
	if (TM_DS18B20_Read(&KettleOneWire1, kettle_one_wire_device, &temp)) {
		if(isKettleConnected == 0)
		{
			kettle_initTemp = temp;
			resetESPtimeouts();
		}
		isKettleConnected = 1;
	} else {
		/* Reading error */
		//TM_USART_Puts(USART1, "Reading error;\n");
		temp = -200;
		kettle_initTemp = -200;

		isKettleConnected = 0;
	}

	//sprintf(kettle_buff, "Init: %3.5f \n",kettle_initTemp);
	//TM_USART_Puts(USART1, kettle_buff);

	/* Some delay */
	Delayms(100);

	return temp;
}
void grzej()
{
	if(kettle_counter = 5)
	{
		GPIO_ResetBits(GPIOE, GPIO_Pin_1);
	}
	if(kettle_counter < 5)
	{
		kettle_counter++;
	}
}
void niegrzej()
{
	if(kettle_counter = -5)
	{
		GPIO_SetBits(GPIOE, GPIO_Pin_1);
	}
	if(kettle_counter > -5)
	{
		kettle_counter--;
	}
}
void tempLeds(float temp)
{
	if(isKettleConnected == 1)
	{
		if(najpierwZagotuj == 1)
		{
			TIM3->CCR2 = 0; //blue
			TIM3->CCR3 = 1000; //red
			TIM3->CCR4 = 0; //green
			setESPIs_heating(1);
		}
		else
		{
			if(kettle_nastawa - temp > 23)
			{
				TIM3->CCR2 = 0; //blue
				TIM3->CCR3 = 1000; //red
				TIM3->CCR4 = 0; //green
				setESPIs_heating(1);
			}
			else if((kettle_nastawa - temp <= 23) && (kettle_nastawa - temp >= 13))
			{
				TIM3->CCR2 = 0; //blue
				TIM3->CCR3 = 1000; //red
				TIM3->CCR4 = 2300 - ((kettle_nastawa - temp) * 100); //green
				setESPIs_heating(1);
			}
			else if((kettle_nastawa - temp < 13) && (kettle_nastawa - temp >= 3))
			{
				TIM3->CCR2 = 0; //blue
				TIM3->CCR3 = ((kettle_nastawa - temp) * 100) - 300; //red
				TIM3->CCR4 = 1000; //green
				setESPIs_heating(1);
			}
			else if((kettle_nastawa - temp >= -3) && (kettle_nastawa - temp < 3 ))
			{
				TIM3->CCR2 = 0; //blue
				TIM3->CCR3 = 0; //red
				TIM3->CCR4 = 1000; //green
				setESPIs_heating(0);
			}
			else
			{
				TIM3->CCR2 = 0; //blue
				TIM3->CCR3 = ((kettle_nastawa - temp) * 100) * (-1); //red
				TIM3->CCR4 = 1000; //green
				setESPIs_heating(1);
			}
		}
	}
	else
	{
		TIM3->CCR2 = 1000; //blue
		TIM3->CCR3 = 0; //red
		TIM3->CCR4 = 0; //green
	}
}
void waterReadyBEEP(float temp)
{
	if((kettle_nastawa - kettle_initTemp > 5) && (isKettleConnected == 1) && (kettle_initTemp != -200))
	{
		if(((temp + 1.5) >  kettle_nastawa) && ((temp - 1.5) <=  kettle_nastawa))
		{
			GPIO_SetBits(GPIOE, GPIO_Pin_2);
			Delayms(200);
			GPIO_ResetBits(GPIOE, GPIO_Pin_2);
			Delayms(200);
			GPIO_SetBits(GPIOE, GPIO_Pin_2);
			Delayms(200);
			GPIO_ResetBits(GPIOE, GPIO_Pin_2);
			Delayms(200);
			GPIO_SetBits(GPIOE, GPIO_Pin_2);
			Delayms(200);
			GPIO_ResetBits(GPIOE, GPIO_Pin_2);
			kettle_initTemp = -200;
		}
	}
}
void KettleWhile()
{
	float temperatura = getTemperature();

	//sprintf(kettle_buff, "Temperatura: %3.5f \n",temperatura);
	//TM_USART_Puts(USART1, kettle_buff);

	/* ESP */
	setESPIs_Connected(isKettleConnected);
	setESPcurrTemp(temperatura);
	setESPTemp(kettle_nastawa);
	setESPSetting(najpierwZagotuj);

	if(isKettleConnected == 1)
	{
		/* NAJPIERW ZAGOTUJ */
		if(najpierwZagotuj == 1)
		{
			if(temperatura <= 96)
			{
				grzej();
				kettle_initTemp = 20;
			}
			else
			{
				niegrzej();
				najpierwZagotuj = 0;
			}
		}
		else
		{
			/* tablica temperatur */
			if(kettle_temps_counter <= 50)
			{
				kettle_temps[kettle_temps_counter - 1] = temperatura;
				kettle_temps_counter++;
			}
			else
			{
				for(int x = 1; x <= 49; x++)
				{
					kettle_temps[x - 1] = kettle_temps[x];
				}
				kettle_temps[49] = temperatura;
			}


			float roznica = kettle_temps[kettle_temps_counter - 2] - kettle_temps[0];
			//sprintf(kettle_buff, "Roznica: %3.5f \n",roznica);
			//TM_USART_Puts(USART1, kettle_buff);


			if((((temperatura <= (kettle_nastawa - (2*roznica) - 1)) && (roznica>0) ) || ((kettle_nastawa-temperatura) > 18) || ((roznica<=0) && temperatura <= kettle_nastawa - 3)) && (czyMaDzialac == 1))
			{
				grzej();
				//setESPIs_heating(1);
			}
			else
			{
				niegrzej();
			}

			//BEEP
			waterReadyBEEP(temperatura);
		}
	}
	else
	{
		connectKettle();
	}


	//LEDY
	tempLeds(temperatura);
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

	TIM3->CCR2 = 0;

	TIM_Cmd(TIM3, ENABLE);
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

	TIM3->CCR3 = 0;

	TIM_Cmd(TIM3, ENABLE);
}
void setupPWM3ch4(int period, int prescaler)
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
	TIM_OC4Init(TIM3, &TIM_OC);
	TIM_OC4PreloadConfig(TIM3, TIM_OCPreload_Enable);

	TIM_Cmd(TIM3, ENABLE);

	TIM3->CCR4 = 0;
}
