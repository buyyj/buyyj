#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//		char ch = '\0';
//		while ((ch = getchar()) != EOF)
//		{
//			putchar(ch);
//		}
//		return 0;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	int a = 0;
//	printf("请输入密码： ");//输入密码并存放在arr1数组中
//	scanf("%s", arr1);
//	//缓冲区还剩余一个\n，
//	//读取一下\n，把输入缓冲区清空，避免干扰后续输入
//	//getchar()会把\n读走，导致下面的getchar()读不到字符
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）： ");
//	a = getchar();
//	if (a == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 10; i++)//初始化、条件、调整都整合到一起了
//	{
//		if (5 == i)
//		{
//			continue;//没有死循环，因为有调整，调整不在这次循环体中，不会被跳过
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i = 5)//是给i赋值5，不是判断
//			printf("hehe\n");
//		printf("%d\n", i);//死循环了，每次都打印一个hehe和一个5
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//死循环
//	{
//		printf("hehe\n");
//	}
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 0; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//	  printf("hehe\n");
//      k++;
//	}		
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			i++;
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	long long ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	//printf("%d", n);
//	printf("%d的阶乘为：%d\n", n,ret);
//}

//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int binsearch(int x, int v[], int n)
//{
//	int a = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (x == v[i])
//		{
//			a = i;	
//		}
//	}
//	return a;
//}

//int main()
//{
//	int x = 0;
//	int v[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("请输入要查找的数字：\n");
//	scanf("%d", &x);
//	int n = binsearch(x,v,sizeof(v));
//	printf("%d\n", n);
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	int mid = (left + right) / 2;//中间下标
//
//	int k = 0;
//	scanf("%d", &k);//要查找的数字
//
//	if (k < arr[left] || k > arr[right] || left > right)
//	{
//		printf("查找失败\n");
//	}//保证查找有效
//
//	while (left <= right)
//	{
//		if (k < arr[mid])
//		{
//			right = mid - 1;//排除掉mid本身的元素
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;//排除掉mid本身的元素，防止重复查找
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//		mid = (left + right) / 2;
//	}
//	if (left > right)
//	{
//		printf("数组中没有要查找的元素，找不到了\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefghijk";
//	char arr2[] = "###########";
//	//int sz1 = sizeof(arr1) / sizeof(arr1[0]);//算出7，因为字符和数字不一样，字符串后面有个\0
//	//arr[]="abcd";
//	//[a b c d \0]
//	//[0 1 2 3 4]
//	int sz2 = strlen(arr1);
//	int left = 0;
//	int right = sz2 - 1;//或者sz1-2
//	//printf("%s\n", arr2);
//	for (; left<=right; left++,right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		
//		printf("%s\n", arr2);
//
//		Sleep(1000);//休息1s，等待1000ms，使得一行一行打印，需要引头文件 #include <windows.h>
//
//		system("cls");//执行系统命令的一个函数,cls是清空屏幕的意思，新函数需要引头文件 #include <stdlib.h>
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		//if (password == "123456")//== 不能判断两个字符串是否相等
			//应该使用strcmp这个库函数，头文件依旧是string.h
		if (strcmp(password, "123456") == 0)//如果相等则返回0
			//如果第一个大于第二个返回大于0的值，第一个小于第二个返回小于0的值
		{
			printf("密码正确，登录成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("密码输入错误次数过多，退出程序\n");
	}
	return 0;
}