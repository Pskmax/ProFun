#include<iostream>
using namespace std;
int main()
{
	int C, B;
	cin >> C;
	if (C >= 0)
	{
		B = C + 543;
		cout << B;
	}
	else
	{
		cout << "Please insert number that is greater or equal zero";
	}
	return 0;
}