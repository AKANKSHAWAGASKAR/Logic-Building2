#include<stdio.h>

int CountOdd(int iNo)
{
  int iCnt = 0, iOddCnt = 0, iDigit=0;

 if(iNo==0)
    {
      return 1;
    }

    if (iNo < 0)
    {
      iNo = -iNo;
    }

    
    while(iNo != 0)
    {
      iDigit = iNo % 10;
      if((iDigit % 2) != 0)
      {
        iOddCnt++;
      }
      iNo = iNo / 10;
    }

    return iOddCnt;

 /* while(iNo != 0)
   {
      iDigit = iNo %10; 
      if((iDigit %2)==0)
      {
         iEvenCnt;
      }

         iNo = iNo /10;
         
   }
       return iEvenCnt;
       */
}

int main()
{
   int iValue = 0, iRet  = 0;

   printf(" Enter number :");
   scanf("%d",&iValue);
   
   iRet = CountOdd(iValue);

   printf("%d",iRet);

   return 0;
}

