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

//ΪʲôҪ��*
//����ʽ�����������������ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
void swap(int *x, int *y)
{
	printf("x=%d y=%d\n", x, y);//���������ַ
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
//			printf("%d��������", i);*/
//	}
//	return 0;
//}

int search(int arr[], int k,int sz)//ʵ�������arr[]��һ��ָ�룬ָ������ĵ�һ��Ԫ�صĵ�ַ
{
	int left = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//���Գ�������8/4=2;��Ϊ������64λ
	int right =sz- 1;
	int mid = (left+right) / 2;
	while (left <= right)//������=��
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
//	int s = search(arr,k,sz);//ʵ���ϴ������arr�ĵ�һ��Ԫ�صĵ�ַ������һ���Դ����������ȥ��
//	if (s == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("%d", s);
//	}
//	return 0;
//}

//int add(int* p)
//{
//	//*p++;//++���ȼ����ߣ�*pҪ������
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
//	printf("%d", printf("%d", printf("%d", 43)));//��ӡ4321
//	//printf��������ֵ�Ǵ�ӡ�ַ��ĸ���
//	printf("%d\n", printf("%d\n", printf("%d\n", 43)));//��ӡ4322��\nҲ��һ���ַ�����
//	return 0;
//}


//��������
int add(int , int );

int main()
{
	int a = 10;
	int b = 20;
	//��������
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}

//��������
int add(int x, int y)
{
	int z = x + y;
	return z;
}