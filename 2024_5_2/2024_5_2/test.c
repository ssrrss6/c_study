#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int howlong(int n)
{
	int count = 0;
	while (n)
	{
		count++;
		n /= 10;
	}

	return count;
}
int main()
{
	//22222
	//123
	int n = 0;
	scanf("%d", &n);

	int num = howlong(n);

	int ret = 0;
	for (int i = num; i > 0; i--)
	{
		if ((n / (int)pow(10, i-1)) % 2 == 0)
		{
			ret = ret * 10;
		}
		else if ((n / (int)pow(10, i-1)) % 2 != 0)
		{
			ret = ret * 10 + 1;
		}
	}

	printf("%d", ret);



	return 0;
}