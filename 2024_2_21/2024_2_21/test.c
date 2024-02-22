#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

// int frog( unsigned int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return frog(n - 1) + frog( n - 2);
//	}
//}
//
//int main()
//{
//	//青蛙跳台阶问题
//	unsigned int n = 0;
//	scanf("%u", &n);
//
//	int ret = frog(n);
//	printf("%d\n", ret);
//
//
//
//	return 0;
//}


//打印移动过程
void move(char frist ,char end)
{
	printf("%c -> %c\n", frist, end);
}


//frist -> 起点杆
//mid -> 中转杆
//end -> 终点杆
void hanoi(int n, char frist, char mid, char end)
{
	if (1 == n)
	{
		move(frist, end);	
	}
	else
	{
		hanoi(n - 1, frist, end, mid);//将 n - 1 个方格通过终点杆移动到中转杆
		move(frist, end);//将最底下的方格从起点杆移动到终点杆
		hanoi(n - 1, mid, frist, end);//将剩下的 n - 1 个方格通过起点杆移动到终点杆
		//将剩下个 n - 1 个方格移动到终点杆又可以与以上相同的步骤将 第n - 1 个 方格移动到终点杆，以此类推。
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	system("cls");
	char frist = 'A';
	char mid = 'B';
	char end = 'C';

	printf("汉诺塔移动过程：\n");
	hanoi(n,frist,mid,end);

	return 0;
}