#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//1、字面常量
//int main()
//{
//	////字面常量
//	//3;//字面常量，不能写成3 = 5
//	//int num = 5;//定义一个变量num，这样可以赋值
//}

//2、const修饰的常变量
//int main()
//{
//	////const修饰的常变量
//	// /*int num = 4;
//	// printf("%d\n", num);
//	// num = 8;
//	// printf("%d\n", num);*///打印4、8出来
// //   //使num不能改变
//	////const——常属性
//	//const int n = 10;
//	//int arr[n] = [0];//报错，说应输入常量表达式，尽管加了const具有常属性，但是还是不行，num本质上还是变量
// //   //const修饰的常变量--用了const使num具有常属性，但是num本质上还是一个变量，所以说是一个常变量，在要使用常量的地方，num还是不能用的
//	//const int num = 4;
//	//printf("%d\n", num);
//	////num = 8;//报错
//
//	return 0;
//}



//3、#define定义的标识符常量
//#define MAX 10  //后面没有 ；有 ；会报错
//int main()
//{
//	int arr[MAX] = {0};//说明这里的MAX是常量了
//	printf("%d\n", MAX);
//	return 0;
//}

//4、枚举常量
//枚举：一一列举
//存在可以全部列举出的常数，如三原色、星期

////枚举关键字enum
//enum color
//{
//	red,
//	yellow,
//	blue,
//	black
//};
//enum sex
//{
//	male,//用逗号
//    female,
//	secret
//};//下面的分号不可缺少
////male,female,secret即为枚举常量
//int main() 
//{
//	////enum sex s = female;
//	//printf("%d\n", male);//0
//	//printf("%d\n", female);//1
//	//printf("%d\n", secret);//2
//	////这三个东西是有值的，而且不可改变
//	////在枚举类型的值就叫枚举常量
//
//	enum color color = blue;
//	color = red;
//	//blue = 6；报错，枚举常量不能改，枚举类型形成的变量可以改
//	return 0;
//}


////字符串类型
//int main()
//{
//	"abcdefg";
//	"hello world";
//	"";//空字符串，也是字符串
//
//	//存放字符串，用含多个char的数组
//	char arr1[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' ‘\0’,这个字符串实际有4项，只不过最后的0是空的。
//	//‘\0’为字符串结束标志
//	char arr2[] = {'a','b','c',0,'a','b'};//或者‘\0’,到0就结束了，不管后面的ab了
//	char arr3[] = {'a','b','c'};
//	char arr4[] = {97,97,0};
//	//不加0只有3项，输出abc烫烫***···，没有结束，打印乱码
//	//‘\0’- 0；
//	//‘a’- 97；
//	printf("%s\n",arr4);//打印出aa 
//	//数据在计算机存储时是二进制，给字符编一个值，来代表这些字符，a-97，A-65...(ASCII编码，数字为ASCII码值)
//	printf("%s\n",arr1);//打印字符串用%s
//	printf("%s\n",arr2);
//	printf("%d\n",strlen(arr1));//3,\0不算内容
//	//strlen--string length 字符串长度，计算字符串长度的c语言自带函数
//	printf("%d\n",strlen(arr2));//3
//	printf("%d\n",strlen(arr3));//42,找随机值直到出现\0,是一个随机值
//
//	return 0;
//	
//}

//int main() 
//{
//	printf("c:\test\32\test.c\n");
//	printf("c:\\test\32\\test.c\n");
//	printf("c:\\test\\32\\test.c\n");
//	//打印不出想要的字符串，t都被\影响变了意思
//	//  \t -- 水平制表符，和键盘中的“tab”键类似，空出一大段空格
//	//  \\ -- 表示一个\，防止这个\被理解成转义序列符
//	//printf("%c\n",''’);  //报错，将前两个‘理解成一对，最后一个落单了
//	printf("%c\n", '\'');// \'打印一个‘
//	return 0;
//}


//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));//13  \t和\32被算作一个字符,转义字符算作一个字符
//	// \32表示两个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	printf("%d\n", strlen("c:\\test\\32\\test.c"));//17   \\被算作一个\。
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("选择Yes or No（1/0）\n");
//	scanf("%d", &input);//1/0
//	//分支结构
//	if (input == 0)
//	{
//		printf("零\n");
//	}
//	else
//	{
//		printf("一\n");
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int grade = 0;
//	int c = 1;
//	printf("开始学习\n");
//	while (c >= 1)
//	{
//		while (day < 360)
//		{
//			printf("学一天习%d\n",day);
//			day++;
//		}
//		printf("参加考研\n");
//		printf("输入考研分数：\n");
//		scanf("%d", &grade);
//		if (grade > 500 || grade < 0)
//		{
//			printf("成绩有误，请重新输入\n");
//			printf("输入考研分数：\n");
//			scanf("%d", &grade);
//		}
//		if (grade >= 400)
//		{
//			printf("考上了");
//			c = 0;
//		}
//		else
//		{
//			c++;
//			printf("准备");
//			printf("%d", c);
//			printf("战\n");
//			day = 0;
//		}
//	}
//	return 0;
//}


