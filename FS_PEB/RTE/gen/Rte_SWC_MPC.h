/** @file     Rte_SWC_MPC.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef RTE_SWC_MPC_H
#define RTE_SWC_MPC_H

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
#include "Rte_SWC_MPC_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_SWC_MPC_Init)
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
struct Rte_CDS_SWC_MPC {
   uint8 Rte_Dummy;
};
typedef struct Rte_CDS_SWC_MPC Rte_CDS_SWC_MPC;
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
extern CONST(struct Rte_CDS_SWC_MPC, RTE_CONST) Rte_Inst_SWC_MPC;
#define RTE_STOP_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_SWC_MPC, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define RTE_SWC_MPC_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_Is(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_VoltModuRate(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_idDes(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_iqDes(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_isd(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_isq(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_uDcLnk(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_udDes(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_uqDes(CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_CofRandomPwm(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Ld(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_LdSubLq(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Lq(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_OmBw(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Psi(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Rs(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Rv(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_TrqMechFlt(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_dtCorFac(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_frqPwmVF(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_isdFF(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_isdMTPA(VAR(float32, AUTOMATIC) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_isdMTPV(VAR(float32, AUTOMATIC) data);
#define RTE_SWC_MPC_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000048_HSPF_nSlowFlt;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000065_HSPF_tStrrTempFlt;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000111_MPC_IsFlt;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000123_MPC_TrqMech;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000129_MPC_isdFlt;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000132_MPC_isqFlt;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000226_TDC_TrqDes;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint8, RTE_DATA) Rte_Rx_000244_TPC_stMotorMod;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline read optimization; Rte_Read_RP_SWC_HSPF_HSPF_nSlowFlt to direct access */
#define Rte_Read_RP_SWC_HSPF_HSPF_nSlowFlt( data )  ( ((*(data)) = Rte_Rx_000048_HSPF_nSlowFlt),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline read optimization; Rte_Read_RP_SWC_HSPF_HSPF_tStrrTempFlt to direct access */
#define Rte_Read_RP_SWC_HSPF_HSPF_tStrrTempFlt( data )  ( ((*(data)) = Rte_Rx_000065_HSPF_tStrrTempFlt),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_Is( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_Is(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_VoltModuRate( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_VoltModuRate(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_idDes( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_idDes(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_iqDes( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_iqDes(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_isd( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_isd(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_isq( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_isq(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_uDcLnk( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_uDcLnk(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_udDes( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_udDes(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Read_RP_SWC_MCF_MCF_uqDes( data ) (Rte_Read_SWC_MPC_RP_SWC_MCF_MCF_uqDes(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline read optimization; Rte_Read_RP_SWC_TDC_TDC_TrqDes to direct access */
#define Rte_Read_RP_SWC_TDC_TDC_TrqDes( data )  ( ((*(data)) = Rte_Rx_000226_TDC_TrqDes),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline read optimization; Rte_Read_RP_SWC_TPC_TPC_stMotorMod to direct access */
#define Rte_Read_RP_SWC_TPC_TPC_stMotorMod( data )  ( ((*(data)) = Rte_Rx_000244_TPC_stMotorMod),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_CofRandomPwm( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_CofRandomPwm(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline Write optimization; Rte_Write_PP_SWC_MPC_MPC_IsFlt to direct write */
#define Rte_Write_PP_SWC_MPC_MPC_IsFlt( data ) ( (Rte_Rx_000111_MPC_IsFlt = data), RTE_E_OK )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_Ld( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Ld(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_LdSubLq( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_LdSubLq(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_Lq( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Lq(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_OmBw( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_OmBw(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_Psi( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Psi(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_Rs( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Rs(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_Rv( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_Rv(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline Write optimization; Rte_Write_PP_SWC_MPC_MPC_TrqMech to direct write */
#define Rte_Write_PP_SWC_MPC_MPC_TrqMech( data ) ( (Rte_Rx_000123_MPC_TrqMech = data), RTE_E_OK )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_TrqMechFlt( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_TrqMechFlt(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_dtCorFac( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_dtCorFac(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_frqPwmVF( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_frqPwmVF(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_isdFF( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_isdFF(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline Write optimization; Rte_Write_PP_SWC_MPC_MPC_isdFlt to direct write */
#define Rte_Write_PP_SWC_MPC_MPC_isdFlt( data ) ( (Rte_Rx_000129_MPC_isdFlt = data), RTE_E_OK )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_isdMTPA( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_isdMTPA(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
#define Rte_Write_PP_SWC_MPC_MPC_isdMTPV( data ) (Rte_Write_SWC_MPC_PP_SWC_MPC_MPC_isdMTPV(data))
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SWC_MPC_2ms)
/* Inline Write optimization; Rte_Write_PP_SWC_MPC_MPC_isqFlt to direct write */
#define Rte_Write_PP_SWC_MPC_MPC_isqFlt( data ) ( (Rte_Rx_000132_MPC_isqFlt = data), RTE_E_OK )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define SWC_MPC_START_SEC_CODE
#include "SWC_MPC_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SWC_MPC_CODE) SWC_MPC_2ms(void);
FUNC(void, SWC_MPC_CODE) SWC_MPC_Init(void);
#define SWC_MPC_STOP_SEC_CODE
#include "SWC_MPC_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_SWC_MPC_H */
