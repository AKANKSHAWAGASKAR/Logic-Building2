#include<stdio.h>

int DollarToINR(int iNo)
{
  
  int iINR = 1;

  //if( iNo ==iCnt)
  
   iINR = iNo *70;
  
  return iINR;
}
   
int main()
{
   int iValue = 0, iRet = 0;

   printf(" Enter number of USD:");
   scanf("%d ",&iValue);

   iRet = DollarToINR(iValue);
   
   printf("Value in INR is %d ",iRet);

   return 0;
}

