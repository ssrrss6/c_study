#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

//��ջ�����
void clean()
{
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
}

//��ʼ��
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

//��ӡ��Ϸ����
void Display(char show[ROWS][COLS], int row, int col)
{
	printf("-------ɨ��-------\n");
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
	printf("-------ɨ��-------\n");
}

//����
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

//�ж���Χ������
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

//����
void Flag(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 0;

	printf("���һ������\n");

	while (1)
	{
		printf("����������:>");
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
				printf("������Ϊ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

//�ж���Ӯ
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

//��Ϸ�������ж���Ӯ
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
		printf("���롮0����ǻ򰴻س�����\n");
		printf("��ѡ��:>");
		scanf("%c", &a);
		if (a == '0')
		{
			//����
			Flag(show, row, col);
		}
		else
		{
			while (1)
			{
				printf("����������:>");
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
						printf("�������ѱ����룬����������\n");
					}
				}
				else
				{
					printf("����Ƿ�������������\n");
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