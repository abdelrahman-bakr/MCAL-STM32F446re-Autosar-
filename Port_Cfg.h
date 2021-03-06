/******************************************************************************
 *
 * Module: Port driver header file 
 *
 * File Name: Port_Cfg.h
 *
 * Description:  This file contains the pre compiled coonfiguration for port driver .
 *
 * Author: Abdelrahman Bakr 
 *
 *******************************************************************************/

#ifndef PORT_CFG_H_

#define PORT_CFG_H_

#define  PORT_CFG_AR_RELEASE_MAJOR_VERSION		(4U)
#define  PORT_CFG_AR_RELEASE_MINOR_VERSION		(0U)
#define  PORT_CFG_AR_RELEASE_PATCH_VERSION		(3U)

#define PORT_CFG_SW_MAJOR_VERSION			    (1U)
#define PORT_CFG_SW_MINOR_VERSION			    (0U)
#define PORT_CFG_SW_PATCH_VERSION		    	(0U)

#define ALL_PINS_NUM						 	(128U)
#define PORT_PINS_NUM							(16U)

#define PORT_DEV_ERROR_DETECT		  STD_ON
#define PORT_VERSION_INFO_API		  STD_ON
#define PORTSET_PIN_DIRECTION_API STD_ON

#define A_PORT 0
#define B_PORT 1
#define C_PORT 2
#define D_PORT 3
#define E_PORT 4
#define F_PORT 5
#define G_PORT 6
#define H_PORT 7 

#define PA0   0 
#define PA1   1
#define PA2   2
#define PA3   3
#define PA4   4
#define PA5   5
#define PA6   6
#define PA7   7
#define PA8   8 
#define PA9   9
#define PA10  10
#define PA11  11
#define PA12  12
#define PA13  13
#define PA14  14
#define PA15  15

#define PB0   16 
#define PB1   17
#define PB2   18
#define PB3   19
#define PB4   20
#define PB5   21
#define PB6   22
#define PB7   23
#define PB8   24
#define PB9   25
#define PB10  26
#define PB11  27
#define PB12  28
#define PB13  29
#define PB14  30
#define PB15  31

#define PC0   32 
#define PC1   33
#define PC2   34
#define PC3   35
#define PC4   36
#define PC5   37
#define PC6   38
#define PC7   39
#define PC8   40
#define PC9   41
#define PC10  42
#define PC11  43
#define PC12  44
#define PC13  45
#define PC14  46
#define PC15  47

#define PD0   48 
#define PD1   49
#define PD2   50
#define PD3   51
#define PD4   52
#define PD5   53
#define PD6   54
#define PD7   55
#define PD8   56
#define PD9   57
#define PD10  58
#define PD11  59
#define PD12  60
#define PD13  61
#define PD14  62
#define PD15  63 

#define PE0   64 
#define PE1   65
#define PE2   66
#define PE3   67
#define PE4   68
#define PE5   69
#define PE6   70
#define PE7   71
#define PE8   72
#define PE9   73
#define PE10  74
#define PE11  75
#define PE12  76
#define PE13  77
#define PE14  78
#define PE15  79

#define PF0   80 
#define PF1   81
#define PF2   82
#define PF3   83
#define PF4   84
#define PF5   85
#define PF6   86
#define PF7   87
#define PF8   88 
#define PF9   89
#define PF10  90
#define PF11  91
#define PF12  92
#define PF13  93
#define PF14  94
#define PF15  95

#define PG0   96 
#define PG1   97
#define PG2   98
#define PG3   99
#define PG4   100
#define PG5   101
#define PG6   102
#define PG7   103
#define PG8   104
#define PG9   105
#define PG10  106
#define PG11  107
#define PG12  108
#define PG13  109
#define PG14  110
#define PG15  111 

#define PH0   112 
#define PH1   113
#define PH2   114
#define PH3   115
#define PH4   116
#define PH5   117
#define PH6   118
#define PH7   119
#define PH8   120 
#define PH9   121
#define PH10  122
#define PH11  123
#define PH12  124
#define PH13  125
#define PH14  126
#define PH15  127 

/************* configuration of port A ****************/  
#define  Pin0Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA0,A_PORT} 
#define  Pin1Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA1,A_PORT} 
#define  Pin2Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA2,A_PORT} 
#define  Pin3Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA3,A_PORT} 
#define  Pin4Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA4,A_PORT} 
#define  Pin5Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA5,A_PORT} 
#define  Pin6Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA6,A_PORT} 
#define  Pin7Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA7,A_PORT} 
#define  Pin8Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA8,A_PORT} 
#define  Pin9Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA9,A_PORT} 
#define  Pin10Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA10,A_PORT} 
#define  Pin11Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA11,A_PORT} 
#define  Pin12Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA12,A_PORT} 
#define  Pin13Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA13,A_PORT} 
#define  Pin14Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA14,A_PORT} 
#define  Pin15Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PA15,A_PORT}
/*******************************************************/
/************* configuration of port B ****************/  
#define  Pin16Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB0,B_PORT} 
#define  Pin17Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB1,B_PORT} 
#define  Pin18Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB2,B_PORT} 
#define  Pin19Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB3,B_PORT} 
#define  Pin20Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB4,B_PORT} 
#define  Pin21Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB5,B_PORT} 
#define  Pin22Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB6,B_PORT} 
#define  Pin23Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB7,B_PORT} 
#define  Pin24Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB8,B_PORT} 
#define  Pin25Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB9,B_PORT} 
#define  Pin26Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB10,B_PORT} 
#define  Pin27Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB11,B_PORT} 
#define  Pin28Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB12,B_PORT} 
#define  Pin29Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB13,B_PORT} 
#define  Pin30Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB14,B_PORT} 
#define  Pin31Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PB15,B_PORT}
/*******************************************************/

