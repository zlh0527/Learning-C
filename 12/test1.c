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
		//从头开始找第一个偶数
		while ((left < right) && (a[left] % 2 != 0))
		{
			left++;
		}
		//从尾开始找第一个奇数
		while ((left < right) && (a[right] % 2 != 1))
		{
			right--;
		}
		if (left < right)
		{
			//交换找到的从头开始的第一个偶数
			//与从尾开始的第一个奇数
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
