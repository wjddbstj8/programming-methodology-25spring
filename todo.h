#pragma once
#include <string>
#include <vector>

class TodoList {
public:
    void add_task(const std::string& task);
    void complete_task(int index);
    void remove_task(int index);
    std::vector<std::string> get_pending_tasks() const;

private:
    std::vector<std::string> tasks;
};
