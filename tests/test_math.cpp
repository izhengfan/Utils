#include <iostream>
#include <set>
#include "Math.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(XXTK_MATH, ALL)
{
	vector<double> v = {1., 2., 3., 4.} ;

	EXPECT_DOUBLE_EQ(xxtk::mean(v), 2.5);
	EXPECT_DOUBLE_EQ(xxtk::median(v), 2.5);
	EXPECT_DOUBLE_EQ(xxtk::stddev(v, xxtk::mean(v)), sqrt(5./3.));
	EXPECT_DOUBLE_EQ(xxtk::max(v), 4.);
	EXPECT_DOUBLE_EQ(xxtk::min(v), 1.);

	set<float> s = {2.f, 3.f, 4.f};
	EXPECT_DOUBLE_EQ(xxtk::mean(s), 3.f);
	EXPECT_DOUBLE_EQ(xxtk::median(s), 3.f);
	EXPECT_DOUBLE_EQ(xxtk::stddev(s, xxtk::mean(s)), 1.f);
	EXPECT_DOUBLE_EQ(xxtk::max(s), 4.f);
	EXPECT_DOUBLE_EQ(xxtk::min(s), 2.f);
	EXPECT_DOUBLE_EQ(xxtk::minmax(s).first, 2.f);
	EXPECT_DOUBLE_EQ(xxtk::minmax(s).second, 4.f);
	EXPECT_DOUBLE_EQ(xxtk::normSquare(s), 29.f);
	EXPECT_DOUBLE_EQ(xxtk::norm(s), sqrt(29.f));
}
