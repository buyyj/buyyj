#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

int getmax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

//int main()
//{
//	int a = 0;
//	int b = 10;
//	int max = getmax(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//为什么要有*
//当形式参数传给形象参数的时候
//形参其实是实参的一个临时拷贝
//对形参的修改不会影响实参
void swap(int *x, int *y)
{
	printf("x=%d y=%d\n", x, y);//输出两个地址
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a =%d b=%d\n", a, b);
//	return 0;
//}

int judgess(int n)
{
	int j = 0;
	for (j = 2; j < sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (judgess(i) == 1)
//			printf("%d ", i);
//		/*else
//			printf("%d不是素数", i);*/
//	}
//	return 0;
//}

int search(int arr[], int k,int sz)//实际这里的arr[]是一个指针，指向数组的第一个元素的地址
{
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//所以出来的是8/4=2;因为电脑是64位
	int right =sz- 1;
	int mid = (left+right) / 2;
	while (left <= right)//必须有=号
	{	
		mid=(left + right) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if(k == arr[mid])
		{
			return mid;
		}
	
	}
	return -1;
}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int s = search(arr,k,sz);//实际上传输的是arr的第一个元素的地址，不会一次性传整个数组进去。
//	if (s == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("%d", s);
//	}
//	return 0;
//}

//int add(int* p)
//{
//	//*p++;//++优先级更高，*p要括起来
//	(*p)++;
//}
////int main()
////{ 
////	int num = 0;
////	add(&num);
////	printf("%d\n", num);
////	return 0;
////}
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//打印4321
//	//printf函数返回值是打印字符的个数
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));//打印4322，\n也算一个字符个数
//	return 0;
//}


//函数声明
int add(int , int );

int main()
{
	int a = 10;
	int b = 20;
	//函数调用
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}

//函数定义
int add(int x, int y)
{
	int z = x + y;
	return z;
}