#include "BigInteger.h"
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {
    BigInteger bi = BigInteger("82345678901234567890");
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "82345678901234567890");

    bi = BigInteger("92345678901234567890");
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "92345678901234567890");

    bi = BigInteger("92345678902564567890");
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "92345678902564567890");

    bi = BigInteger("-92345678902564567890");
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "-92345678902564567890");

    bi = BigInteger("-2112");
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "-2112");

    bi = BigInteger("2112");
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "2112");

    bi = BigInteger("1324");
    bi.SetDigit(1, 4);
    cout << "bi: " << bi.ToString() << endl;
    assert(bi.ToString() == "1424");

    BigInteger bi1 = BigInteger(bi);
    cout << "bi1: " << bi1.ToString() << endl;
    assert(bi1.ToString() == "1424");

    bi.SetDigit(1, 3);
    cout << "bi1: " << bi1.ToString() << endl;
    cout << "bi: " << bi.ToString() << endl;
    assert(bi1.ToString() == "1424");
    assert(bi.ToString() == "1324");

    bi1.SetDigit(1, 0);
    cout << "bi1: " << bi1.ToString() << endl;
    cout << "bi: " << bi.ToString() << endl;
    assert(bi1.ToString() == "1024");
    assert(bi.ToString() == "1324");
}
