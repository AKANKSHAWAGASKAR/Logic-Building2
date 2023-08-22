#include<stdio.h>

void OddDisplay (int iNo)
{  
     int iCnt = 0;
     int iOddFact = 1;
     for(iCnt=1; iCnt<=iNo; iCnt++)
      {
      if((iCnt % 2) ==1)
      {
          iOddFact = iOddFact * iCnt;
          printf("%d\t",iCnt);
      }       
}
}

int main()
{
   int iValue1 = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue1);

   OddDisplay(iValue1);

   return 0;
}

