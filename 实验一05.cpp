/*the following is my program to transform Fahrenheit to Celsius  */

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float fahrenheit, centigrade;
	cout << "Please input the temperature in Fahrenheit:";
	cin >> fahrenheit;
	centigrade = (fahrenheit - 32) / 1.8;
	cout << "the aboved temperature in centigrade is:" <<fixed<< setprecision(2) << centigrade << endl;
	return 0;
}
