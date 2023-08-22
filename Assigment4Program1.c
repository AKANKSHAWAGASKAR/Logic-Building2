#include<stdio.h>
#define MAX 1000000

int MultFactor(int iNo)
{
  int iCnt = 0;
  int iMult = 0;

  for (iCnt = 1; iCnt*iCnt <=(iNo/2); iCnt++)
  {
    if ((iNo% iCnt)==0)
    {
      if(iNo/iCnt == iCnt)
      {
           iMult = (iMult * iCnt)% MAX;
      }
      else
      {
         iMult = (iMult * iCnt)% MAX;
          iMult = (iMult *iNo / iCnt)% MAX;
      }
    }
   
  }
  return iMult;
}
int main()
{
   int iValue = 0;
   int iRet = 0;
   

   printf("Enter number : \n");
   scanf("%d",&iValue);

   iRet =MultFactor(iValue);
  
  printf(" %d",iRet);

   return 0;
}

