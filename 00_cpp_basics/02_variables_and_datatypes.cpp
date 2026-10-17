/**
 * ============================================================================
 * Lesson 02: Variables, Data Types, Memory Sizes & I/O
 * Module: 00_cpp_basics
 * ----------------------------------------------------------------------------
 * WHAT THIS FILE DOES:
 * Explores how data is stored in RAM, sizes of primitive data types,
 * ASCII representation, integer overflow, and reading user input.
 * ============================================================================
 */

#include <iostream>
#include <climits> // Gives min/max limits for integer types (INT_MAX, INT_MIN)

using namespace std;

int main() {
    cout << "======================================================" << endl;
    cout << "  Lesson 02: Variables, Data Types & RAM Architecture " << endl;
    cout << "======================================================" << endl;

    // ------------------------------------------------------------------------
    // 1. PRIMITIVE DATA TYPES & THEIR MEMORY SIZES (sizeof operator)
    // ------------------------------------------------------------------------
    int integerVar = 42;
    long long bigInteger = 9000000000000000000LL; // 64-bit int for large numbers
    float floatVar = 3.14159f;                   // 32-bit single precision
    double doubleVar = 3.141592653589793;         // 64-bit double precision
    char charVar = 'A';                          // 8-bit character (ASCII)
    bool boolVar = true;                         // 1-bit logic (takes 1 byte)

    cout << "\n[1] MEMORY FOOTPRINT OF PRIMITIVE DATA TYPES:" << endl;
    cout << " - sizeof(char)      : " << sizeof(charVar)      << " byte  | Value: " << charVar << endl;
    cout << " - sizeof(bool)      : " << sizeof(boolVar)      << " byte  | Value: " << boolVar << " (true=1)" << endl;
    cout << " - sizeof(int)       : " << sizeof(integerVar)   << " bytes | Value: " << integerVar << endl;
    cout << " - sizeof(long long) : " << sizeof(bigInteger)   << " bytes | Value: " << bigInteger << endl;
    cout << " - sizeof(float)     : " << sizeof(floatVar)     << " bytes | Value: " << floatVar << endl;
    cout << " - sizeof(double)    : " << sizeof(doubleVar)    << " bytes | Value: " << doubleVar << endl;

    // ------------------------------------------------------------------------
    // 2. ASCII VALUES & CHAR ARITHMETIC (Critical for DSA string problems)
    // ------------------------------------------------------------------------
    cout << "\n[2] ASCII VALUE DEMONSTRATION:" << endl;
    char alphabet = 'A';
    int asciiValue = alphabet; // Implicit type conversion (char -> int)
    cout << " - Character '" << alphabet << "' has ASCII value: " << asciiValue << endl;
    
    // Character arithmetic: 'A' + 1 becomes 'B'
    char nextChar = alphabet + 1;
    cout << " - Character '" << alphabet << "' + 1 = '" << nextChar << "' (ASCII: " << (int)nextChar << ")" << endl;

    // Converting uppercase to lowercase using ASCII offset (difference is 32)
    char upper = 'G';
    char lower = upper + ('a' - 'A'); // 'a' - 'A' = 32
    cout << " - Uppercase '" << upper << "' converted to Lowercase: '" << lower << "'" << endl;

    // ------------------------------------------------------------------------
    // 3. INTEGER OVERFLOW (Huge exam trap!)
    // ------------------------------------------------------------------------
    cout << "\n[3] INTEGER OVERFLOW (EXAM TRAP):" << endl;
    cout << " - Maximum value of 32-bit int (INT_MAX): " << INT_MAX << endl;
    
    // When you add 1 to INT_MAX, it wraps around to negative (INT_MIN)!
    int overflowed = INT_MAX + 1;
    cout << " - INT_MAX + 1 causes overflow! Result: " << overflowed << endl;

    // Solution in DSA: Use 'long long' to avoid overflow when calculating sums/products
    long long safeSum = (long long)INT_MAX + 1;
    cout << " - Fixed using 'long long': " << safeSum << endl;

    // ------------------------------------------------------------------------
    // 4. USER INPUT DEMONSTRATION (cin)
    // ------------------------------------------------------------------------
    cout << "\n[4] VARIABLE ASSIGNMENT & SIMPLE MATH:" << endl;
    int a = 15;
    int b = 4;
    cout << " - Given a = " << a << ", b = " << b << endl;
    cout << " - Addition       (a + b) : " << (a + b) << endl;
    cout << " - Subtraction    (a - b) : " << (a - b) << endl;
    cout << " - Multiplication (a * b) : " << (a * b) << endl;
    cout << " - Integer Div    (a / b) : " << (a / b) << " (Notice truncation: 15/4 = 3)" << endl;
    cout << " - Float Div ((float)a/b) : " << ((float)a / b) << " (Explicit typecast)" << endl;
    cout << " - Modulus/Remainder(a % b): " << (a % b) << " (15 % 4 = 3)" << endl;

    cout << "\n======================================================" << endl;
    return 0;
}
