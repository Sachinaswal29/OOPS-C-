#include <iostream>
using namespace std;
template <typename T>
T add(T x,T y)
{
	return x+y;
}

int main()
{
	cout << add<int>(7,3) << endl; // Perform add over two integers and return integer.
	cout << add<double>(3,7.3) << endl; // Perform add over one int and one float and return double.
	return 0;
}
