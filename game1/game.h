#pragma once
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row,int col);

//iswin�����ܸ�������4��״̬��
//���Ӯ����*
//����Ӯ����#
//ƽ�֡���p
//��Ϸ��������j
char iswin(char board[ROW][COL], int row, int col);
