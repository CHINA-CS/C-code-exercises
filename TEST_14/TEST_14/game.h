#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ESAY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char borad[ROWS][COLS], int rows, int cols, char set);

void DisplayBoard(char borad[ROWS][COLS], int row, int col);

SetMine(char mine[ROWS][COLS], int row, int col);

//ÅÅ²éÀ×
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);