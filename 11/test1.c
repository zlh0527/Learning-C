#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

unsigned int reverse_bit(unsigned int value) {
	int ret = 0;
	int a = 0;
	for (int i = 0; i < 31; i++)
	{
		a = value & 1;//取出最低位，保存在a中
		ret = ret | a;
		ret = ret << 1;
		value = value >> 1;
	}
	return ret;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("翻转二进制后的值为：%u\n",ret);
	system("pause");
	return;
}