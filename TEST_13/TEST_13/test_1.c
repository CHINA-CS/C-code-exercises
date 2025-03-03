#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

//该文件存放关于游戏相关的函数声明，符号声明头文件的包含

void menu()
{
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 2.exit ******\n");
	printf("*******************\n");
}
void game()
{
	//存储数据 - 二维数组
	char borad[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBorad(borad, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("三子棋游戏\n");
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}