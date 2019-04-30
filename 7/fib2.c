#include <stdio.h>
#include <stdlib.h>

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	int last2 = 1;//第i-2项
	int last1 = 1;//第i-1项
	int cur = 0;
	for (int i = 3; i <= n; ++i) {
		cur = last2 + last1;
		last2 = last1;
		last1 = cur;
	}
	return cur;

}

int main() {
	int ret = fib(5);
	printf("%d \n", ret);
	system("pause");
	return 0;
}