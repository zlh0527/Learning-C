#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	printf("交换前数字为：%d %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后数字为：%d %d\n", a, b);
	system("pause");
	return 0;
}