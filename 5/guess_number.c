#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game(){
	int num = 0;
	int input = 0;
	srand((unsigned int)time(NULL));
	num = rand() % 100 + 1;
	while (1){
		printf("������µ����֣�>");
		scanf("%d", &input);
		if (num == input){
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if (input > num){
			printf("�´���\n");
		}
		else{
			printf("��С��\n");
		}
	}
}
int test(int *p){
	*p = 3;
	return *p;
}
void menu(){
	printf("************************\n");
	printf("**   1.play   0.exit  **\n");
	printf("************************\n");
}
int main(){
	int num = 20;
	int input = 0;
	do{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}