#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
////fib(int n, int* fl, int* fr)
////{
////	int num = 0;
////
////	//if (n > num)
////	//{
////	//	num = (fib(n, fl, fr) + fib(n, fl, fr));
////	//	*fl = num;
////	//}
////	//else if(num >= n)
////	//{
////	//	*fr = num;
////	//}
////}
//
//fib(int n, int* fl, int* fr)
//{
//	int ff = 1;
//	int f = 1;
//	//ff: 1 f: 1 f: 2 ff: 3 f: 5 ff: 8
//
//	while (*fr == 0)
//	{
//		f += ff;
//		if (f > n)
//		{
//			*fr = f;
//			break;
//		}
//
//		ff += f;
//		if (ff > n)
//		{
//			*fr = ff;
//			break;
//		}
//	}
//	if (f > ff)
//	{
//		*fl = ff;
//	}
//	else
//	{
//		*fl = f;
//	}
//		
//}
//
//IsFib(int n)
//{	
//	int fleft = 0;
//	int fright = 0;
//
//	fib(n, &fleft, &fright);
//
//	int n1 = 0;
//	int n2 = 0;
//	
//	/*for (int i = 0;; i++)
//	{
//		if (n - i == fleft)
//		{
//			n1++;
//		}
//		if (n + i == fright)
//		{
//			n2++;
//		}
//	}*/
//
//	/*while (1)
//	{
//		if (n - (++n1) == fleft)
//			break;
//		if (n + (++n2) == fright)
//			break;	
//	}
//
//	return (n1 == n2 ? n2 : n1);*/
//
//	return (fright - n > n - fleft ? n - fleft : fright - n);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = IsFib(n);
//	printf("%d", ret);
//
//	return 0;
//}
//
//#include<string.h>
//ChangeSpace(char* ch)
//{
//	char obj[] = "%20";
//
//	char str[50] = { 0 };
//	strcpy(str, ch);
//
//	char des[50] = { 0 };
//
//	strcat(des, strtok(str, " "));
//
//	char* ptr = NULL;
//	while ((ptr = strtok(NULL, " ")) != NULL)
//	{
//		strcat(des, obj);
//		strcat(des, ptr);
//	}
//
//	strcpy(ch, des);
//}
//
//int main()
//{
//	//将字符串中的每个空格都替换成%20
//
//	char ch[50] = { 0 };
//	char* ptr = NULL;
//
//	gets(ch);
//
//	ChangeSpace(ch);
//
//	printf("%s", ch);
//
//	//ptr = strtok(ch, " ");
//	//printf("%s\n", ptr);
//	//ptr = strtok(NULL, " ");
//	//printf("%s\n", ptr);
//
//	//ptr = strtok(NULL, " ");
//	//printf("%s\n", ptr);
//
//	//ptr = strtok(NULL, " ");
//	//printf("%s\n", ptr);
//
//
//
//	//printf("%s", ch);
//
//
//	return 0;
//}
//
//#include<string.h>
//
//ChangeSpace(char* str, int len)
//{
//	char* begin = str;
//
//	int space_count = 0;
//	while (*begin != '\0')
//	{
//		if (*begin == ' ')
//		{
//			space_count++;
//		}
//		begin++;
//	}
//
//	int end1 = len - 1;
//	int end2 = len + 2 * space_count - 1;
//
//	while (str + end1 != str)
//	{
//		if (str[end1] != ' ')
//		{
//			str[end2--] = str[end1--];
//		}
//		else
//		{
//			end1--;
//			str[end2--] = '0';
//			str[end2--] = '2';
//			str[end2--] = '%';
//		}
//	}
//}
//int main()
//{
//	char str[50] = { 0 };
//
//	gets(str);
//
//	ChangeSpace(str, (int)strlen(str));
//
//	printf("%s\n", str);
//
//	return 0;
//}

//
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int* ptr = (int*)malloc(n * 4);
//
//	for (int i = 0; i < n; i++)
//	{
//		*(ptr + i) = i;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* prr = arr;
//
//	for (int i = 1; i < 8; i++)
//	{
//		*prr++ = i;
//		//*prr = i
//		//prr++
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

#include<stddef.h>
struct s
{
	int x;
	char arrc[7];
	int arri[4];
	char y;
};
int main()
{

	printf("%d\n", (int)offsetof(struct s, x));
	printf("%d\n", (int)offsetof(struct s, arrc));
	printf("%d\n", (int)offsetof(struct s, arri));
	printf("%d\n", (int)offsetof(struct s, y));
	printf("%d\n", (int)sizeof(struct s));

}