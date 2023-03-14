/*the following is my program which means to calculate volume of cones */

#include<iostream>
using namespace std;
const float pi = 3.14;
int main()
{
	float r, h;
	cout << "Input the radius of the cone:";
	cin >> r;
	cout << "Input  the height of the cone:";
	cin >> h;
	float v = (pi * r * r * h) / 3;
	cout << "The volume of the cone is:" << v << endl;
	return 0;
}
