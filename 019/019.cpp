#include<iostream>
using namespace std;
int main()
{
	int a, b, i, j;
	cin >> a;
	if (a > 0)
	{
		b = a - 3;
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a; j++)
			{
				if (i < 2 || j < 2 || i > b || j > b)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << "\n";
		}
	}
	return 0;
}