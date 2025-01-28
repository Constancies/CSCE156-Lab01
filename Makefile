# makefile for the c++ version of the lab

CC = g++
CCFLAGS = -Iinclude -Wall -g

all: statisticsDemo birthday

statisticsDemo: statistics.o src/main/statisticsDemo.cpp
		$(CC) $(CCFLAGS) bin/statistics.o src/main/statisticsDemo.cpp -o bin/statisticsDemo

statistics.o: src/main/statistics.cpp
		$(CC) $(CCFLAGS) -c src/main/statistics.cpp -o bin/statistics.o

birthday: src/main/birthday.cpp
		$(CC) $(CCFLAGS) src/main/birthday.cpp -o bin/birthday

run:
		@./bin/statisticsDemo

clean:
		rm -rf bin/*.o bin/statisticsDemo bin/birthday