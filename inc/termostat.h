/*
 * termostat.h
 *
 *  Created on: 09.06.2018
 *      Author: m1bor
 */

#ifndef TERMOSTAT_H_
#define TERMOSTAT_H_


#include "defines.h"
//#include "tm_stm32f4_usart.h"
#include "tm_stm32f4_onewire.h"
#include "tm_stm32f4_ds18b20.h"


/* BASIC DEFINITIONS */
char kettle_buff[100];
uint8_t kettle_one_wire_devices;
uint8_t kettle_one_wire_device[8];

TM_OneWire_t KettleOneWire1;


/* */
int kettle_counter;
float kettle_nastawa;
float kettle_temps[60];
int kettle_temps_counter;
int isKettleConnected;
int czyMaDzialac;
float kettle_initTemp;
int najpierwZagotuj;

void ustawNastawe(float nastawa);
void ustawTryb(int tryb);
void setCzyMaDzialac(int i);

void initTermostat();
float getTemperature();
void grzej();
void niegrzej();
void tempLeds(float temp);
void KettleWhile();
void connectKettle();
void setupPWM3ch2(int period, int prescaler);
void setupPWM3ch3(int period, int prescaler);
void setupPWM3ch4(int period, int prescaler);
void waterReadyBEEP(float temp);




#endif /* TERMOSTAT_H_ */
