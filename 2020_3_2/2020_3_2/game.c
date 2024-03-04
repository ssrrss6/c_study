#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//将数组字符初始化为空格。
void initarr(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int x = 0;//横坐标
	int y = 0;//纵坐标

	for (int i = 0; i < row; i++)//第几行
	{
		//打印横坐标
		if (i == 0)
		{
			printf("  ");//缩进两空格
			while ( y < col)
			{
				printf(" %d ", y + 1);
				printf(" ");
				y++;
			}
			printf("\n");
		}	

		for (int j = 0; j < col; j++)
		{
			//打印纵坐标
			if (j == 0)
			{
				printf("%2d", x + 1);
				x++;
			}
			//打印棋格
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//打印分割行
		if (i < row-1)
		{
			printf("  ");//缩进两空格
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}	
			}
			printf("\n");
		}
		
	}

}
//玩家移动
void PlayerAct(char board[ROW][COL], int x, int y)
{
	printf("玩家移动\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= ROW && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标以被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	
}
//电脑移动
void ComputerAct(char board[ROW][COL], int x, int y)
{
	printf("电脑移动\n");
	while (1)
	{
		int	ret1 = rand() % ROW;
		int	ret2 = rand() % ROW;

		//int ret2 = rand() % ROW;
		if (board[ret1][ret2] == ' ')
		{
			board[ret1][ret2] = '#';
			break;
		}
	}
	

}
//判断输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int player = 0;//玩家连续棋子数
	int computer = 0;//电脑连续棋子数
	int null = 0;//空格子数
	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)//对空格子计数
		{
			if (board[x][y] == ' ')
			{
				null++;
			}
		}
			//行判断
			{
				player = 0;
				computer = 0;
				//计算相连棋子数
				for (int y = 0; y < COL; y++)
				{
					if (board[x][y] == '*')
					{
						computer = 0;
						player++;
						if (player == WIN)
						{
							return '*';
						}
					}
					else if (board[x][y] == '#')
					{
						player = 0;
						computer++;
						if (computer == WIN)
						{
							return '#';
						}
					}
				}
			}
			//列判断
			{
				player = 0;
				computer = 0;
				//计算相连棋子数
				for (int y = 0; y < ROW; y++)
				{
					if (board[y][x] == '*')
					{
						computer = 0;
						player++;
						if (player == WIN)
						{
							return '*';
						}
					}
					else if (board[y][x] == '#')
					{
						player = 0;
						computer++;
						if (computer == WIN)
						{
							return '#';
						}
					}
				}
			}
			//斜线判断
			{
				player = 0;
				computer = 0;
				if (x <= ROW - WIN)//判断剩余行数是否能获胜
				{
					for (int y = 0; y < COL; y++)//获取列
					{
						if (y <= COL - WIN)//判断列数是否能获胜,从左往右斜线
						{
							if (board[x][y] == '*')//确定列开始计数点
							{
								computer = 0;
								player++;
								while (player)
								{
									if (board[x + player][y + player] == '*')
									{
										player++;
										if (player == WIN)//判断输赢
										{
											return '*';
										}
									}
									else
									{
										player = 0;
									}
								}
							}
							else if (board[y][y] == '#')//对电脑计数
							{
								computer++;
								player = 0;
								while (computer)
								{
									if (board[x + computer][y + computer] == '#')
									{
										computer++;
										if (computer == WIN)
										{
											return '#';
										}
									}
									else
									{
										computer = 0;
									}
								}
							}

						}
						else if (y >= WIN - 1)//从右往左斜线
						{
							if (board[x][y] == '*')//确定列开始计数点
							{
								computer = 0;
								player++;
								while (player)
								{
									if (board[x + player][y - player] == '*')
									{
										player++;
										if (player == WIN)//判断输赢
										{
											return '*';
										}
									}
									else
									{
										player = 0;
									}
								}
							}
							else if (board[y][y] == '#')//对电脑计数
							{
								computer++;
								player = 0;
								while (computer)
								{
									if (board[x + computer][y - computer] == '#')
									{
										computer++;
										if (computer == WIN)
										{
											return '#';
										}
									}
									else
									{
										computer = 0;
									}
								}
							}
						}


					}
				}

			}
		
	}
	//根据空格子数判断是否平局
	if (null != 0)
	{
		return 'c';
	}
	else
	{
		return 'q';
	}

}
//按回车继续
void Enter()
{
	char enter = '\0';
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	while (enter != '\n')
	{
		scanf("%c", &enter);
	}
}
