/******************************************************************************
 *
 * Module: Port driver header file 
 *
 * File Name: Port.h
 *
 * Description:  This file contains the definitions and macros specified by
 *               AUTOSAR for Port driver.
 *
 * Author: Abdelrahman Bakr 
 *
 *******************************************************************************/

#ifndef PORT_H
#define PORT_H 



#define  PORT_VENDOR_ID					(1000U)
#define  PORT_MODULE_ID					(124U)
#define  PORT_INSTANCE_ID				 (0U) 


#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)


#include "Std_Types.h" 
#if ((PORT_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
	||(PORT_AR_RELEASE_MINOR_VERSION!= STD_TYPES_AR_RELEASE_MINOR_VERSION)\
	||(PORT_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))
	#error "The AR version of Std_Types.h does not match the expected version"
#endif

#include "Port_Cfg.h"
#if ((PORT_AR_RELEASE_MAJOR_VERSION != PORT_CFG_AR_RELEASE_MAJOR_VERSION)\
||(PORT_AR_RELEASE_MINOR_VERSION!= PORT_CFG_AR_RELEASE_MINOR_VERSION)\
||(PORT_AR_RELEASE_PATCH_VERSION != PORT_CFG_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Port_Cfg.h does not match the expected version"
#endif
/* Software Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
#error "The SW version of Port_Cfg.h does not match the expected version"
#endif


// non autosar FILE 
#include "Common_Macros.h"  // MAcros to set and clear bits 
#include "stm32f446xx.h"  // include device registers   

/******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
#define PORT_INIT_SID						 (uint8)0x00 
#define PORT_SET_PIN_DIRECTION_SID			 (uint8)0x01
#define PORT_REFRESH_PORT_DIRECTION_SID       (uint8)0x02 
#define PORT_GET_VERSION_INFO_SID				(uint8)0x03
#define PORT_SET_PIN_MODE_SID					(uint8)0x04

/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
#define  PORT_E_PARAM_PIN				0x0A 
#define  PORT_E_DIRECTION_UNCHANGEABLE  0x0B
#define  PORT_E_PARAM_CONFIG			0x0C
#define	 PORT_E_PARAM_INVALID_MODE		0x0D
#define  PORT_E_MODE_UNCHANGEABLE		0x0E
#define  PORT_E_UNINIT					0x0F
#define  PORT_E_PARAM_POINTER			0x10 



/***************************************************************************/
/******************* TYPES DEFINITION **************************************/
/***************************************************************************/ 


// type for internal pull up or down 
typedef enum{
	 NO_PULL_UP_OR_DOWN = 0x00,
	 PULL_UP            = 0x01,
	 PULL_DOWN          = 0x02 	
	}Port_PinInternalPulling;


typedef enum{
	NOT_CHANGABLE,
	CHANGABLE
}Port_PinDirectionChange;

typedef uint8 Port_PinType ;

typedef enum {
	PORT_PIN_IN ,
	PORT_PIN_OUT
}Port_PinDirectionType;

typedef enum{
	INPUT_MODE              =0x00,
	OUTPUT_MODE             =0x01,
	ALTERNATE_FUNCTION_MODE =0x02,
	ANALOG_MODE             =0x03
}Port_PinModeType ;

typedef enum {
	OUTPUT_PUSH_PULL ,
	OUTPUT_OPEN_DRAIN
}Port_OutputDataTypeType;

typedef enum{
	LOW_SPEED     =0x00,
	MEDIUM_SPEED  =0x01,
	FAST_SPEED    =0x02,
	HIGH_SPEED    =0x03
}Port_PinSpeedType ;

typedef struct{
	
	Port_PinModeType Mode ;
	Port_PinDirectionType Direction ; 
	
	Port_OutputDataTypeType OutputDataType ;
	Port_PinSpeedType       Speed ; 
	Port_PinInternalPulling Pulling ;
	
	Port_PinDirectionChange changeDirection;
	
	
	Port_PinType Pin_Num ;
	uint8 Port_Num ;
	
	}Port_ConfigParam;

typedef struct{
	
	Port_ConfigParam Pins[ALL_PINS_NUM] ;
	
}Port_ConfigType;


// functions prototypes 
void Port_Init(const Port_ConfigType* ConfigPtr);
void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction);
void Port_RefreshPortDirection(void);
void Port_GetVersionInfo(Std_VersionInfoType* versioninfo);
void Port_SetPinMode(Port_PinType Pin,Port_PinModeType Mode);


/***********************************************
Macros to enable the clock for each port 
***********************************************/ 
#define _HAL_RCC_GPIOA_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<0) ) 
#define _HAL_RCC_GPIOB_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<1) ) 
#define _HAL_RCC_GPIOC_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<2) ) 
#define _HAL_RCC_GPIOD_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<3) ) 
#define _HAL_RCC_GPIOE_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<4) ) 
#define _HAL_RCC_GPIOF_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<5) ) 
#define _HAL_RCC_GPIOG_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<6) ) 
#define _HAL_RCC_GPIOH_CLK_ENABLE()  (RCC->AHB1ENR |= (1<<7) ) 



/******************************************************
               extern variables                       
******************************************************/

extern const Port_ConfigType Port_Configuration;




















#endif 
