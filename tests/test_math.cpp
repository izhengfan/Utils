#include <gtest/gtest.h>
#include <Math.hpp>

TEST(XXTK_MATH, AllArrange)
{
	int i = 5;
	EXPECT_EQ(xxtk::factorial(i), 120);
	EXPECT_EQ(xxtk::factorial(0), 1);
	i = 3;
	EXPECT_EQ(xxtk::all_arrange(1, i), 3);
	EXPECT_EQ(xxtk::all_arrange(2, i), 6);

}

