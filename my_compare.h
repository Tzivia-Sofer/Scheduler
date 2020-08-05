#ifndef __MY_COMPARE__
#define __MY_COMPARE__

#include "task.h"
#include "schduler.h"

typedef std::pair<unsigned long, ITask*> pair;

struct Compare
{
    bool operator()(pair const& a, pair const& b) const
    {
        return a.first > b.first;
    }
};

#endif