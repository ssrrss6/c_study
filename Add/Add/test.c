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
//int main()
//{
//	int water = 7;
//	int sum = 0;
//	int tmp = 0;
//
//	while (water)
//	{
//		sum += water;
//		tmp += water % 2;
//		water /= 2;
//	}
//
//	printf("%d", sum + tmp / 2);
//
//	return 0;
//}


//int main()
//{
//	/*int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i * i;
//	}
//	printf("%d", sum);*/
//	
//	/*int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//		ret = 1;
//	}
//	printf("%d", sum);*/
//
//	/*double sum = 0;
//	int mom = 2;
//	int son = 1;
//
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum += mom / son;
//		mom *= 2;
//		son += 2;
//	}
//	printf("%lf\n", sum);
//	printf("%d\n", mom);
//	printf("%d\n", son);*/
//
//	/*double sum = 0;
//
//	int k = 0;
//	for (k = 1; k <= 20; k++)
//	{
//		sum += k * k * k;
//	}
//	for (k = 1; k <= 10; k++)
//	{
//		sum += 1 / (k * k);
//	}
//	printf("%lf\n", sum);*/
//
//
//	/*int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret = 1;
//	
//	int i = 0;
//	for (i = 0; i < y; i++)
//	{
//		ret *= x;
//	}
//	
//	if (y == 0)
//		ret = 1;
//	
//	printf("%d", ret);*/
//
//
//	/*1、	编写一个程序, 求出cosx的值。
//		cosx = 1 - x2 / 2!+ x4 / 4!- x6 / 6!+ ……..直到最后一项绝对值小于1e - 7为止*
//
//
//
//	return 0;
//}

#include<math.h>
int main()
{
	/*1、	编写一个程序, 求出cosx的值。
		cosx = 1 - x^2 / 2!+ x^4 / 4!- x^6 / 6!+ ……..直到最后一项绝对值小于1e - 7为止*/

	/*double x = 0.0;
	scanf("%lf", &x);
	double sum = 1;
	double y = x * x;
	double ret = 1;
	int i = 2;
	int n = 1;
	int sign = -1;

	while (fabs(sum) >= 1e-7)
	{
		int num = 1;
		for (int j = 1; j <= i; j++)
		{
			num *= j;
		}
		ret = sign * (ret * y / (num / n));
		i+= 2;
		n = num;
		sum += ret;
	}
	printf("%lf\n", sum);*/

	double x = 0;
	scanf("%lf", &x);
	double sum = 1;
	double term = 1;
	int i = 2;
	int sign = -1;

	while (fabs(term) >= 1e-7) 
	{
		term *= x * x / (i * (i - 1));
		sum += sign * term;
		sign = -sign;
		i += 2;
	}

	printf("cos(%lf) ≈ %lf\n", x, sum);

	return 0;
}