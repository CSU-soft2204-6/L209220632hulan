#include<iostream>
 
#include "mytemperature.h";
 
using namespace std;
 
int main()
 
{
 
  double cel,fah;
 
  printf( "Celsius Fahrenheit | Fahrenheit Celsius");
  cout<<"\n"<<endl;
 
  double a,b;
  for (int i = 0; i<10; i++)//温度递减
	{   
		cel = 40-i;
		a = celsius_to_fah(cel);//摄氏度递减后转成华氏度
		fah = 120-10*i; 
		b = fahrenheit_to_cels(fah);
		
		printf("%.1f %.1f",cel,a);
		printf("|");
		printf("%.1f %.2f\n",fah,b);
	}


  return 0;
 
}

