// Data Structure  // pointer 32bit var 4 byte data type = int and 64 bit var 8 byte longint

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;   // Pointer to pointer

int main()
{

	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = 11;
	newn->next = NULL;
	
	printf("%d\n",newn->data);
	printf("size of Structure %d\n",sizeof(NODE));
	
	return 0;
}