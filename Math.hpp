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
	std::vector<T_> v = std::vector<T_>(c.begin(), c.end());
	std::sort(v.begin(), v.end());
	if (v.size() % 2 == 0)
	{
		int halfsize = v.size() / 2;
		return double(v[halfsize-1] + v[halfsize]) / 2.;
	}
	else
	{
		return double(v[v.size() / 2]);
	}
}

} // namespace math
} // namespace utl

#endif
