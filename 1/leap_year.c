#include<stdio.h>
int main() {
	int year;
	for (year = 1000; year <= 2000; year++) {
		if (year % 400 == 0) {
			printf("%d ", year);
		}
		else if (year % 4 == 0 && year % 100 != 0) {
			printf("%d ", year);
		}
	}
	system("pause");
	return 0;
}