#define _CRT_SECURE_NO_WARNINGS


#include "game.h"

void memu()
{
	printf("*************************************\n");
	printf("********** 1. play  0. exit *********\n");
	printf("*************************************\n");
}

void game()
{
	//1、雷的信息存储——9*9的雷盘——9*9的二维数组——因为5，创建11*11的二维数组
	//2、用char类型存储：1表示雷，0表示非雷
	//3、另外用一个数组存储排雷时候的个数，没排的位置用‘*’
	//4、除了生成雷是第一个数组（后台存储信息），其他时候都是显示第二个数组
	//5、排查边缘要判断是否越界太麻烦，所以在第一个数组的外面加一圈0，这样就不用判断越界了
	//6、所以要创建11*11的二维数组，但是只用9*9的，其他的都是0
	//7、统一两个数组，因为有*有1有0，干脆直接用char类型
    //8、第一次排雷不能踩雷，所以第一次排雷的时候要重新生成雷盘

	//布置好雷的信息
	char mine[rows][cols] = { 0 };	//存储雷的信息
	//排查的信息
    char show[rows][cols] = { 0 };	//存储排查时候的信息
	//初始化
    InitBoard(mine, rows, cols, '0');
    InitBoard(show, rows, cols, '*');
    //打印棋盘
    DisplayBoard(show, row, col);
	//布置雷
	SetMine(mine, row, col);
	//DisplayBoard(mine, row, col);
	//扫雷
    FindMine(mine, show, row, col);
    
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		memu();
		printf("请选择:>");
		scanf("%d", &input);	
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test ();
	return 0;
}