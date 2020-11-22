#include<stdio.h>
#include<string.h>

int checkn(char);
int checke(char);
int checkv(char);
int checkr(char);

int main()
{
    int sum = 0;
    char a[10000];
    scanf_s("%s", a, 10000);
    for (int i = 0; i < strlen(a); i++)
    {
        if (checkn(*(a + i)) == 1)
        {
            if (checke(*(a + i + 1)) == 1)
            {
                if (checkv(*(a + i + 2)) == 1)
                {
                    if (checke(*(a + i + 3)) == 1)
                    {
                        if (checkr(*(a + i + 4)) == 1)
                        {
                            sum++;
                        }
                    }
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}

int checkn(char check)
{
    if (check == 'n' || check == 'N')
        return 1;
    else
        return 0;
}

int checke(char check)
{
    if (check == 'e' || check == 'E')
        return 1;
    else
        return 0;
}

int checkv(char check)
{
    if (check == 'v' || check == 'V')
        return 1;
    else
        return 0;
}

int checkr(char check)
{
    if (check == 'r' || check == 'R')
        return 1;
    else
        return 0;
}