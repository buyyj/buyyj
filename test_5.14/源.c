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
//	//����һ������-���ʮ������
//	int arr1[10];
//	char arr2[5];
//
//	//int n = 10;
//	//int arr3[n];  ����[]�ڱ��볣�����ʽ
//
//	int arr3[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr4[5] = {'a','b'};//����ȫ��ʼ�����ַ�����Ĭ�ϳ�ʼ��ҲΪ0
//	char arr6[5]={ 'a',98};//��ASCII���ʼ����98Ϊb
//	char arr5[5] = "abc";//����ȫ��ʼ��������abc�����\0Ҳ���Ž�ȥ��ֻ����Ϊ\0��Ϊ0���Լ���ʱ���Ļ���0��
//	char arr7[] = "abcdef";//7���ַ�����Ϊ��\0
//	printf("%d\n", strlen(arr7));//6����Ϊstrlen����\0��ֹͣ��
//	printf("%d\n", sizeof(arr7));//7*1=7
//	//sizeof �������������ռ�ռ�Ĵ�С����λ���ֽ�
//	//7��Ԫ��-char*7=7��
//	//strlen ��������ַ����ĳ��ȣ�������\0֮ǰ���ַ���������λ���ַ�
//	//6��Ԫ��-��Ϊ����\0��ֹͣ�ˣ��㳤�Ȳ���\0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//arr2��û��\0�����Բ���ֹͣ�������ֵ
//	return 0;
//}

//int main()
//{
//	char arr[]= "abcdef";
//	//printf("%c\n", arr[3]);
//	for (int i = 0; i <(int)strlen(arr); i++)//strlen���ص���һ���޷�����������ǿ��ת������������û����Ӧ���Ǳ�����
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
//		printf("%p\n", &arr[i]);//ÿ����ַ���ò�4���������ڴ�����������ŵ�
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5,6};//3��4�еĶ�ά����.��һ��1,2,3,4���ڶ���5,6,0,0��������0,0,0,0���Զ�������
//	int arr2[3][4] = { {1,2},{4,5} };//��һ��1,2,0,0���ڶ���4,5,0,0��������0,0,0,0
//	//int arr3[][] = {1,2,3,4,5,6}//��������ָ������
//	//int arr3[][]={ {1,2},{4,5},{7,8} };//�Ա�������ָ������
//	int arr4[][4] = { 1,2,3,4,5,6 };//��һ��1,2,3,4���ڶ���5,6,0,0��������0,0,0,0���п���ʡ�ԣ��б���ָ��
//
//	char ch[5][6];//5��6�еĶ�ά����
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

void bubble_sort(int arr[],int sz)//������ʵ��arr��Ԫ�ص�ַ
{
	for (int i = 0; i < sz-1; i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		for (int j = 0; j < sz -1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
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
	//��arr���������ų�����
	bubble_sort(&arr, sz);//ð��������
	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);//��ӡ����һ����
	//printf("%d\n", *arr);//��ӡ��arr[0]
	//˵��������ʵ��������Ԫ�ص�ַ����������������
	//1��sizeof��������������ʱ��������ʾ�������顣��ʱ�������������С����λ���ֽ�
	//2��ȡ��ַ��������ȡ��������������ĵ�ַ
	printf("%p\n", &arr);//��Ȼ��������arr��ӡ����һ��������ʵ����������ĵ�ַ��ֻ�������������Ԫ�ؿ�ʼ

	printf("\n");
	printf("%p\n", arr+1);//��ӡarr[1]��ַ
	printf("%p\n", &arr[0]+1);//��ӡarr[1]��ַ
	printf("%p\n", &arr+1);//+1���ӡ������������֮��ĵ�ַ
	return 0;
}