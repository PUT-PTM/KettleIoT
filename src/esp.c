

#include <esp.h>



/*************************************/
/*char alarm[5]="12:00";
char hold[5]="15:15";
float temp=90.2;
int setting=0;
float currTemp=48.5;
char is_connected[5]="true";
char is_heating[5]="false";*/




//all possible get requests listed here
const char get_index[]="GET /index.html";
const char get_root[]="GET / ";
const char get_ustawienia[] = "GET /example.json";
const char set[]="GET /set";

const char index_html[]={"<html><head><title>KettleIoT</title><meta charset=\"UTF-8\"><style>body{background:rgb(11,9,10);color:rgb(255,255,255);text-align:center;margin:20px 0 0 0;min-width:1000px;}.margins{width:900px;display:inline-block;text-align:left;margin:0;}#title{text-align:center;font-family:'Times New Roman',serif;font-size:36px;font-weight:bold;margin-bottom:40px;margin-top:30px;}.container{background:rgb(235,235,235);margin-top:15px;text-align:center;padding:10px;color:rgb(0,0,0);}.container .title{font-size:18px;font-family:'Times New Roman', serif;color:rgb(0,0,0);margin-bottom:5px;}.container div{text-align:center;}.container .save{text-align:right;}#screen{background:rgba(0,0,0,0.9);color:rgb(255,255,255);z-index:100;position:fixed;width:100%;height:100%;top:0;left:0;cursor:pointer;}#screen_text{font-size:26px;margin-top:calc(50vh - 30px);}</style><script src=http://code.jquery.com/jquery.min.js></script><script>function komunikat(tekst){$(\"#screen_text\").html(tekst);$(\"#screen\").show(300);setTimeout(function(){$(\"#screen\").hide(300);}, 2000);}function licztemp(){var el = document.getElementById(\"temperatura\");var el2 = document.getElementById(\"wynik_temp\");var temp = parseFloat(el.value);temp = temp.toFixed(1);el2.innerHTML = temp.toString() + \" &deg;C\";}function loadSettings(){$.getJSON(\"example.json&\",function(json) {$(\"#temperatura\").val(json.temp);licztemp();$(\"#alarm\").val(json.alarm);$(\"#hold\").val(json.hold);if(json.setting===0){$(\"#tryb1\").prop(\"checked\", true);}else{$(\"#tryb2\").prop(\"checked\", true);}setTimeout(function() {intervalSetting();}, 2000); }).error(function() { console.log(\"error: loadSettings\"); });}function intervalSetting(){var a=\"example.json&\";$.ajax({type:\"GET\",dataType:\"json\",url:a,timeout:4000,error: function(xmlhttprequest, textstatus, message){if(textstatus===\"timeout\") {console.log(\"error: intervalSetting\");clearInterval(intervalSetting);}},success:function(c){console.log(\"success\",c);$(\"#curr_temp\").html(c[\"curr_temp\"].toString()+\" &deg;C\");if(c[\"is_connected\"]===true){$(\"#is_connected\").html(\"Czajnik jest podłączony\");$(\"#curr_temp\").show(300);$(\"#is_heating\").show(300);}else{$(\"#is_connected\").html(\"Czajnik jest odłączony\");$(\"#curr_temp\").hide(300);$(\"#is_heating\").hide(300);}if(c[\"is_heating\"]===true){$(\"#is_heating\").html(\"Trwa podgrzewanie\");}else{$(\"#is_heating\").html(\"Woda podgrzana\");}},complete:function(data){console.log(\"complete\",data);setTimeout(intervalSetting,1000);}});}function saveTemp(){var a=\"/set?temp=\"+$(\"#temperatura\").val()+\"&\";$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(xmlhttprequest, textstatus, message){console.log(\"got timeout: saveTemp\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił‚ błąd\");}}});}function saveAlarm(){var a=\"/set?alarm=\";if($(\"#alarm\").val()===\"\"){a+=\"none&\";}else{a+=$(\"#alarm\").val()+\"&\";}$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(){console.log(\"error: saveAlarm\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił‚ błąd\");}}});}function saveHold(){var a=\"/set?hold=\";if($(\"#hold\").val()===\"\"){a+=\"none&\";}else{a+=$(\"#hold\").val()+\"&\";}$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(){console.log(\"error: saveHold\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił‚ błąd\");}}});}function saveSetting(){var a=\"/set?setting=\";if($('input[name=\"tryb_gotowania\"]').prop(\"checked\")){a+=0;}else{a+=1;}a+=\"&\";$.ajax({type:\"GET\",dataType:\"text\",url:a,error: function(){console.log(\"error: saveSetting\");},success:function(c){if(c===\"OK\"){komunikat(\"Zapisano\");}else{komunikat(\"Wystąpił‚ błąd\");}}});}$(document).ready(function () {loadSettings();$(\"#screen\").hide();});</script></head><body><div id=screen onclick=\"$(this).hide(300);\"><div id=screen_text>Czajnik nie jest podłączony</div></div><div class=margins><div id=content><div id=title>KettleIoT</div><div class=container><div class=title>Podtrzymywana temperatura</div><div class=setting><div style=\"width:800px; display:inline-block\"><div style=\"float:left;margin-right:5px;margin-left:3px;\">40</div><input type=\"range\" min=\"40\" max=\"100\" step=\"0.1\" id=temperatura oninput=\"licztemp()\" style=\"float:left;width:calc(100% - 62px);\"><div style=\"float:left;margin-left:5px;\">100</div><div style=\"clear:both;font-size:0;width:0;\">&nbsp;</div></div><div id=wynik_temp></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveTemp()\"></div><script>licztemp();</script></div></div><div class=container><div class=title>Za jaki czas zacząć działać</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=alarm></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveAlarm()\"></div></div></div><div class=container><div class=title>Czas podtrzymywania temperatury</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"time\" id=hold></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveHold()\"></div></div></div><div class=container><div class=title>Tryb gotowania wody</div><div class=setting><div style=\"width:800px; display:inline-block\"><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb1\" id=tryb1><span>Po prostu podtrzymuj temperaturę</span><input type=\"radio\" name=\"tryb_gotowania\" value=\"tryb2\" id=tryb2><span>Najpierw zagotuj, a później podtrzymuj temperaturę</span></div><div class=save><input type=\"submit\" value=\"Zapisz\" onclick=\"saveSetting()\"></div></div></div><div class=container><div class=title>Stan czajnika</div><div class=setting><div style=\"width:800px; display:inline-block\"><div id=curr_temp style=\"font-size:25px;\">Ładowanie...</div><div id=is_connected>Ładowanie...</div><div id=is_heating>Ładowanie...</div></div></div></div></div></div></body></html>"};


