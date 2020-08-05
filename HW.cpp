#include "HW.h"

HW::HW(int cycle, int sleepTime):
m_cycle(cycle) ,m_nextTime(Time::now() + sleepTime), m_sleepTime(sleepTime){}

void HW::run()
{
    std::cout << "doing homework...         "  << m_cycle << " cycles left" << std::endl;
    m_cycle--;
    updateTime();
}

unsigned long HW::getNextRunPeriod()
{
    return m_nextTime;
}

void HW::updateTime()
{
    m_nextTime += m_sleepTime;
}

int HW::cyclesLeft()
{
    return m_cycle;
}

std::string HW::getNameOfTask()
{
    return " HW ";
}