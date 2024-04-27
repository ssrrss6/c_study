#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int ret = 1;
//	int sum = 0;
//
//	for (int i = 1; i <= x; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//
//
//	return 0;
//}


//int main()
//{
//	//求最小公倍数
//	//1 <= a , b <=	100000
//
//	/*int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	for (int i = (a > b? a : b); i <= a * b; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}*/
//	//优化
//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//
//	printf("%d\n", i * a);
//
//	return 0;
//}

#include<string.h>
void change(char ch[], int n)
{
	int len = n;
	while (len > 0)
	{
		if (ch[--len] == ' ')
		{
			for (int i = len + 1; i < n; i++)
			{
				printf("%c", ch[i]);
			}
			printf(" ");
			n = len;
		}
	}
	printf("%c", ch[len]);
	
}
int main()
{
	//逆置字符串
	// i like beijing.
	// beijing. like i

	char ch[101] = { 0 };
	gets(&ch);
	int n = strlen(ch);

	change(ch, n);


	return 0;	
}