#include<iostream>
using namespace std;
int main()
{
	float F, C, diff, multi;
	cin >> F;
	if (F >= 32)
	{
		diff = F - 32;
		multi = diff * 5;
		C = multi / 9;
		cout << C;
	}
	else
	{
		cout << "Too cold to live";
	}
	return 0;
}