#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A = 0, B = 0, C = 0, D = 0;
	int FD;//��ΪC��D�Ĺ��ʸպö��� ��ʾ������  
	int i;
	for (i = 1; i <= 4; i++)
	{

		if (i == 1)//A˵�ļ�  
		{
			A = 1; C = 1; FD = 1; D = 0;
		}
		if (i == 2)//B˵�ļ�  
		{
			A = 0; C = 0; FD = 1; D = 0;
		}
		if (i == 3)//C˵�ļ�  
		{
			A = 0; C = 1; FD = 0; D = 0;
		}
		if (i == 4)//D��˵�ļ�  
		{
			A = 0; C = 1; FD = 1; D = 1;
		}
		if (A + B + C + D + FD == 1 && FD == D)//ֻ��һ���������� ����Ϊ1ʱһ�����ֳ���  ��ΪCD�����Ƴ��Ķ���D�ǲ��� ����FD==D��Ϊ���ų�D��D���ǵ����   
			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
	}
	system("pause");
	return 0;
}