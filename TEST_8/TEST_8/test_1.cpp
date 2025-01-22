#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("电脑即将关机，除非输入我是帅哥");
//	scanf("%s", input);
//again:
//	if (strcmp(input, "我是帅哥") == 0)
//		//两个字符串比较不能使用==，应该使用strcmp()string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
	printf("请输入我是帅哥，不然就关机警告");
	scanf("%s", arr);
	again:
	if (strcmp(arr, "我是帅哥") == 0)
	{
		printf("好的，帅哥你好");
		system("shutdown -a");
		
	}
	else
	{
		goto again;
	}

	return 0;
}

