#include "altint.h"

#include <unistd.h>
#include <iostream>

using namespace std;

// TEST
int main()
{
    cout << "sizeof(uint56_t) = " << sizeof(uint56_t) << endl;

    uint56_t testA;
    uint56_t testB(INT8_MAX);

    int8_t  test8  = testB;
    int16_t test16 = testB;
    int24_t test24 = int24_t(testB);
    int32_t test32 = testB;
    int40_t test40 = int40_t(testB);
    int48_t test48 = int48_t(testB);
    int56_t test56 = int56_t(testB);
    int64_t test64 = testB;

    cout << "test8  = " << int(test8) << endl;
    cout << "test16 = " << test16 << endl;
    cout << "test24 = " << test24 << endl;
    cout << "test32 = " << test32 << endl;
    cout << "test40 = " << test40 << endl;
    cout << "test48 = " << test48 << endl;
    cout << "test56 = " << test56 << endl;
    cout << "test64 = " << test64 << endl;

    testA = testA;
    cout << "testA = " << testA << endl;
    testA = -testA;
    cout << "testA = " << testA << endl;

    uint56_t testSA;
    testSA = 9;
    uint56_t testSB(16);

    testA = testSB - testSA;
    cout << testSB << " - " << testSA << " is " << testA << endl;
    testA = testSB + testSA;
    cout << testSB << " + " << testSA << " is " << testA << endl;
    testA = testSB * testSA;
    cout << testSB << " * " << testSA << " is " << testA << endl;
    testA = testSB / testSA;
    cout << testSB << " / " << testSA << " is " << testA << endl;
    testA = testSB % testSA;
    cout << testSB << " % " << testSA << " is " << testA << endl;

    testA = testSB >> testSA;
    cout << testSB << " >> " << testSA << " is " << testA << endl;
    testA = testSB << testSA;
    cout << testSB << " << " << testSA << " is " << testA << endl;
    testA = testSB | testSA;
    cout << testSB << " | " << testSA << " is " << testA << endl;
    testA = testSB & testSA;
    cout << testSB << " & " << testSA << " is " << testA << endl;
    testA = testSB ^ testSA;
    cout << testSB << " ^ " << testSA << " is " << testA << endl;

    cout << testA << " += " << testSA;
    testA += testSA;
    cout << " is " << testA << endl;
    cout << testA << " -= " << testSA;
    testA -= testSA;
    cout << " is " << testA << endl;
    cout << testA << " *= " << testSA;
    testA *= testSA;
    cout << " is " << testA << endl;
    cout << testA << " /= " << testSA;
    testA /= testSA;
    cout << " is " << testA << endl;
    cout << testA << " %= " << testSA;
    testA %= testSA;
    cout << " is " << testA << endl;

    cout << testA << " >>= " << testSA;
    testA >>= testSA;
    cout << " is " << testA << endl;
    cout << testA << " <<= " << testSA;
    testA <<= testSA;
    cout << " is " << testA << endl;
    cout << testA << " |= " << testSA;
    testA |= testSA;
    cout << " is " << testA << endl;
    cout << testA << " &= " << testSA;
    testA &= testSA;
    cout << " is " << testA << endl;
    cout << testA << " ^= " << testSA;
    testA ^= testSA;
    cout << " is " << testA << endl;

    testA = testSB == testSA;
    cout << testSB << " == " << testSA << " is " << testA << endl;
    testA = testSB != testSA;
    cout << testSB << " != " << testSA << " is " << testA << endl;
    testA = testSB < testSA;
    cout << testSB << " < " << testSA << " is " << testA << endl;
    testA = testSB > testSA;
    cout << testSB << " > " << testSA << " is " << testA << endl;
    testA = testSB <= testSA;
    cout << testSB << " <= " << testSA << " is " << testA << endl;
    testA = testSB >= testSA;
    cout << testSB << " >= " << testSA << " is " << testA << endl;

    return 0;
}
