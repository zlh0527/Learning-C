#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10, b = 20;
	printf("����ǰ����Ϊ��%d %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("����������Ϊ��%d %d\n", a, b);
	system("pause");
	return 0;
}