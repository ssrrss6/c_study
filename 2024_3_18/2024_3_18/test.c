#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	/*��һ������ax2 + bx + c = 0  a, b, c��ֵ�ɼ������������
		������ >= 0ʱ������������������������x1��x2�����
		�����ʱ������λС��������������˵�����������"����"�޽�"��*/

	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	scanf("%lf %lf %lf", &a, &b, &c);
	double m = (b * b) - (4 * a * c);
	double x1 = 0.0;
	double x2 = 0.0;

	if (m >= 0)
	{
		x1 = (-b + sqrt(m)) / (2 * a);
		x2 = (-b - sqrt(m)) / (2 * a);
		printf("r1 = %.2lf  r2 = %.2lf", x1, x2);
	}
	else
	{
		printf("�޽�\n");
	}

	/*float a, b, c;
	float discriminant, x1, x2;

	printf("�����뷽�̵�ϵ��a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	if (discriminant >= 0) {
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("������������:\n");
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}
	else {
		printf("�����޽�\n");
	}*/

	return 0;
}