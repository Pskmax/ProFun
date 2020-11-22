#include<stdio.h>
int main()
{
	int a, b, i, multi;
	scanf_s("%d %d", &a, &b);
	for (i = 0;; i++)
	{
		multi = a * i;
		if (multi >= b)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}