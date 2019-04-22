#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int a[10];
	printf("输入10个整数：");
	for (i = 0; i < 10; i++) {
		scanf("%d",&a[i]);
	}
	int j = a[0];
	int size = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < size; i++)
	{
		if (a[i + 1] > j)
			j = a[i + 1];
	}
	printf("最大值=%d \n", j);
	system("pause");
	return 0;
}