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
//	int a = 88;
//	int* pa = &a;
//	char* pc = &a;
//    printf("%p\n", pa);
//    printf("%p\n", pc);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p=&a;
//	*p = 20;
//	printf("%d\n", a);
//	int* a = NULL;
//	
//	return 0;
//}

////struct 结构体关键字   stu 结构体标签   struct stu 结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//    int age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//是三个全局变量。尽量少用全局变量

typedef struct stu
{
	//成员变量
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}stu;//typedef 为结构体类型起别名,即将struct stu起别名为stu

int main()
{
	struct stu s;//是局部变量
	stu s1;
	return 0;
}

