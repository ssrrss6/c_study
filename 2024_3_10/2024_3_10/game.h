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
//��ʼ��
void InitBoard(char Board[ROWS][COLS], int rows, int cols, int ret);

//��ӡ��Ϸ����
void Display(char show[ROWS][COLS], int row, int col);

//����
void Getmine(char mine[ROWS][COLS], int row, int col);

//�ж���Χ������
void Play(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);

//��Ϸ�������ж���Ӯ
char IsNum(char show[ROWS][COLS], int row, int col);

//����
void Flag(char show[ROWS][COLS]);

