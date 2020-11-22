#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, sum;
	scanf("%d %d %d", &a, &b, &c);
	sum = a + b + c;
	if (sum > 0)
	{
		if (sum >= 50)
		{
			if (sum >= 55)
			{
				if (sum >= 60)
				{
					if (sum >= 65)
					{
						if (sum >= 70)
						{
							if (sum >= 75)
							{
								if (sum >= 80 && sum <= 100)
								{
									printf("A");
								}
								else
									printf("B+");
							}
							else
								printf("B");
						}
						else
							printf("C+");
					}
					else
						printf("C");
				}
				else
					printf("D+");
			}
			else
				printf("D");
		}
		else
			printf("F");
	}
	return 0;
}