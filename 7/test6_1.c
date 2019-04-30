#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	printf("%d\n", factorial(5));
	system("pause");
	return 0;
}