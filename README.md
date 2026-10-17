# 🚀 Data Structures & Algorithms (DSA) in C++ — From Scratch

Welcome to the **Complete Zero-to-Hero DSA Repository**, crafted specifically for university exams, technical interviews, and conceptual mastery.

---

## 🎯 Our Learning Framework: The "WHAT - WHY - HOW" Method

Every single concept, data structure, and algorithm is taught with a strict, crystal-clear 3-step structure:

```
┌────────────────────────────────────────────────────────────────────────┐
│ 1. WHAT  │ The core definition, real-world analogy & visual model      │
│ 2. WHY   │ Why do we need it? Time/Space trade-offs & practical use    │
│ 3. HOW   │ Line-by-line C++ implementation, dry runs & exam questions  │
└────────────────────────────────────────────────────────────────────────┘
```

Plus, every lesson includes an **🎓 Exam Corner**:
- Top 5/10-mark theory questions
- Step-by-step dry-run tables (tracing code)
- Viva questions & common traps where students lose marks

---

## 🗺️ Complete Syllabus & Progress Tracker

- [ ] **Module 0: C++ Fundamentals for DSA**
  - [ ] `01_hello_world_and_syntax` — Compilation pipeline, `iostream`, structure of a C++ file
  - [ ] `02_variables_datatypes_io` — Memory size, primitive types, `cin`/`cout`
  - [ ] `03_control_flow` — Conditionals (`if-else`, `switch`), loops (`for`, `while`, `do-while`)
  - [ ] `04_functions_and_parameters` — Pass by Value vs Pass by Reference (`&`) *(Exam favorite!)*
  - [ ] `05_pointers_and_memory` — Address-of `&`, Dereference `*`, Stack vs Heap, `new`/`delete`
  - [ ] `06_structs_and_classes` — Creating custom types (Node representation)

- [ ] **Module 1: Time & Space Complexity (Asymptotic Analysis)**
  - [ ] `01_asymptotic_notations` — Big-O ($O$), Big-$\Omega$, Big-$\Theta$
  - [ ] `02_calculating_complexities` — Single loops, nested loops, logarithmic loops
  - [ ] `03_space_complexity` — Auxiliary space vs Total space

- [ ] **Module 2: Arrays & Matrices**
  - [ ] `01_static_arrays` — Memory formula: `Base_Address + i * size`, Traversal, Insertion, Deletion
  - [ ] `02_dynamic_arrays` — Implementing dynamic sizing from scratch & `std::vector`
  - [ ] `03_2d_arrays_matrices` — Row-major vs Column-major addressing *(Exam numerical favorite!)*

- [ ] **Module 3: Searching & Sorting Algorithms**
  - [ ] `01_linear_search` — Logic, Best/Worst/Avg case
  - [ ] `02_binary_search` — Iterative vs Recursive on sorted arrays
  - [ ] `03_bubble_sort` — Pass-by-pass tracing, stability, optimized flag
  - [ ] `04_selection_sort` — Finding minimum, swap count
  - [ ] `05_insertion_sort` — Shifting logic, card-game analogy
  - [ ] `06_merge_sort` — Divide and Conquer, merge procedure, recursion tree
  - [ ] `07_quick_sort` — Pivot selection, Lomuto/Hoare partition, worst-case analysis

- [ ] **Module 4: Linked Lists**
  - [ ] `01_singly_linked_list` — Node creation, Insert (head/tail/pos), Delete, Display
  - [ ] `02_array_vs_linked_list` — Comprehensive comparison table for exams
  - [ ] `03_reverse_linked_list` — 3-pointer iterative approach & recursive approach
  - [ ] `04_doubly_linked_list` — Two-way traversal, insert/delete
  - [ ] `05_circular_linked_list` — Applications, round-robin scheduling

- [ ] **Module 5: Stacks & Queues**
  - [ ] `01_stack_array` — LIFO principle, `push`, `pop`, `peek`, overflow/underflow
  - [ ] `02_stack_linked_list` — Dynamic stack implementation
  - [ ] `03_stack_applications` — Infix to Postfix conversion, Postfix evaluation, Parentheses matching
  - [ ] `04_linear_queue` — FIFO principle, boundary limitations
  - [ ] `05_circular_queue` — Modulo arithmetic `(rear + 1) % capacity`
  - [ ] `06_deque_and_priority_queue` — Double-ended queue & introduction to priority queues

- [ ] **Module 6: Recursion & Backtracking**
  - [ ] `01_recursion_basics` — Base case, recursive step, call stack tracing
  - [ ] `02_classic_problems` — Factorial, Fibonacci, Tower of Hanoi *(Exam classic!)*

- [ ] **Module 7: Trees & Binary Search Trees (BST)**
  - [ ] `01_tree_terminology` — Root, parent, child, leaf, height, depth, full vs complete
  - [ ] `02_binary_tree_traversals` — Preorder, Inorder, Postorder (Recursive & Iterative), Level Order
  - [ ] `03_binary_search_tree` — Search, Insert, Delete (3 cases: 0, 1, 2 children)
  - [ ] `04_avl_trees_overview` — Balance Factor, Rotations (LL, RR, LR, RL)

- [ ] **Module 8: Heaps & Priority Queues**
  - [ ] `01_binary_heap` — Array representation of trees, parent/child index formulas
  - [ ] `02_heap_operations` — Insert, Delete, Heapify, Heap Sort

- [ ] **Module 9: Graphs**
  - [ ] `01_graph_representations` — Adjacency Matrix vs Adjacency List
  - [ ] `02_graph_traversals` — Breadth First Search (BFS) & Depth First Search (DFS)
  - [ ] `03_minimum_spanning_tree` — Prim's & Kruskal's algorithms
  - [ ] `04_shortest_path` — Dijkstra's Algorithm

- [ ] **Module 10: Hashing**
  - [ ] `01_hash_table_basics` — Hash functions, collisions
  - [ ] `02_collision_resolution` — Chaining vs Open Addressing (Linear, Quadratic, Double Hashing)

---

## 🛠️ How to Compile & Run Any Program

Using the GNU C++ compiler (`g++`):

```bash
# 1. Compile:
g++ filename.cpp -o program

# 2. Run:
./program        # On Linux/macOS
program.exe      # On Windows
```

---

*Repository maintained and updated after each lesson.*
