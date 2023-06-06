#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//声明函数
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row,int col);

//iswin函数能告诉我们4种状态：
//玩家赢——*
//电脑赢——#
//平局——p
//游戏继续——j
char iswin(char board[ROW][COL], int row, int col);
