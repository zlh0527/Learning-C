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
	printf("����һ����ݣ�");
	scanf("%d", &year);
	if (leap_year(&year)) {
		printf("������\n");
	}
	else {
		printf("��������\n");
	}
	system("pause");
	return 0;
}