#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//	int  a = 0;
//	int* p = &a;//&取地址操作符 int*是一起的，算一种类型，这个*是提醒我们p是一个指针变量，p指向的对象类型的int
//	*p = 10;//*解引用操作符
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", a);
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//	printf("%d\n", sizeof(pd));//8
//	printf("%d\n", sizeof(int*));//8
//	printf("%d\n", sizeof(double*));//8
//	printf("%d\n", sizeof(char*));//8
//	printf("%d\n", sizeof(short*));//8
//	return 0;
//}

//创建一个结构体类型
struct book
{
	char name[20];//c语言程序设计 //用一个字符数组放字符串，上限是20个字符
	char author[20];//谭浩强
	double price;//59.8
};//不可缺少，用于结束类型创建

int main()
{
	//利用一个结构体类型，创建一个结构体变量
	struct book b1 = { "c语言程序设计","谭浩强",59.8 };
	struct book* pb = &b1;//结构体指针变量
	b1.price = 24.8;
	//b1.name = "c++";报错，因为name是一个数组
	strcpy(b1.name, "c++");//用strcpy函数来赋值
	//strcpy -- string copy 字符串拷贝 是一个库函数，要引用头文件--string.h
	//字符串赋值 strcpy(目标字符串，源字符串)
	printf("%s\n", b1.name);// . 也是一个运算符，结构体变量.成员名
	printf("%lf\n", b1.price);
	printf("%s\n", (*pb).name);//(*pb)是一个结构体变量
	printf("%s\n", pb->name);//->是一个运算符，是一个结构体指针变量
    //printf("%s\n", b1->name);//报错,->只能用于指针变量
	//. 结构体变量.成员名
	//-> 结构体指针变量->成员名
	return 0;
}