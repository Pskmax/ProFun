#include<stdio.h>
int main()
{
	int a, b;
	int c = 0, result = 0;
	scanf_s("%d %d", &a, &b);
	c = b * 2;
	result = c - a;
	printf("%d", result);
	return 0;
}