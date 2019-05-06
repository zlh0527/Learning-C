#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX_ROW 9
#define MAX_COL 9
#define MINE_COUNT 10
int menu() {
	printf("************************************\n");
	printf("***********    1.play    ***********\n");
	printf("***********    0.exit    ***********\n");
	printf("************************************\n");
	int choice = 0;
	printf("请选择：");
	scanf("%d", &choice);
	return choice;
}

void Init(char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW; ++row) {
		for (int col = 0; col < MAX_COL; ++col) {
			mine_map[row][col] = '0';
		}
	}
	int n = MINE_COUNT;
	while (n > 0) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (mine_map[row][col] == '1') {
			continue;
		}
		mine_map[row][col] = '1';
		--n;
	}
}
void PrintMap(char map[MAX_ROW][MAX_COL]) {
	printf("    ");
	for (int i = 0; i < MAX_COL; ++i) {
		printf("%d ", i);
	}
	printf("\n");
	for (int col = 0; col < MAX_COL - 2; ++col) {
		printf("---");
	}
	printf("\n");
	for (int row = 0; row < MAX_ROW; ++row) {
		printf(" %d |", row);
		for (int col = 0; col < MAX_COL; ++col) {
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}

}
void UpdateShowMap(int row, int col, char show_map[MAX_ROW][MAX_COL], char mine_map[MAX_ROW][MAX_COL]) {
	int count = 0;
	//判断周围地雷个数
	if (mine_map[row - 1][col - 1] == '1'
		&& row - 1 >= 0 && col - 1 >= 0
		&& row - 1 < MAX_ROW && col - 1 < MAX_COL) {
		++count;
	}
	if (mine_map[row - 1][col] == '1'
		&& row - 1 >= 0 && col >= 0
		&& row - 1 < MAX_ROW && col < MAX_COL) {
		++count;
	}
	if (mine_map[row - 1][col + 1] == '1'
		&& row - 1 >= 0 && col + 1 >= 0
		&& row - 1 < MAX_ROW && col + 1 < MAX_COL) {
		++count;
	}
	if (mine_map[row][col - 1] == '1'
		&& row >= 0 && col - 1 >= 0
		&& row < MAX_ROW && col - 1 < MAX_COL) {
		++count;
	}
	if (mine_map[row][col + 1] == '1'
		&& row >= 0 && col + 1 >= 0
		&& row < MAX_ROW && col + 1 < MAX_COL) {
		++count;
	}
	if (mine_map[row + 1][col - 1] == '1'
		&& row + 1 >= 0 && col - 1 >= 0
		&& row + 1 < MAX_ROW && col - 1 < MAX_COL) {
		++count;
	}
	if (mine_map[row + 1][col] == '1'
		&& row + 1 >= 0 && col >= 0
		&& row + 1 < MAX_ROW && col < MAX_COL) {
		++count;
	}
	if (mine_map[row + 1][col + 1] == '1'
		&& row + 1 >= 0 && col + 1 >= 0
		&& row + 1 < MAX_ROW && col + 1 < MAX_COL) {
		++count;
	}

	//得到周围8个格子地雷个数
	show_map[row][col] = '0' + count;
}
void Game() {
	//1.初始化
	char show_map[MAX_ROW][MAX_COL];
	char mine_map[MAX_ROW][MAX_COL];
	int blank_count_already_show = 0;
	Init(show_map, mine_map);
	while (1) {
		//2.打印地图
		PrintMap(show_map);
		printf("\n");
		//TODO 便于调试
		//PrintMap(mine_map);
		//3.输入
		printf("请输入一个坐标(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		system("cls");
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			printf("输入有误!请重输！\n");
			continue;
		}
		if (show_map[row][col] != '*') {
			printf("该位置已翻开！\n");
			continue;
		}
		//4.判断是否是地雷

		if (mine_map[row][col] == '1') {
			printf("游戏结束！\n");
			PrintMap(mine_map);
			break;
		}
		//5.判断是否胜利
		++blank_count_already_show;
		if (blank_count_already_show == MAX_ROW * MAX_COL - MINE_COUNT) {
			printf("游戏胜利！\n");
			PrintMap(mine_map);
			break;
		}
		//6.统计当前位置周围地雷个数
		UpdateShowMap(row, col, show_map, mine_map);
	}
}

int main() {
	while (1) {
		int choice = menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("Bye！");
		}
		else {
			printf("输入有误！");
		}
	}
	return 0;
}