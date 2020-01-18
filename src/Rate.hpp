/** ----------------------------------------------
  * Copyright (C) 2020 All rights reserved.
  * @file: Rate.hpp
  * @version: 0.0.1
  * @author: ZHENG Fan
  * @date: 2020-01-18
  * @brief: 
  * @details: 
  *-----------------------------------------------*/
#pragma once
#ifndef UTL_RATE_H_
#define UTL_RATE_H_

#include <chrono>

namespace xxtk
{

	class Rate
	{
	public:
		Rate(int rate_);
		~Rate();

		// Set non-copyable
		Rate(const Rate&) = delete;
		Rate& operator= (const Rate&) = delete;

		void sleep();

	private:
		std::chrono::time_point<std::chrono::system_clock, std::chrono::nanoseconds> timeEndExpected;
		int rate;
		std::chrono::nanoseconds durationNeed;

	};

} // namespace utl end

#endif // !RATE_HPP_
