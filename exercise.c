#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void mue()
{
	printf("*******************\n");
	printf("****play-----1*****\n");
	printf("****exit-----0*****\n");
	printf("*******************\n");
}

void enter()
{
	char c = '\0';
	int ch = 0;
	//清空缓冲区
	while ((ch = getchar() != '\n'))
	{
		;
	}
	//实现按回车继续
	while (c != '\n')
	{
		scanf("%c", &c);
	}
}

void game()
{
	int num = rand() % 100;
	int guess = 0;
	

	while (num!=guess)
	{
		printf("请输入数字:>");
		scanf("%d", &guess);
		if (num > guess)
		{
			printf("猜小了\n");
		}
		else if (num < guess)
		{
			printf("猜大了\n");
		}
		else
		{
			system("cls");
			printf("恭喜你，猜对了！！！\n");
			printf("按回车继续");
			enter();
			/*Sleep(2500);*/
			system("cls");
		
		}
	}
	

}

int main()
{
	srand((unsigned int)time(NULL));//随机数生成器

	//实现二分查找
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k = 7;

	////printf("%d", sz);
	//int left = 0;
	//int right = sz - 1;

	//while (left<=right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("找到了，下标为：%d", mid);
	//		break;
	//	}
	//}
	//if (left>right)
	//{
	//	printf("没找到");
	//}

	//猜数字游戏实现
	int num = 0;

	printf("猜数字\n");

	
	

	do
	{
		mue();//菜单栏
		printf("请选择:>");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			system("cls");
			printf("开始游戏\n");
			game();//猜数字游戏主体
			break;
		case 0:
			printf("退出游戏\n");
			break;

		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (num);
	
	
	
	

	return 0;
}