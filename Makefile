CC     := gcc
CFLAGS := -O3 -std=gnu99

all: tiny

tiny:
	$(CC) tiny.c $(CFLAGS) -o ./tiny

clean:
	rm ./tiny