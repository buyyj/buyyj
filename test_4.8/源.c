#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a = 0;//C��������һ�� �� �����ľ���һ�����
//	 // �� //����һ�������
//	return 0;
//}

//int main()
//{
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//     }
//	else if (18 <= age && age <60) 
//	{
//		printf("��׳��\n");
//	}
//	else
//	{
//		printf("����\n");
//	}*/
//	//if (18 <= age < 60)
//	//	//����ִ����18<=age<60�������Ǵ���ģ���Ϊ18<=age��һ�����ʽ�������1��0��1Ϊ�棬0Ϊ�١�
//	//	//�����0<60���ǳ����ģ����Դ�ӡ����
//	//{
//	//	printf("����\n");//ageΪ10�����ɴ�ӡ���ꡣ
//	//	
//	//}
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("hehe\n");
//        else
//			printf("haha\n");
//	//printf("hhhh\n");
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	if (a == 1)
//	{
//		return 0;
//	}
//	return 1;
//}

//int main()
//{
//	int a = 0;
//	if (a=0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}

//int main()
//{
//	int a = 1;
//	int b = 0;
//	for (int a = 1; a <= 100; a++)
//	{
//		if (a % 2 != 0)
//		{
//			printf("%d \n", a);
//			b++;
//		}
//	}
//	printf("%d\n", b);
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//    case 4:
//	    printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//
//	}
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//    case 6:
//	case 7:
//		printf("��ĩ\n");
//		break;
//    default:
//		printf("�������\n");
//		break;
//	}
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		
//		i++;
//		if (5 == i)
//		{
//			continue;
//		}
//	printf("%d  ", i);
//		
//	}
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//����ctrl+z�Ž���
		//EOF��end of file ��һ����������ʾ�ļ���������һ����������ֵΪ-1
	{
		putchar(ch);//��printf("%c",ch)��һ��
		//printf("%c", ch);
	}
	return 0;
}