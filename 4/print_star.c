#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int h, i, j;
	printf("请输入一个奇数：");
	scanf("%d", &h);
	printf("\n");
	int mid = (1 + h) / 2;
	for (i = 1; i <= mid; i++){
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	if (i == mid + 1){
		for (i = mid + 1; i <= h; i++){
			for (j = 1; j <= 2 * (mid - (i - mid)) - 1; j++) {
				printf("*");
			}	
			printf("\n");
		}
	}
	system("pause");
	return 0;
}