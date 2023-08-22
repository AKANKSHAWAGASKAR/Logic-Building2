// Singly LL

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


void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  
    {
        *First = newn;
    }
    else                
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void DisplayR(PNODE First)
{
    if(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
        DisplayR(First);
    }
}

int CountR(PNODE First)
{
    static int iCnt = 0;

    if(First != NULL)
    {
        iCnt++;
        First = First -> next;
        CountR(First);
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 11);     // InsertFirst(60,51)
    InsertFirst(&Head, 21);     // InsertFirst(60,21)
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 101);    // InsertFirst(60,11)
    DisplayR(Head);

    iRet = CountR(Head);
    printf("\nNumber of nodes are : %d\n",iRet);

    
    return 0;
}
