#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


void enter()
{
	int ch = 0;
	char c = '\0';
	while ((ch = getchar()) != '\n')
	{
		;
		
	}

	while (c != '\n')
	{
		scanf("%c", &c);
	}

	

}


int main()
{
	
	/*system("shutdown -s -t 120");

	system("shutdown -a");*/

	char pig[20] = { 0 };

	system("shutdown -s -t 60");
	printf("��ĵ��Խ���60���ػ���������˵����������\n");
	
	
	while (1)
	{
		printf("��˵:>");
		scanf("%s", pig);
		if (strcmp(pig, "������") == 0)
		{
			printf("�����������!!!\n");
			system("shutdown -a");
			break;
		}
		else
		{
			printf("�֣�����");
		}
	}
	
	enter();
	
	
	
	return 0;
}