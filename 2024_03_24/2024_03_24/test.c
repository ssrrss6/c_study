#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int arr[50] = { 0 };
//
//	int n = 0;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//	{
//		int num = rand() % 50 + 1;
//		arr[i] = num;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int del = 0;
//	scanf("%d", &del);
//
//	for (int i = 0; i < n - del; i++)
//	{
//		arr[del + i - 1] = arr[del + i];
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int arr[20] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int tmp = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	printf("%d", arr[n - 1] - arr[0]);
//
//
//	return 0;
//}


//int main()
//{
//	char ch = '\0';
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c", ch - 32);
//		}
//		else
//		{
//			printf("%c", ch + 32);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	char ch = '\0';
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("is an alphabet\n");
//		}
//		else
//		{
//			printf("is not an alphabet\n");
//		}
//		getchar();
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	
//	printf("%d\n", (a > b ? (a > c ? a : c) : (b > c ? b : c)));
//
//	return 0;
//}

#include<math.h>

int main()
{
	for (int i = 10000; i < 100000; i++)
	{
		if (((i % 10000) * (i / 10000) + (i % 1000) * (i / 1000) + (i % 100) * (i / 100) + (i % 10) * (i / 10)) == i)
		{
			printf("%d ", i);
		}
	/*	int sum = 0;
		int j = 0;
		for (int j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / k);
		}
		
		if (sum == i)
		{
			printf("%d ", i);
		}*/
	}

	return 0;
}