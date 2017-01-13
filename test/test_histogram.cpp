#include <iostream>
#include "Histogram.h"

int main()
{
	std::cout << "size of int " << sizeof(int) << std::endl;
	std::cout << "size of long " << sizeof(long) << std::endl;
	std::cout << "size of long long " << sizeof(long long) << std::endl;

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
	utl::Histogram::create(v_ints, v_range, v_out);
	for (const int& elem : v_out)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;
	std::cin.get();
	return 0;
}