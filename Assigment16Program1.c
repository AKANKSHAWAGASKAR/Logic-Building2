#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr [], int iSize, int iNo)
{
   int iCnt = 0, iLength = 0;
   for (iCnt = 0; iCnt < iLength ; iCnt++)
   {
      if(Arr [iCnt] == iNo)
      {
         return TRUE;
      }
      else
      return FALSE;
   }
}
int main()
{
   int iSize = 0, iCnt = 0, iLength = 0 , iValue = 0;
   BOOL bRet = 0;

   int *p = NULL;

   printf("Enter number of elemnets :");
   scanf("%d", &iSize);

   printf("Enter the number :");
   scanf("%d",&iValue);

   p = (int *)malloc(iSize *sizeof(int));

   if(p == NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }
   printf("Enter the %d elements :\n", iLength);

   for (iCnt = 0; iCnt< iSize; iCnt++)
   {
      printf("Enter the %d elements :",iCnt+1);
      scanf("%d" , &p[iCnt]); 
   }
   bRet = Check(p, iSize, iValue);

   if(bRet == TRUE)
   {
      printf("Number is present");
   }
   else
   {
      printf("Number is not present");
   }
   free(p);

   return 0 ;
}