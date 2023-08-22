#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
   float fAns = 0.0;

   if (iNo1==0)
   {
      iNo1 = iNo1+1;
   }
   if(iNo2 ==0)
   {
      iNo2 = iNo2+1;
   }
   
   fAns = iNo2 * 100 /iNo1 ;

   return fAns;
}

int main()
{
   int iValue1 = 0;
   int iValue2 =0 ;
   float fRet = 0.0;

   printf("Please Enter total marks\n :");
   scanf("%d ",&iValue1);

   printf("Please Enter optained  marks\n :");
   scanf("%d ",&iValue2);

   fRet= Percentage(iValue1,iValue2);

   printf("Percentage is %f\n:",fRet);

   return 0;
}

