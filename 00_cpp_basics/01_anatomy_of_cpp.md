# Lesson 01: The Anatomy of a C++ Program & How C++ Executes

---

## 1. 🔍 WHAT: The Concept

### What is C++?
C++ is a high-performance, statically typed, compiled programming language created by Bjarne Stroustrup in 1979 as an extension of the C language. It provides **direct control over system memory (RAM)** while also supporting Object-Oriented Programming (OOP) and high-level abstractions.

### What is DSA (Data Structures & Algorithms)?
- **Data Structure (The "Store"):** A specialized format for organizing, processing, retrieving, and storing data in computer memory efficiently (e.g., Arrays, Linked Lists, Stacks, Trees).
- **Algorithm (The "Recipe"):** A finite step-by-step procedure or set of rules to solve a specific computational problem (e.g., Sorting numbers, Searching for an element).

---

## 2. 💡 WHY: The Motivation & Exam Importance

### Why learn DSA in C++?
1. **Direct Memory Control:** Unlike Java or Python, C++ gives you direct pointers to memory addresses. You can allocate and deallocate bytes yourself using `new` and `delete`. This makes internalizing how Linked Lists, Trees, and Heaps live in RAM 10x clearer.
2. **Speed & Efficiency:** C++ code compiles directly to native CPU machine instructions without any virtual machine (JVM) or interpreter overhead.
3. **The Gold Standard in Academics & Contests:** Most university curricula and coding platforms (LeetCode, Codeforces) treat C++ as the primary benchmark.

### Why do we need each line of the skeleton?

| Line in Code | What it is | Why it is mandatory |
| :--- | :--- | :--- |
| `#include <iostream>` | Preprocessor Header | Gives access to `cin` and `cout`. Without it, the computer doesn't know how to print to the screen. |
| `using namespace std;` | Namespace Scope | Prevents namespace collisions. Without it, you would have to type `std::cout`, `std::cin`, `std::endl` every time. |
| `int main()` | Entry Point | Operating Systems look specifically for a function named `main` to start program execution. |
| `return 0;` | Exit Status | `0` tells the Operating System: *"The program finished with ZERO errors."* |

---

## 3. ⚙️ HOW: Implementation & Behind-the-Scenes

### The 4 Stages of C++ Compilation (Very Common Exam Question!)

```
  [ Source Code: file.cpp ]
              │
              ▼ (1) Preprocessing: Expands #include, removes comments
  [ Expanded Source: file.i ]
              │
              ▼ (2) Compilation: Translates C++ code to Assembly code
  [ Assembly Code: file.s ]
              │
              ▼ (3) Assembly: Converts assembly mnemonics to machine code
  [ Object Code: file.o / file.obj ]
              │
              ▼ (4) Linking: Combines object code with system libraries (iostream)
  [ Executable Binary: file.exe ]
```

### How to Compile & Run on Windows

```powershell
# Step 1: Open terminal in the directory
cd 00_cpp_basics

# Step 2: Compile with g++
g++ 01_anatomy_of_cpp.cpp -o 01_anatomy_of_cpp.exe

# Step 3: Run the executable
.\01_anatomy_of_cpp.exe
```

---

## 🎓 College Exam Corner (High-Yield Questions)

### Q1. (Theory - 5 Marks) Explain the basic structure of a C++ program with an example.
**Model Answer Structure:**
1. **Preprocessor Directives:** `#include <iostream>` loads library definitions before compilation.
2. **Global / Namespace Declaration:** `using namespace std;` brings standard identifiers into scope.
3. **Main Function:** `int main()` is the mandatory entry point where execution begins.
4. **Body of Main:** Statements enclosed in `{ }`, terminated by semicolons `;`.
5. **Return Statement:** `return 0;` signals exit code to OS.

### Q2. (Viva / Short Question - 2 Marks) What is the difference between `\n` and `endl`?
- `\n`: A character escape sequence that moves the cursor to a new line. It is **faster** because it does not flush the output stream buffer.
- `endl`: Moves the cursor to a new line **AND flushes the stream buffer** immediately to the screen. In competitive programming / heavy loops, `\n` is preferred for speed.

### Q3. (Viva - 2 Marks) Why does `main()` return an `int` instead of `void`?
According to ISO C++ standards, `main()` must return an integer status code to the host environment (Operating System). Returning `0` denotes success; returning any non-zero value (e.g., `1`, `-1`) signals an error.
