#pragma once
#ifndef UTL_MATH_
#define UTL_MATH_

#include <vector>
#include <algorithm>

namespace utl
{
namespace math
{

template<typename ContainerT>
double median(const ContainerT& c)
{
	using T_ = typename ContainerT::value_type;
	std::vector<T_> temp = std::vector<T_>(c.begin(), c.end());
	std::sort(temp.begin(), temp.end());
	if (temp.size() % 2 == 0)
	{
		int halfsize = temp.size() / 2;
		auto left = *(temp.begin() + halfsize - 1);
		auto right = *(temp.begin() + halfsize);
		return double(left + right) / 2.;
	}
	else
	{
		return double(*(temp.begin() + temp.size() / 2));
	}
}

} // namespace math
} // namespace utl

#endif
