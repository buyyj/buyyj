#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <windows.h>


//int main()
//{
//	int i = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	int c = a % b;
//	//շת����������Լ��
//	for (;;)
//	{
//		if (c == 0)
//		{
//			printf("%d", b);
//			break;
//		}
//		else
//		{
//			a = b;
//			b = c;
//			c = a%b;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			//printf("%d*%d=%2d ", i, j, i*j);//%2d��ʾ��ӡ���ִ�ӡ��λ��������λ����ǰ�油һ���ո������Ҷ���
//			printf("%d*%d=%-2d ", i, j, i * j);//-2d��ʾ����룬���治���ÿո����
//		}
//		printf("\n");
//	}
//}

//void menu()
//{
//	printf("*************************************\n");
//	printf("***** ��ʼ��Ϸ��1 | �˳���Ϸ��0 *****\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	printf("������\n");
//	//1.����һ�������
//	//srand(1);//������������ӣ���������ã�ÿ�β��������������һ����,���ǣ�����дһ������֮�����ɵ������Ҳ�̶���
//	//������Ҫ��һ��ʱ�̻������ֵ���д�����Ҳ����ʵ
//	//ʱ���������ǰ�������ʱ���ȥ���������ʼʱ�䣨1970.01.01.0:0:0����λ���룬�õ���xxxx ����
//	//��ʱ�����Ϊ��������ӣ�ÿ�β��������������һ��
//	//srand((unsigned int)time(NULL));//time()���ص���һ��ʱ�������һ��long int���͵���������Ҫǿת��unsigned int����
//	//ÿ�ζ������������ʹ����������ɱ仯����ֻ����������������һ�ξ�����
//	//NULL��һ����ָ�룬��һ���궨�壬ֵΪ0
//
//	//int ret = rand();//rand()����һ���������%100��ʾ����0-99���������+1��ʾ����1-100�������
//	////RAND_MAX;//rand()����������������Ϊ32767
//	//
//	////2.��֪�µķ�Χ(����ʮ����)
//	//int judge = 1;
//	//int a = 10;
//	//do {
//	//	for (int i = 1; i < 10; i++)
//	//	{
//	//		if (ret /(i*a)==0)
//	//		{
//	//			printf("�������ΧΪ 0-%d\n", i*a);
//	//			judge = 0;
//	//			break;
//	//		}
//	//	}
//	//	a = a * 10;
//	//} while (judge);
//	////printf("%d\n",ret);
//
//	//1.����һ�������
//	int ret = rand() % 100 + 1;//��100��������ģ��ֻ����0-99����+1����1-100��
//	printf("�����Ѿ����ɣ��������\n");
//	printf("���ַ�ΧΪ 1-100\n");
//
//	//2.������
//	while (1)
//	{
//		int guess = 0;
//		printf("�������:>  ");
//		scanf("%d", &guess);
//		//3.�ж�
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu(); 
//		printf("��ѡ��:>  ");
//		scanf("%d", &input);
//		/*if (input != 1 || input != 0)
//		{
//			printf("�����������������\n");
//			scanf("%d", &input);
//		}*/
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input != 0);
//	return 0;
//}

int main()
{
	printf("hello world\n");
    goto again;
	printf("hello\n");
again:
	printf("world\n");
	printf("hehe\n");
	return;
}