CC = g++
CFLAGS = -c -Wall -Wextra
all: chat

chat: chat.o grammar.o
	$(CC) chat.o grammar.o -o chat

chat.o: chat.cpp
	$(CC) $(CFLAGS) chat.cpp

grammar.o: grammar.cpp
	$(CC) $(CFLAGS) grammar.cpp

clean:
	rm -rf *o chat
