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
//	//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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
//			printf("����λ��%d\n", ret);
//		}
//		if (i % 2 == 0)
//		{
//			ret = a & 1;
//			a >>= 1;
//			printf("ż��λ��%d\n", ret);
//		}
//	}*/
//
//	int ret = 0;
//	int tmp = 0;
//	int a = 0;
//	scanf("%d", &a);
//	tmp = a;
//
//	printf("ż��λ��");
//	a >>= 1;
//	for (int i = 0; i < 32; i+= 2)
//	{
//		ret = a & 1;
//		a >>= 2;
//		printf("%d", ret);
//	}
//	printf("\n");
//	printf("����λ��");
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
	//����������ʱ������������������������

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);

	printf("����ǰ��%d   %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������%d   %d\n", a, b);

	//a ^ b
	//b = a ^ b ^b = a ^ 0;
	//a = a ^ b ^ a = 0 ^ b;
}