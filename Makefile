main: main.o funcs.o
	g++ -o main main.o funcs.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o




tests.ascii.o: test-ascii.cpp

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o funcs.o tests.o