/************global variables************/
char reqLineBuff[REQ_LINE_BUFF_SIZE];
unsigned char reqLineBufIndex=0;

char rxBuff[BUFFER_SIZE];
unsigned int bufferIndexPrimary=0;//primary esp rx buffer index, increments when receive new data
unsigned int bufferIndexForIpdSearch=0;//is used to scan +IPD string from received data
unsigned int bufferIndexForResponseSearch=0;//to be used for reading esp responses like ok,error, fail etc

//char ssid[33];
//char password[33];

char espMode=SERVER_MODE;


void setESPIs_Connected(int c)
{
	if(c==0)
	{
		strncpy(is_connected, "false", sizeof("false"));
	}
	else
	{
		strncpy(is_connected, "true", sizeof("true"));
	}
}
int getESPTimeout()
{
	return ESPtimeout;
}
void setESPTimeout(int l)
{
	ESPtimeout = l;
}
int getESPTimeout2()
{
	return ESPtimeout2;
}
void setESPTimeout2(int l)
{
	ESPtimeout2 = l;
}

void setESPalarm(char c[])
{
	if(c[0] != 'n')
	{
		int g1 = (int)c[0]-48;
		int g2 = ((int)c[0]-48);

		int m1 = ((int)c[3]-48)*10;
		int m2 = ((int)c[4]-48);

		int time = ((g1+g2)*60)+m1+m2;
		ESPtimeout = time*60;
	}
	else
	{
		ESPtimeout = -1;
	}

	alarm[0] = c[0];
	alarm[1] = c[1];
	alarm[2] = c[2];
	alarm[3] = c[3];
	alarm[4] = c[4];
}
void setESPHold(char c[])
{
	if(c[0] != 'n')
	{
		int g1 = (int)c[0]-48;
		int g2 = ((int)c[0]-48);

		int m1 = ((int)c[3]-48)*10;
		int m2 = ((int)c[4]-48);

		int time = ((g1+g2)*60)+m1+m2;
		ESPtimeout2 = time*60;
	}
	else
	{
		ESPtimeout2 = -1;
	}

	hold[0] = c[0];
	hold[1] = c[1];
	hold[2] = c[2];
	hold[3] = c[3];
	hold[4] = c[4];
}
void resetESPtimeouts()
{
	setESPHold(hold);
	setESPalarm(alarm);
}
void setESPTemp(float temper)
{
	temp = temper;
}
void setESPSetting(int sett)
{
	setting = sett;
}
void setESPcurrTemp(float temp)
{
	currTemp = temp;
}
void setESPIs_heating(int c)
{
	if(c==0)
	{
		strncpy(is_heating, "false", sizeof("false"));
	}
	else
	{
		strncpy(is_heating, "true", sizeof("true"));
	}
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
void TIM5_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM5, TIM_IT_Update) != RESET)
    {
		// miejsce na kod wywoÂływany w momencie wystÂąpienia przerwania
        TIM_ClearITPendingBit(TIM5, TIM_IT_Update);
    }
}
void setupUSART(uint32_t baud)
{
	// wlaczenie taktowania wybranego portu
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC, ENABLE);
	// wlaczenie taktowania wybranego ukÂładu USART
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);

	// konfiguracja linii Rx i Tx
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10 | GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	// ustawienie funkcji alternatywnej dla pinĂłw (USART)
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource10, GPIO_AF_USART3);
	GPIO_PinAFConfig(GPIOC, GPIO_PinSource11, GPIO_AF_USART3);

	USART_InitTypeDef USART_InitStructure;
	// predkosc transmisji (mozliwe standardowe opcje: 9600, 19200, 38400, 57600, 115200, ...)
	USART_InitStructure.USART_BaudRate = baud;
	// dÂługoÂśĂ¦ sÂłowa (USART_WordLength_8b lub USART_WordLength_9b)
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	// liczba bitĂłw stopu (USART_StopBits_1, USART_StopBits_0_5, USART_StopBits_2, USART_StopBits_1_5)
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	// sprawdzanie parzystoÂści (USART_Parity_No, USART_Parity_Even, USART_Parity_Odd)
	USART_InitStructure.USART_Parity = USART_Parity_No;
	// sprzĂŞtowa kontrola przepÂływu (USART_HardwareFlowControl_None, USART_HardwareFlowControl_RTS, USART_HardwareFlowControl_CTS, USART_HardwareFlowControl_RTS_CTS)
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	// tryb nadawania/odbierania (USART_Mode_Rx, USART_Mode_Rx )
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;

	// konfiguracja
	USART_Init(USART3, &USART_InitStructure);

	//struktura do konfiguracji kontrolera NVIC
	NVIC_InitTypeDef NVIC_InitStructure;
	// wlaczenie przerwania zwiÂązanego z odebraniem danych (pozostale zrodla przerwan zdefiniowane sa w pliku stm32f4xx_usart.h)
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
void USART3_IRQHandler(void){
	uint16_t buff = 0;
	if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET){
		//resetBit('D',15);//debug
		buff = USART3->DR;
		rxBuff[bufferIndexPrimary++] = (char)buff;
		if(bufferIndexPrimary>=BUFFER_SIZE)
			bufferIndexPrimary=0;

	}
}
char* codetxt_to_ramtxt(const char* ctxt){
	static char txt[70];
	char i;
	for(i = 0; txt[i] = ctxt[i]; i++);
	return txt;
}
void toggleSettings(char *buff,char *set, char* val)
{
	if(strcmp(set,codetxt_to_ramtxt("temp"))==0) {
		temp=(float)atof(val);
		ustawNastawe(temp);
		strcpy(buff,"OK");
	}
	else if(strcmp(set,codetxt_to_ramtxt("alarm"))==0) {
		strcpy(alarm,val);
		setESPalarm(alarm);
		strcpy(buff,"OK");
	}
	else if(strcmp(set,codetxt_to_ramtxt("hold"))==0) {
		strcpy(hold,val);
		setESPHold(hold);
		strcpy(buff,"OK");
	}
	else if(strcmp(set,codetxt_to_ramtxt("setting"))==0) {
		setting=(int)atoi(val);
		ustawTryb(setting);
		strcpy(buff,"OK");
	}
}
void resetEspRxBuffer(void)
{
    bufferIndexPrimary=0;
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

	sendUARTmsg("AT+CWJAP=\"H9\",\"adindwatri\"\r\n");
	while(readEspResponse()!=OK);

	sendUARTmsg("AT+CIPSERVER=1,80\r\n");
	while(readEspResponse()!=OK);

	/*sendUARTmsg("AT+CIPSTA=192.168.1.99\r\n");
	while(readEspResponse()!=OK);*/

	setBit('D',12);
}
void processReqLine(char * stringToProcess)
{
    char idField;
    char* token;
    char field[10],value[10];
    char someBuffer[300];
    char tempPinState[2]={0x00};
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
        else if(strncmp(token,codetxt_to_ramtxt(get_ustawienia),strlen(codetxt_to_ramtxt(get_ustawienia)))==0)
        {
        	//GPIO_ToggleBits(GPIOD, GPIO_Pin_13);
        	composeKettleStatus(someBuffer);
        	sendRequestedPageToClient(idField,someBuffer,strlen(someBuffer));
        }
        else if(strncmp(token,codetxt_to_ramtxt(set),strlen(codetxt_to_ramtxt(set)))==0)
        {
        	//+IPD,4,329:GET /set?temp=71.6 HTTP/1.1
        	//+IPD,4,329:GET /ustawienia HTTP/1.1
			extractQueryFieldValue(token,field,value);
        	//GPIO_ToggleBits(GPIOD, GPIO_Pin_13);
        	if(value!=NULL)
        	{
        		toggleSettings(someBuffer,field,value);
        		sendRequestedPageToClient(idField,someBuffer,strlen(someBuffer));
        	}
        }
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
    ptr=strtok(queryStr,"=&");
    if(ptr!=NULL)
    {
        strcpy(field,ptr);
        ptr=strtok(NULL,"=&");
    }
    if(ptr!=NULL)
        strcpy(value,ptr);
}
void composeKettleStatus(char* str)
{
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
        //GPIO_SetBits(GPIOD, GPIO_Pin_12);
        sendUARTmsg(atCommandArray);

        while(1)
        {
        	TIM_Cmd(TIM5,ENABLE);
        	if(TIM_GetFlagStatus(TIM5, TIM_FLAG_Update)) {
        		timer++;
        		if(timer == 3)
        		{
        			//GPIO_ResetBits(GPIOD, GPIO_Pin_12);
        			//GPIO_ResetBits(GPIOD, GPIO_Pin_13);
        			//GPIO_ResetBits(GPIOD, GPIO_Pin_14);
        			//GPIO_ResetBits(GPIOD, GPIO_Pin_15);
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
