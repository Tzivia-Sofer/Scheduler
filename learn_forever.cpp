#include "learn_forever.h"


LearnForever::LearnForever(int cycle, int sleepTime) :
m_cycle(cycle) , m_nextTime(Time::now() + sleepTime), m_sleepTime(sleepTime){}

void LearnForever::run()
{
    std::cout << "learning forever...       " << m_cycle << " cycles left" << std::endl;
    m_cycle--;
    updateTime();
}

unsigned long LearnForever::getNextRunPeriod()
{
    return m_nextTime;
}

void LearnForever::updateTime()
{
    m_nextTime = Time::now() + m_sleepTime;
}

int LearnForever::cyclesLeft()
{
    return m_cycle;
}

std::string LearnForever::getNameOfTask()
{
    return " Learn Forever ";
}