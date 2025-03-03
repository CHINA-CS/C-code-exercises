#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void InitBoard(char borad[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			borad[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	printf("--------扫雷游戏---------\n");
	
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");

	}
}

SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = ESAY_COUNT;
	while (count)
	{
		//生成随机下标
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//修饰函数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y + 1] +
		mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';

}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入排查的坐标
	//2.检查坐标处是不是雷
	 
	  
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<row*col-ESAY_COUNT)
	{
		printf("请输入要排查雷的坐标：>");
		scanf("%d%d", &x, &y);//9>=x>=1,9>=y>=1

		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				//（1）是雷---死了--游戏结束
				printf("不好意思，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//（2）不是雷---统计坐标周围有几个雷--存储排查雷的信息到show数组
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';
				//显示排查信息
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{

			printf("坐标不合法，请重新输入：>\n");
		}
	}

	if (win == row * col - ESAY_COUNT)
	{
		printf("恭喜你排雷成功！！！\n");
		DisplayBoard(mine, row, col);

	}
}