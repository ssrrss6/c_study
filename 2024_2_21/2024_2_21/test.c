#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>

// int frog( unsigned int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else 
//	{
//		return frog(n - 1) + frog( n - 2);
//	}
//}
//
//int main()
//{
//	//������̨������
//	unsigned int n = 0;
//	scanf("%u", &n);
//
//	int ret = frog(n);
//	printf("%d\n", ret);
//
//
//
//	return 0;
//}


//��ӡ�ƶ�����
void move(char frist ,char end)
{
	printf("%c -> %c\n", frist, end);
}


//frist -> ����
//mid -> ��ת��
//end -> �յ��
void hanoi(int n, char frist, char mid, char end)
{
	if (1 == n)
	{
		move(frist, end);	
	}
	else
	{
		hanoi(n - 1, frist, end, mid);//�� n - 1 ������ͨ���յ���ƶ�����ת��
		move(frist, end);//������µķ���������ƶ����յ��
		hanoi(n - 1, mid, frist, end);//��ʣ�µ� n - 1 ������ͨ�������ƶ����յ��
		//��ʣ�¸� n - 1 �������ƶ����յ���ֿ�����������ͬ�Ĳ��轫 ��n - 1 �� �����ƶ����յ�ˣ��Դ����ơ�
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	system("cls");
	char frist = 'A';
	char mid = 'B';
	char end = 'C';

	printf("��ŵ���ƶ����̣�\n");
	hanoi(n,frist,mid,end);

	return 0;
}