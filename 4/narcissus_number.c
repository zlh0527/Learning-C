#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int x, a, b, c;
	for (x = 100; x < 1000; x++){
		a = x / 100;
		b = x / 10 % 10;
		c = x % 10;
		int i = pow(a, 3) + pow(b, 3) + pow(c, 3);
		if (i == x) {
			printf("%d ", x);
		}			
	}
	system("pause");
	return 0;
}