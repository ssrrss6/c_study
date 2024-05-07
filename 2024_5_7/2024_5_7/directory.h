#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define NAME_MAX 20
#define SEX_MAX 6
#define TEL_MAX 13
#define ADDR_MAX 30
#define BOOK_MAX 100

typedef struct peoinfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}peoinfo;

typedef struct directory
{
	peoinfo number[BOOK_MAX];
	int count;
}directory;


void init(directory* p);

void add(directory* p);

void show(directory* p);

void del(directory* p);

void search(directory* p);

void modi(directory* p);

void sort(directory* p);
