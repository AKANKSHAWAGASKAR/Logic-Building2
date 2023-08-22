#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
  int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
      if((Arr[iCnt] %2)==0)
      {
          iEvenCnt = iEvenCnt + Arr[iCnt];
      }
      else
      {
        iOddCnt = iOddCnt + Arr[iCnt];
      }
  }
   printf("Addition of even elements are : %d\n",iEvenCnt);
    printf("Addition of odd elements are : %d\n",iOddCnt);

    return iEvenCnt - iOddCnt;
}

int main()
{
   int iSize = 0, iRet  = 0, iCnt = 0, iLength = 0;
   int *p = NULL;

   printf(" Enter number of elements :");
   scanf("%d",&iSize);

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

   iRet = Difference(p, iSize);

   printf("Result is %d\n",iRet);

   free (p);

   return 0;
}

