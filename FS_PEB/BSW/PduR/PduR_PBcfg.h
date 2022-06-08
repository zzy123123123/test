/*
***********************************************************************************************************************
* 
* Product Info
* Isolar version: ISOLAR-AB 4.0.2
* Product release version: RTA-BSW 3.1.0
* 
***********************************************************************************************************************
*/




 
/*<VersionHead>
 * This Configuration File is generated using versions (automatically filled in) as listed below.
 *
 * $Generator__: PduR  / AR42.4.0.1                Module Package Version
 * $Editor_____: 9.0                Tool Version
 * $Model______: 2.3.0.4                ECU Parameter Definition Version
 *
 
 </VersionHead>*/


#ifndef PDUR_PBCFG_H
#define PDUR_PBCFG_H
#include "PduR_Types.h"

/*
    These #defines are generated by the code generator tool. Respective module's function names are generated
    only if it is present in the PduR_PbCfg.c file in any one of the entries.
*/

/*
    These #defines correspond to the entries in the PduR_loTransmitTable in PduR_PBcfg.c.
*/

#if !defined(PduR_RF_CanIf_Transmit)
#define PduR_RF_CanIf_Transmit    (0)
#endif /* PduR_RF_CanIf_Transmit */


#if !defined(PduR_RF_CanTp_Transmit)
#define PduR_RF_CanTp_Transmit    (1)
#endif /* PduR_RF_CanTp_Transmit */

#define MAX_NO_OF_LO_TXTABLE_ENTRIES 1

/*
    These #defines correspond to the entries in the PduR_loCancelRxTable in PduR_Cfg.c.
*/

/*
    These #defines correspond to the entries in the PduR_loCancelTransmitTable in PduR_Cfg.c.
*/

#if !defined(PduR_IH_CancelTransmit)
#define PduR_IH_CancelTransmit    (0)
#endif /* PduR_IH_CancelTransmit */


#if !defined(PduR_RF_CanTp_CancelTransmit)
#define PduR_RF_CanTp_CancelTransmit    (1)
#endif /* PduR_RF_CanTp_CancelTransmit */

#define MAX_NO_OF_LO_CANCEL_TXTABLE_ENTRIES 1

/*
    These #defines correspond to the entries in the PduR_upIfRxIndicationTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Com_RxIndication)
#define PduR_RF_Com_RxIndication    (0)
#endif /* PduR_RF_Com_RxIndication */

#define MAX_NO_OF_UPIF_RXINDICATION_TABLE_ENTRIES 0

/*
    These #defines correspond to the entries in the PduR_upIfTxConfirmationTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Com_TxConfirmation)
#define PduR_RF_Com_TxConfirmation    (0)
#endif /* PduR_RF_Com_TxConfirmation */

#define MAX_NO_OF_UPIF_TXCONFIRMATION_TABLE_ENTRIES 0

/*
    These #defines correspond to the entries in the PduR_upIfTriggerTxTable in PduR_Cfg.c.
*/

/*
    These #defines correspond to the entries in the PduR_upTpCopyRxDataTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Dcm_CopyRxData)
#define PduR_RF_Dcm_CopyRxData    (0)
#endif /* PduR_RF_Dcm_CopyRxData */

#define MAX_NO_OF_UPTP_COPYRXDATA_TABLE_ENTRIES 0


/*
    These #defines correspond to the entries in the PduR_upTpStartOfReceptionTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Dcm_StartOfReception)
#define PduR_RF_Dcm_StartOfReception    (0)
#endif /* PduR_RF_Dcm_StartOfReception */

#define MAX_NO_OF_UPTP_STARTOFRECEPTION_TABLE_ENTRIES 0


/*
    These #defines correspond to the entries in the PduR_upTpRxIndicationTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Dcm_TpRxIndication)
#define PduR_RF_Dcm_TpRxIndication    (0)
#endif /* PduR_RF_Dcm_TpRxIndication */

#define MAX_NO_OF_UPTP_RXINDICATION_TABLE_ENTRIES 0

/*
    These #defines correspond to the entries in the PduR_upTpCopyTxDataTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Dcm_CopyTxData)
#define PduR_RF_Dcm_CopyTxData    (0)
#endif /* PduR_RF_Dcm_CopyTxData */

#define MAX_NO_OF_UPTP_COPYTXDATA_TABLE_ENTRIES 0

/*
    These #defines correspond to the entries in the PduR_upTpTxConfirmationTable in PduR_Cfg.c.
*/

#if !defined(PduR_RF_Dcm_TpTxConfirmation)
#define PduR_RF_Dcm_TpTxConfirmation    (0)
#endif /* PduR_RF_Dcm_TpTxConfirmation */

#define MAX_NO_OF_UPTP_TXCONFIRMATION_TABLE_ENTRIES 0


#endif /* PDUR_PBCFG_H */
