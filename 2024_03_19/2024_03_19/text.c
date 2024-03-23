#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//
//	int ret = m^ n;
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (ret & 1)
//		{
//			count++;
//		}
//		ret >>= 1;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//int main()
//{
//	//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//	
//	/*int ret = 0;
//	int a = 0;
//	scanf("%d", &a);
//	
//	for (int i = 1; i <= 32; i++)
//	{
//		if (i % 2 == 1)
//		{
//			ret = a & 1;
//			a >>= 1;
//			printf("奇数位：%d\n", ret);
//		}
//		if (i % 2 == 0)
//		{
//			ret = a & 1;
//			a >>= 1;
//			printf("偶数位：%d\n", ret);
//		}
//	}*/
//
//	int ret = 0;
//	int tmp = 0;
//	int a = 0;
//	scanf("%d", &a);
//	tmp = a;
//
//	printf("偶数位：");
//	a >>= 1;
//	for (int i = 0; i < 32; i+= 2)
//	{
//		ret = a & 1;
//		a >>= 2;
//		printf("%d", ret);
//	}
//	printf("\n");
//	printf("奇数位：");
//	a = tmp;
//	for (int i = 0; i < 32; i += 2)
//	{
//		ret = a & 1;
//		a >>= 2;
//		printf("%d", ret);
//	}
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int a = 0;
//	scanf("%d", &a);
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (a & 1)
//		{
//			count++;
//		}
//		a >>= 1;
//	}
//	printf("%d", count);
//	
//
//
//	return 0;
//}


int main()
{
	//不允许创建临时变量，交换两个整数的内容

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("交换前：%d   %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后：%d   %d\n", a, b);

	//a ^ b
	//b = a ^ b ^b = a ^ 0;
	//a = a ^ b ^ a = 0 ^ b;
}