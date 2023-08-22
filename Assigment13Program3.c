#include<stdio.h>

int CountRange(int iNo)
{
  int iCnt = 0, iRangeCnt = 0, iDigit=0;

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
      if( iDigit>3  && iDigit  < 7)
      {
        iRangeCnt++;
      }
      iNo = iNo / 10;
    }

    return iRangeCnt;

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
   
   iRet = CountRange(iValue);

   printf("%d",iRet);

   return 0;
}

