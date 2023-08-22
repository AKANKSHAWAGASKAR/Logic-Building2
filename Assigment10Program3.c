#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iKilometer = 0, iMeter = 0;

    iMeter = 1000 * iNo;

    return iMeter;

}
int main()
{
   int  iValue = 0 , iRet = 0;

   printf(" Enter distance :");
   scanf("%d",&iValue);

   iRet = KMtoMeter(iValue);
   
   printf(" distance in Meter is %d ",iRet);

   return 0;
}


