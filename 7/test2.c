#include<stdio.h>
#include<stdlib.h>
int fun(int n, int k) {
	if (k == 0) {
		return 0;
	}
	else if (k == 1) {
		return n;
	}
	else {
		return n * fun(n, k - 1);
	}
}
int main() {
	int n = 3;
	int k = 3;
	printf("%d\n", fun(n, k));
	system("pause");
	return 0;
}