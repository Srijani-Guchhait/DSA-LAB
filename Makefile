CC ?= gcc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic -O2

SOURCES := $(shell find . -type f -name '*.c' | sort)
TARGETS := $(patsubst ./%.c,build/%,$(SOURCES))

.PHONY: all clean list

all: $(TARGETS)

build/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@

list:
	@printf '%s\n' $(SOURCES)

clean:
	rm -rf build
