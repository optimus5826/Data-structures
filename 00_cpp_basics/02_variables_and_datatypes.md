# Lesson 02: Variables, Data Types & RAM Architecture

---

## 1. 🔍 WHAT: The Concepts

### What is a Variable?
A **variable** is a named location in the computer's memory (RAM) reserved to store data that can be manipulated during program execution.
- Think of RAM as a gigantic street of houses, each having a unique numeric address (e.g., `0x7ffee4b1a8`).
- A variable gives that numeric address a friendly name (e.g., `score = 100`).

### What is a Data Type?
A **data type** tells the compiler two things:
1. **How much memory (how many bytes)** to allocate in RAM.
2. **How to interpret those binary bits** (as an integer, a decimal number, or an ASCII text character).

```
┌───────────┬───────────────┬──────────────────────────────────────────┐
│ Data Type │ Size in RAM   │ Range of Values                          │
├───────────┼───────────────┼──────────────────────────────────────────┤
│ bool      │ 1 Byte        │ true (1) or false (0)                    │
│ char      │ 1 Byte        │ -128 to 127 (or 0 to 255 ASCII values)   │
│ int       │ 4 Bytes       │ -2,147,483,648 to 2,147,483,647 (~ ±2×10⁹)│
│ long long │ 8 Bytes       │ -9×10¹⁸ to 9×10¹⁸                         │
│ float     │ 4 Bytes       │ ~7 decimal digits of precision           │
│ double    │ 8 Bytes       │ ~15 decimal digits of precision          │
└───────────┴───────────────┴──────────────────────────────────────────┘
```

---

## 2. 💡 WHY: The Motivation & DSA Relevance

### Why do data types matter in Data Structures & Algorithms?
1. **Integer Overflow:**
   - In 32-bit `int`, the highest possible number is `INT_MAX = 2,147,483,647` ($2^{31} - 1$).
   - If you compute the sum of an array where elements are large, adding two ints can easily exceed $2 \times 10^9$. 
   - When an `int` overflows, it wraps around to negative numbers (`-2,147,483,648`), producing wrong answers!
   - **Exam / DSA Rule:** Whenever numbers can exceed $10^9$, immediately use `long long`.
2. **Space Complexity:**
   - If you need a boolean array of 1,000,000 flags, using `int` takes $4\text{ MB}$, while `bool` takes $1\text{ MB}$.
3. **ASCII Arithmetic in String Algorithms:**
   - Every character is internally an integer (`'A'` is 65, `'a'` is 97).
   - In DSA hashing and frequency arrays: `char - 'a'` gives a zero-indexed number from `0` to `25`!
     - `'a' - 'a' = 0`
     - `'b' - 'a' = 1`
     - `'z' - 'a' = 25`

---

## 3. ⚙️ HOW: Implementation Details

### How Integer Division & Typecasting Works

```cpp
int a = 15;
int b = 4;

cout << (a / b);         // Output: 3  (Fractional part .75 is discarded/truncated!)
cout << ((float)a / b);  // Output: 3.75 (Explicit casting forces floating-point division)
cout << (a % b);         // Output: 3  (Remainder of 15 divided by 4)
```

> **Note on Modulus `%`:** Modulus only works with **integer operands** in C++. Doing `5.5 % 2` will cause a compilation error.

### How Characters Map to Memory (ASCII Table Highlights)
- `'0'` to `'9'` $\rightarrow$ ASCII `48` to `57` (Converting char digit to int: `char_digit - '0'`)
- `'A'` to `'Z'` $\rightarrow$ ASCII `65` to `90`
- `'a'` to `'z'` $\rightarrow$ ASCII `97` to `122`
- Difference between Lowercase and Uppercase: `'a' - 'A' = 32`.

---

## 🎓 College Exam Corner (High-Yield Questions)

### Q1. (Theory - 5 Marks) List and explain primary data types in C++ with memory sizes.
**Model Answer Structure:**
1. **Integer Types (`short`, `int`, `long`, `long long`):** Stores whole numbers. `int` typically occupies 4 bytes (range $-2^{31}$ to $2^{31}-1$).
2. **Floating-point Types (`float`, `double`):** Stores real numbers with fractional components. `float` (4 bytes, single precision, 7 digits), `double` (8 bytes, double precision, 15 digits).
3. **Character Type (`char`):** Stores a single character enclosed in single quotes. Occupies 1 byte (uses ASCII encoding).
4. **Boolean Type (`bool`):** Stores logical values `true` (1) or `false` (0). Occupies 1 byte in memory.
5. **Void Type (`void`):** Represents the absence of type or value; used for functions that return nothing or generic pointers (`void*`).

### Q2. (Exam Numerical / Code Tracing - 3 Marks) Predict the Output:
```cpp
#include <iostream>
using namespace std;
int main() {
    char ch = 'C';
    ch = ch + 2;
    cout << ch << " " << (int)ch;
    return 0;
}
```
**Answer & Step-by-Step Trace:**
- `'C'` has ASCII value `67`.
- `ch + 2` performs integer arithmetic: `67 + 2 = 69`.
- ASCII `69` corresponds to the character `'E'`.
- `cout << ch << " " << (int)ch;` prints:
  ```text
  E 69
  ```

### Q3. (Viva - 2 Marks) What is the `sizeof` operator in C++? Is it evaluated at compile-time or run-time?
`sizeof` is a compile-time operator used to determine the size, in bytes, of a data type or variable. Because it is computed at compile-time, it adds zero runtime overhead.
