#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int* p;
//	//p是局部的指针变量，局部变量不初始化默认为随机值
//	*p = 20;
//	//随机让一个幸运儿变成20
//	//非法访问内存
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//		float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}



//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa是指针变量，一级指针
//	int** ppa = &pa;
//	//ppa就是二级指针变量
//	//pa也是变量，&pa取出pa在内存之中的起始地址
//	return 0;
//}


//int main()
//{
//	int arr[10];//整型数组 - 存放整型的数组
//	char ch[5];//字符数组 - 存放的是字符
//	int* parr[5];//整型指针的数组
//	return 0;
//}

struct B
{
	char name[10];
	int age;
};
struct Stu //类型
{
	struct B sb;
	//结构体的成员可以是另一个结构体
	char name[20];
	int age;
};

void print1(struct Stu s)
{
	printf("%s %d %s %d", s.sb.name, s.sb.age, s.name, s.age);
}
void print2(struct Stu* ps)
{
	printf("%s %d %s %d\n", (*ps).sb.name, (*ps).sb.age, (*ps).name, (*ps).age);
	printf("%s %d %s %d\n", ps->sb.name, ps->sb.age,ps->name,ps->age);
}
int main()
{
	struct Stu s = { {"冬至",19},"七饭",18};//对象

	// . ->
	printf("%s %d %s %d", s.sb.name, s.sb.age, s.name, s.age);

	print1(s);//传值调用
	print2(&s);//传址调用

	return 0;
}