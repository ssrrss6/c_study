#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>	
#include<stdlib.h>
#include<time.h>

#define	ROW 3//��������
#define	COL 3//��������
#define WIN 3//ʤ����������������

//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);
//��ʼ������
void initarr(char board[ROW][COL], int row, int col);
//����ж�
void PlayerAct(char board[ROW][COL], int row, int col);
//�����ж�
void ComputerAct(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);
//���س�����
void Enter();