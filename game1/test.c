#define _CRT_SECURE_NO_WARNINGS

//测试三子棋游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("***** 1.play  0.exit *****\n");
	printf("**************************\n");
}

//游戏的整个实现
void game()
{
	char ret = 0;
	//数组——存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//希望棋盘内全都是空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
        //玩家下棋
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = iswin(board, ROW, COL);
		if (ret != 'j')
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = iswin(board, ROW, COL);
		if (ret != 'j')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}

void test()
{
	int choice = 0;
	//用时间戳生成随机数生成起点
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}

	}while (choice);
} 

int main()
{
	test();
	return 0;
}