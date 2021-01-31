#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 1;
//	int num2 = 1;
//	printf("请输入要计算阶乘数：\n");
//	scanf("%d", &num);
//	for (i = 1;i < num + 1;i++)
//	{
//		num2 *= i;
//	}
//	printf("阶乘为:%d\n", num2);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int k = 0;
//	int num2 = 1;
//	int sum = 0;
//	for (k = 1;k < 11;k++)
//	{
//		num2 = 1;
//		for (i = 1;i < k + 1;i++)
//		{
//			num2 *= i;
//		}
//		printf("%d\n", num2);
//		sum += num2;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}

