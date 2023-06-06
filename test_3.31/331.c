#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//字符串的结束标志：'\0'
//"abcdef";
//'\0'转义字符 - 0
//0 → 数字0,在值上和\0一样
//'0' → 字符0 a码为48
//EOF - end of file - 文件结束标志，本质上的值为-1
//int main()
//{
//	char ch[10] = "hello bit";
//	printf("%c", ch[8]);
//		//char ch[10] = { 'h', 'e', 'l', 'l', 'o', ' ', 'b', 'i', 't', '\0' };
//	return 0;
//}
//一个求最大值的函数
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a; //为-1 //b是有符号的整型
//	//如果有符号的整型，二进制最高位为符号位，0为正，1为负
//	//~ 为按（二进制）位取反
//	//int 为4字节，32位比特
//	//32个0，取反，32个1；第一个0表示正数；第一个1表示负数
//	//源码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);//使用的（打印的）是这个数的源码
//	//源码符号位不变其他位取反得到反码，反码加1得到补码
//	//0000000000000000000000
//	//1111111111111111111111 （补码）
//	//1111111111111111111110 （反码）//补码减一
//	//1000000000000000000001 （源码）//符号位不变，其他位取反。//即-1
//	//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int d = 0;
//	int b = a++;	//后置a++是先使用a的值，再让a加1
//	//int b = ++a;	//前置++a是先让a加1，再使用a的值
//	int c = ++d;
//	int e = ++a;
//	printf("a = %d b = %d\n", a, b);//输出a=1,b=0;
//	printf("d = %d c = %d\n", d, c);//输出c=1,d=1;
//	printf("a = %d e = %d\n", a, e);//输出a=2,e=2;
//	return 0;
//}


//int main()
//{
//	int a = 3.14;//警告：从double转换到int 可能丢失数据
//   // printf("%d\n", a);//输出 3
//	int b = (int)3.14;//不警告了，（类型）叫强制类型转换
//    printf("%d\n", b);//输出 3
//	return 0;
//}

//int main()
//{
//	//c语言中表示真假
//	//真：非0
//	//假：0
//	//&& 逻辑与操作符
//	//|| 逻辑或操作符
//	//！ 逻辑非操作符
//	int a = 1;
//	int b = 0;
//	int c = a && b;//区别a&b,&为按位与
//	//a&&b 为真，c为1
//	//a&&b 为假，c为0
//	int d = a || b;//区别a|b,|为按位或
//	//a||b 为真，d为1
//	int e = !a;//区别~a,~为按位取反
//	//a为真，e为0
//	//a为假，e为1
//	printf("%d\n", c);//输出 0
//	printf("%d\n", d);//输出 1
//	printf("%d\n", e);//输出 0
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max=0;
//	int min=0;
//	max = a > b ? a : b;
//	min = (a < b ? a : b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);//后面的（）就是函数调用操作符
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = ~a;
//	printf("%d\n", b);//输出-2
//	return 0;
//}

//int main()
//{
//	int a = 10;//局部变量，也叫自动变量，因为这个a自动创建，出了这个大括号就自动销毁，实际上前面省略了一个auto
//	return 0;
//}


//int main()
//{
//	typedef 类型定义，类型重定义
//	unsigned int num = -20;
//	typedef unsigned int UINT;//UINT就是unsigned int,给unsigned int 重新起了一个名字叫UINT
//	UINT num2 = -20;//使用起来没有任何区别
//	printf("%u\n", num2);//输出为该类型最大值-20，2^32=4294967296，4294967296-20=4294967276
//	return 0;
//}




	//static修饰局部变量
	//当static修饰局部变量后，局部变量的生命周期延长了
	//static修饰全局变量
	//当static修饰全局变量后，全局变量的作用域缩小了
    //让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没办法使用了
    //static修饰函数
    //在此源文件中使用外部函数也需要声明，依旧是extern extern 返回数类型 函数名（参数类型，参数类型）；
	//static修饰函数与修饰全局变量类似 
    //static修饰函数后，函数的作用域缩小了，只能在自己所在的源文件内部使用，出了源文件就没办法使用了（说法不够准确）
	// static修饰函数改变了函数的链接属性，普通函数有外部链接属性的，被static修饰后外部链接属性变成内部链接属性

//int main()
//{
//	//extern - 声明外部符号的
//	extern int aaa; //外部全局变量aaa
//	//extern int bbb;  //无法使用了，说明全局变量的作用域被改变了
//	printf("%d\n", aaa);
//	printf("%d\n", bbb);
//	return 0;
//}



//void text()
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//void sttext()
//{
//
//	static int a = 1;//加了static之后a变成静态的局部变量了
//	a++;
//	printf("a = %d\n", a);//出来2、3、4、5、6了，说明a用完不销毁了，累积下来了
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	while (i < 5)
//	{
//		text();
//		i++;
//	}
//	while (j < 5)
//	{
//		sttext();
//		j++;
//	}
//	return 0;
//}

////#define 定义的标识符常量
//#define max 200  //定义max为100，所以不要写等号
////#define 定义宏，宏是标识符常量带参数
//
////函数的实现
//Max(int x, int y)
//	{
//	int z = x > y ? x : y;
//	return z;
//	}
//
////宏的定义方式
//#define MAX(x,y) (x>y?x:y) //即前面的MAX(x,y)会被替换为后面括号内的内容
//int main()
//{
//	int a = 100;
//	int b = max;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//    //函数的方式
//	
//	int m1 = Max(a, b);
//	printf("max= %d\n", m1);
//
//	//宏的方式
//	m1 = MAX(a, b);
//	//编译器会替换成 m1 = (a>b?a:b);
//	printf("max= %d\n", m1);
//	return 0;
//}

int main()
{
	int a = 10;//要了4个字节，也就是4个地址
	//&a;//取a地址，区别于a&b,按位与
	int* p = &a;//取地址
	//有一种变量是用来存放地址的，被叫做指针变量,变量类型有*，为int*,不同类型用不同类型＋*
	//int* p;//定义一个指针变量，指针变量的类型是int*，指针变量的值是一个地址
	printf("%p\n", p);//输出p的值，是一个十六进制数字
	printf("%p\n", &a);//输出a的地址，是一个十六进制数字

	//指针变量的使用
	*p;//* -  解引用操作符，取指针变量所指向的内存空间的值，在这里即找到a；
	*p = 20;//在这里即顺着地址p找到a,然后把20赋值给a
	printf("%d\n", a);//打印出20

	char ch = 'a';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));//打印出8，因为pc是一个指针变量，指针变量的大小是8个字节,说明电脑是64位的

}