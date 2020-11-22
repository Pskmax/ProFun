#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double a;
	scanf("%lf", &a);
	if (a >= 0)
	{
		if (a >= 50)
		{
			printf("Pass");
		}
		if (a < 50 && a >= 0)
		{
			printf("Fail");
		}
	}
	if (a < 0)
	{
		printf("Please insert the number that is greater or equal zero");
	}
	return 0;
}