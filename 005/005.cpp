#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	if (a > 0)
	{
		if (a % 2 == 0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}
	return 0;
}