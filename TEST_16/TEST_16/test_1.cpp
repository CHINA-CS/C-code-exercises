#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int fu()
//{
//	static int a = 1;
//	return ++a;
//}
//int main()
//{
//	int b = fu() - fu() * fu();
//	printf("%d\n", b);
//	return 0;
//}


void init(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int* arr, int sz)
{
	int i = 0;
	for (i; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		right--;
		left++;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr)/sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}