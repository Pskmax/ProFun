#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a;
	if (a == 0)
	{
		cout << "zero";
	}
	if (a > 0)
	{
		b = a % 2;
		if (b == 0)
		{
			cout << "Positive Even";
		}
		if (b != 0)
		{
			cout << "Positive Odd";
		}
	}
	if (a < 0)
	{
		b = a % 2;
		if (b == 0)
		{
			cout << "Negative Even";
		}
		if (b != 0)
		{
			cout << "Negative Odd";
		}
	}
	return 0;
}