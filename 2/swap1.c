#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a = 0;
	int b = 0;
	int tmp = 0;
	printf("请输入两个整数: ");
	scanf("%d %d", &a, &b);
	tmp = a;
	a = b;
	b = tmp;
	printf("交换后：%d %d\n",a,b);
	system("pause");
	return 0;
}