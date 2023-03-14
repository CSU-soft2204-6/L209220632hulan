#include<iostream>
using namespace std;
 
int main()
{
	const int size=100;
	bool list[size];
	for (int i=0;i<size;i++)
	{
		list[i]=false;
	}
	for (int j=0;j<size;j++)
	{
		for (int k=j;k<size;k+=j+1)
		{
			if (list[k])
				list[k]=false;
			else
			    list[k]=true;
		}
	}
	for (int m=0;m<size;m++)
	{
		if (list[m])
			cout<<m+1<<"  ";
	}
	cout<<endl;
 
	return 0;
}
