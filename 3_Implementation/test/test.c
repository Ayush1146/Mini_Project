#include "unity.h"
#include "operations.h"


#include "operations.h"
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
TEST_ASSERT_EQUAL(0, getcode('B')); 
TEST_ASSERT_EQUAL(1, getcode('N')); 
TEST_ASSERT_EQUAL(2, getcode('R')); 
TEST_ASSERT_EQUAL(3, getcode('O')); 
TEST_ASSERT_EQUAL(4, getcode('Y'));
TEST_ASSERT_EQUAL(5, getcode('G')); 
TEST_ASSERT_EQUAL(6, getcode('E')); 
TEST_ASSERT_EQUAL(7, getcode('V'));
TEST_ASSERT_EQUAL(8, getcode('A'));
TEST_ASSERT_EQUAL(9, getcode('W'));
 
}

void test_getmul(void) {
TEST_ASSERT_EQUAL(1.0, getmul('B')); 
TEST_ASSERT_EQUAL(10.0, getmul('N')); 
TEST_ASSERT_EQUAL(100.0, getmul('R')); 
TEST_ASSERT_EQUAL(1000.0, getmul('O')); 
TEST_ASSERT_EQUAL(10000.0, getmul('Y'));
TEST_ASSERT_EQUAL(100000.0, getmul('G')); 
TEST_ASSERT_EQUAL(1000000.0, getmul('E')); 
TEST_ASSERT_EQUAL(10000000.0, getmul('V'));
TEST_ASSERT_EQUAL(0.1, getmul('C'));
TEST_ASSERT_EQUAL(0.01, getmul('S'));  
}

void test_gettol(void) {

TEST_ASSERT_EQUAL(1.0, gettol('N')); 
TEST_ASSERT_EQUAL(2.0, gettol('R')); 
TEST_ASSERT_EQUAL(0.5, gettol('G')); 
TEST_ASSERT_EQUAL(0.25, gettol('E')); 
TEST_ASSERT_EQUAL(0.1, gettol('V'));
TEST_ASSERT_EQUAL(0.05, gettol('A'));
TEST_ASSERT_EQUAL(5.0, gettol('C'));
TEST_ASSERT_EQUAL(10.0, gettol('S'));
TEST_ASSERT_EQUAL(20.0, gettol('X'));
}

