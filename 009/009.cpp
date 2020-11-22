#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	if (a == 'A')
	{
		printf("[80, 100]");
	}
	if (a == 'B')
	{
		printf("[70, 80)");
	}
	if (a == 'C')
	{
		printf("[60, 70)");
	}
	if (a == 'D')
	{
		printf("[50, 60)");
	}
	if (a == 'F')
	{
		printf("[0, 50)");
	}
	return 0;
}