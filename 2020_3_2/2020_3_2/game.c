#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//�������ַ���ʼ��Ϊ�ո�
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
//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col)
{
	int x = 0;//������
	int y = 0;//������

	for (int i = 0; i < row; i++)//�ڼ���
	{
		//��ӡ������
		if (i == 0)
		{
			printf("  ");//�������ո�
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
			//��ӡ������
			if (j == 0)
			{
				printf("%2d", x + 1);
				x++;
			}
			//��ӡ���
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row-1)
		{
			printf("  ");//�������ո�
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
//����ƶ�
void PlayerAct(char board[ROW][COL], int x, int y)
{
	printf("����ƶ�\n");
	while (1)
	{
		printf("����������:>");
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
				printf("�����Ա�ռ�ã�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	
}
//�����ƶ�
void ComputerAct(char board[ROW][COL], int x, int y)
{
	printf("�����ƶ�\n");
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
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col)
{
	int player = 0;//�������������
	int computer = 0;//��������������
	int null = 0;//�ո�����
	for (int x = 0; x < ROW; x++)
	{
		for (int y = 0; y < COL; y++)//�Կո��Ӽ���
		{
			if (board[x][y] == ' ')
			{
				null++;
			}
		}
			//���ж�
			{
				player = 0;
				computer = 0;
				//��������������
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
			//���ж�
			{
				player = 0;
				computer = 0;
				//��������������
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
			//б���ж�
			{
				player = 0;
				computer = 0;
				if (x <= ROW - WIN)//�ж�ʣ�������Ƿ��ܻ�ʤ
				{
					for (int y = 0; y < COL; y++)//��ȡ��
					{
						if (y <= COL - WIN)//�ж������Ƿ��ܻ�ʤ,��������б��
						{
							if (board[x][y] == '*')//ȷ���п�ʼ������
							{
								computer = 0;
								player++;
								while (player)
								{
									if (board[x + player][y + player] == '*')
									{
										player++;
										if (player == WIN)//�ж���Ӯ
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
							else if (board[y][y] == '#')//�Ե��Լ���
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
						else if (y >= WIN - 1)//��������б��
						{
							if (board[x][y] == '*')//ȷ���п�ʼ������
							{
								computer = 0;
								player++;
								while (player)
								{
									if (board[x + player][y - player] == '*')
									{
										player++;
										if (player == WIN)//�ж���Ӯ
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
							else if (board[y][y] == '#')//�Ե��Լ���
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
	//���ݿո������ж��Ƿ�ƽ��
	if (null != 0)
	{
		return 'c';
	}
	else
	{
		return 'q';
	}

}
//���س�����
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
