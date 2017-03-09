#pragma once
#ifndef UTL_MATH_
#define UTL_MATH_

#include <vector>
#include <algorithm>

namespace utl
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
	
// Note: If input is container of int, return type is int.
template<typename ContainerT>
typename ContainerT::value_type average(const ContainerT& c)
{
	using T_ = typename ContainerT::value_type;
	T_ sum = std::accumulate(c.cbegin(), c.cend(), T_(0));
	return sum / T_(c.size());
}

template<typename ContainerT>
std::pair<typename ContainerT::value_type, typename ContainerT::value_type> minmax(const ContainerT& c)
{
	using T_ = typename ContainerT::value_type;
	auto minmax_element = std::minmax_element(c.cbegin(), c.cend());
	return std::pair<T_,T_>(*minmax_element.first, *minmax_element.second);
}

template<typename ContainerT>
typename ContainerT::value_type min(const ContainerT& c)
{
	return *(std::min_element(c.cbegin(), c.cend()));
}

template<typename ContainerT>
typename ContainerT::value_type max(const ContainerT& c)
{
	return *(std::max_element(c.cbegin(), c.cend()));
}

} // namespace utl

#endif
