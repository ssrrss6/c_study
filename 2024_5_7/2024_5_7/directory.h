#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define ADD 2
#define CAPACITY_MAX 3
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
	peoinfo* number;
	int count;
	int capacity;
}directory;


void init(directory* p);

int enlarge(directory* p);

void add(directory* p);

void show(directory* p);

void del(directory* p);

void search(directory* p);

void modi(directory* p);

void sort(directory* p);

void destroybook(directory* p);

void writebook(directory* p);
