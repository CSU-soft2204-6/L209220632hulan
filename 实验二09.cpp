/*the following is my program to calculate the average cost in a particular situation  */

#include<iostream>
using namespace std;
int main()
{
	const float an_apple = 0.8;
	int sum = 0,time=0;
	for (int i = 2; i <= 100; i = i * 2)
	{
		sum = sum + i;
		time = time + 1;
	}
	float cost = sum *an_apple/ time;
	cout << "the average cost of apples is:" << cost << endl;
	return 0;
}
