# Study C++ in 7 Days

Worked examples from a self-directed sprint through C++ fundamentals — pointers through to stacks, one topic per day, each as small compilable programs rather than notes.

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=flat-square&logo=cplusplus&logoColor=white)

---

## Contents

| Day | Topic | Covers |
|---|---|---|
| 1 | Pointers and pass-by | Pointer basics, pass by value vs reference vs pointer, aliasing |
| 2 | Encapsulation and abstraction | Access specifiers, getters and setters, separating interface from implementation |
| 3 | Inheritance and polymorphism | Base and derived classes, virtual functions, dynamic dispatch |
| 4 | Data structures | Arrays, structs, and building container types by hand |
| 5 | Linked lists | Node structures, insertion, deletion, traversal |
| 6 | Stacks | LIFO semantics, push/pop, array- and list-backed implementations |

---

## Building

Each folder holds standalone programs. Compile any of them directly — quote the path, since the folder names contain spaces and parentheses:

```bash
g++ -std=c++17 -Wall -Wextra -o demo "day 5 (Linked List)/example.cpp"
./demo
```

---

## Why this exists

Written while preparing for object-oriented programming and data structures coursework. The goal was working code for each concept rather than notes about it — the examples are deliberately small and self-contained, so each one can be read and run on its own.
