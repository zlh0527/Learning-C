#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, i, sum = 0;
	printf("请输入一个个位数：");
	scanf("%d", &a);
	b = a;
	for (i = 0; i < 5; i++) {		
		sum = sum + b;
		//printf("%d\n", b);
		b = b * 10 + a;	
	}
	printf("结果为：%d", sum);
	system("pause");
	return 0;
}