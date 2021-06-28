CC=gcc
CFLAGS=-g -Wall

all:
	$(CC) $(CFLAGS) -c -o strconv.o strconv.c
	$(CC) $(CFLAGS) -o main main.c strconv.o -lm

clean:
	$(RM) *.o main