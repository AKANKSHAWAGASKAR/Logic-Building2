#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
  int iCnt = 0, iFrequency= 0, iFrequencyOdd =0;

 for(iCnt= 0;iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        
        }
    }
    return iFrequency;
}
  
 /* for(iCnt = 0; iCnt < iLength; iCnt++)
  {
      if(Arr[iCnt] ==iNo )
      {  
          iFrequency++;
      }
      
   return iFrequency;
  }
}*/

int main()
{
   int iSize = 0, iRet  = 0, iCnt = 0, iLength = 0, iValue=0;
   int *p = NULL;

   printf(" Enter number of elements :");
   scanf("%d",&iSize);

   printf(" Enter the number  :");
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
   
   iRet = Frequency(p, iSize, iValue);

   printf("%d",iRet);

   free (p);

   return 0;
}

