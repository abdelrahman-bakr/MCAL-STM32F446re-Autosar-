
/******************************************************************************
 *
 * Module: Port driver header file 
 *
 * File Name: main.h
 *
 * Description:  This file contains the a blinking led application to test the PORT and DIO drivers 
 *
 * Author: Abdelrahman Bakr 
 *
 *******************************************************************************/

#include "Port.h"
#include "Dio.h"


void delay(void){
	
	for(uint32 i =0 ; i< 5000 ; i++){
		for(uint32 j = 0 ; j < 100 ; j++){
			
		}
	}
}
int main(void){
	
	Port_Init(&Port_Configuration);  
	Dio_Init(&Dio_Configuration);  
	
	Port_SetPinDirection(PA5,PORT_PIN_OUT); 
	
	while(1){
		
		if(Dio_ReadChannel(DioConf_BUTTON_CHANNEL_ID_INDEX) == STD_LOW){
			Dio_WriteChannel(DioConf_LED_CHANNEL_ID_INDEX,STD_HIGH);
			delay(); 
			Dio_WriteChannel(DioConf_LED_CHANNEL_ID_INDEX,STD_LOW);
			delay() ;
		}
	
	}
}

