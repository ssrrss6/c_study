#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//#define OFFSETOF(type, member) (size_t)&(((type*)0)->member)
//struct s
//{
//	int a;
//	char b;
//	int c;
//};
//int main()
//{
//	printf("%d\n", OFFSETOF(struct s, a));
//	printf("%d\n", OFFSETOF(struct s, b));
//	printf("%d\n", OFFSETOF(struct s, c));
//
//	return 0;
//}

#define CHANGE(n) for(int i = 0; i < 31; i+=2)\
					{\
						int tmp = (1 &( n >> (i + 1)));\
						n ;\
					}
int main()
{
	int a = 0;
	scanf("%d", &a);

	for (int i = 0; i < 32; i++)
	{
		printf("%d ", (1 & a >> i));
	}
	printf("\n");

	CHANGE(a);

	for (int i = 0; i < 32; i++)
	{
		printf("%d ", (1 & a >> i));
	}


	return 0;
}
