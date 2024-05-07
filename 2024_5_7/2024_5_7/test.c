#define _CRT_SECURE_NO_WARNINGS
#include "directory.h"

void menu()
{
	printf("***********************************************\n");
	printf("*********    1.add          2.del      ********\n");
	printf("*********    3.show         4.search   ********\n");
	printf("*********    5.modi         6.sort     ********\n");
	printf("*********    0.exit                    ********\n");
	printf("***********************************************\n");
}

int main()
{
	int input = 0;
	directory book;
	init(&book);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);		

		switch (input)
		{
		case 1:
			add(&book);
			break;
		case 2:
			del(&book);
			break;
		case 3:
			show(&book);
			break;
		case 4:
			search(&book);
			break;
		case 5:
			modi(&book);
			break;
		case 6:
			sort(&book);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}


	} while (input);


	return 0;
}