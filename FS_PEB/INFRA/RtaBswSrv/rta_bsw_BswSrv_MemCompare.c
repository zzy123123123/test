/*<BASDKey>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, 2010 Robert Bosch GmbH. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Domain____:BASD$
 * $Namespace_:\Comp\rta_bsw_BswSrv$
 * $Class_____:C$
 * $Name______:rta_bsw_BswSrv_MemCompare$
 * $Variant___:AR40.1.1.0$
 * $Revision__:0$
 **********************************************************************************************************************
</BASDKey>*/

/****************************************************************************
 *                                 ETAS GmbH
 *                      D-70469 Stuttgart, Borsigstr. 14
 *****************************************************************************
 * Project : Basic Software Service
 * Component : RTA_BSW_BSWSRV
 * Date : Mon December 28 2015
 * Version : 1.0
 * Description : RTA-BASE first revision
 ****************************************************************************/

/*
 *********************************************************************
 * Includes
 *********************************************************************
 */
#include "rta_bsw_BswSrv.h"

/*
 *********************************************************************
 * Defines
 *********************************************************************
 */

/*
 *********************************************************************
 * Variables
 *********************************************************************
 */

/*
 *********************************************************************
 * Functions
 *********************************************************************
 */

#define RTA_BSW_BSWSRV_START_SEC_CODE
#include "rta_bsw_BswSrv_MemMap.h"
/**
 ***********************************************************************************************************************
 * \brief MemCompare with the same parameters as C90-memcmp
 *
 * This function implements MemCompare with the same parameters as C90-memcmp
 * It compares 32 bit data, if possible. So it is save to compare structures which require consistent 32 bit data.
 *
 * \param[in]       const void* xSrc1_pcv, const void* xSrc2_pcv, sint32 numBytes_s32
 * \return          void*
 ***********************************************************************************************************************
 */
 
sint32 rta_bsw_BswSrv_MemCompare(const void* xSrc1_pcv, const void* xSrc2_pcv, sint32 numBytes_s32)
{
    const uint32* xSrc1_pcu32 = (const uint32*)xSrc1_pcv;
    const uint32* xSrc2_pcu32 = (const uint32*)xSrc2_pcv;
    const uint16* xSrc1_pcu16;
    const uint16* xSrc2_pcu16;
    const uint8* xSrc1_pcu8;
    const uint8* xSrc2_pcu8;
    uint32 numBytes_u32 = (uint32)numBytes_s32;
    uint32 ctLoop_u32;
    uint32 xTemp1_u32;
    uint32 xTemp2_u32;
    uint16 xTemp1_u16;
    uint16 xTemp2_u16;

    /* 32 bit aligned compare */
    /* MISRA RULE 11.3 VIOLATION: cast cannot be avoided here */
    if ((numBytes_u32 >= 4) && ((((uint32)xSrc1_pcu32 | (uint32)xSrc2_pcu32) & 0x03) == 0))
    {
        ctLoop_u32 = numBytes_u32 / 4;
        numBytes_u32 &= 0x03;
        do
        {   
            if(*xSrc1_pcu32 != *xSrc2_pcu32)
            {
                numBytes_u32 = 4; /* force byte wise check of current word as required for ANSI-C memcmp */
                xTemp1_u32 = *xSrc1_pcu32; /* use additional buffer to ensure that data is not read twice */
                xTemp2_u32 = *xSrc2_pcu32;
                xSrc1_pcu32 = &xTemp1_u32;
                xSrc2_pcu32 = &xTemp2_u32;
                break;
            }
            xSrc1_pcu32++;
            xSrc2_pcu32++;
            ctLoop_u32--;
        } while(ctLoop_u32 > 0);
    }
    /* MISRA RULE 11.4 VIOLATION: cast cannot be avoided here */
    xSrc1_pcu16 = (const uint16*)xSrc1_pcu32;
    xSrc2_pcu16 = (const uint16*)xSrc2_pcu32;

    /* 16 bit aligned compare */
    /* MISRA RULE 11.3 VIOLATION: cast cannot be avoided here */
    if ((numBytes_u32 >= 2) && ((((uint32)xSrc1_pcu16 | (uint32)xSrc2_pcu16) & 0x01) == 0))
    {
        ctLoop_u32 = numBytes_u32 / 2;
        numBytes_u32 &= 0x01;
        do
        {
            if(*xSrc1_pcu16 != *xSrc2_pcu16)
            {
                numBytes_u32 = 2; /* force byte wise check of current word as required for ANSI-C memcmp */
                xTemp1_u16 = *xSrc1_pcu16; /* use additional buffer to ensure that data is not read twice */
                xTemp2_u16 = *xSrc2_pcu16;
                xSrc1_pcu16 = &xTemp1_u16;
                xSrc2_pcu16 = &xTemp2_u16;
                break;
            }
            xSrc1_pcu16++;
            xSrc2_pcu16++;
            ctLoop_u32--;
        } while(ctLoop_u32 > 0);
    }
    /* MISRA RULE 11.4 VIOLATION: cast cannot be avoided here */
    xSrc1_pcu8 = (const uint8*)xSrc1_pcu16;
    xSrc2_pcu8 = (const uint8*)xSrc2_pcu16;

    /* 8 bit compare for remaining data */
    for(ctLoop_u32 = 0; ctLoop_u32 < numBytes_u32; ctLoop_u32++)
    {
        if(*xSrc1_pcu8 != *xSrc2_pcu8)
        {
            return (*xSrc1_pcu8 - *xSrc2_pcu8);
        }
        xSrc1_pcu8++;
        xSrc2_pcu8++;
    }
    return 0;
}
#define RTA_BSW_BSWSRV_STOP_SEC_CODE
#include "rta_bsw_BswSrv_MemMap.h"

/*<BASDKey>
**********************************************************************************************************************
* $History__:$
**********************************************************************************************************************
</BASDKey>*/
