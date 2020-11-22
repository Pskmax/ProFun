#include<iostream>
using namespace std;

int main()
{
	char a[1000], b[1000], c[1000];
	int i;
	cin >> a;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			b[i] = a[i] - 'A' + 'a';
			cout << b[i];
		}
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			c[i] = a[i] - 'a' + 'A';
			cout << c[i];
		}
	}
	return 0;
}