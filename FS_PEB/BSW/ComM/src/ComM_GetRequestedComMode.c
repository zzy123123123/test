

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "ComM_Priv.h"

/*
 ***************************************************************************************************
 * Defines
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Type definitions
 ***************************************************************************************************
 */

/*
 ***************************************************************************************************
 * Variables
 ***************************************************************************************************
 */

#define COMM_START_SEC_CODE
#include "ComM_Cfg_MemMap.h"


/*****************************************************************************************
 * Function name    : ComM_GetRequestedComMode
 * Syntax           : Std_ReturnType ComM_GetRequestedComMode
 *                   (
 *                     ComM_UserHandleType User, ComM_ModeType* ComMode
 *                     )
 * Description      : Function to query the currently requested Communication Mode of the corresponding
 *                    user.
 * Parameters       : User -> Handle of the user who requests a mode
 *                    ComMode -> Name of the requested mode
 * Return value     : E_OK: Successfully returned requested Communication Mode
 *                    E_NOT_OK: Return of requested Communication Mode failed
 *                    COMM_E_UNINIT: ComM not initialized
 *****************************************************************************************/
/* MR12 RULE 8.3 VIOLATION:Two declarations exists for this api. One is in ComM.h & another generated by RTE. Hence,the difference in identifiers.*/
FUNC(Std_ReturnType,COMM_CODE) ComM_GetRequestedComMode
                                                    (
                                                    VAR(ComM_UserHandleType, COMM_VAR) User ,
                                                    P2VAR(ComM_ModeType, AUTOMATIC, COMM_VAR) ComMode
                                                    )
{
    /* Local Variables Declaration */
    /* Functions return type */
    VAR(Std_ReturnType,AUTOMATIC) ReturnStatus;
    P2VAR(ComM_UserVarType, AUTOMATIC, COMM_APPL_DATA) userRamPtr_ps;
    /* Local variable initialization */
    ReturnStatus = E_NOT_OK ;

    userRamPtr_ps = &ComM_UserStruct[User];

    /* DET for ComM initialization */
    #if (COMM_DEV_ERROR_DETECT != STD_OFF)
    if (ComM_GlobalStruct.ComM_InitStatus != COMM_INIT)
    {
        /* Report DET with ComM not initialized status */
        (void)Det_ReportError(COMM_MODULE_ID,COMM_INSTANCE_ID,COMM_GET_REQ_COMMODE_APIID,COMM_E_NOT_INITED);
        return E_NOT_INITIALIZED;
    }
        /* DET check for Null pointer for communication mode */
    if (ComMode == NULL_PTR)
    {
        /* Report DET with NULL parameter*/
        (void)Det_ReportError(COMM_MODULE_ID,COMM_INSTANCE_ID,COMM_GET_REQ_COMMODE_APIID,COMM_E_WRONG_PARAMETERS);
        return E_NOT_OK;
    }

    /* DET for user validation */
    if (User >= COMM_NO_OF_USERS)
    {
        /* Report DET when User is not present in the list */
        (void)Det_ReportError(COMM_MODULE_ID,COMM_INSTANCE_ID,COMM_GET_REQ_COMMODE_APIID,COMM_E_WRONG_PARAMETERS);
        return E_NOT_OK;
    }
    #endif  /*  #if (COMM_DEV_ERROR_DETECT != STD_OFF)  */

    /* Get the users Requested mode and pass to the calling API*/

    *ComMode = userRamPtr_ps->RequestedUserMode_t ;

    /* Pass the return status as E_OK */
    ReturnStatus = E_OK;
    return ReturnStatus;
}

#define COMM_STOP_SEC_CODE
#include "ComM_Cfg_MemMap.h"

