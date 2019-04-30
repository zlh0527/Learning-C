#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n) {
	if (n <= 0)
		return 0;
	else if (n > 0 && n < 9)
		return n;
	else
		return (n % 10) + DigitSum(n / 10);
}
int main() {
	int n = 1729;
	int ret = DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}