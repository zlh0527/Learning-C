#include<stdio.h>
#include<stdlib.h>
int main()
{
	int conut = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)     //���ҳ���100��200����������,��Ϊi
	{
		int j = 0;
		for (j = 2; j < i; j++)      //��iȥ�Գ���1�������������������
		{
			if (i%j == 0)
				break;
		}
		if (j == i)
		{
			conut++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("��������Ϊ��%d\n", conut);
	system("pause");
	return 0;
}
