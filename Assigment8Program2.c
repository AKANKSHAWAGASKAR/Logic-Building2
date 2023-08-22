#include<stdio.h>

void Display(int iNo)
{  
    char Arr [] = "a,........,z";

    if(iNo == Arr)
    {

    

    printf("%s",Arr);
    }
}

int main()
{
   int iValue = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue);

   Display(iValue);

   return 0;
}

