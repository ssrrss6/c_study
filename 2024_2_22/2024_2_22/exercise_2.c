#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
////���1~100���ж��ٸ�����9��
//	int count = 0;
//
//	for (int  i = 0; i <=100; i++)
//	{
//		if (9 == i % 10)
//		{
//			count++;
//		}
//		if (9 == i/10)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//
//	return 0;
//}


//����1/1 - 1/2 + 1/3 - 1/4 + 1/5 ...+ 1/99 - 1/100
//
//
//int main()
//{
//	/*
//	float a = 1;
//
//	for (int i = 2; i < 101; i++)
//	{
//		if ( 1==i%2 )
//		{
//			a += (float) 1 / i;
//		}
//		else 
//		{
//			a -= (float)1 / i;
//		}
//	}
//	printf("%f", a);
//	*/
//
//	
//	////idea2
//	//
//	//float a = 0;
//	//int flag = 1;
//	//
//	//for (int i = 1; i < 101; i++)
//	//{
//	//	a += flag*1.0/i;
//	//	flag = -flag;
//	//}
//	//printf("%f", a);
//	
//	return 0;
//}


//��ӡ�˷��ھ���
void print(int len)
{
	for (int x = 1; x <= len; x++)
	{
		for (int y = 1; y <= x; y++)
		{
			printf("%d*%d=%2d ", y, x, x * y);//%2dָ���ٴ�ӡ�����ַ����Ҷ��룩������ǰ�Ӹ���Ϊ�����
		}
		printf("\n");
	}
}

int main()
{
	int len = 0;
	scanf("%d", &len);

	print(len);

	return 0;
}