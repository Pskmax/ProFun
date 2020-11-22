#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a > 0)
	{
		printf("more than zero");
	}
	if (a <= 0)
	{
		printf("less or equal zero");
	}
	return 0;
}