CC = g++
CFLAGS = -c -Wall -Wextra
all: generator

generator: main.o
	$(CC) main.o -o generator

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
clean:
	rm -rf *o generator
