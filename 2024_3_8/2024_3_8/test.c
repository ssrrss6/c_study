#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//change(int arr1[], int arr2[], int sz1, int sz2)
//{
//	int tmp = 0;
//
//	for (int i = 0; i < (sz1 + sz2)/2; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	
//}
//
//int main()
//{
//	int arr1[5] = { 0, 1, 2, 3, 4 };
//	int arr2[5] = { 5, 6, 7, 8, 9 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//
//	printf("arr1 = ");
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2 = ");
//	for (int j = 0; j < sz2; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	printf("\n");
//
//	change(arr1, arr2, sz1, sz2);
//
//	printf("arr1 = ");
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2 = ");
//	for (int j = 0; j < sz2; j++)
//	{
//		printf("%d ", arr2[j]);
//	}
//	
//
//	return 0;
//}

init(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

reverse(int arr[], int sz)
{
	int tmp = 0;
	for (int j = 0; j < sz; j++)
	{
		arr[j] = j;
	}

	for (int i = 0; i < sz/2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;
	}
}

int main()
{

	int arr[5] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	init(arr, sz);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);


	return 0;
}