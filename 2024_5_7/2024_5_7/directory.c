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

	printf("添加联系人\n");
	printf("姓名:>");
	scanf("%s", p->number[p->count].name);
	printf("年龄:>");
	scanf("%d", &p->number[p->count].age);
	printf("性别:>");
	scanf("%s", p->number[p->count].sex);
	printf("电话:>");
	scanf("%s", p->number[p->count].tel);
	printf("住址:>");
	scanf("%s", p->number[p->count].addr);
	p->count++;
}

void show(directory* p)
{
	assert(p);

	printf("%-20s\t%5s\t%-5s\t%-11s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
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
	printf("请输入要删除的人的姓名:>");
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
		printf("删除成功\n");
	}
	else
	{
		printf("您要删除的联系人不存在\n");
	}
}

void search(directory* p)
{
	assert(p);

	char name[NAME_MAX] = { 0 };
	printf("请输入要查找的联系人的姓名:>");
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
		printf("您要查找的联系人不存在\n");
	}
	
}

void modi(directory* p)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改的联系人的姓名\n");
	scanf("%s", name);

	int ret = findname(p, name);
	if (ret != -1)
	{
		printf("添加联系人\n");
		printf("姓名:>");
		scanf("%s", p->number[ret].name);
		printf("年龄:>");
		scanf("%d", &p->number[ret].age);
		printf("性别:>");
		scanf("%s", p->number[ret].sex);
		printf("电话:>");		
		scanf("%s", p->number[ret].tel);
		printf("住址:>");
		scanf("%s", p->number[ret].addr);
	}
	else
	{
		printf("您要修改的联系人不存在\n");
	}

}

int sort_by_name(const void* s1, const void* s2)
{
	return strcmp(((peoinfo*)s1)->name, ((peoinfo*)s2)->name);
}

void sort(directory* p)
{
	qsort(p, p->count, sizeof(peoinfo), sort_by_name);
	printf("排序成功\n");
}

