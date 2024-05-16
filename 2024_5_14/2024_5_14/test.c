#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	int n = 40;
//	int* pf = (int*)malloc(n);
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		pf[i] = i;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", pf[i]);
//	}
//
//
//	int* ptmp = (int*)realloc(pf, 20);
//	if (ptmp != NULL)
//	{
//		pf = ptmp;
//		ptmp = NULL;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		pf[i] = i;
//	}	
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", pf[i]);
//	}
//
//	free(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	/*int arr[10] = { 1,3,5,5,3,6,2,1,6,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sz; i++)
	{
		int flag = 1;

		for (int j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j] && i != j)
			{
				flag = 0;
				break;
			}
		}

		if (flag)
		{
			printf("%d ", arr[i]);
		}
	}*/

	int arr[] = { 0,0,1,1,5,5,4,6,8,8,9,9 };
	int single[2] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;

	for (int i = 0; i < sz; i++)
	{
		sum ^= arr[i];
	}

	int pos = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((1 << i) & sum)
		{
			pos = i;
			break;
		}
	}

	for (int i = 0; i < sz; i++)
	{
		if (arr[i] & (1 << pos))
		{
			single[0] ^= arr[i];
		}
	}
	for (int i = 0; i < sz; i++)
	{
		if ((arr[i] & (1 << pos)) == 0)
		{
			single[1] ^= arr[i];
		}
	}
	printf("%d %d", single[0], single[1]);

	return 0;
}