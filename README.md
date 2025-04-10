# 📝 Assignment: Test-Driven Development — Implementing a `TodoList` Class in C++


## Objective

In this assignment, you will implement a `TodoList` class using **manual memory management** with `char**`, and no use of STL or C string libraries. You’ll also write your own test cases using **Google Test**.

---

## What You Will Practice

- Using `char*` and `char**` to manage strings and dynamic arrays
- Writing custom `string_length` and `string_copy` functions
- Managing memory with `new[]` and `delete[]`
- Writing unit tests with Google Test
- Performing bounds checking and handling errors properly

## 📚 Requirements

You must implement a class with the following interface:

```cpp
class TodoList {
public:
    TodoList();
    ~TodoList();

    void add_task(const char* task);
    void remove_task(int index);
    void complete_task(int index);
    const char** get_pending_tasks(int& count) const;

private:
    static const int MAX_TASKS = 32;
    char* tasks[MAX_TASKS];
    int size;

    void remove_at(int index);
    int string_length(const char* str) const;
    void string_copy(char* dest, const char* src) const;
};
```