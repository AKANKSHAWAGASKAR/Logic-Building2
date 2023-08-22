#include<stdio.h>

int FactDiff(int iNo)
{
  int iCnt = 0, iNonFactSum = 0 , iSum = 0;

    for(iCnt =1; iCnt<iNo; iCnt++ )
    {
      if(( iNo % iCnt ) !=0)
      {
        iNonFactSum = iNonFactSum + iCnt;

      
      }
      if(( iNo % iCnt ) ==0)
      {
        iSum = iSum + iCnt;
      }
    }
  return  iSum - iNonFactSum ;
}

int main()
{
  int iValue = 0;

  int iRet = 0;

  printf("Enter the Number \n");
  scanf("%d",&iValue);
   
  iRet = FactDiff(iValue);

  printf("%d",iRet);

  return 0 ;

}