#include <check.h>
#include <stdlib.h>


void test_another_feature(void);


TTest test_another_feature = _tcase_add_test(tc, test_another_feature);


START_TEST(test_another_feature) {
    // Your test code here
}

int main(void) {
    // Create a test case
    TCase *tc = tcase_create("MyTest");

    // Add your test cases to the test case
    tcase_add_test(tc, test_feature);
    tcase_add_test(tc, test_another_feature);

    // Create a test suite
    Suite *s = suite_create("MySuite");

    // Add your test case to the test suite
    suite_add_tcase(s, tc);

    // Create a runner
    SRunner *runner = srunner_create(s);

    // Run the tests
    srunner_run_all(runner, CK_NORMAL);

    // Get the number of failures
    int number_failed = srunner_ntests_failed(runner);

    // Clean up
    srunner_free(runner);

    // Return the number of failures as the exit code
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

