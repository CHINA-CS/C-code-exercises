#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 1;
	
	for(a ; a <= 9 ; a++)
	{
		int b = 1;
		if (b <= a)
		{
			printf("%d*%d=%d\n", a, b, a * b);
			b++;
		}
		
	}
	return 0;
}