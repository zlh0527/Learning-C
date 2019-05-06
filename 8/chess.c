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
	printf("请选择：");
	scanf("%d", &choice);
	return choice;
}

void Init() {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			chessboard[row][col] = ' ';
		}
	}
	//设置随机种子
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
	printf("玩家落子!\n");
	while (1) {
		printf("请输入落子位置(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//检查落子位置是否合法
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("输入的坐标非法，请重输\n");
			continue;
		}
		if (chessboard[row][col] != ' ') {
			printf("您要落子位置已被占用\n");
			continue;
		}
		chessboard[row][col] = 'x';
		break;
	}
	printf("玩家落子完毕！\n");
}

void ComputerMove() {
	printf("电脑落子!\n");
	while (1) {
		int row = rand() % 3;
		int col = rand() % 3;
		if (chessboard[row][col] != ' ') {
			continue;
		}
		chessboard[row][col] = 'o';
		break;
	}
	printf("电脑落子完毕！\n");
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
	//棋盘满未分胜负
	if (IsFull()) {
		return 'q';
	}
	return ' ';
}

void Game() {
	//1.初始化棋盘
	Init();
	char winner = ' ';
	while (1) {
		//2.打印棋盘
		Print();
		//3.玩家落子
		PlayerMove();
		//4.判断胜负
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
		//5.电脑落子
		ComputerMove(0);
		//6.判断胜负
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
	}
	Print();
	if (winner == 'x') {
		printf("您赢了！\n");
	}
	else if (winner == 'o') {
		printf("您输了！\n");
	}
	else if (winner == 'q') {
		printf("平局\n");
	}
	else {
		printf("程序出错\n");
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
			printf("Bye！\n");
			break;
		}
		else {
			printf("输入有误！");
		}
	}
	system("pause");
	return 0;
}