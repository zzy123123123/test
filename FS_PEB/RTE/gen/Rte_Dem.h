/** @file     Rte_Dem.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef RTE_DEM_H
#define RTE_DEM_H

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
#include "Rte_Dem_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_ClearDTC)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#elif defined(RTE_RUNNABLEAPI_ClearPrestoredFreezeFrame)
#elif defined(RTE_RUNNABLEAPI_Dem_GetDTCOfEvent_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_GetEventExtendedDataRecord_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_GetEventFailed_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_GetEventFreezeFrameData_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_GetEventStatus_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_GetEventTested_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_GetFaultDetectionCounter_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_Dem_MainFunction)
#elif defined(RTE_RUNNABLEAPI_GetDTCOfEvent)
#elif defined(RTE_RUNNABLEAPI_GetDebouncingOfEvent)
#elif defined(RTE_RUNNABLEAPI_GetDebouncingOfEvent_GeneralEvtInfo)
#elif defined(RTE_RUNNABLEAPI_GetEventExtendedDataRecord)
#elif defined(RTE_RUNNABLEAPI_GetEventExtendedDataRecordEx)
#elif defined(RTE_RUNNABLEAPI_GetEventFailed)
#elif defined(RTE_RUNNABLEAPI_GetEventFreezeFrameData)
#elif defined(RTE_RUNNABLEAPI_GetEventFreezeFrameDataEx)
#elif defined(RTE_RUNNABLEAPI_GetEventMemoryOverflow)
#elif defined(RTE_RUNNABLEAPI_GetEventStatus)
#elif defined(RTE_RUNNABLEAPI_GetEventTested)
#elif defined(RTE_RUNNABLEAPI_GetFaultDetectionCounter)
#elif defined(RTE_RUNNABLEAPI_GetIndicatorStatus)
#elif defined(RTE_RUNNABLEAPI_GetNumberOfEventMemoryEntries)
#elif defined(RTE_RUNNABLEAPI_GetOperationCycleState)
#elif defined(RTE_RUNNABLEAPI_GetStorageCondition)
#elif defined(RTE_RUNNABLEAPI_PrestoreFreezeFrame)
#elif defined(RTE_RUNNABLEAPI_ResetEventDebounceStatus)
#elif defined(RTE_RUNNABLEAPI_ResetEventStatus)
#elif defined(RTE_RUNNABLEAPI_SetDTCSuppression)
#elif defined(RTE_RUNNABLEAPI_SetEnableCondition)
#elif defined(RTE_RUNNABLEAPI_SetEventAvailable)
#elif defined(RTE_RUNNABLEAPI_SetEventStatus)
#elif defined(RTE_RUNNABLEAPI_SetOperationCycleState)
#elif defined(RTE_RUNNABLEAPI_SetStorageCondition)
#elif defined(RTE_RUNNABLEAPI_SetWIRStatus)
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/

#ifndef RTE_CORE
#define RTE_E_CddIf_DEM_CLEAR_FAILED ((Std_ReturnType)3)
#define RTE_E_CddIf_DEM_CLEAR_MEMORY_ERROR ((Std_ReturnType)6)
#define RTE_E_CddIf_DEM_CLEAR_PENDING ((Std_ReturnType)4)
#define RTE_E_CddIf_DEM_CLEAR_WRONG_DTC ((Std_ReturnType)1)
#define RTE_E_CddIf_DEM_CLEAR_WRONG_DTCORIGIN ((Std_ReturnType)2)
#define RTE_E_DTCSuppression_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_DTCSuppression_E_OK ((Std_ReturnType)0)
#define RTE_E_DcmIf_DEM_CLEAR_BUSY ((Std_ReturnType)5)
#define RTE_E_DcmIf_DEM_CLEAR_FAILED ((Std_ReturnType)3)
#define RTE_E_DcmIf_DEM_CLEAR_MEMORY_ERROR ((Std_ReturnType)6)
#define RTE_E_DcmIf_DEM_CLEAR_PENDING ((Std_ReturnType)4)
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTC ((Std_ReturnType)1)
#define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCORIGIN ((Std_ReturnType)2)
#define RTE_E_DcmIf_E_OK ((Std_ReturnType)0)
#define RTE_E_DiagnosticInfo_DEM_E_NO_DTC_AVAILABLE ((Std_ReturnType)2)
#define RTE_E_DiagnosticInfo_DEM_E_NO_FDC_AVAILABLE ((Std_ReturnType)3)
#define RTE_E_DiagnosticInfo_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_DiagnosticInfo_E_OK ((Std_ReturnType)0)
#define RTE_E_DiagnosticMonitor_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_DiagnosticMonitor_E_OK ((Std_ReturnType)0)
#define RTE_E_EnableCondition_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_EnableCondition_E_OK ((Std_ReturnType)0)
#define RTE_E_EvMemOverflowIndication_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_EvMemOverflowIndication_E_OK ((Std_ReturnType)0)
#define RTE_E_EventAvailable_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_EventAvailable_E_OK ((Std_ReturnType)0)
#define RTE_E_EventStatus_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_EventStatus_E_OK ((Std_ReturnType)0)
#define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE ((Std_ReturnType)2)
#define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_FDC_AVAILABLE ((Std_ReturnType)3)
#define RTE_E_GeneralDiagnosticInfo_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_GeneralDiagnosticInfo_E_OK ((Std_ReturnType)0)
#define RTE_E_OperationCycle_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_OperationCycle_E_OK ((Std_ReturnType)0)
#define RTE_E_StorageCondition_E_NOT_OK ((Std_ReturnType)1)
#define RTE_E_StorageCondition_E_OK ((Std_ReturnType)0)
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_Dem {
   uint8 Rte_Dummy;
};
typedef struct Rte_CDS_Dem Rte_CDS_Dem;
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
extern CONST(struct Rte_CDS_Dem, RTE_CONST) Rte_Inst_Dem;
#define RTE_STOP_SEC_Partition_Core0_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_Dem, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_BusOff1_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_BusOff1_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_BusOff2_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_BusOff2_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_BusOff_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_BusOff_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_MCAL_Status_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_MCAL_Status_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_MCU_Status_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_MCU_Status_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_MPDU_CommStatus_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_MPDU_CommStatus_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_NvM_ReadErr_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_NvM_ReadErr_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_NvM_WriteErr_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_NvM_WriteErr_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_SEN_1_CommStatus_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_SEN_1_CommStatus_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_SEN_CommStatus_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_SEN_CommStatus_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_VCU_DC01_AliveCounter_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_VCU_DC01_AliveCounter_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_VCU_DC01_CheckSum_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_VCU_DC01_CheckSum_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_VCU_DC01_DLC_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_VCU_DC01_DLC_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_Dem_MainFunction)
/* Inline read optimization; Rte_Call_CBStatusComp_DemComponent_VCU_DC01_Tiout_ComponentStatusChanged to direct read */
#define Rte_Call_CBStatusComp_DemComponent_VCU_DC01_Tiout_ComponentStatusChanged( ComponentFailedStatus )  ( ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_UNCONNECTED) )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define Dem_START_SEC_CODE
#include "Dem_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(Std_ReturnType, Dem_CODE) Dem_ClearDTC(VAR(uint32, AUTOMATIC) DTC,
                                            VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat,
                                            VAR(Dem_DTCOriginType, AUTOMATIC) DTCOrigin);
