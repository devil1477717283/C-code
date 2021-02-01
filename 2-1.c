#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//	}
//	printf("count is %d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	for (a = 101;a <= 200;a+=2)
//	{
//		for (b = 2;b <=sqrt(a);b++)
//		{
//			if (a % b == 0)
//			{
//				break;
//			}	
//		}
//		if (b>sqrt(a))
//		{
//			printf("%d\n", a);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//试除法求素数：
//1、偶数不可能为素数
//2、一个数有两个因子，其中必有一个因子是小于等于的那个数的开平方
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 2,54,6,7,3,46,95,8,54,8 };
//	int a = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (a <= arr[i])
//		{
//			a = arr[i];
//		}
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			k = j * i;
//			printf("%d*%d=%-2d  ", j, i, k);
//		}
//		printf("\n");
//	}
//	return 0;
//}