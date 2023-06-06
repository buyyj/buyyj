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
//	//辗转相除法求最大公约数
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
//			//printf("%d*%d=%2d ", i, j, i*j);//%2d表示打印数字打印两位，不够两位会在前面补一个空格，做到右对齐
//			printf("%d*%d=%-2d ", i, j, i * j);//-2d表示左对齐，后面不够用空格填充
//		}
//		printf("\n");
//	}
//}

//void menu()
//{
//	printf("*************************************\n");
//	printf("***** 开始游戏：1 | 退出游戏：0 *****\n");
//	printf("*************************************\n");
//}
//
//void game()
//{
//	printf("猜数字\n");
//	//1.生成一个随机数
//	//srand(1);//设置随机数种子，如果不设置，每次产生的随机数都是一样的,但是（）内写一个定数之后生成的随机数也固定了
//	//（）内要有一个时刻会变的数字但是写随机数也不现实
//	//时间戳——当前计算机的时间减去计算机的起始时间（1970.01.01.0:0:0）单位是秒，得到的xxxx 秒数
//	//用时间戳作为随机数种子，每次产生的随机数都不一样
//	//srand((unsigned int)time(NULL));//time()返回的是一个时间戳，是一个long int类型的数，所以要强转成unsigned int类型
//	//每次都重新设置起点使得随机数生成变化不大，只用在主函数内声明一次就行了
//	//NULL是一个空指针，是一个宏定义，值为0
//
//	//int ret = rand();//rand()产生一个随机数，%100表示产生0-99的随机数，+1表示产生1-100的随机数
//	////RAND_MAX;//rand()产生的最大随机数，为32767
//	//
//	////2.告知猜的范围(按整十整百)
//	//int judge = 1;
//	//int a = 10;
//	//do {
//	//	for (int i = 1; i < 10; i++)
//	//	{
//	//		if (ret /(i*a)==0)
//	//		{
//	//			printf("随机数范围为 0-%d\n", i*a);
//	//			judge = 0;
//	//			break;
//	//		}
//	//	}
//	//	a = a * 10;
//	//} while (judge);
//	////printf("%d\n",ret);
//
//	//1.生成一个随机数
//	int ret = rand() % 100 + 1;//除100的余数（模）只能是0-99，再+1就是1-100了
//	printf("数字已经生成，请猜数字\n");
//	printf("数字范围为 1-100\n");
//
//	//2.猜数字
//	while (1)
//	{
//		int guess = 0;
//		printf("请猜数字:>  ");
//		scanf("%d", &guess);
//		//3.判断
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择:>  ");
//		scanf("%d", &input);
//		/*if (input != 1 || input != 0)
//		{
//			printf("输入错误，请重新输入\n");
//			scanf("%d", &input);
//		}*/
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
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