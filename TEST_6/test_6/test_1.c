#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>

//�׳�
//int main()
//{
//	int i = 1;
//	int n = 1;
//	while (i < 10)
//	{
//		n *= i;
//		i++;
//		printf("%d\n", n);
//	}
//
//	return 0;
//}

//�׳˺�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int c = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i=1; i <= n; i++)
//	{
//		c *= i;
//		sum += c;	
//	}
//	printf("%d\n", sum);
//	return 0;
// }

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ���ҵ�����
//	//��arr������������������k=7
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����Ԫ�ظ���
//	int left = 0;
//	int right = sz-1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±���:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��������ǣ�%d", arr[mid]);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�����Ҳ�����");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!! ";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//˯��һ�룬Sleep��λΪ����
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//
//		}
//
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	int s = 0;
//	while (s < 10)
//	{
//		int n = rand() % 100;
//		n += 1;
//		printf("%d \n", n);
//		s++;
//
//	}
//	
//
//	return 0;
//}