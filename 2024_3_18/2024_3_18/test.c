#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	/*有一个方程ax2 + bx + c = 0  a, b, c的值由键盘任意的输入
		，当△ >= 0时方程有两个根求它的两个根x1和x2并输出
		，输出时保留两位小数，并且有文字说明，否则输出"方程"无解"。*/

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
		printf("无解\n");
	}

	/*float a, b, c;
	float discriminant, x1, x2;

	printf("请输入方程的系数a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);

	discriminant = b * b - 4 * a * c;

	if (discriminant >= 0) {
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("方程有两个根:\n");
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}
	else {
		printf("方程无解\n");
	}*/

	return 0;
}