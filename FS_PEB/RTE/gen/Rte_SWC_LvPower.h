/** @file     Rte_SWC_LvPower.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef RTE_SWC_LVPOWER_H
#define RTE_SWC_LVPOWER_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_SWC_LvPower_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_LvPowerSetup_1ms)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_SWC_LvPower {
   uint8 Rte_Dummy;
};
typedef struct Rte_CDS_SWC_LvPower Rte_CDS_SWC_LvPower;
/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_SWC_LvPower, RTE_CONST) Rte_Inst_SWC_LvPower;
#define RTE_STOP_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_SWC_LvPower, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint8, RTE_DATA) Rte_Rx_000081_LvPower_stLowpowerUp;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_LvPowerSetup_1ms)
/* Inline Write optimization; Rte_Write_PP_SWC_LvPower_LvPower_stLowpowerUp to direct write */
#define Rte_Write_PP_SWC_LvPower_LvPower_stLowpowerUp( data ) ( (Rte_Rx_000081_LvPower_stLowpowerUp = data), RTE_E_OK )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define SWC_LvPower_START_SEC_CODE
#include "SWC_LvPower_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SWC_LvPower_CODE) SWC_LvPowerSetup_Task_1ms(void);
#define SWC_LvPower_STOP_SEC_CODE
#include "SWC_LvPower_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_SWC_LVPOWER_H */
