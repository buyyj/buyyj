#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#define row 9
#define col 9

#define rows row+2
#define cols col+2

#define EASY_COUNT 10

void InitBoard(char board[rows][cols], int rowss , int colss, char set);
void DisplayBoard(char board[rows][cols], int row1, int col1);
void SetMine(char board[rows][cols], int row1, int col1);
void FindMine(char mine[rows][cols], char show[rows][cols], int row1, int col1);
int minecount(char mine[rows][cols], int x, int y);