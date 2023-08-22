#include<stdio.h>

void TableRev(int iNo)
{  
     int iCnt = 0;
     int iRev = 0;

     for(iCnt=1; iCnt<=10; iCnt++)
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

   TableRev(iValue);

   return 0;
}

