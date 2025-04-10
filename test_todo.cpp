#include <gtest/gtest.h>
#include "todo.h"

TEST(TodoListTest, AddSingleTask) {
    TodoList todo;
    todo.add_task("Write code");
    int count;
    const char** tasks = todo.get_pending_tasks(count);

    ASSERT_EQ(count, 1);
    EXPECT_STREQ(tasks[0], "Write code");
}

TEST(TodoListTest, RemoveTask) {
    TodoList todo;
    todo.add_task("A");
    todo.add_task("B");
    todo.remove_task(0);

    int count;
    const char** tasks = todo.get_pending_tasks(count);

    ASSERT_EQ(count, 1);
    EXPECT_STREQ(tasks[0], "B");
}

// TODO: Write a test that tries to remove an invalid index (negative or too large) hint: EXPECT_THROW

// TODO: Write a test that tries to add more than 32 tasks (overflow) hint: EXPECT_THROW