#include "unity.h"
#include <res_operations.h>


#include <res_operations.h>
#define PROJECT_NAME    "Resistor"


void test_getcode(void);
void test_getmul(void);
void test_gettol(void);


void setUp(){}

void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_getcode);
  RUN_TEST(test_getmul);
  RUN_TEST(test_gettol);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_getcode(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

void test_getmul(void) {
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

void test_gettol(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

