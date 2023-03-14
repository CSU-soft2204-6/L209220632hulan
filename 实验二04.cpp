/*the following is my simplized calculalor*/


#include<iostream>
using namespace std;
int main()
{
	char a;
	int x, y;
	cin >> x >> a >> y;
	switch (a)
	{
	case ('+'):
		cout << "=" << (x + y) << endl;
		break;
	case ('-'):
		cout << "=" << (x - y) << endl;
		break;
	case ('*'):
		cout << "=" << (x * y) << endl;
		break; 
	case ('%'):
		cout << "=" << (x % y) << endl;
		break; 
	case ('/'):
		if (y != 0)
			cout << "=" << (x / y) << endl;
		else cout << "no definition!" << endl;
		break;
	default:cout << "no oprator difined!" << endl;
		break;
		return 0;
	}
}
