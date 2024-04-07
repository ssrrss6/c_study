#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void change(int arr[], int sz)
//{
//		/*arr[3];
//		int tmp = 0;
//		tmp = arr[3];
//		3 + 2;
//		int tmp_o = 0;*/
//	
//	for (int i = 2; i < sz; i+= 2)
//	{
//		int tmp = 0;
//		tmp = arr[i];
//		for (int j  = i; j  > i / 2; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[i / 2] = tmp;
//		
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	change(arr, sz);
//	
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//change(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] %2 != 0)
//		{
//			int tmp = arr[i];
//
//			int j = 0;
//			for (j = i; j > 0; j--)
//			{
//				if (arr[j - 1] % 2 == 0)
//					arr[j] = arr[j - 1];
//				else
//					break;
//			}
//			arr[j] = tmp;
//		}
//
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,2,5,8,10,23 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	change(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
