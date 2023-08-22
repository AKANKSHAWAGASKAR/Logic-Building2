#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength,int iNo)
{
  int iCnt = 0, iPose = -1;
   
for(iCnt= 0;iCnt < iLength ; iCnt++)
   {
      if(Arr[iCnt] == iNo)
      {
         iPose = iCnt;
      }
   }
   return iPose;
        
}

int main()
{
   int iSize = 0, iRet  = 0, iCnt = 0 , iValue =0;
   int *p = NULL;

   printf(" Enter number of elements :");
   scanf("%d",&iSize);

   printf(" Enter the another  number  :");
   scanf("%d",&iValue);

   p= (int *)malloc(iSize * sizeof(int));
   if(p == NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }   

   printf("Enter the elements \n");

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter elements :%d\n",iCnt+1);
      scanf("%d",&p[iCnt]);
   }
   
   iRet = FirstOcc(p, iSize,iValue);

   if(iRet == -1)
   {
      printf("there is no such number ");
   }
   else
   {
      printf(" First occurrence of number is %d", iRet);
   }

   free (p);

   return 0;
}

