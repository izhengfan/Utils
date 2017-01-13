#pragma once
#ifndef UTL_HISTOGRAM_H_
#define UTL_HISTOGRAM_H_

#include <vector>
namespace utl
{

	class Histogram
	{
	public:
		// Do not allow construction and destruction
		Histogram() = delete;
		~Histogram() = delete;

		// Supported types: int8_t, int16_t, int32_t, int64_t, uint8_t, uint16_t, uint32_t, uint64_t, float, double.
		template<typename _T>
		static void create(const std::vector<_T>& src, const std::vector<_T>& range, std::vector<int>& out);

	};

} // namespace utl end

#endif // !UTL_HISTOGRAM_H_
