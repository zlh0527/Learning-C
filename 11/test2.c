#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Average(int a,int b) {
	int average = 0;
	average = a - ((a - b)>> 2);
	return average;
}

int main() {
	int a,b;
	printf("��������������:");
	scanf("%d %d", &a,&b);
	int ret = Average(a,b);
	printf("ƽ��ֵΪ��%d\n", ret);
	system("pause");
	return;
}