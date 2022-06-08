/*******************************************************************************
**----------------------------------------------------------------------------**
** Copyright (c) 2018 by JEE.		All rights reserved.
** This software is copyright protected and proprietary to JEE.
** JEE grants to you only those rights as set out in the license conditions.
** All other rights remain with JEE.
**----------------------------------------------------------------------------**
**
* Administrative Information
* $Namespace_: \ArCfg\IOHWAB$
* $Class_____: C$
* $Name______: IOHWAB_PWM.h$
* $Variant___: 0.0.0$
* $Revision__: 0$
* $Author____: xuwenliao$
**
**----------------------------------------------------------------------------**
** MAY BE CHANGED BY USER [Yes/No]: YES
**----------------------------------------------------------------------------**
** DESCRIPTION:

**----------------------------------------------------------------------------**
** HISTORY:
V1.0.0:

*******************************************************************************/

#ifndef ARCFG_IOHWAB_API_IOHWAB_PWM_H_
#define ARCFG_IOHWAB_API_IOHWAB_PWM_H_

/*******************************************************************************
**                      Other Header File Inclusion                           **
*******************************************************************************/

/*******************************************************************************
**                          Macro Definition                         		  **
*******************************************************************************/

/*******************************************************************************
**                          Typedef Definition                         		  **
*******************************************************************************/

/*******************************************************************************
**                   Static Local Variables Definition              		  **
*******************************************************************************/

/*******************************************************************************
**                     Global Variables Definition              		      **
*******************************************************************************/

/*******************************************************************************
**                  Static Local Function Declaration            		      **
*******************************************************************************/

/*******************************************************************************
**                 		  Function Source Code            		              **
*******************************************************************************/

/*******************************************************************************
** Function Name	: IoHwAb_PWM_StartGenerat
** Parameter[in] 	: void
** Parameter[out] 	: void
** Return Value	  	: None
** Note	  			: None
** Description	  	: PWM module Initial
*******************************************************************************/
extern void IoHwAb_PWM_StartGenerat(void);

/*******************************************************************************
** Function Name	: IoHwAb_SZTKT_PWM_StartGenerat
** Parameter[in] 	: void
** Parameter[out] 	: void
** Return Value	  	: None
** Note	  			: None
** Description	  	: PWM module Initial
*******************************************************************************/
extern void IoHwAb_SZTKT_PWM_StartGenerat(void);

#endif /* ARCFG_IOHWAB_API_IOHWAB_PWM_H_ */
