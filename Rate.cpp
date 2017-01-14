/**

Rate: to achieve simple frame rate control using C++ 11 standard library

By ZHENG Fan fzheng@link.cuhk.edu.hk

*/

#include "Rate.h"
#include <thread>

namespace utl
{

	Rate::Rate(int rate_) {
		rate = rate_;
		int64_t nano = static_cast<int64_t>(1e9 / rate);

		durationNeed = std::chrono::nanoseconds(nano);
		timeEndExpected = std::chrono::system_clock::now() + durationNeed;
	}

	Rate::~Rate() {}

	void Rate::sleep() {

		if (std::chrono::system_clock::now() < timeEndExpected)
			std::this_thread::sleep_until(timeEndExpected);
		else
			timeEndExpected = std::chrono::system_clock::now();

		timeEndExpected += durationNeed;
	}

}