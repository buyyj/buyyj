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
	//1���׵���Ϣ�洢����9*9�����̡���9*9�Ķ�ά���顪����Ϊ5������11*11�Ķ�ά����
	//2����char���ʹ洢��1��ʾ�ף�0��ʾ����
	//3��������һ������洢����ʱ��ĸ�����û�ŵ�λ���á�*��
	//4�������������ǵ�һ�����飨��̨�洢��Ϣ��������ʱ������ʾ�ڶ�������
	//5���Ų��ԵҪ�ж��Ƿ�Խ��̫�鷳�������ڵ�һ������������һȦ0�������Ͳ����ж�Խ����
	//6������Ҫ����11*11�Ķ�ά���飬����ֻ��9*9�ģ������Ķ���0
	//7��ͳһ�������飬��Ϊ��*��1��0���ɴ�ֱ����char����
    //8����һ�����ײ��ܲ��ף����Ե�һ�����׵�ʱ��Ҫ������������

	//���ú��׵���Ϣ
	char mine[rows][cols] = { 0 };	//�洢�׵���Ϣ
	//�Ų����Ϣ
    char show[rows][cols] = { 0 };	//�洢�Ų�ʱ�����Ϣ
	//��ʼ��
    InitBoard(mine, rows, cols, '0');
    InitBoard(show, rows, cols, '*');
    //��ӡ����
    DisplayBoard(show, row, col);
	//������
	SetMine(mine, row, col);
	//DisplayBoard(mine, row, col);
	//ɨ��
    FindMine(mine, show, row, col);
    
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		memu();
		printf("��ѡ��:>");
		scanf("%d", &input);	
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("��������������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test ();
	return 0;
}