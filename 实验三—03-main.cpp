#include<iostream>
 
#include "mytemperature.h";
 
using namespace std;
 
int main()
 
{
 
  double cel,fah;
 
  printf( "Celsius Fahrenheit | Fahrenheit Celsius");
  cout<<"\n"<<endl;
 
  double a,b;
  for (int i = 0; i<10; i++)//�¶ȵݼ�
	{   
		cel = 40-i;
		a = celsius_to_fah(cel);//���϶ȵݼ���ת�ɻ��϶�
		fah = 120-10*i; 
		b = fahrenheit_to_cels(fah);
		
		printf("%.1f %.1f",cel,a);
		printf("|");
		printf("%.1f %.2f\n",fah,b);
	}


  return 0;
 
}

