
CC ?= cc
SRC = $(wildcard src/*.c)
CFLAGS  = -std=c99 -Ideps -Isrc -Wall
LDFLAGS = -lm

example: example.c $(SRC)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS)

clean:
	rm -f example

.PHONY: clean
