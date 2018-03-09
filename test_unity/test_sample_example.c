#include "Unity-master/src/unity.h"
#include "../find_three_number_avg.h"
#include <stdlib.h>

void test_find_three_number_average_should_AverageMidRangeValues(void) {
	TEST_ASSERT_EQUAL_HEX8(40, find_three_number_average(30, 40, 50));
	TEST_ASSERT_EQUAL_HEX8(40, find_three_number_average(10, 70, 40));
	TEST_ASSERT_EQUAL_HEX8(33, find_three_number_average(33, 33, 33));
}

void test_find_three_number_average_should_AverageHighValues(void) {
	TEST_ASSERT_EQUAL_HEX8(80, find_three_number_average(70, 80, 90));
	TEST_ASSERT_EQUAL_HEX8(127, find_three_number_average(127, 127, 127));
	TEST_ASSERT_EQUAL_HEX8(84, find_three_number_average(0, 126, 126));
}

void test_to_fail(void) {

	TEST_ASSERT_EQUAL_INT(10,find_three_number_average(20,20,20));

}

/*
void test_check_pointers(void) {

	char *ptr = malloc(15);
	check_pointer(ptr);
	TEST_ASSERT_EQUAL_STRING("CISCOSystem",ptr);

}

*/

int main(void) {
	UNITY_BEGIN();

	RUN_TEST(test_find_three_number_average_should_AverageMidRangeValues);
	RUN_TEST(test_find_three_number_average_should_AverageHighValues);
	RUN_TEST(test_to_fail);
	//RUN_TEST(test_check_pointers);

	return UNITY_END();
}
