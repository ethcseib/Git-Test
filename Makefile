TARGET = main
CC = g++
CFLAGS = -c -Wall -g

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o test

main.o: main.cpp
	$(CC) main.cpp $(CFLAGS)

clean:
	rm *.o *~ $(TARGET)
