#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//声明全局变量a
extern a;
//枚举常量
enum sex
{
	male,
	famale,
	secret
};

int main()
{
	//局部变量作用域
	// 作用范围：局部变量所处的局部范围
	/*printf("hehe\n");
	{
		int e = 10;
		printf("%d\n", e);
	}
	printf("%d\n", a);*/

	//常量
	//字面常量
	/*3.14;
	'i';
	"gdosno";*/
	//const常量
	//const int b = 10;
	//b=20;error
	//#define定义的常量
    //#define c=100;
	
	//枚举常量
	/*enum sex d = male;
	printf("%d\n", male);
	printf("%d\n", famale);
	printf("%d\n", secret);*/
	
	//字符串以\0作为字符串的结束标志
	/*char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	//字符串转义字符大小
	/*printf("\a");
	printf("%d\n", strlen("c:\test\328\test\.c"));
	printf("%c\n", '\130');*/

	//用来解释代码的，常用//注释内容，
	// //是C++的注释风格，/**/是C语言的注释风格，
	// C语言的注释风格不支持嵌套注释


	//选择语句
	/*int input = 0;
printf("好好学习\n");
printf("你要好好学习吗？(0/1)\n");
scanf("%d\n", &input);
if (input == 1)
{
	printf("好OFFER\n");
}
else
{
	printf("卖红薯\n");
}*/

	//循环语句
	int line = 0;
	while (line < 100)
	{
		printf("写代码:%d\n", line);
		line++;
	}
	if (line == 100)
	{
		printf("好offer\n");
	}

	
		

	return 0;

}