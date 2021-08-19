#include "unity.h"
#include "dumbExample.h"

/* containing anything to run before each test
 */
void setUp(void)
{
	printf("+%s\n", __func__);
	printf("-%s\n", __func__);
}

/* containing anything to run after each test
 */
void tearDown(void)
{
	printf("+%s\n", __func__);
	printf("-%s\n", __func__);
}

void testAverageThreeNum(void)
{
	TEST_ASSERT_EQUAL(40, averageThreeNum(30, 40, 50));
	TEST_ASSERT_EQUAL(128, averageThreeNum(128, 128, 128));
}

void testAverageThreeNumSomeMore(void)
{
	TEST_ASSERT_EQUAL(40, averageThreeNum(60, 40, 20));
	TEST_ASSERT_EQUAL(128, averageThreeNum(64, 128, 192));
}

int main(int argc, char *argv[])
{
	UNITY_BEGIN();
	RUN_TEST(testAverageThreeNum);
	RUN_TEST(testAverageThreeNumSomeMore);
	return UNITY_END();
}
