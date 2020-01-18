#include "Histogram.hpp"
#include <gtest/gtest.h>


TEST(XXTK_HISTO, ALL)
{
	std::vector<int> v_ints(50);
	std::vector<int> v_range(5);
	for (int i = 0, iend = v_ints.size(); i < iend; i++)
	{
		v_ints[i] = i;
	}
	for (int i = 0, iend = v_range.size(); i < iend; i++)
	{
		v_range[i] = i * 10;
	}
	std::vector<int> v_out;
	xxtk::Histogram::create(v_ints, v_range, v_out);
	EXPECT_EQ(v_out, std::vector<int>({10,10,10,10}));
}
