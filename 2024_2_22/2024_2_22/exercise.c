#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����
//void print(int sz ,int* arr)
//{
//	int i = 0;
//	while (i < sz)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 2 ,3 ,1 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	print(sz ,arr);
//	for (int i = 0;  i <sz ; i++)
//	{
//		int a = 0;
//		if (arr[i + 1] > arr[i])
//		{
//			a = arr[i + 1];
//			arr[i + 1] = arr[i];
//			arr[i] = a;
//		}	
//	}
//	print(sz ,arr);
//
//
//
//	return 0;
//}


////��ӡ0~100��3�ı���
//int main()
//{
//	int i = 0;
//	for (int i = 1;i <=100 ;i++ )
//	{
//		if (0 == i % 3)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}


//�������������������������Լ��
int main()
{

	//int a = 0;
	//int b = 0;
	//int tmp = 0;
	//scanf("%d %d", &a, &b);

	//for (int i = 1; i <= (a <= b ? a :b); i++)
	//{
	//	if (0 == a % i && 0 == b % i && i>tmp)
	//	{
	//		 tmp = i;
	//	}
	//}
	//printf("%d", tmp);

	//��շת������Ż�

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);

	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d", b);
	
	return 0;
}
