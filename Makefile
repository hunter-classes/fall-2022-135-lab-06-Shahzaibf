main: main.o  caesar.o vigenere.o decrypt.o
	g++ -o main main.o  caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o


caesar.o: caesar.cpp caesar.h

tests.ascii.o: test-ascii.cpp

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

main.o: main.cpp caesar.h vigenere.h decrypt.h

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o tests.o caesar.o caesar main test-ascii tests test-ascii.o vigenere.o vigenere decrypt.o decrypt
