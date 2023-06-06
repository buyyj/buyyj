#define _CRT_SECURE_NO_WARNINGS 1
//包含一个叫stdio.h的文件
//std——标准（standard） i——input；o——output。标准输入输出函数。.h即头函数
//以后有输入输出函数都要写这个
#include<stdio.h>
//int 是整型的意思
//main前面的int表示main函数调用返回一个整型
//void main()是过时的写法
/*int main()*///主函数—程序的入口，有且仅有一个
//{
	//这里完成任务
	
	//在屏幕上输出hehe
	//函数 print(打印) f(function;函数/功能)
	//printf：打印函数，打印“”内的东西
	// \n表示换行
	//printf是库函数：c语言本身提供给我们使用的函数
	//即别人的东西，使用前要打个招呼——#include，#为一种指令形式，include即包含
	/*printf("hehe\n");
	printf("hehe\n");
	printf("hehe");
	printf("hehe");*/
	
	

	//char ch = 'A';//向内存申请一个空间存储A这个字符
	////char即字符类型

	////%d：打印整型
	////%c：打印字符
	////%f：打印浮点数字，即打印小数
	////%p：以地址的形式打印
	////%x：打印16进制数字
	////%o：打印8进制整型整数

	//printf("%c\n", ch);//%c指打印字符类型，打印字符格式的数据
	//int age = 20;
	//printf("%d\n",age);//%d指打印整型十进制数据
	////short int 短整型
	////int 整型
	////long 长整型
	//long num = 100;
	//printf("%d\n",num);
	//float f = 1.5;
	//printf("%f\n",f);
	//double d = 3.14;
	//printf("%lf\n",d);


	//printf("%d\n", sizeof(char));//1 一个字节
	//printf("%d\n",sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4或者8
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8

	//int age = 20;
	//float weight = 45.4f;
	//char ch = 'w';


	//return 0;//返回0，0是整数
//}



//变量的分类：局部变量，全局变量

//int num2 = 20;//全局变量-定义在代码块（{}内）之外的变量
//
//int main()
//{
//	int num1 = 10;//局部变量-定义在代码块（{}）内部的变量,局部变量不是全部放在main函数内，但是main函数内的一定是局部变量
//
//	return 0;
//}


#include <stdio.h>

//int a = 100;
//int main()
//{
//	int a = 1;
//	printf("%d\n",a);//打印出的是1。局部变量在全局变量优先级之上
//	//局部变量与全局变量的名字建议不要相同-容易误会，产生bug
//	return 0;
//}


//int main()
//{
//	{
//		int a = 0;
//	}
//	printf("%d\n", a);//报错，局部变量a只能支撑最近的那个{}。
//	return 0;
//}

//int main()
//{
//	//计算两个数相加
//	int a1 = 1;
//	int a2 = 2;
//	//int sum = 0;
//	//输入数据-使用输入函数 scanf
//	scanf_s("%d%d", &a1, &a2);//两个数字所以两个%d%d。&为取地址符号，人输入两个数字，没有这一行则sum输出3
//	int sum = 0;
//	//C语言语法规定，变量要定义在当前代码块的最前面(maybe老版才这样)
//	sum= a1 + a2 ;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	//未声明的标识符
//	//声明-extern,用于声明外部符号的
//	extern int v;
//	printf("v = %d", v);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int num1;
	int num2;
	scanf("%d%d",&num1,&num2);
	//scanf是C语言提供的，scanf_s不是C语言提供的，是VB编译器提供。这样写在别的编译器上用不了。不具有跨平台性/可移植性
	//报错中写use _CRT_SECURE_NO_WARNINGS
	//在源文件代码 第一行 写 #define _CRT_SECURE_NO_WARNINGS 1，一定是第一行。表示让这个警告失效
	//后期的函数都可以解决这个报错问题
	//scanf
	//strcpy
	//strlen
    //strcat
	//......
	//都是c语言提供的，不安全的

	int sum;
	sum = num1 + num2;
	printf("sum =  %d",sum);
	return 0;
}
