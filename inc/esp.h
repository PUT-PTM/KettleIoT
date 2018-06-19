#ifndef ESP_H_
#define ESP_H_


#include "defines.h"
#include "stm32f4xx.h"
#include "stm32f4_discovery.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "termostat.h"


/* ------declarations------ */
int lengthOfString(char *);


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
char alarm[5];
char hold[5];
float temp;
int setting;
float currTemp;
char is_connected[5];
char is_heating[5];
int ESPtimeout;
int ESPtimeout2;

/***************************************/

/**************function declarations*****************/

void setESPIs_Connected(int c);
void setESPHold(char c[]);
void setESPalarm(char c[]);
void setESPTemp(float temper);
void setESPSetting(int sett);
void setESPcurrTemp(float temp);
void setESPIs_heating(int c);
int getESPTimeout();
void setESPTimeout(int l);
int getESPTimeout2();
void setESPTimeout2(int l);
void resetESPtimeouts();


char* codetxt_to_ramtxt(const char* ctxt);

void toggleSettings(char *buff,char *set, char* val);
void composeKettleStatus(char* str);

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

void delay(int time);

#endif /* ESP_H_ */
