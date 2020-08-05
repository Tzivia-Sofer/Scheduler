#ifndef __SCHEDULER__
#define __SCHEDULER__

#include <vector>
#include <bits/stdc++.h> // for prority queue
#include "task.h"
#include "my_compare.h"


class Scheduler{
public:
    void run();
    void addTask(ITask*);

private:
    void reorderTasks();
    void endTask();
    void runTask(pair &);
    std::priority_queue<std::pair<unsigned long, ITask*>,
                        std::vector<std::pair<unsigned long, ITask*> >,
                        Compare> m_task_queue;
};

#endif

