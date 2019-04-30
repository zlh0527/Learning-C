#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int leap_year(int *year) {
	if ((*year % 400 == 0)||(*year % 4 == 0 && *year % 100 != 0)) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int year;
	printf("输入一个年份：");
	scanf("%d", &year);
	if (leap_year(&year)) {
		printf("是闰年\n");
	}
	else {
		printf("不是闰年\n");
	}
	system("pause");
	return 0;
}