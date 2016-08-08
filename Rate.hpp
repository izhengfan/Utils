/** 

Rate: to achieve simple frame rate control using C++ 11 standard library

By ZHENG Fan fzheng@link.cuhk.edu.hk

*/

#include <chrono>
#include <thread>


class Rate 
{
private:
    std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> timeBegin;
    std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> timeEndExpected;
    std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> timeEnd;
    int rate;
    std::chrono::nanoseconds durationNeed;

public:
    Rate(int rate_);
    ~Rate();

    void sleep();

};