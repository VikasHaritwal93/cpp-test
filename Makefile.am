SUBDIRS = src tests

bin_PROGRAMS = myproject
myproject_SOURCES = src/main.c

check_PROGRAMS = test_suite
test_suite_SOURCES = tests/test_main.c tests/test_suite.c
test_suite_LDADD = -lm -lcheck -lsubunit
test_suite: test_main.o test_suite.o
    gcc -g -O2 -o test_suite test_main.o test_suite.o $(shell pkg-config --cflags --libs check subunit)

AM_CFLAGS = -Wall

AUTOMAKE_OPTIONS = subdir-objects  # Add this line
