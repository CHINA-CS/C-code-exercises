#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello chenshun";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello chenshun";
//	memset(arr, 'h', 5);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello chenshun";
//	strcpy(arr1, arr2);
//	memset(arr1, 'x', 5);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d", max);
//
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int tem = *x;
//	*x = *y;
//	*y = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前： a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	//如果要改变外部函数的值，该函数内外部需要建立联系
//	//则需要传递地址给自定义函数，通过解引用获取值
//	printf("交换后： a=%d b=%d\n", a, b);
//
//	return 0;
//
//}


//int is_leap_year(int x)
////一个函数如果不写函数类型，则默认返回int类型，所以一定要写返回类型
//{
//	if ((x % 4 ==0)&& (x % 100 != 0)|| (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y < 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//
//	}
//	return 0;
//}

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	
//	return -1;
//}
// int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int key = 7;
//	//找到返回找到的位置的下标
//	//找不到返回-1，不与下标冲突
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到啦，下标是 %d", arr[ret]);
//	}
//	return 0;
//}

//void add(int* a)
//{
//	(*a)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d", num);
//	return 0;
//}

//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int add(int, int);
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//函数自己调用自己叫做递归
//函数调用其他函数叫做嵌套
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//		
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//	//print函数可以打印参数部分数字的每一位
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		*str++;
//	}
//	return count;*/
//}
//
//int main()
//{
//	char arr[] = "chen shun";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	//循环是一种迭代的方式
//	scanf("%d", &n);
//	int ret = fac(n);
//	return 0;
//}

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n-1) + fab(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fab(n);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("%d\n", count -= 1);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf ", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	int n = 1;
//
//	for (i = 1; i < 10; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%-2d ", i, n, i*n);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			printf("%d*%d=%-2d  ", i, n, i * n);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int b = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (b = 1; b <= i; b++)
//		{
//			printf("%d*%d=%-2d  ", i, b, i * b);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	while (a <= 9)
//	{
//		int b = 1;
//		while (b <= a)
//		{
//			printf("%d*%d=%-2d  ", a, b, a * b);
//			b++;
//		}
//		printf("\n");
//		a++;
//	}
//	return 0;
//}

//void print_table(int a)
//{
//	int i = 0;
//	for (i = 1; i <= a; i++)
//	{
//		int n = 0;
//		for (n = 1; n < i; n++)
//		{
//			printf("%d * %d = %d   ",i, n, i * n);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print_table(a);
//
//	return 0;
//}

 
//int fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * fun(n + 1);
//}
//int main()
//{
//	int n = 2;
//	fun(n);
//	printf("%d\n", fun(n));
//	return 0;
//}




//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_srting(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_srting(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int digitsum(int sum)
//{
//	int i = 0;
//	if (sum > 9)
//		return digitsum(sum / 10) + sum % 10;
//	else
//		return sum;
//
//}
//int main()
//{
//	int num = 1729;
//	int sum = digitsum(num);
//	printf("%d\n", sum);
//	return 0;
//}


int Pow(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0; 
}