FUNC(Std_ReturnType, Dem_CODE) Dem_ClearPrestoredFreezeFrame(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetDTCOfEvent(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                 VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat,
                                                 CONSTP2VAR(uint32, AUTOMATIC, RTE_APPL_DATA) DTCOfEvent);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetDTCOfEvent_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat,
                                                                CONSTP2VAR(uint32, AUTOMATIC, RTE_APPL_DATA) DTCOfEvent);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetDebouncingOfEvent(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                        CONSTP2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_APPL_DATA) DebouncingState);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetDebouncingOfEvent_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                       CONSTP2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_APPL_DATA) DebouncingState);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventExtendedDataRecordEx(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                                VAR(uint8, AUTOMATIC) RecordNumber,
                                                                CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer,
                                                                CONSTP2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) Bufsize);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventExtendedDataRecordForRTE(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                                    VAR(uint8, AUTOMATIC) RecordNumber,
                                                                    CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventExtendedDataRecord_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                             VAR(uint8, AUTOMATIC) RecordNumber,
                                                                             CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFailed(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                  CONSTP2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventFailed);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFailed_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                 CONSTP2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventFailed);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFreezeFrameDataEx(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                             VAR(uint8, AUTOMATIC) RecordNumber,
                                                             VAR(uint16, AUTOMATIC) DataId,
                                                             CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer,
                                                             CONSTP2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) BufSize);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFreezeFrameDataForRTE(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                                 VAR(uint8, AUTOMATIC) RecordNumber,
                                                                 VAR(boolean, AUTOMATIC) ReportTotalRecord,
                                                                 VAR(uint16, AUTOMATIC) DataId,
                                                                 CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventFreezeFrameData_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                          VAR(uint8, AUTOMATIC) RecordNumber,
                                                                          VAR(boolean, AUTOMATIC) ReportTotalRecord,
                                                                          VAR(uint16, AUTOMATIC) DataId,
                                                                          CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventMemoryOverflow(VAR(Dem_DTCOriginType, AUTOMATIC) Rte_PDAV0,
                                                          CONSTP2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) OverflowIndication);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventStatus(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                  CONSTP2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_APPL_DATA) EventStatusByte);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventStatus_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                 CONSTP2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_APPL_DATA) EventStatusByte);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventTested(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                  CONSTP2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventTested);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetEventTested_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                 CONSTP2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventTested);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetFaultDetectionCounter(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                            CONSTP2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetFaultDetectionCounter_GeneralEvtInfo(VAR(Dem_EventIdType, AUTOMATIC) EventId,
                                                                           CONSTP2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetNumberOfEventMemoryEntries(VAR(Dem_DTCOriginType, AUTOMATIC) Rte_PDAV0,
                                                                 CONSTP2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) NumberOfEventMemoryEntries);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetOperationCycleState(VAR(uint8, AUTOMATIC) Rte_PDAV0,
                                                          CONSTP2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_APPL_DATA) CycleState);
