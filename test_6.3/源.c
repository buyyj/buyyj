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

////struct �ṹ��ؼ���   stu �ṹ���ǩ   struct stu �ṹ������
//struct stu
//{
//	//��Ա����
//	char name[20];
//    int age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//������ȫ�ֱ�������������ȫ�ֱ���

typedef struct stu
{
	//��Ա����
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}stu;//typedef Ϊ�ṹ�����������,����struct stu�����Ϊstu

int main()
{
	struct stu s;//�Ǿֲ�����
	stu s1;
	return 0;
}

