#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
   int iDigit = 0;
   if(iNo==0)
   {
      return TRUE;
   }
   else
   {

   while(iNo>0)
   {
      if(iNo %10 == 0)
      {
         return TRUE;
      }
       iNo = iNo /10;
     }
     return FALSE;
   }
}

int main()
{
   int iValue = 0;
   BOOL bRet = FALSE;

   printf(" Enter number :");
   scanf("%d",&iValue);

   if(bRet == TRUE)
   {
      printf("It Contains Zero");
   }
   else 
   {
      printf("There is no Zero");
   }

   return 0;
}

