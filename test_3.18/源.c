#define _CRT_SECURE_NO_WARNINGS 1
//����һ����stdio.h���ļ�
//std������׼��standard�� i����input��o����output����׼�������������.h��ͷ����
//�Ժ����������������Ҫд���
#include<stdio.h>
//int �����͵���˼
//mainǰ���int��ʾmain�������÷���һ������
//void main()�ǹ�ʱ��д��
/*int main()*///���������������ڣ����ҽ���һ��
//{
	//�����������
	
	//����Ļ�����hehe
	//���� print(��ӡ) f(function;����/����)
	//printf����ӡ��������ӡ�����ڵĶ���
	// \n��ʾ����
	//printf�ǿ⺯����c���Ա����ṩ������ʹ�õĺ���
	//�����˵Ķ�����ʹ��ǰҪ����к�����#include��#Ϊһ��ָ����ʽ��include������
	/*printf("hehe\n");
	printf("hehe\n");
	printf("hehe");
	printf("hehe");*/
	
	

	//char ch = 'A';//���ڴ�����һ���ռ�洢A����ַ�
	////char���ַ�����

	////%d����ӡ����
	////%c����ӡ�ַ�
	////%f����ӡ�������֣�����ӡС��
	////%p���Ե�ַ����ʽ��ӡ
	////%x����ӡ16��������
	////%o����ӡ8������������

	//printf("%c\n", ch);//%cָ��ӡ�ַ����ͣ���ӡ�ַ���ʽ������
	//int age = 20;
	//printf("%d\n",age);//%dָ��ӡ����ʮ��������
	////short int ������
	////int ����
	////long ������
	//long num = 100;
	//printf("%d\n",num);
	//float f = 1.5;
	//printf("%f\n",f);
	//double d = 3.14;
	//printf("%lf\n",d);


	//printf("%d\n", sizeof(char));//1 һ���ֽ�
	//printf("%d\n",sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4����8
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8

	//int age = 20;
	//float weight = 45.4f;
	//char ch = 'w';


	//return 0;//����0��0������
//}



//�����ķ��ࣺ�ֲ�������ȫ�ֱ���

//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}�ڣ�֮��ı���
//
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ���飨{}���ڲ��ı���,�ֲ���������ȫ������main�����ڣ�����main�����ڵ�һ���Ǿֲ�����
//
//	return 0;
//}


#include <stdio.h>

//int a = 100;
//int main()
//{
//	int a = 1;
//	printf("%d\n",a);//��ӡ������1���ֲ�������ȫ�ֱ������ȼ�֮��
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	return 0;
//}


//int main()
//{
//	{
//		int a = 0;
//	}
//	printf("%d\n", a);//�����ֲ�����aֻ��֧��������Ǹ�{}��
//	return 0;
//}

//int main()
//{
//	//�������������
//	int a1 = 1;
//	int a2 = 2;
//	//int sum = 0;
//	//��������-ʹ�����뺯�� scanf
//	scanf_s("%d%d", &a1, &a2);//����������������%d%d��&Ϊȡ��ַ���ţ��������������֣�û����һ����sum���3
//	int sum = 0;
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��(maybe�ϰ������)
//	sum= a1 + a2 ;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	//δ�����ı�ʶ��
//	//����-extern,���������ⲿ���ŵ�
//	extern int v;
//	printf("v = %d", v);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int num1;
	int num2;
	scanf("%d%d",&num1,&num2);
	//scanf��C�����ṩ�ģ�scanf_s����C�����ṩ�ģ���VB�������ṩ������д�ڱ�ı��������ò��ˡ������п�ƽ̨��/����ֲ��
	//������дuse _CRT_SECURE_NO_WARNINGS
	//��Դ�ļ����� ��һ�� д #define _CRT_SECURE_NO_WARNINGS 1��һ���ǵ�һ�С���ʾ���������ʧЧ
	//���ڵĺ��������Խ�������������
	//scanf
	//strcpy
	//strlen
    //strcat
	//......
	//����c�����ṩ�ģ�����ȫ��

	int sum;
	sum = num1 + num2;
	printf("sum =  %d",sum);
	return 0;
}
