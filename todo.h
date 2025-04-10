
class TodoList {
public:
    TodoList();                     // Initializes the task list
    ~TodoList();                    // Frees all allocated memory

    // Adds a new task (deep copy of input string)
    // Throws std::out_of_range if list is full
    void add_task(const char* task);

    // Removes the task at the given index
    // Throws std::out_of_range for invalid index
    void remove_task(int index);

    // Completes a task (same behavior as remove_task)
    void complete_task(int index);

    // Returns the list of pending tasks
    // Sets 'count' to the number of tasks
    const char** get_pending_tasks(int& count) const;

private:
    static const int MAX_TASKS = 32; // Fixed maximum number of tasks
    char* tasks[MAX_TASKS];          // Array of task strings
    int size;                        // Current number of tasks

    // Helper to remove a task at index (used by remove_task and complete_task)
    void remove_at(int index);

    // Custom string length function (do not use strlen)
    int string_length(const char* str) const;

    // Custom string copy function (do not use strcpy)
    void string_copy(char* dest, const char* src) const;
};