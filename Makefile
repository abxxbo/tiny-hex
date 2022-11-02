CC     := gcc
CFLAGS := -O3 -std=gnu99 -Wall -Wextra

all: clean tiny

tiny:
	$(CC) tiny.c $(CFLAGS) -o ./tiny

clean:
	rm -fr ./tiny