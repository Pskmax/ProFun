#include<iostream>
using namespace std;
int main()
{
	int H, M, h, fee;
	cout << "Enter the number of hours : ";
	cin >> H;
	cout << "Enter the number of minutes : ";
	cin >> M;
	if (H < 0 || M < 0)
	{
		cout << "It can't be negative";
	}
	else
	{
		if (H < 1 && M < 60)
		{
			cout << "There is no charge";
		}
		if (H == 1 && M == 0)
		{
			cout << "There is no charge";
		}
		if (H > 1 && M == 0)
		{
			H += 1;
			fee = (H - 2) * 30;
			cout << "The parking fee is " << fee;
			cout << " Baht";
		}
		if (H > 0 && M < 60 && M > 0)
		{
			H += 1;
			fee = (H - 1) * 30;
			cout << "The parking fee is " << fee;
			cout << " Baht";
		}
	}

	return 0;
}