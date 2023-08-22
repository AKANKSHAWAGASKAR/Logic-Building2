#include<stdio.h>

int OddFactorial(int iNo)
{

  int iCnt = 0;
 int iOddFact = 1;

  for(iCnt = 1 ; iCnt <=iNo; iCnt = iCnt+2)
  {
       if (iCnt %2 == 1)
    {

    
       iOddFact = iOddFact * iCnt;
       printf("%d\t",iCnt);
    }
    
  }
  return iOddFact;
}

int main()
{
   int iValue = 0, iRet = 0;

   printf(" Enter number :");
   scanf("%d ",&iValue);

   iRet = OddFactorial(iValue);
   
   printf("Odd Factorial of a number  is %d ",iRet);

   return 0;
}

