#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<errno.h>


//int main()
//{
//	int a = 5 / 2;//除法算的实际上是商
//	double c = 5 / 2.0;//想要得到小数，必须有一个操作数是小数（浮点数）
//	int b = 5 % 2;//取余算的实际上是余数
//	//double d = 5 % 2.0;//报错，取余运算符不能用于浮点数
//	//取模只能用于整数
//}


//不创建临时变量，交换两个变量的值
//int main()
//{
//	int a = 16;
//	int b = 10;
//	printf("a=%d b=%d\n", a, b);
//	//1.加减法——可能会溢出（a+b大于整型最大范围）
//	/*a= a + b;
//	b= a - b;
//	a= a - b;
//	printf("a=%d b=%d\n", a, b);*/
//    //2.异或法——不会溢出
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//a和b异或出来一个密码，这个密码和a异或出b，和b异或出a
//	printf("a=%d b=%d\n", a, b); 
//}


//int main()
//{
//    //int b = 0;
//    int a = ~ 0;
//    printf("%d\n", a);
//    
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//a++先使用a的值为0，为假，右边都不算了，因为都已经假了
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1，2，3，4
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max;
//	b = a > 5 ? 3 : -3;
//	max = a > b ? a : b;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//13
//    printf("%d\n", c);
//}

