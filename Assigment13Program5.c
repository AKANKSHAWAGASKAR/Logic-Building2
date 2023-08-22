#include<stdio.h>

int CountDiff(int iNo)
{
  int iCnt = 1, iSumEven = 0, iOddEven = 0,  iDigit=0;

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
      if((iDigit %2 ) ==0 ) 
      {
      iSumEven = iSumEven + iDigit;
      }
      else
      {
        iOddEven = iOddEven + iDigit;
      }
      iNo = iNo / 10;
      iCnt++;
    }

    return iSumEven - iOddEven;


}

int main()
{
   int iValue = 0, iRet  = 0;

   printf(" Enter number :");
   scanf("%d",&iValue);
   
   iRet = CountDiff(iValue);

   printf("%d",iRet);

   return 0;
}

