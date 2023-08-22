#include<stdio.h>

int CountTwo(int iNo)
{
  int iCnt = 0, iFrequency = 0, iDigit=0;

  while(iNo != 0)
   {
      iDigit = iNo %10; 
      if(iDigit == 2)
      {
         iFrequency++;
      }

         iNo = iNo /10;
         
   }
       return iFrequency;
}

int main()
{
   int iValue = 0, iRet  = 0;

   printf(" Enter number :");
   scanf("%d",&iValue);
   
   iRet = CountTwo(iValue);

   printf("%d",iRet);

   return 0;
}

