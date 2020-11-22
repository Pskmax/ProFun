#include<iostream>
using namespace std;
int main()
{
	int S, H, M, fee;
	cout << "Enter the number of shopping : ";
	cin >> S;
	cout << "Enter the number of hours : ";
	cin >> H;
	cout << "Enter the number of minutes : ";
	cin >> M;

	if (S < 0 || H < 0 || M < 0)
	{
		cout << "It can't be negative";
	}
	if (S >= 1000)
	{
		if (H < 4 && M < 60)
		{
			cout << "There is no charge";
		}
		if (H == 4 && M == 0)
		{
			cout << "There is no charge";
		}
		if (H > 4 && M == 0)
		{
			H += 1;
			fee = (H - 5) * 30;
			cout << "The parking fee is " << fee;
			cout << " Baht";
		}
		if (H > 3 && M < 60 && M >0)
		{
			H += 1;
			fee = (H - 4) * 30;
			cout << "The parking fee is " << fee;
			cout << " Baht";
		}
	}
	if (S < 1000)
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
		if (H > 0 && M < 60 && M >0)
		{
			H += 1;
			fee = (H - 1) * 30;
			cout << "The parking fee is " << fee;
			cout << " Baht";
		}
	}
	return 0;
}