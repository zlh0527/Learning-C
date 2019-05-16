#include <stdio.h>
#include <stdlib.h>
#define N 6

int main() {
	int i = 0;
	int j = 0;
	int pt[N][N];
	//先打印每一行的第一个和最后一个；
	for (i = 0; i < N; i++) {
		pt[i][0] = 1;
		pt[i][i] = 1;
	}
	//打印中间部分
	for (i = 2; i < N; i++) {
		for (int j = 1; j < i; j++) {
			pt[i][j] = pt[i - 1][j - 1] + pt[i - 1][j];
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < 2 * (N - i); j++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("%4d", pt[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return;
}