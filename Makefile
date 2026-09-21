all: big-integer big-integer-debug

big-integer: BigInteger.cpp BigIntegerTests.cpp BigInteger.h
	g++ -std=c++17 -Wall BigInteger.cpp BigIntegerTests.cpp -o BigInteger

big-integer-debug: BigInteger.cpp BigIntegerTests.cpp BigInteger.h
	g++ -std=c++17 -Wall -g BigInteger.cpp BigIntegerTests.cpp -o BigIntegerDebug

clean:
	rm -f BigInteger BigIntegerDebug