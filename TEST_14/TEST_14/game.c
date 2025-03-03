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
	printf("--------ɨ����Ϸ---------\n");
	
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
	//����10����
	int count = ESAY_COUNT;
	while (count)
	{
		//��������±�
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//���κ���
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
	//1.�����Ų������
	//2.������괦�ǲ�����
	 
	  
	int x = 0;
	int y = 0;
	int win = 0;

	while (win<row*col-ESAY_COUNT)
	{
		printf("������Ҫ�Ų��׵����꣺>");
		scanf("%d%d", &x, &y);//9>=x>=1,9>=y>=1

		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				//��1������---����--��Ϸ����
				printf("������˼���㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//��2��������---ͳ��������Χ�м�����--�洢�Ų��׵���Ϣ��show����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';
				//��ʾ�Ų���Ϣ
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{

			printf("���겻�Ϸ������������룺>\n");
		}
	}

	if (win == row * col - ESAY_COUNT)
	{
		printf("��ϲ�����׳ɹ�������\n");
		DisplayBoard(mine, row, col);

	}
}