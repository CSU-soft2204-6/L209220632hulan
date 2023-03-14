/*the following is my program of transformer from Uppercase letter to Lowercase letter  */


#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "pleae input an English letter£º";
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a = a - 32;
		cout << "the Uppercase letter is£º" << a << endl;
	}
	else if (a >= 'A' && a <= 'Z')
	{
		a = a + 32;
		cout << "the Lowercase letter is " << a << endl;
	}
	else
	{
		cout << "the ASCII of its next letter is£º" << (a + 1) << endl;
	}
	return 0;
}
