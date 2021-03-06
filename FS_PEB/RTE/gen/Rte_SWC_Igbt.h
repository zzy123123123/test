/** @file     Rte_SWC_Igbt.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef RTE_SWC_IGBT_H
#define RTE_SWC_IGBT_H

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
#include "Rte_SWC_Igbt_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_Igbt_Mainfunction_10ms)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_Igbt_StateManagement_1ms)
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
struct Rte_CDS_SWC_Igbt {
   uint8 Rte_Dummy;
};
typedef struct Rte_CDS_SWC_Igbt Rte_CDS_SWC_Igbt;
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
extern CONST(struct Rte_CDS_SWC_Igbt, RTE_CONST) Rte_Inst_SWC_Igbt;
#define RTE_STOP_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_SWC_Igbt, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_BOOLEAN
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(boolean, RTE_DATA) Rte_Rx_000079_Igbt_flgGateDrvRdyHs;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_BOOLEAN
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_BOOLEAN
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(boolean, RTE_DATA) Rte_Rx_000080_Igbt_flgGateDrvRdyLs;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_BOOLEAN
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Igbt_StateManagement_1ms)
/* Inline Write optimization; Rte_Write_PP_SWC_Igbt_Igbt_flgGateDrvRdyHs to direct write */
#define Rte_Write_PP_SWC_Igbt_Igbt_flgGateDrvRdyHs( data ) ( (Rte_Rx_000079_Igbt_flgGateDrvRdyHs = data), RTE_E_OK )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Igbt_StateManagement_1ms)
/* Inline Write optimization; Rte_Write_PP_SWC_Igbt_Igbt_flgGateDrvRdyLs to direct write */
#define Rte_Write_PP_SWC_Igbt_Igbt_flgGateDrvRdyLs( data ) ( (Rte_Rx_000080_Igbt_flgGateDrvRdyLs = data), RTE_E_OK )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define SWC_Igbt_START_SEC_CODE
#include "SWC_Igbt_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SWC_Igbt_CODE) SWC_Igbt_Mainfunction_Task_10ms(void);
FUNC(void, SWC_Igbt_CODE) SWC_StateManagement_Taks_1ms(void);
#define SWC_Igbt_STOP_SEC_CODE
#include "SWC_Igbt_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_SWC_IGBT_H */
