#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int main() {
	int a = 0;
	int b = 0;
	printf("请输入两个整数: ");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("交换后：%d %d\n", a, b);
	system("pause");
	return 0;
}