#include <stddef.h>
#include "vendor/unity.h"
#include "../src/fake.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_add(void)
{
   TEST_ASSERT_EQUAL_INT(2, add(1, 1));
}

static void test_sub(void)
{
   TEST_ASSERT_EQUAL_INT(4, sub(7, 3));
}

static void test_mul(void)
{
   TEST_ASSERT_EQUAL_INT(6, mul(2, 3));
}

int main(void)
{
   UnityBegin("test/test_fake.c");

    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);

   return UnityEnd();
}
