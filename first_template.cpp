#include <iostream>

using namespace std;

template <typename T>
T min(T a, T b)
{
	if (a > b)
		a = b;
	return a;
};

int main()
{
	int a = 1, b = 2;
	cout << min(a,b) << endl;

	system("pause");
	return 0;
}