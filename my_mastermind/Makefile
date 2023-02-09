# makefile help us to start our game in 2 moves.
CC = gcc
CFLAGS = -g -Wall -O0 -std=c99
LDFLAGS = -lm
SOURCES = my_mastermind.c # it is which file we need to remake
OBJECTS = $(SOURCES:.c=.o)
TARGET = my_mastermind # name of the output file.

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: fclean

fclean:
	@rm -f $(TARGET) $(OBJECTS) core