#include<stdio.h>

int MultFactor(int iNo)
{
  int iCnt = 0;
  int iMult = 1;
 // int iFact = 1

  for (iCnt = 1; iCnt <=iNo; iCnt++)
  {
    if ((iNo% iCnt)==0)
     iMult = iMult * iCnt;
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

