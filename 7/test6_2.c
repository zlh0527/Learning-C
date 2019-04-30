#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret = ret * i;
	}
	return ret;
}

int main() {
	printf("%d\n", factorial(5));
	system("pause");
	return 0;
}