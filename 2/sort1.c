#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void Swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main(){
	int a, b, c;
	printf("输入三个数：");
	scanf("%d %d %d", &a, &b, &c);
	int tmp = 0;
	if (a < b){
		Swap(&a, &b);
	}
	if (a < c){
		Swap(&a, &c);
	}
	if (b < c){
		Swap(&b, &c);
	}
	printf("排序后：%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}
