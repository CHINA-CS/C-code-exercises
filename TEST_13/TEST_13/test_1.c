#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

//���ļ���Ź�����Ϸ��صĺ�����������������ͷ�ļ��İ���

void menu()
{
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 2.exit ******\n");
	printf("*******************\n");
}
void game()
{
	//�洢���� - ��ά����
	char borad[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBorad(borad, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("��������Ϸ\n");
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}