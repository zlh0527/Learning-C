#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int right = size - 1;
	while (left < right)
	{
		//��ͷ��ʼ�ҵ�һ��ż��
		while ((left < right) && (a[left] % 2 != 0))
		{
			left++;
		}
		//��β��ʼ�ҵ�һ������
		while ((left < right) && (a[right] % 2 != 1))
		{
			right--;
		}
		if (left < right)
		{
			//�����ҵ��Ĵ�ͷ��ʼ�ĵ�һ��ż��
			//���β��ʼ�ĵ�һ������
			int temp = a[left];
			a[left] = a[right];
			a[right] = temp;
		}
	}
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
