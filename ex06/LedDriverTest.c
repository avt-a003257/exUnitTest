#include "unity_fixture.h"
#include "LedDriver.h"
//#include <stdio.h>
#include <stdint.h>

TEST_GROUP(LedDriver);

static uint16_t virtualLeds;

TEST_SETUP(LedDriver)
{
	//printf("%s\n", __func__);
	LedDriver_Create(&virtualLeds);
}

TEST_TEAR_DOWN(LedDriver)
{
	//printf("%s\n", __func__);
}

TEST(LedDriver, LedsOffAfterCreate)
{
//	TEST_FAIL_MESSAGE("Start here");
	uint16_t virtualLeds = 0xffff;
	LedDriver_Create(&virtualLeds);
	TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}

TEST(LedDriver, TurnOnLedOne)
{
//	TEST_FAIL_MESSAGE("Start here");
	LedDriver_TurnOn(1);
	TEST_ASSERT_EQUAL_HEX16(1, virtualLeds);
}

TEST(LedDriver, TurnOffLedOne)
{
//	TEST_FAIL_MESSAGE("Start here");
	LedDriver_TurnOn(1);
	LedDriver_TurnOff(1);
	TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}
