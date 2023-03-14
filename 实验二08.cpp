/*the following is my program to calculate root of square in iterative method  */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,m,n;
	cout << "Please input a number:";
	cin >> a;
	if(a<0)
	{
		cout << "no definition!";
	}
	else if (a == 0)
	{
		cout << "Its square root is:0.0" << endl;
	}
	else
	{
		m = a;
		for(;;)
		{
			n = (m +a / m) / 2;
		    double i = fabs(m - n);
			m = n;
			if (i < 1e-10)
			{
				cout << "Its square root is:" << m << endl;
				break;
			}
		}
	}
	return 0;
}
