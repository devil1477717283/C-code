#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num=1;
	while(num<=100)
	{
		if (1 == num % 2)
		{
			printf("%d������\n",num);
		}
		else
		{
			printf("%d��������\n",num);
		}
		num++;
	}
	return 0;
}