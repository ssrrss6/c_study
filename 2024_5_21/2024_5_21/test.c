#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int n = 0;
//
//	while ((scanf("%d", &n)) == 1)
//	{
//		for (int i = 0; i < 2 * n + 1; i++)
//		{
//			for (int j = 0; j < 2 * n + 1; j++)
//			{
//				if (i < n)
//				{
//					if (j >= 2 * n - 2 * i && j < 2 * n + 1 - i)
//					{
//						printf("*");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//				else
//				{
//					if (j >= 2 * i - 2 * n && j < i + 1 )
//					{
//						printf("*");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//			
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}


int main()
{
	int arr[7] = { 0 };
	
	while ((scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6)) == 7)
	{
		int max = arr[0];
		int min = arr[0];
		int sum = 0;
		for (int i = 0; i < 7; i++)
		{
			if (max <= arr[i])
			{
				max = arr[i];
			}
			if (min >= arr[i])
			{
				min = arr[i];
			}
			sum += arr[i];
		}

		printf("%d\n", (sum - max - min) / 5);
	}
	
	return 0;
}

