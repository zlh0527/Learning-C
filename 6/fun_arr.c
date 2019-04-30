#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void init(int arr[], int len){
	int i = 0;
	printf("初始化数组：");
	for (i = 0; i < len; i++){
		scanf("%d", &arr[i]);
	}
}

void reverse(int arr[], int len){
	int i = 0;
	printf("逆置数组：");
	for (i = len - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void empty(int arr[], int len){
	int i = 0;
	printf("清空数组：");
	for (i = 0; i < len; i++){
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[5];
	int len = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	init(arr, len);
	reverse(arr, len);
	empty(arr, len);
	system("pause");
	return 0;
}
