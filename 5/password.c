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
		printf("请输入密码：>");
		scanf("%s", password2);
		if (strcmp(password1, password2) == 0){
			printf("登陆成功\n");
			break;
		}
		else{
			printf("错误\n");
		}
	}
	if (i == 3){
		printf("退出系统\n");
	}
	system("pause");
	return 0;
}