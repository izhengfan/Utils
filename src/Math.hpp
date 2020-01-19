/** ----------------------------------------------
  * Copyright (C) 2020 All rights reserved.
  * @file: Math.hpp
  * @version: 0.0.1
  * @author: ZHENG Fan
  * @date: 2020-01-19
  * @brief: 
  * @details: 
  *-----------------------------------------------*/
#include <type_traits>
#include <cstdint>
namespace xxtk
{
	template<typename T>
	int64_t factorial(T m, T n)
	{
		static_assert(std::is_integral<T>::value, "Must be integral");
		int64_t ret = 1;
		for(int64_t i = m; i <= static_cast<int64_t>(n); i++)
			ret *= i;
		return ret;
	}

	template<typename T>
	inline int64_t factorial(T n)
	{
		return factorial(1, n);
	}

	template<typename T>
	inline int64_t all_arrange(T m, T n)
	{
		return factorial(n - m + 1, n);
	}
}
