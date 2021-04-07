CC=g++
CFLAGS=-c -Wall

all:	main
main: main.o Polygon.o Rectangle.o Triangle.o
	$(CC) main.o Polygon.o Rectangle.o Triangle.o
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
Polygon.o: Polygon.cpp
	$(CC) $(CFLAGS) Polygon.cpp
Rectangle.o: Rectangle.cpp
	$(CC) $(CFLAGS) Rectangle.cpp
Triangle.o: Triangle.cpp
	$(CC) $(CFLAGS) Triangle.cpp
clean:
	rm *o main
