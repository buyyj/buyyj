#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<Windows.h>
#include<time.h>
#include<math.h>
#include<ctype.h>


int main()
{
	/*char arr1[] = "abcdef";
	char arr2[20] = "**************";
	strcpy(arr2, arr1);
	printf("%s\n", arr2);*/

	char arr1[] = "abcdef";
	memset(arr1, '*', 3);
	printf("%s\n", arr1);
	return 0;
}