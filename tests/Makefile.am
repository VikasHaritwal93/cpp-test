check_PROGRAMS = test_suite
test_suite_SOURCES = test_main.c test_suite.c
test_suite_LDADD = -lm -lcheck -lsubunit
test_suite: test_main.o test_suite.o
    gcc -g -O2 -o test_suite test_main.o test_suite.o $(shell pkg-config --cflags --libs check subunit)
