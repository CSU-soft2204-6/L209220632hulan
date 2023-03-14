/*the following is my program to calculate the greatest common division
 and least common multiple of 2 number  */

#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d,m,n;
	cout << "Please input two number:";
	cin >> a >> b;
	if (a < b)
	{
		int i;
		i = b;
		b = a;
		a = i;
	}
	c = b - 1;
	for (; c > 0; c--) 
	{
		m = a % c;
		n = b % c;
		if ( m== 0 && n == 0) 
		{
			break;
		}
	}
	cout << c << "is the greatest common division" << endl;
	d = a + 1;
	for(;;)
	{
		int x = d % a;
		int y = d % b;
		d = d + 1;
		if (x == 0 && y == 0)
		{
			break;
		}
	}
	cout << (d-1) << "is the least common multiple" << endl;
	return 0;
}
