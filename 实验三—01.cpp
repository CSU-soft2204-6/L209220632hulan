#include <iostream>
using namespace std;
//Find the greatest common divisor
int G(int m,int n)
{
	int k=1;
	int i=1;
	while (i<=m&&i<=n)
	{
		if (m%i==0&&n%i==0)
			k=i;
		i++;
	}
	return k;
}
//Find the least common multiple
int L(int m,int n)
{
	int k=1;
	for (int i = 2;i<=m&&i<=n;i++)
	{
		if (m%i==0&&n%i==0)
			k=i;
	}
	int h;
	h=m*n/k;
	return h;
}
int main()
{
	cout<<"Please enter two numbers : "<<endl;
	int m , n;
	cout<<"m = ";
	cin>>m;
	cout<<"n = ";
	cin>>n;
	cout<<m<<" and "<<n<<" greatest common divisor G :  "<<G(m,n)<<endl;
    cout<<m<<" and "<<n<<" lowest common multiple L : "<<L(m,n)<<endl;
 
	return 0;
} 

