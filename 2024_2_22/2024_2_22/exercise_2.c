#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
////求出1~100中有多少个数字9。
//	int count = 0;
//
//	for (int  i = 0; i <=100; i++)
//	{
//		if (9 == i % 10)
//		{
//			count++;
//		}
//		if (9 == i/10)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//
//	return 0;
//}


//计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...+ 1/99 - 1/100
//
//
//int main()
//{
//	/*
//	float a = 1;
//
//	for (int i = 2; i < 101; i++)
//	{
//		if ( 1==i%2 )
//		{
//			a += (float) 1 / i;
//		}
//		else 
//		{
//			a -= (float)1 / i;
//		}
//	}
//	printf("%f", a);
//	*/
//
//	
//	////idea2
//	//
//	//float a = 0;
//	//int flag = 1;
//	//
//	//for (int i = 1; i < 101; i++)
//	//{
//	//	a += flag*1.0/i;
//	//	flag = -flag;
//	//}
//	//printf("%f", a);
//	
//	return 0;
//}


//打印乘法口诀表
void print(int len)
{
	for (int x = 1; x <= len; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("%d*%d=%2d ", y, x, x * y);//%2d指至少打印两个字符（右对齐），数字前加负号为左对齐
		}
		printf("\n");
	}
}

int main()
{
	int len = 0;
	scanf("%d", &len);

	print(len);

	return 0;
}