FUNC(Std_ReturnType, Dem_CODE) Dem_GetStorageCondition(VAR(uint8, AUTOMATIC) Rte_PDAV0,
                                                       CONSTP2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) ConditionFulfilled);
FUNC(Std_ReturnType, Dem_CODE) Dem_PrestoreFreezeFrame(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0);
FUNC(Std_ReturnType, Dem_CODE) Dem_ResetEventDebounceStatus(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                            VAR(Dem_DebounceResetStatusType, AUTOMATIC) DebounceResetStatus);
FUNC(Std_ReturnType, Dem_CODE) Dem_ResetEventStatus(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetDTCSuppression(VAR(uint32, AUTOMATIC) DTC,
                                                     VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat,
                                                     VAR(boolean, AUTOMATIC) SuppressionStatus);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetEnableCondition(VAR(uint8, AUTOMATIC) Rte_PDAV0,
                                                      VAR(boolean, AUTOMATIC) ConditionFulfilled);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetEventAvailable(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                     VAR(boolean, AUTOMATIC) AvailableStatus);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetEventStatus(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                  VAR(Dem_EventStatusType, AUTOMATIC) EventStatus);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetOperationCycleState(VAR(uint8, AUTOMATIC) Rte_PDAV0,
                                                          VAR(Dem_OperationCycleStateType, AUTOMATIC) CycleState);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetStorageCondition(VAR(uint8, AUTOMATIC) Rte_PDAV0,
                                                       VAR(boolean, AUTOMATIC) ConditionFulfilled);
FUNC(Std_ReturnType, Dem_CODE) Dem_SetWIRStatus(VAR(Dem_EventIdType, AUTOMATIC) Rte_PDAV0,
                                                VAR(boolean, AUTOMATIC) WIRStatus);
#define Dem_STOP_SEC_CODE
#include "Dem_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_DEM_H */
