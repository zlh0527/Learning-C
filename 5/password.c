#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char password1[] = "123456";
	char password2[] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("���������룺>");
		scanf("%s", password2);
		if (strcmp(password1, password2) == 0){
			printf("��½�ɹ�\n");
			break;
		}
		else{
			printf("����\n");
		}
	}
	if (i == 3){
		printf("�˳�ϵͳ\n");
	}
	system("pause");
	return 0;
}