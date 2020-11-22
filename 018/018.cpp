#include<iostream>
using namespace std;

int main()
{
	int a, i, j;
	cin >> a;
	if (a > 0)
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a - i; j++)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
	return 0;
}