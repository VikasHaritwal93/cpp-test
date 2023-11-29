#include <check.h>
#include "test_suite.h"

int main() {
    Suite *s;
    TCase *tc;
    SRunner *sr;

    s = suite_create("MyTestSuite");

    tc = tcase_create("Core");
    tcase_add_test(tc, test_hello_world);
    tcase_add_test(tc, test_another_feature);
    suite_add_tcase(s, tc);

    sr = srunner_create(s);
    srunner_run_all(sr, CK_NORMAL);

    int number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}
