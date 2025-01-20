#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//typedef类型重定义
//typedef unsigned int u_int;


//static修饰函数
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//
//}
//extern int g_val;

//extern int add(int x,int y);


//#define max 1000
//#define add(x,y)((x)+(y))

struct Stu
{
	char name[20];
	int age;
	double score;//结构体成员变量
};
int main()
{
	//函数使用方法
	/*int sum = Add(10, 11);
	printf("%d\n", sum);*/

	//按位取反符使用
	/*int a = 0;
	printf("%d\n", ~a);*/


	//前置++
	/*int a = 10;
	int b = ++a;
	printf("%d\n", b);
	printf("%d\n", a);*/

	//后置++
	/*int a = 10;
	int b = a++;
	printf("%d\n", b);
	printf("%d\n", a);*/

	//三目运算符
	/*int a = 0;
	int b = 5;
	int max = 0;
	max = a > b ? a + b : b * 2 - a;
	printf("%d\n", max);*/

	//逗号运算符，用逗号隔开的表达式，从左向右以此计算，
	// 并且整个表达式的最后一个结果就是表达式的结果
	/*int a = 2;
	int b = 1;
	int c = 0;
	int d = (a = b + 1, b = c + 5, c = a - 1);
	printf("%d\n", d);*/

	/*register int num = 100;*///建议num的值，存放在寄存器之中

	// static修饰函数
	/*int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}*/

	/*printf("%d\n", g_val);*/

	/*int a = 10;
	int b = 20;
	int c = add(a, b);
	printf("%d\n", c);*/


	//define是一个预处理指令
	//define定义符号

	/*printf("%d\n", max);
	printf("%d\n", 3*add(2, 3));*/


	//指针
	//int a = 10;
	//printf("%p\n", &a);//%p是专门用来打印地址的
	//int* pa = &a;//pa是用来存放地址的，在C语言之中pa叫做指针变量
	// * 说明pa是指针变量
	// int说明pa执行对象是int类型的


	/*printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(double*));*/

	struct Stu s = { "张三",20,98.5 };//结构体的创建和初始化
	printf("1: %s %d %lf ", s.name, s.age, s.score);//结构体变量，成员变量
	struct Stu* ps = &s;
	printf("2: %s %d %lf ", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf ", ps->name, ps->age, ps->score);
	return 0;
}