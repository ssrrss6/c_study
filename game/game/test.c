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
	printf("你的电脑将在60秒后关机，除非你说：“我是猪”\n");
	
	
	while (1)
	{
		printf("快说:>");
		scanf("%s", pig);
		if (strcmp(pig, "我是猪") == 0)
		{
			printf("你是猪哈哈哈!!!\n");
			system("shutdown -a");
			break;
		}
		else
		{
			printf("乐，还不");
		}
	}
	
	enter();
	
	
	
	return 0;
}