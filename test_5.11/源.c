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

//int main()//������������ջ��
//{
//	printf("hehe\n");//�������û�������ջ���ռ�
//	main();//�ظ��������û�������ջ���ռ䡣��ջ���ռ䱻ռ����ȫ�ͻ����ջ����Ĵ���
//	return 0;
//}

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);//�ظ�ʹ��print������ֱ��ȡ��������ĵ�һλ��<9�ˣ�Ȼ�����ִ�д�ӡ�˵�һλ��1��
		//Ȼ�󷵻ص�����12���������ӡ12%10����ӡ2��if���˳��ִ����ȥ��������ִ��if֮��Ĳ�ִ���ˡ�ֻ����ȥ����if�����
	}
	printf("%d ", n % 10);
}

//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//�ݹ�
//	print(num);
//	return 0;
//}

//������ʱ����������
int mystrlen(char* str) //str��ָ���������ŵ��ǡ�h���ĵ�ַ.
{
	//�����ַ����ĳ���
	int count = 0;
	while (*str != '\0')//�ж��ַ����Ƿ����
	{
		//mystrlen(str + 1);//str+1��ָ���������ŵ��ǡ�e���ĵ�ַ
		count++;
		str++;
	}
	return count;
}

//û�д�����ʱ�������õݹ�
//hello world����Ϊ 1+mystrlen2("ello world")
//ello world����Ϊ 1+mystrlen2("llo world")
//hello world����Ϊ 3+mystrlen2("lo world")

int mystrlen2(char* str)
{
	//�����ַ����ĳ���
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
//	char arr[] = "hello world";// \0Ҳ������
//	int len = mystrlen2(arr);//arr�����飬���鴫�Σ���������Ԫ�صĵ�ַ
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

//�õݹ飬
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
//Ҫ���Խ��Խ�ࣨ2��ָ���������Һܶ��ظ����ȵ�50Ҫ��̫��
//�õ���

//��������Ҳ��������ѭ��
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