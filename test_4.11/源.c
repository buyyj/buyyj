#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//		char ch = '\0';
//		while ((ch = getchar()) != EOF)
//		{
//			putchar(ch);
//		}
//		return 0;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	int a = 0;
//	printf("���������룺 ");//�������벢�����arr1������
//	scanf("%s", arr1);
//	//��������ʣ��һ��\n��
//	//��ȡһ��\n�������뻺������գ�������ź�������
//	//getchar()���\n���ߣ����������getchar()�������ַ�
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N���� ");
//	a = getchar();
//	if (a == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 10; i++)//��ʼ�������������������ϵ�һ����
//	{
//		if (5 == i)
//		{
//			continue;//û����ѭ������Ϊ�е����������������ѭ�����У����ᱻ����
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i = 5)//�Ǹ�i��ֵ5�������ж�
//			printf("hehe\n");
//		printf("%d\n", i);//��ѭ���ˣ�ÿ�ζ���ӡһ��hehe��һ��5
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)//��ѭ��
//	{
//		printf("hehe\n");
//	}
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 0; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//	  printf("hehe\n");
//      k++;
//	}		
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//		{
//			i++;
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	long long ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	//printf("%d", n);
//	printf("%d�Ľ׳�Ϊ��%d\n", n,ret);
//}

//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int binsearch(int x, int v[], int n)
//{
//	int a = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (x == v[i])
//		{
//			a = i;	
//		}
//	}
//	return a;
//}

//int main()
//{
//	int x = 0;
//	int v[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("������Ҫ���ҵ����֣�\n");
//	scanf("%d", &x);
//	int n = binsearch(x,v,sizeof(v));
//	printf("%d\n", n);
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	int mid = (left + right) / 2;//�м��±�
//
//	int k = 0;
//	scanf("%d", &k);//Ҫ���ҵ�����
//
//	if (k < arr[left] || k > arr[right] || left > right)
//	{
//		printf("����ʧ��\n");
//	}//��֤������Ч
//
//	while (left <= right)
//	{
//		if (k < arr[mid])
//		{
//			right = mid - 1;//�ų���mid�����Ԫ��
//		}
//		else if (k > arr[mid])
//		{
//			left = mid + 1;//�ų���mid�����Ԫ�أ���ֹ�ظ�����
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//		mid = (left + right) / 2;
//	}
//	if (left > right)
//	{
//		printf("������û��Ҫ���ҵ�Ԫ�أ��Ҳ�����\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefghijk";
//	char arr2[] = "###########";
//	//int sz1 = sizeof(arr1) / sizeof(arr1[0]);//���7����Ϊ�ַ������ֲ�һ�����ַ��������и�\0
//	//arr[]="abcd";
//	//[a b c d \0]
//	//[0 1 2 3 4]
//	int sz2 = strlen(arr1);
//	int left = 0;
//	int right = sz2 - 1;//����sz1-2
//	//printf("%s\n", arr2);
//	for (; left<=right; left++,right--)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		
//		printf("%s\n", arr2);
//
//		Sleep(1000);//��Ϣ1s���ȴ�1000ms��ʹ��һ��һ�д�ӡ����Ҫ��ͷ�ļ� #include <windows.h>
//
//		system("cls");//ִ��ϵͳ�����һ������,cls�������Ļ����˼���º�����Ҫ��ͷ�ļ� #include <stdlib.h>
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		//if (password == "123456")//== �����ж������ַ����Ƿ����
			//Ӧ��ʹ��strcmp����⺯����ͷ�ļ�������string.h
		if (strcmp(password, "123456") == 0)//�������򷵻�0
			//�����һ�����ڵڶ������ش���0��ֵ����һ��С�ڵڶ�������С��0��ֵ
		{
			printf("������ȷ����¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������࣬�˳�����\n");
	}
	return 0;
}