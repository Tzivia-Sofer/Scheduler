#ifndef __HW__
#define __HW__

#include <iostream>
#include "task.h"

class HW: public ITask{
public:
    HW(int cycle, int sleepTime);
    ~HW() {};

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

#endif