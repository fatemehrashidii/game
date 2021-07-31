# -*- MakeFile -*-

all: corridor
# no actions

game.o: game.cpp headers.h
	g++ -c game.cpp

funcs.o: funcs.cpp headers.h
	g++ -c funcs.cpp

corridor: game.o funcs.o
	g++ game.o funcs.o -o corridor

clean: # no dependencies
	rm -f *.o corridor