#include<iostream>
#include<fstream>
using namespace std;
void sort(int n,double p[])
{
    double temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
int main()
{
    double *a=new double;
    ofstream out("Result3.txt");
	if(!out)
  	{	cout<<"open error!"<<endl;
		exit(1);
  	}
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    sort(10,a);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
        out<<a[i]<<" ";
    }
	out.close();
    return 0;

}


