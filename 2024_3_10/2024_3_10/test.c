#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("**************************\n");
	printf("*** play ----------> 1 ***\n");
	printf("*** exit ----------> 0 ***\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//����
	Getmine(mine, ROW, COL);
	//����
	Display(show, ROW, COL);
	//��Ϸ
	Play(show, mine, ROW, COL);

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();//�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			game();
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