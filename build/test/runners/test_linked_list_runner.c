/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_empty_list(void);
extern void test_append(void);
extern void test_append_dynamic(void);
extern void test_prepend(void);
extern void test_prepend_dynamic(void);
extern void test_remove_first_beginning(void);
extern void test_remove_first_middle(void);
extern void test_remove_first_end(void);
extern void test_remove_string(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_linked_list.c";
  UnityBegin();
  RUN_TEST(test_empty_list, 26);
  RUN_TEST(test_append, 31);
  RUN_TEST(test_append_dynamic, 45);
  RUN_TEST(test_prepend, 61);
  RUN_TEST(test_prepend_dynamic, 76);
  RUN_TEST(test_remove_first_beginning, 92);
  RUN_TEST(test_remove_first_middle, 110);
  RUN_TEST(test_remove_first_end, 128);
  RUN_TEST(test_remove_string, 146);

  return (UnityEnd());
}