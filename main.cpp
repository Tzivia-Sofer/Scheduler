#include "schduler.h"
#include "HW.h"
#include "learn_forever.h"

int main()
{


    Scheduler scheduler;
    HW hw(3, 1000000);
    ITask* doHW = &hw;

    LearnForever learn(4,1000000);
    ITask* learnForever = &learn;

    scheduler.addTask(doHW);
    scheduler.addTask(learnForever);

    scheduler.run();

    return 0;
}