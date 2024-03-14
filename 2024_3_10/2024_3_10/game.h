#pragma once
#include<stdio.h>
#include<time.h>	
#include<stdlib.h>


#define ROW 9
#define COL 9
#define WIN 10

#define ROWS 11
#define COLS 11

void clean();
//初始化
void InitBoard(char Board[ROWS][COLS], int rows, int cols, int ret);

//打印游戏界面
void Display(char show[ROWS][COLS], int row, int col);

//埋雷
void Getmine(char mine[ROWS][COLS], int row, int col);

//判断周围地雷数
void Play(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);

//游戏过程与判断输赢
char IsNum(char show[ROWS][COLS], int row, int col);

//标棋
void Flag(char show[ROWS][COLS]);

