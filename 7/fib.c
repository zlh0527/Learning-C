#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
	if (n <= 2) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	int ret = fib(5);
	printf("%d \n", ret);
	system("pause");
	return 0;
}