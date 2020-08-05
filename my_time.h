#include <iostream>

class Time{
public:
    explicit Time(unsigned long);
    static unsigned long    now();
    bool                    operator > (const Time&) const;
    unsigned long           operator - (const Time&) const;
    friend std::ostream&    operator << (std::ostream&, const Time&);

private:
    unsigned long m_time;
};
