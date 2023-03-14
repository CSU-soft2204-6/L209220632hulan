#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int list[size];
	cout<<"Please enter ten numbers : "<<endl;
	for(int i=0;i<size;i++)
		cin>>list[i];
	cout<<list[0]<<" ";
	for(int m=1;m<size;m++)
	{
		for(int j=0;j<m;j++)
		{
			if(list[m]!=list[j])
			{
				if(j==m-1)
					cout<<list[m]<<" ";
				else
					continue;
			}
			else
				break;
		}
	}
 
	cout<<endl;
 
	return 0;
}
