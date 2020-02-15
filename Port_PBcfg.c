/******************************************************************************
 *
 * Module: Port driver header file 
 *
 * File Name: Port_PBcfg.h
 *
 * Description:  This file contains the post build configuration for the port driver .
 *
 * Author: Abdelrahman Bakr 
 *
 *******************************************************************************/




#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION !=PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif


const Port_ConfigType Port_Configuration = {
	
				       {
								 Pin0Config,Pin1Config,Pin2Config ,Pin3Config ,Pin4Config ,Pin5Config ,Pin6Config ,Pin7Config ,
	               Pin8Config ,Pin9Config ,Pin10Config,Pin11Config,Pin12Config,Pin13Config,Pin14Config,Pin15Config,
	
	              Pin16Config,Pin17Config,Pin18Config,Pin19Config,Pin20Config,Pin21Config,Pin22Config,Pin23Config,
	              Pin24Config,Pin25Config,Pin26Config,Pin27Config,Pin28Config,Pin29Config,Pin30Config,Pin31Config,
	
					    Pin32Config,Pin33Config,Pin34Config,Pin35Config,Pin36Config,Pin37Config,Pin38Config,Pin39Config,
	       	    Pin40Config,Pin41Config,Pin42Config,Pin43Config,Pin44Config,Pin45Config,Pin46Config,Pin47Config,
	
	          Pin48Config,Pin49Config,Pin50Config,Pin51Config,Pin52Config,Pin53Config,Pin54Config,Pin55Config,
		        Pin56Config,Pin57Config,Pin58Config,Pin59Config,Pin60Config,Pin61Config,Pin62Config,Pin63Config,
								 
								 Pin64Config,Pin65Config,Pin66Config,Pin67Config,Pin68Config,Pin69Config,Pin70Config,Pin71Config,
		             Pin72Config,Pin73Config,Pin74Config,Pin75Config,Pin76Config,Pin77Config,Pin78Config,Pin79Config,
								 
								 Pin80Config,Pin81Config,Pin82Config,Pin83Config,Pin84Config,Pin85Config,Pin86Config,Pin87Config,
		             Pin88Config,Pin89Config,Pin90Config,Pin91Config,Pin92Config,Pin93Config,Pin94Config,Pin95Config,
								 
								 Pin96Config,Pin97Config,Pin98Config,Pin99Config,Pin100Config,Pin101Config,Pin102Config,Pin103Config,
		            Pin104Config,Pin105Config,Pin106Config,Pin107Config,Pin108Config,Pin109Config,Pin110Config,Pin111Config,

                 Pin112Config,Pin113Config,Pin114Config,Pin115Config,Pin116Config,Pin117Config,Pin118Config,Pin119Config,
		             Pin120Config,Pin121Config,Pin122Config,Pin123Config,Pin124Config,Pin125Config,Pin126Config,Pin127Config,
							 }
	
};
