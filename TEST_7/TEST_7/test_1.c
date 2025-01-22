#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}


	//int func(int a)
	//{
	//	int b;
	//	switch (a)
	//	{
	//	case 1:
	//		b = 30;
	//	case 2:
	//		b = 20;
	//	case 3:
	//		b = 16;
	//	default:
	//		b = 0;
	//	}
	//	return b;
	//}
	//int main()
	//{
	//	printf("%d\n", func(1));
	//}

//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first\n");
//		case 2:
//			printf("second\n");
//
//		default:
//			printf("hello\n");
//		}
//	case 2:
//		printf("third\n");
//
//	}
//
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("a",a);
//		}
//		else
//		{
//			printf("c", c);
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			printf("b", b);
//		}
//		else
//		{
//			printf("c",c);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	
//	for (int i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int max = 0;
//	if (m > n)
//	{
//		max = n;
//	}
//	else
//	{
//		max = m;
//	}
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}

//int main() 
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		t = n;
//		n = m;
//	}
//	printf("最大公约数就是：%d\n", n);
//}


//int main()
//{
//	int i = 1000;
//	int cout = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if ((i % 4 == 0) && (i & 100 != 0)||(i&400==0))
//		{
//			printf("%d\n", i);
//			cout++;
//		}
//	}
//	printf("%d\n", cout);
//	return 0;
//}


//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto flag;
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("电脑即将关机，除非输入我是帅哥");
	scanf("%s", input);
	again:
	if (strcmp(input,"我是帅哥")==0)
		//两个字符串比较不能使用==，应该使用strcmp()string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}