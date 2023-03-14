#include<stdio.h>
int main()
{
	int  b=1;
	for (int i = 10; i>0; i--)//天数递减（倒推计算）
	{   
		b =2*(b + 1);//计算摘桃的总数 
	}
	printf("总共摘了%d\n", b);
	return 0;
}

