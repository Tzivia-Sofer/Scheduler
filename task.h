#ifndef __TASK__
#define __TASK__

#include <iostream>
#include "my_time.h"

class ITask{
public:
    virtual ~ITask() {};
    virtual void             run() {};
    virtual unsigned long    getNextRunPeriod() {};
    virtual int              cyclesLeft() {};
    virtual std::string      getNameOfTask() {};
};


#endif