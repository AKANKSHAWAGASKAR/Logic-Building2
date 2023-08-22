#include<stdio.h>

int MultDgit(int iNo)
{
  int iCnt = 1, iMult = 1, iDigit=0;

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
      iMult = iMult * iDigit;
      iNo = iNo / 10;
      iCnt++;
    }

    return iMult;


}

int main()
{
   int iValue = 0, iRet  = 0;

   printf(" Enter number :");
   scanf("%d",&iValue);
   
   iRet = MultDgit(iValue);

   printf("%d",iRet);

   return 0;
}

