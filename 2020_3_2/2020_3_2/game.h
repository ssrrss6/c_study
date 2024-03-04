#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>	
#include<stdlib.h>
#include<time.h>

#define	ROW 3//棋盘行数
#define	COL 3//棋盘列数
#define WIN 3//胜利所需连续棋子数

//打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col);
//初始化棋盘
void initarr(char board[ROW][COL], int row, int col);
//玩家行动
void PlayerAct(char board[ROW][COL], int row, int col);
//电脑行动
void ComputerAct(char board[ROW][COL], int row, int col);
//判断输赢
char IsWin(char board[ROW][COL], int row, int col);
//按回车继续
void Enter();