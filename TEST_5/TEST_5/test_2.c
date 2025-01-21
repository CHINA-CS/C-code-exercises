#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;
int main()
{
	int i = 1;
	int n = 1;
	while (i < 10)
	{
		n *= i;
		i++;
		printf("%d\n", n);
	}

	return 0;
}