#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
//շת����� 
int main(){
	int a, b, c;
	printf("�����������������Լ����");
	scanf("%d%d", &a, &b);
	c = a % b;
	while (c != 0){
		a = b;
		b = c;
		c = a % b;
	}
	printf("���Լ��Ϊ��%d\n", b);
	system("pause");
	return 0;
}