/************* configuration of port C ****************/  
#define  Pin32Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC0,C_PORT} 
#define  Pin33Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC1,C_PORT} 
#define  Pin34Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC2,C_PORT} 
#define  Pin35Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC3,C_PORT} 
#define  Pin36Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC4,C_PORT} 
#define  Pin37Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC5,C_PORT} 
#define  Pin38Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC6,C_PORT} 
#define  Pin39Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC7,C_PORT} 
#define  Pin40Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC8,C_PORT} 
#define  Pin41Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC9,C_PORT} 
#define  Pin42Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC10,C_PORT} 
#define  Pin43Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC11,C_PORT} 
#define  Pin44Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC12,C_PORT} 
#define  Pin45Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC13,C_PORT} 
#define  Pin46Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC14,C_PORT} 
#define  Pin47Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PC15,C_PORT}
/*******************************************************/

/************* configuration of port D ****************/  
#define  Pin48Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD0,D_PORT} 
#define  Pin49Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD1,D_PORT} 
#define  Pin50Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD2,D_PORT} 
#define  Pin51Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD3,D_PORT} 
#define  Pin52Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD4,D_PORT} 
#define  Pin53Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD5,D_PORT} 
#define  Pin54Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD6,D_PORT} 
#define  Pin55Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD7,D_PORT} 
#define  Pin56Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD8,D_PORT} 
#define  Pin57Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD9,D_PORT} 
#define  Pin58Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD10,D_PORT} 
#define  Pin59Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD11,D_PORT} 
#define  Pin60Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD12,D_PORT} 
#define  Pin61Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD13,D_PORT} 
#define  Pin62Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD14,D_PORT} 
#define  Pin63Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PD15,D_PORT}
/*******************************************************/

/************* configuration of port E ****************/  
#define  Pin64Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE0,E_PORT} 
#define  Pin65Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE1,E_PORT} 
#define  Pin66Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE2,E_PORT} 
#define  Pin67Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE3,E_PORT} 
#define  Pin68Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE4,E_PORT} 
#define  Pin69Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE5,E_PORT} 
#define  Pin70Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE6,E_PORT} 
#define  Pin71Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE7,E_PORT} 
#define  Pin72Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE8,E_PORT} 
#define  Pin73Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE9,E_PORT} 
#define  Pin74Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE10,E_PORT} 
#define  Pin75Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE11,E_PORT} 
#define  Pin76Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE12,E_PORT} 
#define  Pin77Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE13,E_PORT} 
#define  Pin78Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE14,E_PORT} 
#define  Pin79Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PE15,E_PORT}
/*******************************************************/

/************* configuration of port F ****************/  
#define  Pin80Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF0,F_PORT} 
#define  Pin81Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF1,F_PORT} 
#define  Pin82Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF2,F_PORT} 
#define  Pin83Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF3,F_PORT} 
#define  Pin84Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF4,F_PORT} 
#define  Pin85Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF5,F_PORT} 
#define  Pin86Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF6,F_PORT} 
#define  Pin87Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF7,F_PORT} 
#define  Pin88Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF8,F_PORT} 
#define  Pin89Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF9,F_PORT} 
#define  Pin90Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF10,F_PORT} 
#define  Pin91Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF11,F_PORT} 
#define  Pin92Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF12,F_PORT} 
#define  Pin93Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF13,F_PORT} 
#define  Pin94Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF14,F_PORT} 
#define  Pin95Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PF15,F_PORT}
/*******************************************************/

/************* configuration of port G ****************/  
#define  Pin96Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG0,G_PORT} 
#define  Pin97Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG1,G_PORT} 
#define  Pin98Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG2,G_PORT} 
#define  Pin99Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG3,G_PORT} 
#define  Pin100Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG4,G_PORT} 
#define  Pin101Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG5,G_PORT} 
#define  Pin102Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG6,G_PORT} 
#define  Pin103Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG7,G_PORT} 
#define  Pin104Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG8,G_PORT} 
#define  Pin105Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG9,G_PORT} 
#define  Pin106Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG10,G_PORT} 
#define  Pin107Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG11,G_PORT} 
#define  Pin108Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG12,G_PORT} 
#define  Pin109Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG13,G_PORT} 
#define  Pin110Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG14,G_PORT} 
#define  Pin111Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PG15,G_PORT}
/*******************************************************/

/************* configuration of port H ****************/  
#define  Pin112Config   {OUTPUT_MODE,PORT_PIN_OUT,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH0,H_PORT} 
#define  Pin113Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH1,H_PORT} 
#define  Pin114Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH2,H_PORT} 
#define  Pin115Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH3,H_PORT} 
#define  Pin116Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH4,H_PORT} 
#define  Pin117Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH5,H_PORT} 
#define  Pin118Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH6,H_PORT} 
#define  Pin119Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH7,H_PORT} 
#define  Pin120Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH8,H_PORT} 
#define  Pin121Config   {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH9,H_PORT} 
#define  Pin122Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH10,H_PORT} 
#define  Pin123Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH11,H_PORT} 
#define  Pin124Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH12,H_PORT} 
#define  Pin125Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH13,H_PORT} 
#define  Pin126Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH14,H_PORT} 
#define  Pin127Config  {INPUT_MODE,PORT_PIN_IN,OUTPUT_PUSH_PULL,LOW_SPEED,NO_PULL_UP_OR_DOWN,CHANGABLE,PH15,H_PORT}
/*******************************************************/

#endif

