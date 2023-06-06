#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
#include<ctype.h>

//int main()
//{
//	//创建一个数组-存放十个整型
//	int arr1[10];
//	char arr2[5];
//
//	//int n = 10;
//	//int arr3[n];  报错，[]内必须常量表达式
//
//	int arr3[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr4[5] = {'a','b'};//不完全初始化，字符数组默认初始化也为0
//	char arr6[5]={ 'a',98};//用ASCII码初始化，98为b
//	char arr5[5] = "abc";//不完全初始化，但是abc后面的\0也被放进去，只是因为\0仍为0所以监视时看的还是0。
//	char arr7[] = "abcdef";//7个字符，因为有\0
//	printf("%d\n", strlen(arr7));//6，因为strlen遇到\0就停止了
//	printf("%d\n", sizeof(arr7));//7*1=7
//	//sizeof 计算的是数组所占空间的大小，单位是字节
//	//7个元素-char*7=7；
//	//strlen 计算的是字符串的长度，即计算\0之前的字符个数，单位是字符
//	//6个元素-因为遇到\0就停止了，算长度不算\0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//arr2中没有\0，所以不会停止，找随机值
//	return 0;
//}

//int main()
//{
//	char arr[]= "abcdef";
//	//printf("%c\n", arr[3]);
//	for (int i = 0; i <(int)strlen(arr); i++)//strlen返回的是一个无符号数，可以强制转换，但是这里没警告应该是编译器
//	{
//		printf("%c", arr[i]);
//	}
//}

//int main()
//{
//	int arr[]= { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);//每个地址正好差4，数组在内存中是连续存放的
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5,6};//3行4列的二维数组.第一行1,2,3,4，第二行5,6,0,0，第三行0,0,0,0，自动往下排
//	int arr2[3][4] = { {1,2},{4,5} };//第一行1,2,0,0，第二行4,5,0,0，第三行0,0,0,0
//	//int arr3[][] = {1,2,3,4,5,6}//报错，必须指定列数
//	//int arr3[][]={ {1,2},{4,5},{7,8} };//仍报错，必须指定列数
//	int arr4[][4] = { 1,2,3,4,5,6 };//第一行1,2,3,4，第二行5,6,0,0，第三行0,0,0,0；行可以省略，列必须指定
//
//	char ch[5][6];//5行6列的二维数组
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void bubble_sort(int arr[],int sz)//传参其实是arr首元素地址
{
	for (int i = 0; i < sz-1; i++)
	{
		int flag = 1;//假设这一趟要排序的数字已经有序
		for (int j = 0; j < sz -1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			}
		}
		if (flag = 1)
			break;
	}
}

int main()
{
	int arr[]={0,1,2,3,4,6,5,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	bubble_sort(&arr, sz);//冒泡排序函数
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);//打印出来一样。
	//printf("%d\n", *arr);//打印出arr[0]
	//说明数组名实际上是首元素地址，但是有两个例外
	//1、sizeof（数组名），此时数组名表示整个数组。此时计算整个数组大小，单位是字节
	//2、取地址数组名，取出的是整个数组的地址
	printf("%p\n", &arr);//虽然看起来和arr打印出的一样，但是实际上是数组的地址，只是整个数组从首元素开始

	printf("\n");
	printf("%p\n", arr+1);//打印arr[1]地址
	printf("%p\n", &arr[0]+1);//打印arr[1]地址
	printf("%p\n", &arr+1);//+1后打印跳过整个数组之后的地址
	return 0;
}