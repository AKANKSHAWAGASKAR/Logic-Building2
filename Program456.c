#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *lchild;
	struct node *rchild
};

typedef struct node NODE;
typedef struct *PNODE;
typedef struct **PPNODE;

void Insert(PPNODE Root, int No)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;
	newn->lchild = NULL;
	newn->rchild = NULL;

	PNODE temp = *Root;

	if(*Root == NULL)
	{
		*Root = newn;
	}
	else
	{
		while(1)
		{
			if(No > temp->data)
			{
				temp = temp->rchild;
			}
			else if(No < temp->data)
			{
				temp = temp->lchild;
			}
			else if(No == temp->data)
			{
				free(newn);
				printf("Duplicate elements not allowed.\n");
				break;
			}
		}
	}
}

int main()
{
	PNODE Head = NULL;

	Insert(&Head,11);

	return 0;
}