#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 3
int Findnum(int arr[ROW][COL], int row, int col, int key) {
	//�ҵ��˷���1,�Ҳ�������0��
	int left = 0;
	int right = col - 1;
	while ((left >= 0) && (right < col)) {
		//����������С��key���������һλ��
		if (arr[left][right] < key)	{
			left++;
		}
		//����������С��key������ǰ��һλ��
		if (arr[left][right] > key) {
			right--;
		}
		//���������ֵ���key���򷵻�1��
		if (arr[left][right] == key) {
			return 1;
		}
	}
	return 0;
}
int main() {
	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//�ҳ����������9������֣�
	int key = 5;
	int ret = Findnum(arr, ROW, COL, key);
	if (ret == 1) {
		printf("�ҵ��ˣ�\n");
	}
	if (ret == 0) {
		printf("�Ҳ�����\n");
	}
	system("pause");
	return 0;
}