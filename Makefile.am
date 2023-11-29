AUTOMAKE_OPTIONS = subdir-objects

bin_PROGRAMS = cpp-test
cpp_test_SOURCES = src/main.c

check_PROGRAMS = test_suite
test_suite_SOURCES = tests/test_main.c tests/test_suite.c
test_suite_LDADD = -lcheck

AM_CFLAGS = -Wall

check-local:
        ./test_suite
