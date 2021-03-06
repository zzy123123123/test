/** @file     Rte_SWC_Snapshot.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef RTE_SWC_SNAPSHOT_H
#define RTE_SWC_SNAPSHOT_H

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
#include "Rte_SWC_Snapshot_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_SnapshotRam_FastInfoMainFunction_100us)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
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
struct Rte_CDS_SWC_Snapshot {
   uint8 Rte_Dummy;
};
typedef struct Rte_CDS_SWC_Snapshot Rte_CDS_SWC_Snapshot;
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
extern CONST(struct Rte_CDS_SWC_Snapshot, RTE_CONST) Rte_Inst_SWC_Snapshot;
#define RTE_STOP_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_SWC_Snapshot, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define IoHwAbW_START_SEC_CODE
#include "IoHwAbW_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, IoHwAbW_CODE) IoHwAb_ADC_GetPhyVoltage(VAR(uint8, AUTOMATIC) Channel,
                                                  CONSTP2VAR(float32, AUTOMATIC, RTE_APPL_DATA) RawVoltage);

#define IoHwAbW_STOP_SEC_CODE
#include "IoHwAbW_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(Rte_SelfType_IoHwAbW, RTE_CONST) Rte_Self_CPT_IoHwAbw;
#define RTE_STOP_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint16, RTE_DATA) Rte_Rx_000071_HvMcu_VDD15L_Vol;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000078_HvMcu_uDcLnkHvMcu;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint16, RTE_DATA) Rte_Rx_000148_PhC_iUNoOff;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint16, RTE_DATA) Rte_Rx_000150_PhC_iVNoOff;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint16, RTE_DATA) Rte_Rx_000152_PhC_iWNoOff;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_16
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float32, RTE_DATA) Rte_Rx_000167_Rdc_ArctanAgRtr;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_32
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(uint8, RTE_DATA) Rte_Rx_000178_SCF_stFFAction;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_Partition_Core0_VAR_CLEARED_BOOLEAN
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(boolean, RTE_DATA) Rte_Rx_000224_Snapshot_flgPostDrvDone;
#define RTE_STOP_SEC_Partition_Core0_VAR_CLEARED_BOOLEAN
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline function call optimization; Rte_Call_RP_SWC_IoHwAb_ADC_BSW_UBR_Vol_IoHwAb_ADC_GetPhyVoltage to IoHwAb_ADC_GetPhyVoltage */
#define Rte_Call_RP_SWC_IoHwAb_ADC_BSW_UBR_Vol_IoHwAb_ADC_GetPhyVoltage( Channel, RawVoltage ) ( IoHwAb_ADC_GetPhyVoltage(Channel, RawVoltage), ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )

#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline function call optimization; Rte_Call_RP_SWC_IoHwAb_ADC_BSW_VDD18L_Vol_IoHwAb_ADC_GetPhyVoltage to IoHwAb_ADC_GetPhyVoltage */
#define Rte_Call_RP_SWC_IoHwAb_ADC_BSW_VDD18L_Vol_IoHwAb_ADC_GetPhyVoltage( Channel, RawVoltage ) ( IoHwAb_ADC_GetPhyVoltage(Channel, RawVoltage), ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )

#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline function call optimization; Rte_Call_RP_SWC_IoHwAb_ADC_BSW_VDD5T1_Vol_IoHwAb_ADC_GetPhyVoltage to IoHwAb_ADC_GetPhyVoltage */
#define Rte_Call_RP_SWC_IoHwAb_ADC_BSW_VDD5T1_Vol_IoHwAb_ADC_GetPhyVoltage( Channel, RawVoltage ) ( IoHwAb_ADC_GetPhyVoltage(Channel, RawVoltage), ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )

#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline function call optimization; Rte_Call_RP_SWC_IoHwAb_ADC_BSW_VDD5T2_Vol_IoHwAb_ADC_GetPhyVoltage to IoHwAb_ADC_GetPhyVoltage */
#define Rte_Call_RP_SWC_IoHwAb_ADC_BSW_VDD5T2_Vol_IoHwAb_ADC_GetPhyVoltage( Channel, RawVoltage ) ( IoHwAb_ADC_GetPhyVoltage(Channel, RawVoltage), ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )

#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline read optimization; Rte_Read_RP_SWC_HvMcu_HvMcu_VDD15L_Vol to direct access */
#define Rte_Read_RP_SWC_HvMcu_HvMcu_VDD15L_Vol( data )  ( ((*(data)) = Rte_Rx_000071_HvMcu_VDD15L_Vol),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SnapshotRam_FastInfoMainFunction_100us)
/* Inline read optimization; Rte_Read_RP_SWC_HvMcu_HvMcu_uDcLnkHvMcu to direct access */
#define Rte_Read_RP_SWC_HvMcu_HvMcu_uDcLnkHvMcu( data )  ( ((*(data)) = Rte_Rx_000078_HvMcu_uDcLnkHvMcu),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SnapshotRam_FastInfoMainFunction_100us)
/* Inline read optimization; Rte_Read_RP_SWC_PhC_PhC_iUNoOff to direct access */
#define Rte_Read_RP_SWC_PhC_PhC_iUNoOff( data )  ( ((*(data)) = Rte_Rx_000148_PhC_iUNoOff),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SnapshotRam_FastInfoMainFunction_100us)
/* Inline read optimization; Rte_Read_RP_SWC_PhC_PhC_iVNoOff to direct access */
#define Rte_Read_RP_SWC_PhC_PhC_iVNoOff( data )  ( ((*(data)) = Rte_Rx_000150_PhC_iVNoOff),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SnapshotRam_FastInfoMainFunction_100us)
/* Inline read optimization; Rte_Read_RP_SWC_PhC_PhC_iWNoOff to direct access */
#define Rte_Read_RP_SWC_PhC_PhC_iWNoOff( data )  ( ((*(data)) = Rte_Rx_000152_PhC_iWNoOff),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_SnapshotRam_FastInfoMainFunction_100us)
/* Inline read optimization; Rte_Read_RP_SWC_Rdc_Rdc_ArctanAgRtr to direct access */
#define Rte_Read_RP_SWC_Rdc_Rdc_ArctanAgRtr( data )  ( ((*(data)) = Rte_Rx_000167_Rdc_ArctanAgRtr),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline read optimization; Rte_Read_RP_SWC_SCF_SCF_stFFAction to direct access */
#define Rte_Read_RP_SWC_SCF_SCF_stFFAction( data )  ( ((*(data)) = Rte_Rx_000178_SCF_stFFAction),((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Snapshot_MainFunction_10ms)
/* Inline Write optimization; Rte_Write_PP_SWC_Snapshot_Snapshot_flgPostDrvDone to direct write */
#define Rte_Write_PP_SWC_Snapshot_Snapshot_flgPostDrvDone( data ) ( (Rte_Rx_000224_Snapshot_flgPostDrvDone = data), RTE_E_OK )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define SWC_Snapshot_START_SEC_CODE
#include "SWC_Snapshot_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SWC_Snapshot_CODE) SWC_SnapshotCan_MainFunction_Task_10ms(void);
FUNC(void, SWC_Snapshot_CODE) SWC_SnapshotRam_FastInfoMainFunction_Task_100us(void);
#define SWC_Snapshot_STOP_SEC_CODE
#include "SWC_Snapshot_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_SWC_SNAPSHOT_H */
