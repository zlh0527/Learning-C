#include <stdio.h>
#include<stdlib.h>
int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)//�жϸ�λ
		{
			count++;
		}
		if (i / 10 == 9)//�ж�ʮλ
		{
			count++;
		}
	}
	printf("1�� 100 �����������г������֡�9������Ϊ��%d\n", count);
	system("pause");
	return 0;
}
