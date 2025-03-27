#include <gtest/gtest.h>
#include "todo.h"

TEST(TodoListTest, AddTask) {
    TodoList todo;
    todo.add_task("Write slides");
    auto tasks = todo.get_pending_tasks();
    EXPECT_EQ(tasks.size(), 1);
    EXPECT_EQ(tasks[0], "Write slides");
}

TEST(TodoListTest, CompleteTask) {
    TodoList todo;
    todo.add_task("A");
    todo.add_task("B");
    todo.complete_task(0);
    auto tasks = todo.get_pending_tasks();
    EXPECT_EQ(tasks.size(), 1);
    EXPECT_EQ(tasks[0], "B");
}

// TODO: Implement this test
TEST(TodoListTest, RemoveTask) {
    TodoList todo;
    todo.add_task("A");
    todo.add_task("B");
    // Remove task at index 1
    // Check that only "A" remains

}

// TODO: Add a test for invalid index
// Use EXPECT_THROW(..., std::out_of_range);
