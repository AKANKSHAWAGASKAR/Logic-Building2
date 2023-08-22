//Find Middle element from Linked List
// Time Complexity : n/2

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

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int SearchFirstOcuurance(PNODE First, int No)
{
    int Counter = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Counter;
            break;
        }
        First = First-> next;
        Counter++;
    }

    return iPos;
}

int SearchLastOcuurance(PNODE First, int No)
{
    int Counter = 1;
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Counter;
        }
        First = First-> next;
        Counter++;
    }

    return iPos;
}

int Frequency(PNODE First, int No)
{
    int Counter = 0;

    while(First != NULL)
    {
        if(First->data == No)
        {
             Counter++;
        }
        First = First-> next;
    }
    return Counter;
}

int MiddleElement(PNODE First)
{
    PNODE Student = First;
    PNODE Teacher = First;

    while((Teacher != NULL) &&(Teacher->next != NULL))       // Odd & Even
    {
        Teacher = Teacher ->next->next;
        Student = Student->next;
    }

    return (Student->data);
}

int main()
{
    PNODE Head = NULL;
    PNODE temp1 ,temp2;

    InsertFirst(&Head, 151);// InsertFirst(60,51)
    InsertFirst(&Head, 121);// InsertFirst(60,51)
    InsertFirst(&Head, 111);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 21);// InsertFirst(60,21)
    InsertFirst(&Head, 11);
    
    temp1 = Head;
    temp2 = Head;

    temp1 = temp1->next->next;
    temp2 = temp2->next->next->next->next->next;

    temp2->next = temp1;        // Loop Created

    Display(Head);

    return 0;
}