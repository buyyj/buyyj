#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a = 0;//C语言中由一个 ； 隔开的就是一条语句
//	 // ； //这是一个空语句
//	return 0;
//}

//int main()
//{
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//     }
//	else if (18 <= age && age <60) 
//	{
//		printf("青壮年\n");
//	}
//	else
//	{
//		printf("老年\n");
//	}*/
//	//if (18 <= age < 60)
//	//	//这样执行是18<=age<60，这样是错误的，因为18<=age是一个表达式，结果是1或0，1为真，0为假。
//	//	//即变成0<60，是成立的，所以打印成年
//	//{
//	//	printf("成年\n");//age为10，依旧打印成年。
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
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//    case 4:
//	    printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
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
//		printf("工作日\n");
//		break;
//    case 6:
//	case 7:
//		printf("周末\n");
//		break;
//    default:
//		printf("输入错误\n");
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
//		{//switch允许嵌套使用
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
	while ((ch = getchar()) != EOF)//输入ctrl+z才结束
		//EOF：end of file 是一个常量，表示文件结束，是一个整型数，值为-1
	{
		putchar(ch);//与printf("%c",ch)；一样
		//printf("%c", ch);
	}
	return 0;
}