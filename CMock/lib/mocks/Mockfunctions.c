/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "../../../Unity-master/src/unity.h"
#include "../../../CMock/src/cmock.c"
#include "Mockfunctions.h"

static const char* CMockString_channel = "channel";
static const char* CMockString_coloumn = "coloumn";
static const char* CMockString_print_sensor = "print_sensor";
static const char* CMockString_row = "row";

typedef struct _CMOCK_print_sensor_CALL_INSTANCE
{
  int LineNumber;
  char Expected_row;
  char Expected_coloumn;
  unsigned char Expected_channel;

} CMOCK_print_sensor_CALL_INSTANCE;

static struct MockfunctionsInstance
{
  CMOCK_MEM_INDEX_TYPE print_sensor_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockfunctions_Verify(void)
{
  int cmock_line = TEST_LINE_NUM;
  UNITY_SET_DETAIL(CMockString_print_sensor);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.print_sensor_CallInstance, cmock_line, CMockStringCalledLess);
}

void Mockfunctions_Init(void)
{
  Mockfunctions_Destroy();
}

void Mockfunctions_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void print_sensor(char row, char coloumn, unsigned char channel)
{
  int cmock_line = TEST_LINE_NUM;
  CMOCK_print_sensor_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_print_sensor);
  cmock_call_instance = (CMOCK_print_sensor_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.print_sensor_CallInstance);
  Mock.print_sensor_CallInstance = CMock_Guts_MemNext(Mock.print_sensor_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_print_sensor,CMockString_row);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_row, row, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_print_sensor,CMockString_coloumn);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_coloumn, coloumn, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_print_sensor,CMockString_channel);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_channel, channel, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_print_sensor(CMOCK_print_sensor_CALL_INSTANCE* cmock_call_instance, char row, char coloumn, unsigned char channel)
{
  cmock_call_instance->Expected_row = row;
  cmock_call_instance->Expected_coloumn = coloumn;
  cmock_call_instance->Expected_channel = channel;
}

void print_sensor_CMockExpect(int cmock_line, char row, char coloumn, unsigned char channel)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_print_sensor_CALL_INSTANCE));
  CMOCK_print_sensor_CALL_INSTANCE* cmock_call_instance = (CMOCK_print_sensor_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.print_sensor_CallInstance = CMock_Guts_MemChain(Mock.print_sensor_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_print_sensor(cmock_call_instance, row, coloumn, channel);
  UNITY_CLR_DETAILS();
}

