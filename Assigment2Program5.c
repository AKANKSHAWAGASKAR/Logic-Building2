#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL  ChkEven(int iNo)
{
  int iCnt =0;
   //int iDigit = 0, iEvenCnt =0 ;

   for(iCnt =1 ;iCnt <= (iNo/2);iCnt =iCnt+2)
   {
    if((iNo % iCnt )==0)
    {
      return 1;
    }
    else 
    {
      return 0;
    }

   
   }

   

   /*if(iNo==0)
    {
      return 0;
    }

    else 
    {
      return 1;

    }
    while(iNo != 0)
    {
      iDigit = iNo % 10;
      if((iDigit % 2) == 0)
      {
        iEvenCnt++;
      }
      iNo = iNo / 10;
    }*/
    return iCnt;

   
}   
int main()
{
   int iValue = 0;
   BOOL  bRet = FALSE ;
   

   printf("Enter number : \n");
   scanf("%d",&iValue);

   bRet = ChkEven(iValue);
    if(bRet == TRUE)
  {
    printf("%d is a EVEN number \n",iValue);
  }
  else
  {
    printf("%d is not EVEN  number \n",iValue);
  }
   

   return 0;
}

