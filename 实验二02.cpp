/*the following is my program to solve a equation */

#include<iostream>
using namespace std;
int main()
{
	float a,x;
	cout << "Please enter x=";
	cin >> x;
	if (x > 0 && x < 10)
	{
		if (x > 0 && x < 1)
		{
			cout << (a = 3 - 2*x) << endl;
		}
		if (x >= 1 && x < 5)
		{
			cout << (a = 2 / (4 * x) + 1) << endl;
		}
		if (x >= 5 && x < 10)
		{
			cout << (a = x * x);
		}
	}
	else cout << "not in the definition interval" << endl;
	return 0;
}
