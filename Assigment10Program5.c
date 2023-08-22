#include<stdio.h>

double SquareMeter(int iValue)
{
    float fSquaremeter = 0.0;

    fSquaremeterxsaz` = 0.0929* iValue;
   // Square feet = 0.0929 *Squaremeter;

   return fSquaremeter;
}
int main()
{
   int iValue = 0;
   double  dRet = 0.0;

   printf(" Enter Area in square feet :");
   scanf("%d",&iValue);

   dRet = SquareMeter(iValue);
   
   printf(" Area in square meter is  %f ",dRet);

   return 0;
}

