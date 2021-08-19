#include "unity_fixture.h"
#include "dumbExample.h"
#include <stdio.h>

TEST_GROUP(averageThreeNum);

static int retval;

/* containing anything to run before each test
 */
TEST_SETUP(averageThreeNum)
{
	printf("+%s\n", __func__);
	printf("-%s\n", __func__);
}

/* containing anything to run after each test
 */
TEST_TEAR_DOWN(averageThreeNum)
{
	printf("+%s\n", __func__);
	printf("-%s\n", __func__);
}

/* test cases
 */
TEST(averageThreeNum, testAverageThreeNum)
{
	TEST_ASSERT_EQUAL(40, averageThreeNum(30, 40, 50));
	TEST_ASSERT_EQUAL(128, averageThreeNum(128, 128, 128));
}

TEST(averageThreeNum, testAverageThreeNumSomeMore)
{
	TEST_ASSERT_EQUAL(40, averageThreeNum(60, 40, 20));
	TEST_ASSERT_EQUAL(128, averageThreeNum(64, 128, 192));
}

TEST_GROUP_RUNNER(averageThreeNum)
{
	RUN_TEST_CASE(averageThreeNum, testAverageThreeNum);
	RUN_TEST_CASE(averageThreeNum, testAverageThreeNumSomeMore);
}

void runAllTests(void)
{
	RUN_TEST_GROUP(averageThreeNum);
}

int main(int argc, const char *argv[])
{
	return UnityMain(argc, argv, runAllTests);
}

