#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void mue()
{
	printf("*******************\n");
	printf("****play-----1*****\n");
	printf("****exit-----0*****\n");
	printf("*******************\n");
}

void enter()
{
	char c = '\0';
	int ch = 0;
	//��ջ�����
	while ((ch = getchar() != '\n'))
	{
		;
	}
	//ʵ�ְ��س�����
	while (c != '\n')
	{
		scanf("%c", &c);
	}
}

void game()
{
	int num = rand() % 100;
	int guess = 0;
	

	while (num!=guess)
	{
		printf("����������:>");
		scanf("%d", &guess);
		if (num > guess)
		{
			printf("��С��\n");
		}
		else if (num < guess)
		{
			printf("�´���\n");
		}
		else
		{
			system("cls");
			printf("��ϲ�㣬�¶��ˣ�����\n");
			printf("���س�����");
			enter();
			/*Sleep(2500);*/
			system("cls");
		
		}
	}
	

}

int main()
{
	srand((unsigned int)time(NULL));//�����������

	//ʵ�ֶ��ֲ���
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int k = 7;

	////printf("%d", sz);
	//int left = 0;
	//int right = sz - 1;

	//while (left<=right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("�ҵ��ˣ��±�Ϊ��%d", mid);
	//		break;
	//	}
	//}
	//if (left>right)
	//{
	//	printf("û�ҵ�");
	//}

	//��������Ϸʵ��
	int num = 0;

	printf("������\n");

	
	

	do
	{
		mue();//�˵���
		printf("��ѡ��:>");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			system("cls");
			printf("��ʼ��Ϸ\n");
			game();//��������Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;

		default:
			printf("�����������������\n");
			break;
		}
	} while (num);
	
	
	
	

	return 0;
}