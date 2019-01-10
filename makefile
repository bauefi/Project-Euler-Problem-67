triangle: main.o triangle.o
	g++ main.o triangle.o -o triangle

main.o: main.cpp
	g++ -Wall -g -c main.cpp

triangle.o: triangle.cpp triangle.h
	g++ -Wall -g -c triangle.cpp
