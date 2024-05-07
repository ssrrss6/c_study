#define _CRT_SECURE_NO_WARNINGS
#include "directory.h"

void init(directory* p)
{
	memset(p->number, 0, sizeof(p->number));
	p->count = 0;
}

void add(directory* p)
{
	assert(p);

	printf("�����ϵ��\n");
	printf("����:>");
	scanf("%s", p->number[p->count].name);
	printf("����:>");
	scanf("%d", &p->number[p->count].age);
	printf("�Ա�:>");
	scanf("%s", p->number[p->count].sex);
	printf("�绰:>");
	scanf("%s", p->number[p->count].tel);
	printf("סַ:>");
	scanf("%s", p->number[p->count].addr);
	p->count++;
}

void show(directory* p)
{
	assert(p);

	printf("%-20s\t%5s\t%-5s\t%-11s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (int i = 0; i < p->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-11s\t%-30s\n", p->number[i].name,
													p->number[i].age,
													p->number[i].sex, 
													p->number[i].tel, 
													p->number[i].addr);
	}
}

int findname(directory* p, char delna[])
{
	assert(p&&delna);

	for (int i = 0; i < p->count; i++)
	{
		if (strcmp(p->number[i].name, delna) == 0)
			return i;
	}
	return -1;
}

void del(directory* p)
{
	assert(p);

	char delna[NAME_MAX] = { 0 };
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", &delna);

	int ret = findname(p, delna);
	
	if (ret != -1)
	{
		for (int i = ret; i < p->count - 1; i++)
		{
			strncpy(p->number[i].name, p->number[i + 1].name, NAME_MAX);
			p->number[i].age = p->number[i + 1].age;
			strncpy(p->number[i].sex, p->number[i + 1].sex, SEX_MAX);
			strncpy(p->number[i].tel, p->number[i + 1].tel, TEL_MAX);
			strncpy(p->number[i].addr, p->number[i + 1].addr, ADDR_MAX);
		}
		p->count--;
		printf("ɾ���ɹ�\n");
	}
	else
	{
		printf("��Ҫɾ������ϵ�˲�����\n");
	}
}

void search(directory* p)
{
	assert(p);

	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ���ϵ�˵�����:>");
	scanf("%s", name);

	int ret = findname(p, name);

	if (ret != -1)
	{
		printf("%-20s\t%-5d\t%-5s\t%-11s\t%-30s\n", p->number[ret].name,
													p->number[ret].age,
													p->number[ret].sex,
													p->number[ret].tel,
													p->number[ret].addr);
	}
	else
	{
		printf("��Ҫ���ҵ���ϵ�˲�����\n");
	}
	
}

void modi(directory* p)
{
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ�˵�����\n");
	scanf("%s", name);

	int ret = findname(p, name);
	if (ret != -1)
	{
		printf("�����ϵ��\n");
		printf("����:>");
		scanf("%s", p->number[ret].name);
		printf("����:>");
		scanf("%d", &p->number[ret].age);
		printf("�Ա�:>");
		scanf("%s", p->number[ret].sex);
		printf("�绰:>");		
		scanf("%s", p->number[ret].tel);
		printf("סַ:>");
		scanf("%s", p->number[ret].addr);
	}
	else
	{
		printf("��Ҫ�޸ĵ���ϵ�˲�����\n");
	}

}

int sort_by_name(const void* s1, const void* s2)
{
	return strcmp(((peoinfo*)s1)->name, ((peoinfo*)s2)->name);
}

void sort(directory* p)
{
	qsort(p, p->count, sizeof(peoinfo), sort_by_name);
	printf("����ɹ�\n");
}

