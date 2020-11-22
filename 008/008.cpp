#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a[1000];
	scanf("%s", &a, 1000);
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			printf("There is vowel");
			return 0;
		}
	}
	printf("There is not vowel");
	return 0;
}