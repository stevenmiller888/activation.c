
CC ?= cc
SRC = $(wildcard src/*.c)
CFLAGS  = -std=c99 -Ideps -Isrc
CFLAGS += -Wall -Wno-unused-function

example: example.c $(SRC)
	$(CC) $^ -o $@ $(CFLAGS)

clean:
	rm -f example

.PHONY: clean
