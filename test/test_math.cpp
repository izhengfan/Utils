#include <iostream>
#include <set>
#include "Math.hpp"

using namespace std;

int main()
{
	vector<double> v = {1., 2., 3., 4.} ;

	cout << utl::mean(v) << endl;

	cout << utl::median(v) << endl;

	cout << utl::stddev(v, utl::mean(v)) << endl;

	cout << utl::max(v) << " " << utl::min(v) << endl;

	set<float> s = {2.f, 3.f, 4.f};
	cout << utl::mean(s) << endl;

	cout << utl::median(s) << endl;

	cout << utl::stddev(s, utl::mean(s)) << endl;

	cout << utl::max(s) << " " << utl::min(s) << endl;

	cout << utl::minmax(s).first << " " << utl::minmax(s).second << endl;

	cout << utl::normSquare(s) << " " << utl::norm(s) << endl;

	return 0;
}
