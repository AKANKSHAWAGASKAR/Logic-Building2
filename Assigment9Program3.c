#include<stdio.h>

int EvenFactorial(int iNo)
{

  int iCnt = 0;
 int iEvenFact = 1;

  for(iCnt = 2 ; iCnt <=iNo; iCnt = iCnt+2)
  {
       if (iCnt %2 == 0)
    {

    
       iEvenFact = iEvenFact * iCnt;
       printf("%d\t",iCnt);
    }
    
  }
  return iEvenFact;
}

int main()
{
   int iValue = 0, iRet = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue);

   iRet = EvenFactorial(iValue);
   
   printf("Even Factorial of a number  is %d ",iRet);

   return 0;
}

