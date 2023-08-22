#include<stdio.h>

int FactorialDiff(int iNo)
{
   int iCnt = 0 ,  iOddFact = 1 , iEvenFact = 1;

  for(iCnt = 1 ; iCnt <=iNo; iCnt++)
  {
       if (iCnt %2 == 0)
    {
       iEvenFact = iEvenFact * iCnt;
      // printf("%d\t",iEvenFact);
    }
    else
      // (iCnt %2 == 1)
    {
       iOddFact = iOddFact * iCnt;
       //printf("%d\t",iOddFact);
    }
     
      
    
  }
  return  iEvenFact - iOddFact;
}

int main()
{
   int iValue = 0, iRet = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue);

   iRet = FactorialDiff(iValue);
   
   printf("Factorial  difference  is %d ",iRet);

   return 0;
}

