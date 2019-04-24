#include<stdio.h>
#include<stdlib.h>
int main()
{
	double i, j;
	double a = 0;
	for (i = 1; i <= 100; i += 2){
		a += (1.0 / i);
	}
	for (j = 2; j <= 100; j += 2){
		a -= (1.0 / j);
	}
	printf("½á¹ûÎª£º%f\n", a);
	system("pause");
	return 0;
}
