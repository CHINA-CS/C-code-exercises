#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//ÇónµÄ½×³Ë
//int main()
//{
//	int n = 1;
//	
//	for (int i=1; i < 10; i++)
//	{
//		n *= i;
//		printf("%d\n", n);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 1;
//	do
//	{
//		n *= i;
//		i++;
//		printf("%d\n", n);
//	} while (i < 10);
//	return 0;
//}

int main()
{
	int i = 1;
	int n = 1;
	while (i<10)
	{
		n *= i;
		i++;
		printf("%d\n", n);
	}

	return 0;
}