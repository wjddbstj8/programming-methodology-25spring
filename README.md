# 📝 Assignment: Test-Driven Development — Implementing a `TodoList` Class in C++

---

## Objective

You will **write tests first** (TDD style) and then implement a simple
`TodoList` class in C++. You will use **Google Test (gtest)** to guide your
development process.

---

## Specification

Implement a class `TodoList` that supports the following functionality:

| Method               | Description                                                   |
|----------------------|---------------------------------------------------------------|
| `add_task(string)`   | Adds a new task                                               |
| `remove_task(int)`   | Removes the task at the given index                           |
| `complete_task(int)` | Marks the task as completed (removes it from the pending list)|
| `get_pending_tasks()`| Returns a list of all pending tasks                           |

📌 Tasks are represented as `std::string`. You do **not** need to persist tasks or implement a GUI.

---

## Starter Code

You are given:

- `todo.h` — function declarations
- `todo.cpp` — empty implementations
- `test_todo.cpp` — starter tests (some marked as TODO)
- `CMakeLists.txt` — to build everything with Google Test

