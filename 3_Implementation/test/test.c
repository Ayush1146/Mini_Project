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
TEST_ASSERT_EQUAL(0, getcode(B)); 
TEST_ASSERT_EQUAL(1, getcode(N)); 
TEST_ASSERT_EQUAL(2, getcode(R)); 
TEST_ASSERT_EQUAL(3, getcode(O)); 
TEST_ASSERT_EQUAL(4, getcode(Y));
TEST_ASSERT_EQUAL(5, getcode(G)); 
TEST_ASSERT_EQUAL(6, getcode(E)); 
TEST_ASSERT_EQUAL(7, getcode(V));
TEST_ASSERT_EQUAL(8, getcode(A));
TEST_ASSERT_EQUAL(9, getcode(W));
 
}

void test_getmul(void) {
TEST_ASSERT_EQUAL(1.0, getcode(B)); 
TEST_ASSERT_EQUAL(10.0, getcode(N)); 
TEST_ASSERT_EQUAL(100.0, getcode(R)); 
TEST_ASSERT_EQUAL(1000.0, getcode(O)); 
TEST_ASSERT_EQUAL(10000.0, getcode(Y));
TEST_ASSERT_EQUAL(100000.0, getcode(G)); 
TEST_ASSERT_EQUAL(1000000.0, getcode(E)); 
TEST_ASSERT_EQUAL(10000000.0, getcode(V));
TEST_ASSERT_EQUAL(0.1, getcode(C));
TEST_ASSERT_EQUAL(0.01, getcode(S));  
}

void test_gettol(void) {

TEST_ASSERT_EQUAL(1.0, getcode(N)); 
TEST_ASSERT_EQUAL(2.0, getcode(R)); 
TEST_ASSERT_EQUAL(0.5, getcode(G)); 
TEST_ASSERT_EQUAL(0.25, getcode(E)); 
TEST_ASSERT_EQUAL(0.1, getcode(V));
TEST_ASSERT_EQUAL(0.05, getcode(A));
TEST_ASSERT_EQUAL(5.0, getcode(C));
TEST_ASSERT_EQUAL(10.0, getcode(S));
TEST_ASSERT_EQUAL(20.0, getcode(X));
}

