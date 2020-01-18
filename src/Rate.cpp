/** ----------------------------------------------
  * Copyright (C) 2020 All rights reserved.
  * @file: Rate.cpp
  * @version: 0.0.1
  * @author: ZHENG Fan
  * @date: 2020-01-18
  * @brief: 
  * @details: 
  *-----------------------------------------------*/
#include "Rate.hpp"
#include <thread>

namespace xxtk
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
