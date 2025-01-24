# makefile for the c++ version of the lab

CC = g++
CCFLAGS = -Iinclude -Wall

all: statisticsDemo

statisticsDemo: statistics.o src/main/statisticsDemo.cpp
		$(CC) $(CCFLAGS) bin/statistics.o src/main/statisticsDemo.cpp -o bin/statisticsDemo

statistics.o: src/main/statistics.cpp
		$(CC) $(CCFLAGS) -c src/main/statistics.cpp -o bin/statistics.o

run:
		@./bin/statisticsDemo

clean:
		rm -rf bin/*.o bin/statisticsDemo