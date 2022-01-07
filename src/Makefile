all: uname-strip-local-version.so
.POSIX:
.PHONY: all

CC = cc

uname-strip-local-version.so: uname-strip-local-version.c
	$(CC) -D_GNU_SOURCE -std=c11 -fpic -shared -o $(@) $(<)
