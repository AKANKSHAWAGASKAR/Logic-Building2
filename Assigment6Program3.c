#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual (int  cNo1,int cNo2)
{ 

   if(cNo1==cNo2)
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }

}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   BOOL bRet = FALSE;

   printf("Please Enter two  numbers\n :");
   scanf("%d %d",&iValue1, &iValue2);

   bRet=ChkEqual(iValue1,iValue2);

   if(bRet==TRUE)
   {
      printf("Equal");
   }
   else
   {
      printf("Not Equal");
   }
  
  

   return 0;
}

