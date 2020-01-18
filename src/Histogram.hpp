/** ----------------------------------------------
  * Copyright (C) 2020 All rights reserved.
  * @file: Histogram.hpp
  * @version: 0.0.1
  * @author: ZHENG Fan
  * @date: 2020-01-18
  * @brief: 
  * @details: 
  *-----------------------------------------------*/
#pragma once

#include <vector>
namespace xxtk
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

}

