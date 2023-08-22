#include<stdio.h>

void MultipleDisplay(int iNo)
{  
     int iCnt = 0;
     int iRev = 0;

     for(iCnt=1; iCnt<=5; iCnt++)
      {
           iRev = iNo*iCnt;
           printf("%d\n",iRev);
      }
}

int main()
{
   int iValue = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue);

   MultipleDisplay(iValue);

   return 0;
}

