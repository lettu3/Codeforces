CC = gcc
CPPC= g++
CFLAGS= -Wall -std=c99
CPPFLAGS= -Wall -std=c++17

%. : %.c
	$(CC) $(CFLAGS) $< -o $@

%. : %.cpp 
	$(CPPC) $(CPPFLAGS) $< -o $@