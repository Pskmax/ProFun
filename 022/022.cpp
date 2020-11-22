#include<iostream>
using namespace std;

int main()
{
	int a[2][3][3];
	int b[2][3][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cin >> a[i][j][k];
			}
		}
	}

	cout << endl;
	cout << "Result is: " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				b[i][j][k] = a[0][j][k] + a[1][j][k];
				cout << b[i][j][k];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}