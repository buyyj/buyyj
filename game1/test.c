#define _CRT_SECURE_NO_WARNINGS

//������������Ϸ
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

//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	//���顪������߳���������Ϣ
	char board[ROW][COL] = { 0 };//ϣ��������ȫ���ǿո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
        //�������
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'j')
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'j')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	int choice = 0;
	//��ʱ�������������������
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}

	}while (choice);
} 

int main()
{
	test();
	return 0;
}