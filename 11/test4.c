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
	reverve_swap(p, p + len - 1); //���������ַ���
	while (*p) {
		start = p;
		while ((*p != ' ') && (*p != '\0')) { //�ҵ�һ�鵥��
			p++;
		}
		end = p - 1;
		reverve_swap(start, end);//���򵥸�����
		if (*p == ' ') //�ҵ��ո�
			p++;
	}
	return ret;

}
int main() {
	char arr[] = "student a am I";
	printf("����ǰ��%s\n", arr);
	printf("������%s\n", reverve(arr));
	system("pause");
	return 0;
}