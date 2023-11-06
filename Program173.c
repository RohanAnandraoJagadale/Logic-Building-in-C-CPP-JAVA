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
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  //1 allocate memory
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)   // If linked list is empty
	{
		*First = newn;
	}
	else                 // if linked list contains atleast one node
	{
		newn->next = *First;
		*First = newn;
	}
}

void InsertLast(PPNODE First, int no)   //time complesity N
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));  //1 allocate memory
	PNODE temp = *First;
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)   // If linked list is empty
	{
		*First = newn;
	}
	else                 // if linked list contains atleast one node
	{
		while(temp->next != NULL)
		{
			temp =temp -> next;
		}
		temp -> next = newn;
	}
}

void Display(PNODE First)      // time C N
{
	printf("Elements from the Linked List are : \n");
	
	while(First != NULL)
	{
		printf("| %d |-> ",First->data);
		First = First -> next;
	}
	printf("NULL \n");
}

int Count(PNODE First)
{
	int iCnt = 0;
	
	while(First != NULL)
	{
		iCnt++;
		First = First -> next;
	}
	return iCnt;
}

int main()
{
	// struct node * Head = NULL;
	PNODE Head = NULL;
	int iRet = 0;
	
	InsertFirst(&Head, 51);
	InsertFirst(&Head, 21);
	InsertFirst(&Head, 11);
	
	Display(Head);
	
	iRet = Count(Head);
	
	printf("Number of nodes are : %d\n",iRet);
	
	InsertLast(&Head,101);
	InsertLast(&Head,111);
	
	Display(Head);
	
	iRet = Count(Head);
	printf("Number of nodes are : %d\n",iRet);
	
	return 0;
}

/*
	// Call By Address
	Insert First()
	InsertLast()
	InsertAtPositin()
	
	DeleteFirst()
	DeleteLast()
	deleteAtPosition()
	
	// Call by value
	Display()
	Count()

*/