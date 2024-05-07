#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	/*int arr[10][10] = { 1 };
//
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (i > 0 && j > 0)
//			{
//				int num = 1;
//				while (num <= arr[i - 1][j] && num <= arr[i][j - 1])
//				{
//					num++;
//				}
//				arr[i][j] = num;
//			}
//			else if(i == 0 && j > 0)
//			{
//				arr[i][j] = arr[i][j - 1] + 1;
//			}
//			else if (i > 0 && j == 0)
//			{
//				arr[i][j] = arr[i - 1][j] + 1;
//			}
//			
//		}
//	}*/
//
//	int arr[10][10] = { 0 };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			arr[i][j] = j + i;
//		}
//	}
//
//	int n = 0;
//	scanf("%d", &n);
//
//
//
//	return 0;
//}



//int main()
//{
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

int tese(int arr[10][10], int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0)
			{
				return 0;
			}
		}
	}
	
	return 1;
}

int main()
{
	int n = 0;
	scanf("%d", &n);

	int arr[10][10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int ret = tese(arr, n);

	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}