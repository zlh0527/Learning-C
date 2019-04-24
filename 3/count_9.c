#include <stdio.h>
#include<stdlib.h>
int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)//判断个位
		{
			count++;
		}
		if (i / 10 == 9)//判断十位
		{
			count++;
		}
	}
	printf("1到 100 的所有整数中出现数字“9”次数为：%d\n", count);
	system("pause");
	return 0;
}
