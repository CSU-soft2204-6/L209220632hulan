/*the following is my program to output a specific figure  */

#include<iostream>
using namespace std;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		for (int a = 1; a<6-i; a++)
		{
			cout << " ";
		}
		for (int b = 1; b <=i; b++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
