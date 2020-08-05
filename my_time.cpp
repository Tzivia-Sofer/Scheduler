#include "my_time.h"
#include <iostream>


unsigned long Time::now()
{
    return static_cast<unsigned long>(time(nullptr)) ;
}

Time::Time(unsigned long time) : m_time(time) {}


bool Time::operator > (const Time& time2) const
{
    return m_time > time2.m_time;
}

unsigned long Time::operator - (const Time& time2) const
{
    return m_time - time2.m_time;
}

std::ostream& operator << (std::ostream& os, const Time& time)
{
    os << time.m_time;
    return os;
}