/** @file     Rte_Const.h
  *
  * @brief    RTA-RTE related configuration constants
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.6.0 
  */

#ifndef RTE_CONST_H
#define RTE_CONST_H

#define OSENV_RTAOS40                                                  (1)
#define RTE_CALPRM_NONE                                                (1)
#define RTE_COMPATIBILITY_MODE                                         (1)
#define RTE_MAINFUNCTION_PERIOD_MS                                     (10)
#define RTE_MAINFUNCTION_PERIOD_NS                                     (10000000)
#define RTE_MAINFUNCTION_PERIOD_US                                     (10000)
#define RTE_MAX_USED_CORE_ID                                           (-1)
#define RTE_MEASUREMENT_ENABLED                                        (1)
#define RTE_NULL_SCHEDULE                                              (1)
#define RTE_NUM_TASKS                                                  (14)
#define RTE_NUM_TIMEOUT_ALARMS                                         (0)
#define RTE_OSAPI_AUTOSAR_R40                                          (1)
#define RTE_OSCFG_AUTOSAR_R40                                          (1)
#define RTE_REQUIRES_COM                                               (1)
#define RTE_REQUIRES_IOC                                               (1)
#define RTE_RIPS_SUPPORT                                               (0)
#define RTE_TASKS_ARRAYSIZE                                            (14)
#define RTE_WOWP_EVENTS                                                (0)
#define SCHM_IMODEINIT                                                 (1)
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_BswM           CPT_BswM
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_ComM           CPT_ComM
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Dcm            CPT_Dcm
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Dem            CPT_Dem
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Det            CPT_Det
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Diag_SWC       CPT_Diag_SWC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_EcuM           CPT_EcuM
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Epark          CPT_Epark
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_FIM            CPT_FIM
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_HSPF           CPT_HSPF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_HvMCu          CPT_HvMCu
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Igbt           CPT_Igbt
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_IoHwAbw        CPT_IoHwAbw
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_LvPower        CPT_LvPower
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_MCF            CPT_MCF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_MDF            CPT_MDF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_MPC            CPT_MPC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_NvM            CPT_NvM
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Nvm_SWC        CPT_Nvm_SWC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_PCF            CPT_PCF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_PhC            CPT_PhC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Pwm3ph         CPT_Pwm3ph
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_RCF            CPT_RCF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Rdc            CPT_Rdc
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SCF            CPT_SCF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_BCC        CPT_SWC_BCC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_CSPF       CPT_SWC_CSPF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_Cpld       CPT_SWC_Cpld
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_DiagCalib  CPT_SWC_DiagCalib
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_Task_Core0 CPT_SWC_Task_Core0
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_Task_Core1 CPT_SWC_Task_Core1
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_SWC_Task_Core2 CPT_SWC_Task_Core2
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Snapshot       CPT_Snapshot
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_TDC            CPT_TDC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_TPC            CPT_TPC
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_Tja1043        CPT_Tja1043
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_VCF            CPT_VCF
#define _MCU_FlatView_SwComponentTypes_MCU_FlatView_CPT_WdgM_SWC       CPT_WdgM_SWC
/* Box: Rte: OS Environment begin */
/* The following OSENV_ macros are supported by this OS DLL: */
/* OSENV_UNSUPPORTED */
/* OSENV_RTAOS40 */
#if defined(OSENV_RTAOS40)
#if defined(OSENV_UNSUPPORTED)
#error "Please define exactly one of [ OSENV_RTAOS40, OSENV_UNSUPPORTED ] for OS_AUTOSAR40 OS API."
#endif /* defined(OSENV_UNSUPPORTED) */
#elif defined(OSENV_UNSUPPORTED)
#else
#error "Please define exactly one of [ OSENV_RTAOS40, OSENV_UNSUPPORTED ] for OS_AUTOSAR40 OS API."
#endif
/* Box: User declared atomic BSW types: begin */
/*   boolean */
/*   float32 */
/*   sint16 */
/*   sint32 */
/*   sint8 */
/*   uint16 */
/*   uint32 */
/*   uint8 */
/* Box: User declared atomic BSW types: end */
/* Box: Rte: OS Environment end */

#endif /* !RTE_CONST_H */
