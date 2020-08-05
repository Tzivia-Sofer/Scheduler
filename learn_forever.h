#ifndef __LEARN__
#define __LEARN__

#include <iostream>
#include "task.h"

class LearnForever: public ITask{
public:
    LearnForever(int cycle, int sleepTime);
    ~LearnForever() {};

    /*virtual*/ void            run();
    /*virtual*/ unsigned long   getNextRunPeriod();
    /*virtual*/ int             cyclesLeft();
    /*virtual*/ std::string     getNameOfTask();
    void                        updateTime();

private:
    int m_cycle;
    unsigned long m_nextTime;
    const int m_sleepTime;
};

#endif //__LEARN__