/** @file     SchM_CanSM.h
  *
  * @brief    Basic Software Scheduler Module Interlink header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef SchM_CanSM
#define SchM_CanSM

#include "SchM_CanSM_Type.h"
#include "Rte_Intl.h"
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_BSWSE_MainFunction)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/* API Mapping Macros */
#ifndef RTE_CORE

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Schedulable Entity Prototypes
 ***
 *******************************************************/

#define CANSM_START_SEC_CODE
#include "CanSM_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, CANSM_CODE) CanSM_MainFunction(void);
#define CANSM_STOP_SEC_CODE
#include "CanSM_MemMap.h" /*lint !e537 permit multiple inclusion */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !SchM_CanSM */
