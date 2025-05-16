CC = g++
FLAGS = -Wall -pedantic -ansi -g -O0

OBJS = main.cpp cliente.cpp conta_bancaria.cpp

TARGET = programa

$(TARGET):
	$(CC) $(FLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp header.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) *.o
