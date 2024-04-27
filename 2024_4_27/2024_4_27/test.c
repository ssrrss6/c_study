#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int IsTurn_Left(char s1[], char s2[], int len1, int len2)
//{
//	int i = 0;
//	int j = 0;
//
//	//左旋
//	for (i = 0; i < len1; i++)
//	{
//		if (i < len1 / 2 && s1[i] == s2[len2 - 1])
//		{
//			len2--;
//		}
//		else
//		{
//			if (s1[i] != s2[j])
//			{
//				return 0;
//			}
//			j++;
//		}
//
//	}
//
//	return 1;
//}
//int IsTurn_right(char s1[], char s2[], int len1, int len2)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < len2; i++)
//	{
//		if (i < len2 / 2 && s2[i] == s1[len1 - 1])
//		{
//			len1--;
//		}
//		else
//		{
//			if (s2[i] != s1[j])
//			{
//				return 0;
//			}
//			j++;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//	//	例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//	//	给定s1 = abcd和s2 = ACBD，返回0.
//
//	//	AABCD左旋一个字符得到ABCDA
//
//	//	AABCD左旋两个字符得到BCDAA
//
//	//	AABCD右旋一个字符得到DAABC
//
//
//	char s1[20] = { 0 };
//	char s2[20] = { 0 };
//
//	gets(s1);
//	gets(s2);
//
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//
//	int isturn = 0;
//
//	if (isturn == 0)
//	{
//		isturn = IsTurn_Left(s1, s2, len1, len2);
//		if (isturn == 0)
//		{
//			isturn = IsTurn_right(s1, s2, len1, len2);
//		}
//	}
//
//	if (isturn)
//	{
//		printf("是旋转的\n");
//	}
//	else
//	{
//		printf("不是旋转的\n");
//	}
//
//
//
//	return 0;
//}

//void turn(char str[], int len, int n)
//{
//	//for (int i = 0; i < n; i++)
//	//{
//	//	char tmp = str[0];
//	//	int j = i;
//	//	for (j = 0; j < len - 1; j++)
//	//	{
//	//		str[j] = str[j + 1];
//	//	}
//	//	str[j] = tmp;
//	//}
//
//	char CpyStr[40] = { 0 };
//	strcpy(CpyStr, str);
//	strcpy(CpyStr + len, str);
//
//	for (int i = n; i < len + n; i++)
//	{
//		printf("%c", CpyStr[i]);
//	}
//}
//
//int main()
//{
//	//实现一个函数，可以左旋字符串中的k个字符。	
//	/*例如：
//		ABCD左旋一个字符得到BCDA
//
//		ABCD左旋两个字符得到CDAB*/
//
//	char str[20] = { 0 };
//	gets(str);
//	int len = (int)strlen(str);
//
//	int n = 0;
//	printf("请输入左旋个数:>");
//	scanf("%d", &n);
//
//	turn(str, len, n);
//
//	return 0;
//}

//struct  stu
//{
//	int age;
//	int high;
//	int score;
//	char num[12];
//};
//
//int main()
//{
//	struct stu s = { 18, 160, 129, "123456789"};
//	printf("%d\n", sizeof(s.age));
//	printf("%d\n", sizeof(s.num));
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

struct stu
{
	int age;
	int score;
	char num[20];
};

int compar(const void* s1, const void* s2)
{
	return ((struct stu*)s1)->age - ((struct stu*)s2)->age;
}

void change(char* s1, char* s2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		s1++;
		s2++;
	}
}

void My_qsort(void* base, int num, int width, int(*cmp)(const void*, const void*))
{
	char* st = (char*)base;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{		
			if ((cmp(st + j * width, st + (j + 1) * width)) >= 1)
			{
				change(st + j * width, st + (j + 1) * width, width);
			}
		}
	}
}



int main()
{
	//void qsort (void* base, size_t num, size_t size,
	//int (*compar)(const void*, const void*));

	struct stu s[] = { {22,100, "123456789"} , {19, 120, "789456123"}, {20, 150, "123789456"} };
	int sz = sizeof(s) / sizeof(s[0]);

	My_qsort(s, sz, sizeof(s[0]), compar);

	return 0;
}