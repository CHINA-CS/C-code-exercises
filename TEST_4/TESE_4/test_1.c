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
//		printf("���� ");
//	else if (18 >= age >= 14)
//		printf("������ ");
//	else
//		printf("Сѧ�� ");
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
//		printf("���� ");
//	}
//	else
//	{
//		printf("ż�� ");
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
//			printf("����  ");
//		}
//		else
//		{
//			printf("%d", i);
//			printf("ż��  ");
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
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	default:
//     	printf("�������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//��whileѭ��֮��break�������õ���ֹѭ��
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
//		//EOF��getchar��ֹ����ֵΪ-1
////������ж������ڼ���������ctrl+z,Ȼ��س�
//		putchar(ch);
//	  return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	//password�����飬������������ǵ�ַ
//	//���Բ���Ҫȡַ��&
//	printf("��ȷ������(y/n):>");
//	//��������
//	//getchar();//ʹ��getchar����\n
//	//���������Ķ���ַ�
//	int tem = 0;
//	while ((tem = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺>");
//	scanf("%s", password);
//	printf("��ȷ�����룺Y/N >");
//	int tem = 0;
//	while ((tem =getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("������ȷ\n");
//	}
//	else
//	{
//		printf("�������\n");
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


//do whileѭ��
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