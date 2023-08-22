#include<stdio.h>

void Display (int iNo)
{
  int  iCnt = 0;

   for(iCnt=(-iNo); iCnt<=iNo; iCnt++)
   {
      
         printf("%d\t",iCnt);
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


