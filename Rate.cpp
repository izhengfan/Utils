#include "Rate.hpp"

using namespace std::chrono;

Rate::Rate(int rate_) {
    rate = rate_;
    int64_t nano = 1e9 / rate;
    
    durationNeed = nanoseconds( nano );

    timeBegin = std::chrono::high_resolution_clock::now();
    timeEndExpected = timeBegin + durationNeed;

}

Rate::~Rate() {}

void Rate::sleep() {

    timeEnd = std::chrono::high_resolution_clock::now();

    if(timeEnd < timeEndExpected)
        std::this_thread::sleep_until(timeEndExpected);
    else
        timeEndExpected =  std::chrono::high_resolution_clock::now();

    timeEndExpected += durationNeed;
}

