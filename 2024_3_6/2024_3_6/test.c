#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void print(int a)
//{
//	int b =	a % 10;
//	if (a >=10)
//	{
//		print(a / 10);
//	}
//	printf("%d ", b);
//}
//
//int main()
//{
//	int a = 0;
//	printf("����һ������");
//	scanf("%d", &a);
//	print(a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	float x = 1.65;
//	float y = 1.85;
//	float z = -3.45;
//	long u = 65535;
//	long n = 123456789;
//	char cl = 'F';
//	
//	printf("a=%d ", a);
//	printf("b=%d ", b);
//	printf("c=%d \n", c);
//	printf("x=%.1f ", x);
//	printf("y=%.5f ", y);
//	printf("z=%.4f \n", z);
//	printf("x*y*z=%.2e\n", x * y * z);
//	printf("u=%d ", u);
//	printf("n=%d \n", n);
//	printf("cl='%c'or%d", cl, cl);
//
//
//	return 0;
//}

////����һ������ÿλ֮��
//int DigitSum(int a)
//{
//	if (a >= 10)
//	{
//		return a % 10 + DigitSum(a / 10);
//	}
//	else
//	{
//		return a;
//	}
//
//}
//
//int main()
//{
//	int a = 0;
//	printf("����һ���Ǹ�������");
//	scanf("%d", &a);
//	printf("����Ϊ��%d\n", a);
//	int ret = DigitSum(a);
//	printf("ÿλ֮���ǣ�%d\n", ret);
//
//	return 0;
//}

////��n��k�η�
//double nk(int n, int k)
//{
//	if (k > 0)
//		return n * nk(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0 / nk(n, -k);
//
//}
//
//int main()
//{
//	double n = 0;
//	double k = 0;
//	printf("n=");
//	scanf("%lf", &n);
//	printf("k=");
//	scanf("%lf", &k);
//
//	double num = nk(n, k);
//	printf("n��k�η�Ϊ��%lf", num);
//
//	return 0;
//}

//main()
//{
//	int a = 1500;
//	int b = 350;
//	printf("a=%d \n", a);
//	printf("b=%d \n", b);
//	
//	printf("���ǵ������ǣ�%d\n", a/b);
//	printf("���ǵ������ǣ�%d\n", a%b);
//
//}

//main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("����ǰ a=%d b=%d c=%d\n", a, b, c);
//	tmp = a;
//	a = c;
//	c = b;
//	b = tmp;
//	printf("������ a=%d b=%d c=%d\n", a, b, c);
//	
//}

