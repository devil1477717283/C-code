#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num=1;
	while(num<=100)
	{
		if (1 == num % 2)
		{
			printf("%d是奇数\n",num);
		}
		else
		{
			printf("%d不是奇数\n",num);
		}
		num++;
	}
	return 0;
}