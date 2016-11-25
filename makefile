main: main.o Person.o Coach.o Player.o Team.o Game.o
	g++ main.o Person.o Coach.o Player.o Team.o Game.o -o main

main.o: main.cpp Person.h Player.h Coach.h Team.h Game.h
	g++ -c main.cpp

Person.o: Person.h Person.cpp
	g++ -c Person.cpp

Player.o : Person.h Player.h Player.cpp
	g++ -c Player.cpp

Coach.o: Person.h Coach.h Coach.cpp
	g++ -c Coach.cpp

Team.o: Player.h Coach.h Team.h Team.cpp
	g++ -c Team.cpp

Game.o: Team.h Game.h Game.cpp
	g++ -c Game.cpp

clean:
	rm -f *.o main