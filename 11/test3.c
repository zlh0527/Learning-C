#include <stdio.h>
#include <stdlib.h>
int main() {
	int single = 0;
	int i = 0;
	int arr[] = { 1,2,3,4,5,5,4,3,2,1,7 };
	single = arr[0]; 
	for (i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		//�����ص㣺������ͬ����������Ϊ0��0���κ�����������������
		//������˵����Ӧ����λ��ͬΪ0������Ϊ1
		single = single ^ arr[i]; //����������򣬰ѵ�һ������������
	}
	printf("%d\n", single);
	system("pause");
	return 0;
}