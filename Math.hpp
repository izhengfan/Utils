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
typename ContainerT::value_type mean(const ContainerT& c)
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

template<typename ContainerT>
typename ContainerT::value_type normSquare(const ContainerT& c)
{
	using T_ = typename ContainerT::value_type;
	T_ sum(0);
	for(auto itr = c.cbegin(), itrend = c.cend(); itr != itrend; itr++)
		sum += std::pow(*itr, 2);
	return sum;
}

template<typename ContainerT>
typename ContainerT::value_type norm(const ContainerT& c)
{
	using T_ = typename ContainerT::value_type;
	T_ sum(0);
	for(auto itr = c.cbegin(), itrend = c.cend(); itr != itrend; itr++)
		sum += std::pow(*itr, 2);
	return std::sqrt(sum);
}

template<typename ContainerT>
typename ContainerT::value_type stddev(const ContainerT& c, typename ContainerT::value_type mean)
{
	using T_ = typename ContainerT::value_type;
	if(c.size() <= 1)
		return T_(0);
	T_ sum;
	for(auto itr = c.cbegin(), itrend = c.cend(); itr != itrend; itr++)
		sum += std::pow(*itr -  mean, 2);
	return std::sqrt(sum / T_(c.size() - 1));
}



} // namespace utl

#endif
