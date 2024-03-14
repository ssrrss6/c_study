#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

//清空缓存区
void clean()
{
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
}

//初始化
void InitBoard(char Board[ROWS][COLS], int rows, int cols, int ret)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Board[i][j] = ret;
		}
	}
}

//打印游戏界面
void Display(char show[ROWS][COLS], int row, int col)
{
	printf("-------扫雷-------\n");
	printf("  ");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{		
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷-------\n");
}

//埋雷
void Getmine(char mine[ROWS][COLS], int row, int col)
{

	int count = WIN;

	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//判断周围地雷数
void IsNum(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int fx_count)
{
	int i = 0;
	int j = 0;
	int count = 0;
	fx_count++;

	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += mine[x + i][y + j] - '0';
		}
	}

	for ( i = -1; i <= 1; i++)
	{
		for ( j = -1; j <= 1 ; j++)
		{
			if (count == 0)
			{
				show[x][y] = ' ';
				if(mine[x + i][y + j] != '1' && show[x + i][y + j] == '*' && x + i >= 1 && y + j >= 1 && x + i <= ROW && y + j <= COL)
					IsNum(mine, show, x + i, y + j, fx_count);
			}
			else
			{
				show[x][y] = count + '0';
				//if(mine[x + i][y + j] != '1' && show[x + i][y + j] == '*' && x + i > 1 && y + j > 1 && x + i < ROW && y + j < COL)
				//	IsNum(mine, show, x + i, y + j, fx_count);
			}
		}
	}

	/*for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			if (show[x + i][y + j] == '*' && count == 0)
			{
				show[x + i][y + j] = ' ';
				if (x > 1 && y > 1 && x < ROW && y < COL)
					IsNum(mine, show, x + i, y + j, fx_count);
			}
			else
			{
				show[x][y] = count + '0';
			}
		}
	}*/
		

	/*if (count == 0 && mine[x][y] != '1')
	{
		show[x][y] = ' ';
		for (int i = -1; i + x <= ROW; i++)
		{
			for (int j = -1; j + y <= COL; j++)
			{
				if (x > 1 && y > 1 && show[x + i][y + j] != ' ' && mine[x][y] == '0')
				{
					IsNum(mine, show, x + i, y + j, fx_count);
				}
			}
		}
	}
	if(mine[x][y] != '1')
		show[x][y] = count + '0';*/

		/*for (int i = 0 - fx_count; i <= 0 + fx_count && i <= ROW - x && i >= -x && x > 0 && x < ROW; i++)
		{
			for (int j = 0 - fx_count; j <= 0 + fx_count && j <= COL - y && j >= -y && y > 0 && y < COL; j++)
			{
				if (mine[x + i][y + j] == '0' && show[x + i][y + j] != ' ')
				{
					IsNum(mine, show, x + i, y + j, fx_count);
				}
				else
					show[x + i][y + j] = count + '0';
			}
	}*/
}

//标棋
void Flag(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;

	printf("标记一个格子\n");

	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && y > 0 && x <= row && y <= col)
		{
			if (show[x][y] == '*')
			{
				show[x][y] = '!';
				Display(show, ROW, COL);
				break;
			}
			else if(show[x][y] == '!')
			{
				show[x][y] = '*';
				Display(show, ROW, COL);
				break;
			}
			else
			{
				printf("该坐标为空\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

//判断输赢
IsWin(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y, int row, int col)
{
	int count = 0;
	int flag = 0;
	int error = 0;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (show[i][j] == '*' || show[i][j] == '!')			
				count++;	

			if(show[i][j] == '!' && mine[i][j] == '1')			
				flag++;

			if (show[i][j] == '!' && mine[i][j] != '1')
				error++;
		}
	}

	if (mine[x][y] == '1')
		return 'l';
	else if (count == WIN || flag - error == WIN)
		return 'w';
}

//游戏过程与判断输赢
void Play(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;
	char a = 0;
	char iswin = '\0';
	int fx_count = 0;

	while (1)
	{
		Display(mine, ROW, COL);
		clean();
		printf("输入‘0’标记或按回车排雷\n");
		printf("请选择:>");
		scanf("%c", &a);
		if (a == '0')
		{
			//标棋
			Flag(show, row, col);
		}
		else
		{
			while (1)
			{
				printf("请输入坐标:>");
				scanf("%d%d", &x, &y);
				if (x > 0 && y > 0 && x <= row && y <= col)
				{
					if (show[x][y] == '*' || show[x][y] == '!')
					{
						IsNum(mine, show, x, y, fx_count);
						Display(show, ROW, COL);
						break;
					}
					else
					{
						printf("该坐标已被输入，请重新输入\n");
					}
				}
				else
				{
					printf("坐标非法，请重新输入\n");
				}
			}
			
		}

		iswin = IsWin(mine, show, x, y, row, col);
		if (iswin == 'w')
		{
			printf("you win\n");
			break;
		}
		else if (iswin == 'l')
		{
			printf("you lose\n");
			Display(mine, ROW, COL);
			break;
		}
	}
	
}