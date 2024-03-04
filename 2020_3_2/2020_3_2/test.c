#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//�˵�
void menu()
{
	printf("%d����\n", WIN);
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
		menu();//��ӡ�˵�
		printf("������:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			system("cls");
			initarr(board, ROW, COL);//��ʼ������
			PrintBoard(board, ROW, COL);
			printf("��Ϸ��ʼ\n");
			while (1)
			{
				char a = '\0';
				//����ж�
				PlayerAct(board, ROW, COL);
				PrintBoard(board, ROW, COL);
				//�ж���Ӯ
				a = IsWin(board, ROW, COL);
				if (a == '*')
				{
					printf("you win\n");
					break;
				}
				else if (a == 'q')
				{
					printf("ƽ��\n");
					break;
				}

				//�����ж�
				ComputerAct(board, ROW, COL);
				PrintBoard(board, ROW, COL);
				//�ж���Ӯ
				a = IsWin(board, ROW, COL);
				if (a == '#')
				{
					printf("you lose\n");
					break;
				}
				else if (a == 'q')
				{
					printf("ƽ��\n");
					break;
				}
			}
			printf("���س�����\n");
			Enter();
			system("cls");
			break;
		case 2:
			initarr(board, ROW, COL);//��ʼ������
			system("cls");
			printf("��ϸ����\n");
			PrintBoard(board, ROW, COL);
			printf("�����Ӧ�����꣨����ǰ�����ں��ÿո����)��\n");
			printf("��һ�������ӳ�������%d��ʱ���÷���ʤ��\n", WIN);
			printf("��ҵ������ǡ�*�������Է��������ǡ�#��\n");
			printf("���س�����\n");
			Enter();
			system("cls");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}

	} while (input);
	

	return 0;
}