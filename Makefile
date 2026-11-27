CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11

SOURCES := $(sort $(wildcard [0-9][0-9]_*.c))
C_PROJECT_SOURCES := $(sort $(wildcard c_project_*_lesson.c))
PROGRAMS := $(SOURCES:.c=) $(C_PROJECT_SOURCES:.c=)

.PHONY: all clean

all: $(PROGRAMS)

%: %.c
	$(CC) $(CFLAGS) $< -lm -o $@

clean:
	rm -f $(PROGRAMS)
