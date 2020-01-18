#include <gtest/gtest.h>
#include "Rate.hpp"
#include <ctime>
#include <thread>
#include <vector>

using namespace std;
using namespace std::chrono;

TEST(XXTK_RATE, ALL)
{
	xxtk::Rate rate(5);
	std::vector<int64_t> millis;
	for(int i = 0 ; i < 4; i++)
	{
		millis.push_back(duration_cast<milliseconds>(
							 system_clock::now().time_since_epoch()
							 ).count());
		rate.sleep();
	}
	double thresh = 5;
#ifdef _MSC_VER
	thresh = 20;
#endif
	EXPECT_NEAR(millis[1]-millis[0], 1e3/5, thresh);
	EXPECT_NEAR(millis[2]-millis[1], 1e3/5, thresh);
	EXPECT_NEAR(millis[3]-millis[2], 1e3/5, thresh);
}