////函数
//int Add(int x, int y) //Add为函数名 int 函数返回类型 { }内为函数体
//{
//	int z = x + y;
//	return z;//返回z
//}
//
//int main()
//{
//	int a;
//	int b;
//	printf("输入数字：\n");
//	scanf("%d%d", &a,&b);
//	int sum = Add(a, b);
//	printf("和为：%d\n", sum);
//}


////数组
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义一个存放十个整型数字的数组
//	//char ch[20];
//	//float ch2[5];
//	//printf("%d\n", arr[4]);//用下标来访问元素 arr[下标]
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}	
//	return 0;
//}


////算术操作符
//int main()
//{
//	int a = 5 / 2;
//	int b = 5 % 2;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

////移位操作符号
//int main()
//{
//	//移位操作符移的是二进制位
//	// <<左移
//	// >>右移
//	int a = 1; //1二进制表示则为 01
//    //a为整型，4个字节，32个比特位
//	//所以a应该是|00000000000000000000000000000001|（31个0）
//	//a<<1;(a左移1位)
//	//0|0000000000000000000000000000001 | 
//	//a左移一位，最左边的0丢弃，右边空出一个位置，补一个0
//	//最后a变成00000000000000000000000000000010
//	int b = a << 1;
//	printf("%d\n", b);//打印出2，即二进制10的十进制形式
//	int c = a << 2;
//	printf("%d\n", c);//打印出4
//	printf("%d\n", a);
//	return 0;
//}


//位操作
//位仍为二进制位
// & 按位与
// | 按位或
// ^ 按位异或
//int main()
//{
//	int a = 3; 
//	int b = 5;
//	int c = a & b;
//	//a 的二进制为 011；
//	//b 的二进制为 101；
//	//与就是并且，有一个为0就为0，0称为假、1称为真
//	//a&b = 假假真，即为001，即为十进制的 1
//	int d = a | b;
//	//或即有一个为1即为1
//	//a|b =真真真，即为111，十进制的7；
//	int e = a ^ b;
//	//异或：对应的二进制位相同则为0；
//	//      对应的二进制位相异则为1；
//	//a^b = 110,十进制的6
//	printf("%d\n", c);//输出1
//	printf("%d\n", d);//输出7
//	printf("%d\n", e);//输出6
//    return 0;
//}

int main()
{
	int a = 1;
	int b = 2;
	int c = a + b;// +号左右两边都有操作数，所以+称为双目操作符
	int d = 0;
	printf("%d\n",c);
	//单目操作符 ！
	//C语言中表示真假
	//0表示假，其余一切数表示真
	//!称为逻辑反操作，即假真的变成假，假的变成真，0→1，非0→0
	// - 、+ 单目操作符，通常情况下+号经常省略（在单目操作符）
	printf("%d\n",!c);
	printf("%d\n",!d);

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//输出10*4=40
	//计算数组元素个数
	//个数=数组总大小/每个元素的大小
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//输出10
	//计算数组中数字的和
    int i = 0;
	int sum = 0;
	while (i < 10)
	{
		sum += arr[i];
		i++;
	}
	printf("%d\n", sum);
	//做一个求和函数
	int Sum(int arr[], int sz)
	{
		int i = 0;
		int sum = 0;
		while (i < sz)
		{
			sum += arr[i];
			i++;
		}
		return sum;
	}
	//做一个五子棋
	//1.打印棋盘
    //2.玩家下棋
	//3.电脑下棋
	//4.判断输赢
	//5.继续游戏
	//输入两个数然后输出他们的和
	int x = 0;
	int y = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &x, &y);
	int sum = x + y;
	printf("和为：%d\n", sum)；
	//做一个求阶乘的函数
		int Factorial(int n)
	{
		int i = 1;
		int ret = 1;
		while (i <= n)
		{
			ret *= i;
			i++;
		}
		return ret;
	}
	//做一个求n的k次方的函数
	int Power(int n, int k)
	{
		int i = 1;
		int ret = 1;
		while (i <= k)
		{
			ret *= n;
			i++;
		}
		return ret;
	}
	//做一个求n的k次方的函数
	int Power(int n, int k)
	{
		int i = 1;
		int ret = 1;
		while (i <= k)
		{
			ret *= n;
			i++;
		}
		return ret;
	}
	//做一个求n的k次方的函数
	int Power(int n, int k)
	{
		int i = 1;
		int ret = 1;
		while (i <= k)
		{
			ret *= n;
			i++;
		}
		return ret;
	}
	//做一个求和函数
	int Sum(int n)
	{
		int i = 1;
		int sum = 0;
		while (i <= n)
		{
			sum += i;
			i++;
		}
		return sum;
	}
	//做一个会自动下棋的五子棋游戏
	//1.打印棋盘
	//2.玩家下棋
	//3.电脑下棋
	//4.判断输赢
	//5.继续游戏
	return 0;
}