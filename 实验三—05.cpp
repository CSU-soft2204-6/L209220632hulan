#include<stdio.h>
int main()
{
	int  b=1;
	for (int i = 10; i>0; i--)//�����ݼ������Ƽ��㣩
	{   
		b =2*(b + 1);//����ժ�ҵ����� 
	}
	printf("�ܹ�ժ��%d\n", b);
	return 0;
}

