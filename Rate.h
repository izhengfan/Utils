/**

Rate: to achieve simple frame rate control using C++ 11 standard library

By ZHENG Fan fzheng@link.cuhk.edu.hk

*/
#pragma once
#ifndef UTL_RATE_H_
#define UTL_RATE_H_

#include <chrono>

namespace utl
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