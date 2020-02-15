/******************************************************************************
 *
 * Module: Port driver header file 
 *
 * File Name: Port.c
 *
 * Description:  This file contains the implemntations  of APIs  specified by
 *               AUTOSAR for Port driver.
 *
 * Author: Abdelrahman Bakr 
 *
 *******************************************************************************/

 
 #include "Port.h"
 
 #if (PORT_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"
/* AUTOSAR Version checking between Det and PORT Modules */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
|| (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
|| (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Det.h does not match the expected version"
#endif

#endif

STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;
STATIC uint8 Port_Changability[ALL_PINS_NUM] = {NOT_CHANGABLE}   ;
STATIC uint8 Port_Direction[ALL_PINS_NUM]= {PORT_PIN_IN}	;


void Port_Init(const Port_ConfigType* ConfigPtr){
	
	uint8 Error = NO_ERROR ;
	volatile uint32 *ModePtr   ; 
	volatile uint32 *OutputTypePtr   ; 
  volatile uint32 *SpeedPtr ; 
  volatile uint32 *PullingPtr  ;
	 
	
	#if (STD_ON  == PORT_DEV_ERROR_DETECT)
	/* check if the input configuration pointer is not a NULL_PTR */
	if (NULL_PTR == ConfigPtr)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		PORT_E_PARAM_POINTER);
		Error = ERROR ; 
	}
	else{
		}
	#endif	
		
		// enable clock for all ports 
		_HAL_RCC_GPIOA_CLK_ENABLE() ; 
		_HAL_RCC_GPIOB_CLK_ENABLE() ;
		_HAL_RCC_GPIOC_CLK_ENABLE() ; 
		_HAL_RCC_GPIOD_CLK_ENABLE() ;
		_HAL_RCC_GPIOE_CLK_ENABLE() ; 
		_HAL_RCC_GPIOF_CLK_ENABLE() ;
		_HAL_RCC_GPIOG_CLK_ENABLE() ; 
		_HAL_RCC_GPIOH_CLK_ENABLE() ;
		
		for (Port_PinType Pin = 0 ; Pin < ALL_PINS_NUM;Pin++)
	{
		switch(ConfigPtr->Pins[Pin].Port_Num){
			case 0:

				ModePtr       = &(GPIOA->MODER ) ; 
				OutputTypePtr = &(GPIOA->OTYPER) ; 
        SpeedPtr      = &(GPIOA->OSPEEDR)  ; 
        PullingPtr    = &(GPIOA->PUPDR ) ;
	       
			break;
			case 1:
				ModePtr       = &(GPIOB->MODER)  ; 
				OutputTypePtr = &(GPIOB->OTYPER) ; 
        SpeedPtr      = &(GPIOB->OSPEEDR ) ; 
        PullingPtr    = &(GPIOB->PUPDR)  ;
			
			break;
			case 2:
				ModePtr       = &(GPIOC->MODER)  ; 
				OutputTypePtr = &(GPIOC->OTYPER ); 
        SpeedPtr      = &(GPIOC->OSPEEDR ) ; 
        PullingPtr    = &(GPIOC->PUPDR  );
			
			break;
			case 3:
				ModePtr       = &(GPIOD->MODER ) ; 
				OutputTypePtr = &(GPIOD->OTYPER ); 
        SpeedPtr      = &(GPIOD->OSPEEDR ) ; 
        PullingPtr    = &(GPIOD->PUPDR  );
			
			break;
			case 4:
			  ModePtr       = &(GPIOE->MODER ) ; 
				OutputTypePtr = &(GPIOE->OTYPER ); 
        SpeedPtr      = &(GPIOE->OSPEEDR ) ; 
        PullingPtr    = &(GPIOE->PUPDR  );
			break;
			case 5:
			  ModePtr       = &(GPIOF->MODER ) ; 
				OutputTypePtr = &(GPIOF->OTYPER ); 
        SpeedPtr      = &(GPIOF->OSPEEDR ) ; 
        PullingPtr    = &(GPIOF->PUPDR  );
			break;
			case 6:
			  ModePtr       = &(GPIOG->MODER)  ; 
				OutputTypePtr = &(GPIOG->OTYPER) ; 
        SpeedPtr      = &(GPIOG->OSPEEDR)  ; 
        PullingPtr    = &(GPIOG->PUPDR ) ;
			break;
			case 7:
		    ModePtr       = &(GPIOH->MODER ) ; 
				OutputTypePtr = &(GPIOH->OTYPER ); 
        SpeedPtr      = &(GPIOH->OSPEEDR ) ; 
        PullingPtr    = &(GPIOH->PUPDR  );
			break;
			
		}
		if(Error == NO_ERROR){
			
			/********** set Pin Mode for each pin **********/ 
			if( INPUT_MODE == ConfigPtr->Pins[Pin].Mode){
				
				*ModePtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM ) ));
	      *ModePtr   |= (INPUT_MODE << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if(OUTPUT_MODE == ConfigPtr->Pins[Pin].Mode){
				
			  *ModePtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *ModePtr   |= (OUTPUT_MODE << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if (ALTERNATE_FUNCTION_MODE == ConfigPtr->Pins[Pin].Mode){
				
			  *ModePtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *ModePtr   |= (ALTERNATE_FUNCTION_MODE << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if (ANALOG_MODE == ConfigPtr->Pins[Pin].Mode){
				
				*ModePtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *ModePtr   |= (ANALOG_MODE << ( 2 *( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			/***************************************************/
			
			/*********** set output data type (open drain or push pull ) *****/ 
			if( OUTPUT_PUSH_PULL  == ConfigPtr->Pins[Pin].OutputDataType){
				
				CLEAR_BIT(*OutputTypePtr , ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )) ;
				
			}
			else if (OUTPUT_OPEN_DRAIN == ConfigPtr->Pins[Pin].OutputDataType ){
			
				SET_BIT(*OutputTypePtr , ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )) ;
			}
	  /**************************************************************/
			
			/***** set speed of each pin ********************************/ 
			if( LOW_SPEED  == ConfigPtr->Pins[Pin].Speed){
				
			 *SpeedPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	     *SpeedPtr   |= (LOW_SPEED << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if(MEDIUM_SPEED  == ConfigPtr->Pins[Pin].Speed){
				
				*SpeedPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *SpeedPtr   |= (MEDIUM_SPEED << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if(FAST_SPEED  == ConfigPtr->Pins[Pin].Speed){
				
				*SpeedPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *SpeedPtr   |= (FAST_SPEED << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if(HIGH_SPEED  == ConfigPtr->Pins[Pin].Speed){
				
				*SpeedPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *SpeedPtr   |= (HIGH_SPEED << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
				/*******************************************************************/
			
			/****** set pulling up or down or no pulling ************************/ 
			if( NO_PULL_UP_OR_DOWN  == ConfigPtr->Pins[Pin].Pulling){
				
			  *PullingPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *PullingPtr   |= (NO_PULL_UP_OR_DOWN << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if (PULL_UP  == ConfigPtr->Pins[Pin].Pulling){
				
			  *PullingPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *PullingPtr   |= (PULL_UP << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			else if (PULL_DOWN  == ConfigPtr->Pins[Pin].Pulling){
				
			  *PullingPtr   &= ~(0x03 << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
	      *PullingPtr   |= (PULL_DOWN << ( 2 * ( ConfigPtr->Pins[Pin].Pin_Num % PORT_PINS_NUM )));
			}
			/*******************************************************************/ 
			
			/*********array for checking port pin changability *****************/ 
			Port_Changability[Pin]= ConfigPtr->Pins[Pin].changeDirection ;
		 /********************************************************************/
			
			/************ array to save direction of each pin ******************/ 
			Port_Direction[Pin]= ConfigPtr->Pins[Pin].Direction; 
			/*******************************************************************/
		}
	}
		Port_Status = PORT_INITIALIZED ;

}

#if (STD_ON == PORT_VERSION_INFO_API)
void Port_GetVersionInfo(Std_VersionInfoType* versioninfo){
	
	#if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* Check if input pointer is not Null pointer */
	if(NULL_PTR == versioninfo)
	{
		/* Report to DET  */
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
		PORT_GET_VERSION_INFO_SID, PORT_E_PARAM_POINTER);
	}
	else
	#endif
	
	/* Copy the vendor Id */
	versioninfo->vendorID = (uint16)PORT_VENDOR_ID;
	/* Copy the module Id */
	versioninfo->moduleID = (uint16)PORT_MODULE_ID;
	/* Copy Software Major Version */
	versioninfo->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
	/* Copy Software Minor Version */
	versioninfo->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
	/* Copy Software Patch Version */
	versioninfo->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
}

#endif

#if( STD_ON == PORTSET_PIN_DIRECTION_API)
void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction){

	uint8 Error = NO_ERROR ;  
	volatile uint32  *ModePtr ;
	
	#if (PORT_DEV_ERROR_DETECT == STD_ON)
		if (Pin >= ALL_PINS_NUM)
		{
			Det_ReportError(PORT_MODULE_ID,	PORT_INSTANCE_ID,		PORT_SET_PIN_DIRECTION_SID,	PORT_E_PARAM_INVALID_MODE);
			Error = ERROR ;
		}
		else
		{
			// do nothing 
		}
		
		if (Port_Changability[Pin]==NOT_CHANGABLE)
		{
			Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_MODE_UNCHANGEABLE);
			Error = ERROR ;
		} 
		else
		{
			// do nothing 
		}

		if (Port_Status == PORT_NOT_INITIALIZED)
		{
			Det_ReportError(PORT_MODULE_ID,PORT_INSTANCE_ID,PORT_SET_PIN_DIRECTION_SID,PORT_E_UNINIT);
			Error = ERROR ;
		} 
		else
		{
			// do nothing 
		}
#endif
if(Error == NO_ERROR){
	// fin out the pin belongs to which port 
		if( (Pin < 16) ){
			ModePtr = &(GPIOA->MODER );
		}
		else if ((Pin >= 16) && (Pin < 32) ){
			ModePtr = &(GPIOB->MODER );
		}
		else if ((Pin >= 32) && (Pin < 48) ){
			ModePtr = &(GPIOC->MODER) ;
		}
		else if ((Pin >= 48) && (Pin < 64) ){
			ModePtr = &(GPIOD->MODER) ;
		}
		else if ((Pin >= 64) && (Pin < 80) ){
			ModePtr = &(GPIOE->MODER) ;
		}
		else if ((Pin >= 80) && (Pin < 96) ){
			ModePtr = &(GPIOF->MODER) ;
		}
		else if ((Pin >= 96) && (Pin < 112) ){
			ModePtr = &(GPIOG->MODER) ;
		}
		else if ((Pin >= 112) && (Pin < 127) ){
			ModePtr = &(GPIOH->MODER) ;
		}
		
	/*********************************************/
		
  /***** set new direction for the pin *********/ 
		if(Direction == PORT_PIN_IN){
			  *ModePtr   &= ~(0x03 << ( 2 * (Pin%PORT_PINS_NUM) ));
	      *ModePtr   |= (INPUT_MODE << ( 2 * (Pin%PORT_PINS_NUM) ));
		}
		else if (Direction == PORT_PIN_OUT){
			  *ModePtr   &= ~(0x03 << ( 2 * (Pin % PORT_PINS_NUM) ));
	      *ModePtr   |= (OUTPUT_MODE << ( 2 * (Pin % PORT_PINS_NUM) ));
		}
		
		/************************************************/
		
	 
	}
}
#endif 

void Port_RefreshPortDirection(void){
	
	volatile  uint32 *ModePtr ;
	
	/******** Loop on each pin to refresh its direction ******/ 
	for (Port_PinType Pin = 0 ; Pin < ALL_PINS_NUM;Pin++){
		
		// fin out the pin belongs to which port 
		if( (Pin < 16) ){
			ModePtr = &(GPIOA->MODER );
		}
		else if ((Pin >= 16) && (Pin < 32) ){
			ModePtr = &(GPIOB->MODER );
		}
		else if ((Pin >= 32) && (Pin < 48) ){
			ModePtr = &(GPIOC->MODER) ;
		}
		else if ((Pin >= 48) && (Pin < 64) ){
			ModePtr = &(GPIOD->MODER) ;
		}
		else if ((Pin >= 64) && (Pin < 80) ){
			ModePtr = &(GPIOE->MODER) ;
		}
		else if ((Pin >= 80) && (Pin < 96) ){
			ModePtr = &(GPIOF->MODER) ;
		}
		else if ((Pin >= 96) && (Pin < 112) ){
			ModePtr = &(GPIOG->MODER) ;
		}
		else if ((Pin >= 112) && (Pin < 127) ){
			ModePtr = &(GPIOH->MODER) ;
		}
		
		
		/* [SWS_Port_00061] ?The function Port_RefreshPortDirection shall exclude
			 those port pins from refreshing that are configured as ‘pin direction changeable
       during runtime‘.? (SRS_Port_12406)
		*/
		
		// check if the pin direction is changable 
		if (Port_Changability[Pin]== NOT_CHANGABLE){
					switch(Port_Direction[Pin]){
							case PORT_PIN_IN:
									*ModePtr   &= ~(0x03 << ( 2 * (Pin%PORT_PINS_NUM) ));
	                *ModePtr   |= (INPUT_MODE << ( 2 * (Pin%PORT_PINS_NUM) ));
							break;
							case PORT_PIN_OUT:
									*ModePtr   &= ~(0x03 << ( 2 * (Pin%PORT_PINS_NUM) ));
	                *ModePtr   |= (OUTPUT_MODE << ( 2 * (Pin%PORT_PINS_NUM) ));
							break;
			}
		}
		
	}

	
}
	void Port_SetPinMode(Port_PinType Pin,Port_PinModeType Mode){
	
	//todo
}
	
