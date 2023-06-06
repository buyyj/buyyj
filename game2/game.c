#define _CRT_SECURE_NO_WARNINGS


#include"game.h"

void InitBoard(char board[rows][cols], int rowss, int colss, char set)
{
	int i = 0;
	int j = 0;
	for (int i = 0; i < rowss; i++)
	{
		for (int j = 0; j < colss; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[rows][cols], int row1, int col1)
{
	int i = 0;
	int j = 0;
	//打印列号
	for(i=0;i<=col1;i++)
	{
		printf("%d ", i);
	}
    printf("\n");
	for(i=1;i<=row1;i++)
	{
        printf("%d ", i);
		for(j=1;j<=col1;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[rows][cols], int row1, int col1)
{
	int count = EASY_COUNT;
    while (count)
	{
		int x = rand() % row1 + 1;
		int y = rand() % col1 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//acsii码中：
//'1'-'0'==1
//'0'-'0'==0
//'3'-'0'==3'
int minecount(char mine[rows][cols], int x, int y)
{
	return
	    mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] +
		mine[x - 1][y] + mine[x + 1][y] +
		mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		- 8 * '0';
}

void FindMine(char mine[rows][cols], char show[rows][cols], int row1, int col1)
{
	printf("请输入扫雷的坐标:>");
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=71
	while (win<row1*col1- EASY_COUNT)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row1 && y >= 1 && y <= col1)
		{
			//坐标合法
			//1、踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row1, col1);
                break;
			}
			else
			{
				//2、不是雷
				//统计x，y坐标周围有几个雷
				int count = minecount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row1, col1);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == row1 * col1 - EASY_COUNT)
	{
		printf("恭喜你扫雷成功！\n");  
	}
}