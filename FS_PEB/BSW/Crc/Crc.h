/*
***********************************************************************************************************************
* 
* Product Info
* Isolar version: ISOLAR-AB 4.0.2
* Product release version: RTA-BSW 3.1.0
* 
***********************************************************************************************************************
*/



#ifndef CRC_H
#define CRC_H

/*
**********************************************************************************************************************
* Includes
**********************************************************************************************************************
*/
#include "Std_Types.h"             /* AUTOSAR standard type definitions */

#include "Crc_Cfg.h"               /* Configuration file */

#include "Crc_8.h"                 /* CRC8 implementation */
#include "Crc_8h2f.h"              /* CRC8H2f implementation */
#include "Crc_16.h"                /* CRC16 implementation */
#include "Crc_32.h"                /* CRC32 implementation */
#include "Crc_32P4.h"                /* CRC32P4 implementation */
#include "Crc_64.h"                /* CRC64 implementation */

/*
**********************************************************************************************************************
* Defines/Macros
**********************************************************************************************************************
*/
/* Version information parameters */
#define CRC_VENDOR_ID                   6
#define CRC_MODULE_ID                   201
#define CRC_SW_MAJOR_VERSION            2
#define CRC_SW_MINOR_VERSION            0
#define CRC_SW_PATCH_VERSION            0
#define CRC_AR_RELEASE_MAJOR_VERSION    4
#define CRC_AR_RELEASE_MINOR_VERSION    2

/*
**********************************************************************************************************************
* Type definitions
**********************************************************************************************************************
*/


/*
**********************************************************************************************************************
* Variables
**********************************************************************************************************************
*/


/*
**********************************************************************************************************************
* Extern declarations
**********************************************************************************************************************
*/


/*
 **********************************************************************************************************************
 * Prototypes
 **********************************************************************************************************************
*/
#define CRC_START_SEC_CODE
#include "Crc_MemMap.h"
    extern void Crc_GetVersionInfo(Std_VersionInfoType * const VersionInfo);
#define CRC_STOP_SEC_CODE
#include "Crc_MemMap.h"



/* CRC_H */
#endif


