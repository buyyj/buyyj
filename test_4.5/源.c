#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main()
//{
//	int  a = 0;
//	int* p = &a;//&ȡ��ַ������ int*��һ��ģ���һ�����ͣ����*����������p��һ��ָ�������pָ��Ķ������͵�int
//	*p = 10;//*�����ò�����
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

//����һ���ṹ������
struct book
{
	char name[20];//c���Գ������ //��һ���ַ�������ַ�����������20���ַ�
	char author[20];//̷��ǿ
	double price;//59.8
};//����ȱ�٣����ڽ������ʹ���

int main()
{
	//����һ���ṹ�����ͣ�����һ���ṹ�����
	struct book b1 = { "c���Գ������","̷��ǿ",59.8 };
	struct book* pb = &b1;//�ṹ��ָ�����
	b1.price = 24.8;
	//b1.name = "c++";������Ϊname��һ������
	strcpy(b1.name, "c++");//��strcpy��������ֵ
	//strcpy -- string copy �ַ������� ��һ���⺯����Ҫ����ͷ�ļ�--string.h
	//�ַ�����ֵ strcpy(Ŀ���ַ�����Դ�ַ���)
	printf("%s\n", b1.name);// . Ҳ��һ����������ṹ�����.��Ա��
	printf("%lf\n", b1.price);
	printf("%s\n", (*pb).name);//(*pb)��һ���ṹ�����
	printf("%s\n", pb->name);//->��һ�����������һ���ṹ��ָ�����
    //printf("%s\n", b1->name);//����,->ֻ������ָ�����
	//. �ṹ�����.��Ա��
	//-> �ṹ��ָ�����->��Ա��
	return 0;
}