//DCLL
#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

DoublyCL :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}

/*
Return_Value Class_name  :: Function_Name(---)
{

}
*/

void DoublyCL :: InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL)&&(Last==NULL))   //LL is empty
    {
        First = newn;
        Last = newn;
    }

    else   //if LL hs 1 or more node
    {
        newn->next=First;
        (First)->prev=newn;
        First=newn;
    }
    (First)->prev = Last;    //for circulr linking common for if nd else
    (Last)->next = First;  //for circulr linking common for if nd else
}

void DoublyCL ::  InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->data=No;
    newn->next=NULL;
    newn->prev=NULL;

    if((First==NULL)&&(Last==NULL))   //LL is empty
    {
        First=newn;
        Last=newn;
    }

    else   //if LL hs 1 or more node
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}
    
void DoublyCL :: Display()
{
    PNODE temp = First;

    if(First==NULL && Last==NULL)
    {
        cout<<"ll is empty"<<"\n";
        return;
    }

    cout<<"elements of LL are:"<<"\n";
    do
    {
        cout<<"|" <<temp->data<<"|<=>";
        temp = temp->next;

    }while(temp!=Last->next);
        cout<<"\n";
}

int  DoublyCL :: Count()
    {
        PNODE temp = First;
        int iCnt=0;

        if(First==NULL && Last==NULL)
        {
            return iCnt;
        }

    do
    {
        iCnt++;
        temp = temp->next;

    }while(temp!=Last->next);

        return iCnt;
    }

void DoublyCL :: DeleteFirst()
{
    if((First==NULL)&&(Last==NULL))  //empty ll
    {
        return;
    }
    else if(First==Last)    //single node
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else    //more than 1 node
    {
        First=(First)->next;
        delete (Last)->next;      // free((*First)->prev);
    
        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL :: DeleteLast()
{
    if((First==NULL)&&(Last==NULL))  //empty ll
    {
        return;
    }
    else if(First==Last)    //single node
    {
        delete First;
        First=NULL;
        Last=NULL;
    }
    else    //more than 1 node
    {
        Last=(Last)->prev;
        delete (First)->prev;    //free((*Last)->next);

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL ::InsertAtPos(int no,int ipos)
{
    int iNodeCnt=Count();
    PNODE temp=NULL;
    PNODE newn=NULL;
    int iCnt=0;

    if((ipos<1)||(ipos>iNodeCnt+1))
    {
        cout<<"invlid position"<<"\n";
        return;
    }
    if(ipos==1)
    {
        InsertFirst(no);
    }
    else if(ipos==iNodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn= new NODE;
        newn->data=no;
        newn->prev=NULL;
        newn->next=NULL;

        temp=First;

        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next->prev=newn;

        temp->next=newn;
        newn->prev=temp;
    }
}

void DoublyCL :: DeleteAtPos(int ipos)
{
    int iNodeCnt=Count();
    PNODE temp=NULL;
    int iCnt=0;

    if((ipos<1)||(ipos>iNodeCnt))
    {
        cout<<"invlid position"<<"\n";
        return;
    }
    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos==iNodeCnt+1)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(iCnt=1;iCnt<ipos-1;iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        delete temp->next->prev;
        temp->next->prev=temp;
    }
}
int main()
{
    int iRet=0;

    DoublyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet=obj.Count();
    cout<<"no of nodes are :"<<iRet<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iRet=obj.Count();
    cout<<"no of nodes are :"<<iRet<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iRet=obj.Count();
    cout<<"no of nodes are :"<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet=obj.Count();
    cout<<"no of nodes are :"<<iRet<<"\n";
    
    return 0;
}