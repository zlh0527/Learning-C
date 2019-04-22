#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
//辗转相除法 
int main(){
	int a, b, c;
	printf("输入两个数字求最大公约数：");
	scanf("%d%d", &a, &b);
	c = a % b;
	while (c != 0){
		a = b;
		b = c;
		c = a % b;
	}
	printf("最大公约数为：%d\n", b);
	system("pause");
	return 0;
}
