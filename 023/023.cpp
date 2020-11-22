#include<iostream>
using namespace std;

int main()
{
	int n, i;
	int number[1000];
	int temp;
	cout << "How many number that you want to input : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "Enter Number : ";
		cin >> number[i];
	}

	i = 0;
	do
	{
		if (i < n - 1 && number[i] > number[i + 1])
		{
			temp = number[i + 1];
			number[i + 1] = number[i];
			number[i] = temp;
			i = 0;
		}
		else
			i++;
	} while (i < n);
	for (i = 0; i < n; i++)
	{
		cout << endl << number[i];
	}
	return 0;
}