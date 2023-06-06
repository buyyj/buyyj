#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<time.h>
#include<math.h>

#include "add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a,b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()//函数调用申请栈区
//{
//	printf("hehe\n");//函数调用还是申请栈区空间
//	main();//重复函数调用还是申请栈区空间。当栈区空间被占用完全就会出现栈溢出的错误
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);//重复使用print函数，直到取到这个数的第一位（<9了）然后才能执行打印了第一位（1）
		//然后返回到输入12的情况，打印12%10，打印2，if语句顺着执行下去，并不是执行if之后的不执行了。只是先去处理if里面的
	}
	printf("%d ", n % 10);
}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	return 0;
//}

//创建临时变量的做法
int mystrlen(char* str) //str是指针变量，存放的是‘h’的地址.
{
	//计算字符串的长度
	int count = 0;
	while (*str != '\0')//判断字符串是否结束
	{
		//mystrlen(str + 1);//str+1是指针变量，存放的是‘e’的地址
		count++;
		str++;
	}
	return count;
}

//没有创建临时变量，用递归
//hello world长度为 1+mystrlen2("ello world")
//ello world长度为 1+mystrlen2("llo world")
//hello world长度为 3+mystrlen2("lo world")

int mystrlen2(char* str)
{
	//计算字符串的长度
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + mystrlen2(str + 1);
	}
}

//int main()
//{
//	char arr[] = "hello world";// \0也在其中
//	int len = mystrlen2(arr);//arr是数组，数组传参，传的是首元素的地址
//	printf("%d\n", len);
//	return 0;
//}


int fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//用递归，
int fib0(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//46 45 45 44 45 44 44 43 45 44 44 43 44 43 43 42
//要算的越来越多（2的指数），而且很多重复，等到50要算太久
//用迭代

//迭代法，也可以理解成循环
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}