#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//菜单
void menu()
{
	printf("%d子棋\n", WIN);
	printf("************************\n");
	printf("**** play ------->1 ****\n");
	printf("**** rule ------->2 ****\n");
	printf("**** exit ------->0 ****\n");
	printf("************************\n");
}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	char board[ROW][COL] = { 0 };
	
	do
	{
		menu();//打印菜单
		printf("请输入:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			system("cls");
			initarr(board, ROW, COL);//初始化棋盘
			PrintBoard(board, ROW, COL);
			printf("游戏开始\n");
			while (1)
			{
				char a = '\0';
				//玩家行动
				PlayerAct(board, ROW, COL);
				PrintBoard(board, ROW, COL);
				//判断输赢
				a = IsWin(board, ROW, COL);
				if (a == '*')
				{
					printf("you win\n");
					break;
				}
				else if (a == 'q')
				{
					printf("平局\n");
					break;
				}

				//电脑行动
				ComputerAct(board, ROW, COL);
				PrintBoard(board, ROW, COL);
				//判断输赢
				a = IsWin(board, ROW, COL);
				if (a == '#')
				{
					printf("you lose\n");
					break;
				}
				else if (a == 'q')
				{
					printf("平局\n");
					break;
				}
			}
			printf("按回车继续\n");
			Enter();
			system("cls");
			break;
		case 2:
			initarr(board, ROW, COL);//初始化棋盘
			system("cls");
			printf("详细规则\n");
			PrintBoard(board, ROW, COL);
			printf("输入对应的坐标（行在前，列在后，用空格隔开)。\n");
			printf("当一方的棋子出现连续%d颗时，该方获胜。\n", WIN);
			printf("玩家的棋子是‘*’，电脑方的棋子是‘#’\n");
			printf("按回车继续\n");
			Enter();
			system("cls");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
	

	return 0;
}