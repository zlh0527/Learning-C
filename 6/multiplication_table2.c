#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
void multi_table(int number) {
	int i,j;
	for (i = 1; i <= number; i++) {
		for (j = 1; j <= i; j++)
			printf("%d*%d=%2d  ", i, j, i*j);

		printf("\n");
	}
}
int main() {
	int number = 0;
	printf("ÊäÈëÊý×Ö£º");
	scanf("%d", &number);
	multi_table(number);
	system("pause");
	return 0;
}