#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
char chessboard[3][3];
int menu() {
	printf("*************************************************************\n");
	printf("***********************    1.play    ************************\n");
	printf("***********************    0.exit    ************************\n");
	printf("*************************************************************\n");
	int choice = 0;
	printf("��ѡ��");
	scanf("%d", &choice);
	return choice;
}

void Init() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			chessboard[row][col] = ' ';
		}
	}
	//�����������
	srand((unsigned int)time(0));
}
void Print() {
	for (int row = 0; row < MAX_ROW; ++row) {
		printf("| %c | %c | %c |\n", chessboard[row][0], chessboard[row][1], chessboard[row][2]);
		if (row != MAX_ROW - 1) {
			printf("|---|---|---|\n");
		}
	}
	//TODO
	//system("pause");
}

void PlayerMove() {
	printf("�������!\n");
	while (1) {
		printf("����������λ��(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//�������λ���Ƿ�Ϸ�
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("���������Ƿ���������\n");
			continue;
		}
		if (chessboard[row][col] != ' ') {
			printf("��Ҫ����λ���ѱ�ռ��\n");
			continue;
		}
		chessboard[row][col] = 'x';
		break;
	}
	printf("���������ϣ�\n");
}

void ComputerMove() {
	printf("��������!\n");
	while (1) {
		int row = rand() % 3;
		int col = rand() % 3;
		if (chessboard[row][col] != ' ') {
			continue;
		}
		chessboard[row][col] = 'o';
		break;
	}
	printf("����������ϣ�\n");
}
int IsFull() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			if (chessboard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
char CheckWinner() {
	for (int row = 0; row < MAX_ROW; ++row) {
		if (chessboard[row][0] == chessboard[row][1] && chessboard[row][0] == chessboard[row][2]) {
			return chessboard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; ++col) {
		if (chessboard[0][col] == chessboard[1][col] && chessboard[0][col] == chessboard[2][col]) {
			return chessboard[0][col];
		}
	}
	if (chessboard[0][0] == chessboard[1][1] && chessboard[0][0] == chessboard[2][2]) {
		return chessboard[0][0];
	}
	if (chessboard[0][2] == chessboard[1][1] && chessboard[0][2] == chessboard[2][0]) {
		return chessboard[0][2];
	}
	//������δ��ʤ��
	if (IsFull()) {
		return 'q';
	}
	return ' ';
}

void Game() {
	//1.��ʼ������
	Init();
	char winner = ' ';
	while (1) {
		//2.��ӡ����
		Print();
		//3.�������
		PlayerMove();
		//4.�ж�ʤ��
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
		//5.��������
		ComputerMove(0);
		//6.�ж�ʤ��
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
	}
	Print();
	if (winner == 'x') {
		printf("��Ӯ�ˣ�\n");
	}
	else if (winner == 'o') {
		printf("�����ˣ�\n");
	}
	else if (winner == 'q') {
		printf("ƽ��\n");
	}
	else {
		printf("�������\n");
	}
	system("pause");
}

int main() {
	while (1) {
		int choice = menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("Bye��\n");
			break;
		}
		else {
			printf("��������");
		}
	}
	system("pause");
	return 0;
}