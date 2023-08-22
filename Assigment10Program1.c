#include<stdio.h>

double CircleArea(float fRadius)
{
    float fArea = 0.0;
    float PI = 3.14;
     
    fArea = PI *fRadius * fRadius;   

    return fArea;
    
}
int main()
{
   float fValue = 0.0;
   double  dRet = 0.0;

   printf(" Enter Radius :");
   scanf("%f",&fValue);

   dRet = CircleArea(fValue);
   
   printf(" Area of Circle is %f ",dRet);

   return 0;
}

