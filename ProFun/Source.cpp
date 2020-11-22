#include<iostream>
#include<ctype.h>
using namespace std;

size_t strlength(char* s)
{
	size_t i;
	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return i;
}

void strchange(char* s)
{
	while (*s != '\0')
	{
		if (*s == tolower(*s) && *s != toupper(*s)) *s = (char)toupper(*s);
		else *s = (char)tolower(*s);
		s++;
	}
}

int main()
{
	char a[100];
	cout << "Enter your word = ";
	cin >> a;
	cout << "Length = " << strlength(a) << endl;
	strchange(a);
	cout << "Upper of word = " << a << endl;
	return 0;
}