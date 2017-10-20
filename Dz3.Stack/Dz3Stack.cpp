// Dz3Stack.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
struct STR // структура данных в стеке
{
	char FIO[100];
	int tel;
	struct STR *pSTR;
};
struct STR* STACKPOINTER = NULL;// указатель на вершину стека
struct STR data; // текущая информация
void push()// добавление в стек нового элемента
{
	data.pSTR = STACKPOINTER;
	STACKPOINTER = (struct STR*)malloc(sizeof(struct STR)); // указатель на выделенную память
	printf("Enter the data for the stack:\n");
	scanf("%s\n%d",&data.FIO,&data.tel);
	*STACKPOINTER = data;// запись в выделеную память данных
}
void pop() // удаление из стека
{
	STACKPOINTER  = data.pSTR;
}
void peek()// чтение головного элемента
{
	if (STACKPOINTER != NULL)
	{
		data = *STACKPOINTER;
		printf("FIO: %s | Tel: %d",data.FIO,data.tel);
	}
	else
	{
		printf("STACK IS EMPTY!");
	}
}
int main()
{


	push();
	pop();
	peek();
	getchar();
	getchar();
    return 0;
}

