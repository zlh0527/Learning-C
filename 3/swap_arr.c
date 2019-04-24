#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void func(int* a, int* b)
{
	int m = *a;
	*a = *b;
	*b = m;
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 5, 4, 3, 2, 1 };
	for (int j = 0; j < 5; j++)
	{
		func(&a[j], &b[j]);
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}