#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void reverve_swap(char *left, char *right) {
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
char *reverve(char *p) {
	int len = strlen(p);
	char *start = p;
	char *end = NULL;
	char *ret = p;
	reverve_swap(p, p + len - 1); //逆序整个字符串
	while (*p) {
		start = p;
		while ((*p != ' ') && (*p != '\0')) { //找到一块单词
			p++;
		}
		end = p - 1;
		reverve_swap(start, end);//逆序单个单词
		if (*p == ' ') //找到空格
			p++;
	}
	return ret;

}
int main() {
	char arr[] = "student a am I";
	printf("交换前：%s\n", arr);
	printf("交换后：%s\n", reverve(arr));
	system("pause");
	return 0;
}