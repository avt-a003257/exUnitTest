#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "dumbExample.h"
#include <iostream>

TEST_GROUP(averageThreeNum)
{
	/* containing anything to run before each test
	 */
	void setup() _override
	{
		printf("%s\n", __func__);
	}

	/* containing anything to run after each test
	 */
	void teardown() _override
	{
		printf("%s\n", __func__);
	}
};

/* test cases
 */
TEST(averageThreeNum, testAverageThreeNum)
{
	CHECK_EQUAL(40, averageThreeNum(30, 40, 50));
	CHECK_EQUAL(128, averageThreeNum(128, 128, 128));
}

TEST(averageThreeNum, testAverageThreeNumSomeMore)
{
	CHECK_EQUAL(40, averageThreeNum(60, 40, 20));
	CHECK_EQUAL(128, averageThreeNum(64, 128, 192));
}

/*
TEST_GROUP_RUNNER(averageThreeNum)
{
	RUN_TEST_CASE(averageThreeNum, testAverageThreeNum);
	RUN_TEST_CASE(averageThreeNum, testAverageThreeNumSomeMore);
}

void runAllTests(void)
{
	RUN_TEST_GROUP(averageThreeNum);
}
*/

int main(int argc, const char *argv[])
{
	return CommandLineTestRunner::RunAllTests(argc, argv);
}


