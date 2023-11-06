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

void InsertFirst(PPNODE First, int No)
{
	
}

void Display(PNODE First)
{
	
}

int main()
{
	PNODE Head = NULL;
	
	InsertFirst(&Head, 51);
	InsertFirst(&Head, 21);
	InsertFirst(&Head, 11);
	
	return 0;
}

/*
	void InsertFirst(PPNODE First, int No)           //Call by Address
	void InsertLast(PPNODE First, int No)            //Call by Address
	void InsertAtPos(PPNODE First, int No, int pos)  //Call by Address
	
	void DeleteFirst(PPNODE First)                   //Call by Address
	void DeleteLast(PPNODE First)                    //Call by Address
	void DeleteAtPos(PPNODE First, int Pos)          //Call by Address
	
	void Display(PNODE First)                         //Call by Value
	int Count(PNODE First)           				  //Call by Value
	
*/	
/////////////////////////////////////////////////////////////////////
/*
	InsertFirst(&Head,11)
	InsertLast(&Head,11)
	InsertAtPos(&Head,11,5)
	
	DeleteFirst(&Head)
	DeleteLast(&Head)
	DeleteAtPos(&Head,5)
	
	Display(Head)
	Count(Head)

*/



