#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//}
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *   *   \n");
//	printf("    *   *   \n");
//	return 0;
//}

//int main() 
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age >= 18)
//		printf("成年 ");
//	else if (18 >= age >= 14)
//		printf("初中生 ");
//	else
//		printf("小学生 ");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe ");
//		else
//			printf("haha ");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("奇数 ");
//	}
//	else
//	{
//		printf("偶数 ");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d",i);
//			printf("奇数  ");
//		}
//		else
//		{
//			printf("%d", i);
//			printf("偶数  ");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	default:
//     	printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//在while循环之中break用于永久的终止循环
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//        printf("%d", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//		//EOF是getchar终止，其值为-1
////如果想中断运行在键盘上输入ctrl+z,然后回车
//		putchar(ch);
//	  return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	//password是数组，数组名本身就是地址
//	//所以不需要取址符&
//	printf("请确认密码(y/n):>");
//	//处理缓冲区
//	//getchar();//使用getchar处理\n
//	//处理缓冲区的多个字符
//	int tem = 0;
//	while ((tem = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//	printf("请确认密码：Y/N >");
//	int tem = 0;
//	while ((tem =getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("密码正确\n");
//	}
//	else
//	{
//		printf("密码错误\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//do while循环
int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	} while (i < 10);
	return 0;
}