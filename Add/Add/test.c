#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//  Add(void)
//{
//
//	 printf("hello world");
//}
//int main()
//{
//	//int n = 0;
//
//	////int a = Add(n);
//	////printf("%d", a);
//	//int a = Add(n);
//	//printf("%d", a);
//	return 0;
//}


//int main()
//{
//	char a = '\0';
//	printf("输入一个字母:>");
//	scanf("%c", &a);
//	if (a >= 97 && a <= 122)
//	{
//		a -= 32;
//	}
//	else if(a >= 65 && a <= 90)
//	{
//		a += 32;
//	}
//	printf("%c\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 2147483647;
//	int count = 0;
//	int i = sizeof(a) * 8;
//	//00000000000000000000000000001111
//	//00000000000000000000000000000001
//	while (i > 1)
//	{
//		if (a & 1)
//		{
//			count++;
//		}
//		a >>= 1;
//		i--;
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//
//	double drt = (b * b) - (4 * a * c);
//	if (drt > 0)
//		printf("该方程有两个不相等的实根\n");
//	else if (drt == 0)
//		printf("该方程有两个相等的实根\n");
//	else
//		printf("方程没有实根\n");
//
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d", a);
//	int*** pppa = &ppa;
//	***pppa = 30;
//	printf("%d\n", a);
//
//	return 0;
//
// }

//int main()
//{
//	int a = 0;
//	const int* p = &a;
//
//	int* p2 = &a;
//	*p2 = 20;
//
//	printf("%d", a);
//
//
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	char tmp = 0;
//	char arr[10001] = "\0";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	gets(arr);
//
//	int lenth = (int)strlen(arr);
//
//	char* left = arr;
//	char* right = arr + lenth - 1;
//
//	while (left < right)
//	{
//		tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//
//	
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	/*for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i <= n / 2)
//			{
//				if (j > n / 2 - i && j < n / 2 + i)
//					printf("*");
//				else
//					printf(" ");
//			}
//			else
//			{
//				if (j >= i - n / 2 - 1 && j <= n - (i - n / 2))
//					printf("*");
//				else
//					printf(" ");
//			}
//		}
//		printf("\n");
//	}*/
//
//
//
//	return 0;
//}

//20 + 10 + 5 + 2--1 + 1 + 1
// 22 + 11 + 5 -- 1 + 2 -- 1 + 1 + 1
int main()
{
	int water = 7;
	int sum = 0;
	int tmp = 0;

	while (water)
	{
		sum += water;
		tmp += water % 2;
		water /= 2;
	}

	printf("%d", sum + tmp / 2);

	return 0;
}