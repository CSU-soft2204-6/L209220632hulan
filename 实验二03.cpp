/*the following is my program to calculate circumference
 of triangles and judge whether it is an isosceles triangle */

#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "please input 3 side length of the triangle£º" << endl;
	cin >> a >> b >> c;
	if ((a > 0) && (b > 0) && (c > 0))
	{
		if ((a + b <=c) || (a + c <= b) || (b + c <= a))
			cout<<"it is not a triangle"<<endl;
		else
		{
			float C = a + b + c;
			cout << C << endl;
		}
		if (a == b || a == c || b == c)
				cout << "it is not an isosceles triangle" << endl;
	}
	else cout << "it is not a triangle" << endl;
	return 0;
}
