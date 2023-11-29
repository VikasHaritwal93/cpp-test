// tests/test_main.c
#include <check.h>
#include "../main.c"

START_TEST(test_add) {
    ck_assert_int_eq(add(2, 3), 5);
    ck_assert_int_eq(add(-1, 1), 0);
}

Suite *my_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("MySuite");

    tc_core = tcase_create("Core");
    tcase_add_test(tc_core, test_add);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = my_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
