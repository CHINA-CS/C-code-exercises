#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("���Լ����ػ���������������˧��");
//	scanf("%s", input);
//again:
//	if (strcmp(input, "����˧��") == 0)
//		//�����ַ����Ƚϲ���ʹ��==��Ӧ��ʹ��strcmp()string compare
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
	printf("����������˧�磬��Ȼ�͹ػ�����");
	scanf("%s", arr);
	again:
	if (strcmp(arr, "����˧��") == 0)
	{
		printf("�õģ�˧�����");
		system("shutdown -a");
		
	}
	else
	{
		goto again;
	}

	return 0;
}

