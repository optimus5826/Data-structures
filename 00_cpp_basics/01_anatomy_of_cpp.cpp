/**
 * ============================================================================
 * Lesson 01: Anatomy of a C++ Program
 * Module: 00_cpp_basics
 * ----------------------------------------------------------------------------
 * WHAT THIS FILE DOES:
 * Demonstrates the bare minimum, foundational structure of any C++ program.
 * Every DSA solution in C++ will be built upon this exact skeleton.
 * ============================================================================
 */

// 1. PREPROCESSOR DIRECTIVE:
// Tells the compiler to include the Input/Output Stream library before compiling.
// Needed for printing to screen (cout) and reading keyboard input (cin).
#include <iostream>

// 2. NAMESPACE DECLARATION:
// Tells the compiler to look in the standard (std) library namespace.
// Without this line, you must write 'std::cout' instead of 'cout'.
using namespace std;

// 3. MAIN FUNCTION:
// The mandatory entry point where EVERY C++ program starts executing.
// 'int' means the function returns an integer status code to the operating system.
int main() {
    
    // 4. OUTPUT STATEMENT:
    // 'cout' (pronounced "see-out") stands for Character Output (console screen).
    // '<<' is the Insertion Operator, directing data to the stream.
    // 'endl' inserts a new line and flushes the output buffer.
    cout << "========================================" << endl;
    cout << "  Welcome to DSA from Scratch in C++!   " << endl;
    cout << "========================================" << endl;
    cout << "Step 1: Understand the skeleton of C++." << endl;
    cout << "Step 2: Learn Memory & Pointers." << endl;
    cout << "Step 3: Master Data Structures & Algorithms!" << endl;

    // 5. RETURN STATEMENT:
    // 'return 0;' signals to the Operating System that the program terminated successfully.
    // Any non-zero return code (e.g., return 1;) signals an error or abnormal termination.
    return 0;
}
