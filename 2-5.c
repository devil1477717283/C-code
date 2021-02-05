efine _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d\n",x%10);
}
int my_strlen(char* str)
{
	int count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return count++;
}
int my_strlen1(char* str)
{
	if (*str != 0)
	{
		return 1 + my_strlen1(str - 1);
	}
	else
		return 0;
}

int main()
{
	int num = 1234;
	print(num);
	return 0;
}
