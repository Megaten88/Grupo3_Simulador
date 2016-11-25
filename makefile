main: main.o Ṕerson.o Couch.o Player.o
	g++ main.o Ṕerson.o Couch.o Player.o -o main

main.o:
	g++ -c main.cpp

Person.o: Person.h Person.cpp
	g++ -c Person.cpp

Player.o : Person.h Player.h Player.cpp
	g++ -c Player.cpp

Coach.o: Person.h Coach.h Coach.cpp
	g++ -c Coach.cpp

clean:
	rm -f *.o main