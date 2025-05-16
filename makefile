# Makefile

CC = gcc

TARGET = program

CFLAGS  = -Wall -pedantic -ansi -g -O0
 
 
$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c
 
clean:
	$(RM) $(TARGET)
