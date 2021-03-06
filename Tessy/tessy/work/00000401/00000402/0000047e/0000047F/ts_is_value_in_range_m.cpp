/*
 * Testdriver source generated by TESSY
 *
 * (c) Razorcat Development GmbH
 *
 * DO NOT EDIT THIS FILE !
 *
 *
 * File          : Master Source (ts_is_value_in_range_m.cpp)
 * Testpath      : C:/Users/yusenlin/Projects/TESSY/yu/tessy\work\00000401\00000402\0000047e\0000047F
 * Modulename    : yu
 * Testobjectname: is_value_in_range
 * Date          : 28.06.2022
 * Time          : 14:54:38
 * Tessy Version : 4.3.10
 *
 */

#include <stdio.h>
#include "library/librazorcat.h"
#include "library/ts_stringlist.h"

#include "idb/ifobjects.h"
#include "comm/tstcomm.h"
#include "s/tssacc_types.h"
#include "idb/idbdef.h"
#include "driver/ts_master.h"
#include "driver/ite_types.h"
#include "driver/eval.h"
#include "ts_env.h"

using namespace Driver;

#ifndef NULL
   #define NULL ((void *) 0)
#endif

#ifdef EXECUTE
   #undef EXECUTE
#endif
#define EXECUTE(s) if (TS_SUCCESS != s) tstcomm_error_exit(TSTCOMM_ERROR_GENERAL_MASTER);

#define TS_ROOT_FOLDER      "C:/Users/yusenlin/Projects/TESSY/yu/tessy"
#define TS_PROJECT_ID        1024
#define TS_MODULE_ID         1150
#define TS_TESTOBJECT_ID     1151
#define TS_TESTOBJECT_IDB_ID 2

#define TS_MODULE     "yu"
#define TS_TESTPATH "C:/Users/yusenlin/Projects/TESSY/yu/tessy\\work\\00000401\\00000402\\0000047e\\0000047F"
#define TS_TESTOBJECT "is_value_in_range"

#define TDB_LOAD_INPUT_TABLE		0x00000001
#define TDB_LOAD_EXPECTED_TABLE	0x00000002
#define TDB_LOAD_ACTUAL_TABLE    0x00000004
#define TDB_FLAG_INHERITED		   0x00040000

#define TARGET_KIND_NULL    0
#define TARGET_KIND_DYNAMIC 1
#define TARGET_KIND_NORMAL  2

IDNAME ts_NameTable[] =
{
   {5, "TESSY_TESTOBJECT_PARM_01.range_start", false},
   {6, "TESSY_TESTOBJECT_PARM_01.range_len", false},
   {7, "TESSY_TESTOBJECT_PARM_02", false},
   {3, "is_value_in_range", false},
   {0, ""}
};

unsigned long   ts_testcase_order_number;
unsigned long   ts_teststep_order_number;
unsigned long   ts_teststep_id;

/* send use_value flag */
void ts_send_use_value(char use) {
   tstcomm_put_char(use);
}


/*
 * Functions to read/write Testdata for structs/unions
 */
void ts_send_rangedefaultdefault(CTIFObject *ifstruct, IDB_TYPEID ts_arrayid);

void ts_send_rangedefaultdefault(CTIFObject *ifstruct, IDB_TYPEID ts_arrayid) {
   CTIFObjectList *components = ifstruct->GetChildren();
   CTIFObject *ifobject;
   ifobject = (*components)[0];
   if (!ifobject) {LIB_REPORT_WARNING(TESSY_FACILITY_DRV,"%s", "NULL ifobject id 5\n");}
   ts_send_value(ifobject, ts_arrayid);

   ifobject = (*components)[1];
   if (!ifobject) {LIB_REPORT_WARNING(TESSY_FACILITY_DRV,"%s", "NULL ifobject id 6\n");}
   ts_send_value(ifobject, ts_arrayid);

}


/*
 * Send/receive data for dynamic objects
 */

/*
 * Send Testdata to slave
 */
void ts_send_TD(void) {
   CTIFObject *ifobject(0);

   /* Parameter */
   ifobject = ts_master.getIFObject(32, 4);
   if (!ifobject) {LIB_REPORT_WARNING(TESSY_FACILITY_DRV,"%s", "NULL ifobject id 4\n");}
   ts_send_rangedefaultdefault(ifobject, 0);
   ifobject = ts_master.getIFObject(32, 7);
   if (!ifobject) {LIB_REPORT_WARNING(TESSY_FACILITY_DRV,"%s", "NULL ifobject id 7\n");}
   ts_send_value(ifobject, 0);
   emit_const_warning();
}


/*
 * Receive Actual Data from slave
 */
static void ts_receive_AD(void)
{
   CTIFObject *ifobject(0);

   /* Parameter */

   /* Return */
   ifobject = ts_master.getIFObject(16, 3);
   if (!ifobject) {LIB_REPORT_WARNING(TESSY_FACILITY_DRV,"%s", "NULL ifobject id 3\n");}
   ts_receive_value(ifobject, 0);
}


