
#include<stdio.h>

int Count(int iNo)
{
  int iCnt = 0, iFrequency = 0, iDigit=0;

  while(iNo != 0)
   {
      iDigit = iNo %10; 
      if(iDigit<6)
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
   
   iRet = Count(iValue);

   printf("%d",iRet);

   return 0;
}

