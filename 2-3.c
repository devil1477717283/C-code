#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap(int* pa,int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
#include <math.h>
int sushu(int x)
{
	int i = 0;
	for (i = 2;i<=sqrt(x);i++)
	{
		if (x % i == 0)
		{
			return 0;
			break;
		}	
	}
	return 1;
}
int runnian(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
	{
		return 1;
	}
	else if (x % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int binary_search(int arr[],int y,int sz)
{
	int left = 0;
	int right = sz-1 ;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < y)
		{
			left = mid + 1;
		}
		else if (arr[mid] > y)
		{
			right = mid -1;
		}
		else
		{
			return mid;
		}
	}
	return 0;
}
void add(int* p)
{
	(*p)++;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int a = 2;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = binary_search(arr, k,sz);
	if (binary_search(arr, k,sz) == 0)
	{
		printf("√ª’“µΩ");
	}
	sushu(a);
	runnian(2020);
	return 0;
}