/* Include helper functions */
#include "driver/ts_master.cc"

/* Execute a Teststep */
uint64_t ts_execute_teststep(unsigned long repeatCount, Teststep *teststep)
{
   uint64_t state_mask = 0;
   unsigned char result;
   unsigned long flags = TDB_LOAD_INPUT_TABLE | TDB_LOAD_EXPECTED_TABLE;

   flags |= (teststep->isInherited() ? TDB_FLAG_INHERITED : 0);

   ts_master.load(teststep, flags);

   tstcomm_put_ulong(ts_teststep_order_number);
   tstcomm_put_ulong(repeatCount);

#if defined TS_SUPPORT_SCRIPT
   tstcomm_user_script(TSTCOMM_PROLOG, ts_testcase_order_number, ts_teststep_order_number);
   tstcomm_user_script(TSTCOMM_EPILOG, ts_testcase_order_number, ts_teststep_order_number);
#endif /* TS_SUPPORT_SCRIPT */

   ts_send_TD();
   ts_master.update(teststep);

   result = ts_wait_for_slave();
   if (result != 0) {
      LIB_REPORT_ERROR(TESSY_FACILITY_DRV,"Test object '%s' terminated with exit code %d", TS_TESTOBJECT, result);
   }
   ts_receive_AD();
   state_mask = ts_master.save();
   return state_mask;
}


/*
 * main
 */
int main(int argc, char* argv[])
{
   int            result;
   unsigned long  repeat;
   TestcaseList   *testcase_list;
   TeststepList   *teststep_list;
   /* disable Windows(TM) crash dialogue */
   DWORD dwMode = SetErrorMode(0);
   SetErrorMode(dwMode | SEM_NOGPFAULTERRORBOX);

   /**/
   if (argc > 1 && 0 == strcmp(argv[1], "-break")) {
      _TessyEnvironment[3] = strdup("is_value_in_range");
   }

   TS_CommChecksum = 0;

   TS_CommCompress = 0;

   TS_CommTransferLimit = 0;

   /* init master object */
   ts_master.init(TS_ROOT_FOLDER, TS_PROJECT_ID, TS_MODULE_ID, TS_TESTOBJECT_ID, true, KindOfExecution::Normal);

  /* load testcase list */
   testcase_list = ts_master.getTestcaseList();
   if (0 == testcase_list->getCount()) {
      LIB_REPORT_ERROR(TESSY_FACILITY_DRV,"%s","No test cases available");
   }

   /* prepare Communication */
   if (TS_SUCCESS != (result = tstcomm_open())) {
      LIB_REPORT_ERROR(TESSY_FACILITY_DRV,"Failed to establish communication; error %d", result);
   }
   /* testobject prolog */
#if defined TS_SUPPORT_SCRIPT
   tstcomm_user_script(TSTCOMM_PROLOG, 0, 0);
#endif /* TS_SUPPORT_SCRIPT */

   /* loop over testcases */
   for (Testcase * testcase = testcase_list->getNext(); testcase; testcase = testcase_list->getNext()) {
      if (!testcase->isExecutable()) {continue;}

      /* testcase */
      ts_testcase_order_number = testcase->getTestcaseNumber();
      uint64_t state_mask = 0;
      teststep_list = testcase->getTeststepList();
      if (0 == teststep_list->getCount()) {
         LIB_REPORT_ERROR(TESSY_FACILITY_DRV,"Failed to load test steps for test case %lu", ts_testcase_order_number);
      }

         testcase->beginExecution();
         tstcomm_put_ulong(ts_testcase_order_number);
         tstcomm_put_uchar(testcase->hasFaultInjection() ? 1 : 0);
#if defined TS_SUPPORT_SCRIPT
         tstcomm_user_script(TSTCOMM_PROLOG, ts_testcase_order_number, 0);
#endif /* TS_SUPPORT_SCRIPT */
      /* loop over teststeps */
      for (Teststep * teststep = teststep_list->getNext(); teststep; teststep = teststep_list->getNext()) {
         if (!teststep->isExecutable()) {continue;}

         /* teststep */
         ts_teststep_order_number = teststep->getTeststepNumber();
         ts_teststep_id           = teststep->getId();
         repeat                   = teststep->getRepeatCount();

         state_mask |= ts_execute_teststep(repeat, teststep);
      }
      tstcomm_put_ulong(0);
#if defined TS_SUPPORT_SCRIPT
      tstcomm_user_script(TSTCOMM_EPILOG, ts_testcase_order_number, 0);
#endif /* TS_SUPPORT_SCRIPT */
      /* free memory */
      delete teststep_list;
      testcase->setExecuted(state_mask);
      testcase->flush();
      testcase->endExecution();
   }
   tstcomm_put_ulong(0);
#if defined TS_SUPPORT_SCRIPT
   tstcomm_user_script(TSTCOMM_EPILOG, 0, 0);
#endif /* TS_SUPPORT_SCRIPT */
   tstcomm_close();

   ts_master.shutdown();
   TerminateProcess(GetCurrentProcess(), 0);
}
