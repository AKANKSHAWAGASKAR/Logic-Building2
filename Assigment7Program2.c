#include<stdio.h>

void Display (int iNo)
{
  int  iCnt = 0;

   for(iCnt=1; iCnt <= iNo ; iCnt++)
   {
     // if(iCnt+1)
     // {
         printf("%d\t",iCnt);
     // }
   }
}

int main()
{
   int iValue1 = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue1);

   Display(iValue1);

   return 0;
}

