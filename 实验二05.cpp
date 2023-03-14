#include <iostream>
#include <cctype>
/*the following is my program to count different types of data  */

#include<stdio.h>
using namespace std;
int main()
{
	char c;
	cout << "Please input a string: ";
	int letter = 0;
	int space = 0;
	int number = 0;
	int others = 0;
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			letter = letter++;
		}
		else if (c == ' ')
		{
			space = space++;
		}
		else if (c >= '0' && c <= '9')
		{
			number = number++;
		}
		else
		{
			others = others++;
		}
	}
	cout << "the string has " << letter << " letters." << endl;
	cout << "the string has " << space << " space." << endl;
	cout << "the string has " << number << " numbers." << endl;
	cout << "the string has " << others << " others." << endl;
	return 0;
}
