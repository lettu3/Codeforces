CC = gcc
CFLAGS= -Wall -std=c99

%. : %.c
	$(CC) $(CFLAGS) $< -o $@