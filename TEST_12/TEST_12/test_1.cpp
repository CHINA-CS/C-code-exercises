#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr2[%d][%d]=%p\n ",i,j, &arr2[i][j]);
//		}
//		printf("\n");
//	}*/
//	int* p = &arr2[0][0];
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	} 
}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	//ÅÅÐòÎª½µÐò
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr,sz);
	
	return 0;
}