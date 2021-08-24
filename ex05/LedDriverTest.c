#include "unity_fixture.h"
#include <stdio.h>

TEST_GROUP(LedDriver);

TEST_SETUP(LedDriver)
{
	printf("%s\n", __func__);
}

TEST_TEAR_DOWN(LedDriver)
{
	printf("%s\n", __func__);
}

TEST(LedDriver, LedsOffAfterCreate)
{
	TEST_FAIL_MESSAGE("Start here");
}

