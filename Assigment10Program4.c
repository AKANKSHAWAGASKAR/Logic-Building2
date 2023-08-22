#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0;
    float fFahrenheit = 0.0;

    fCelsius = (fTemp - 32) * 5/9;
    return fCelsius;
}
int main()
{
   float fValue = 0.0;
   double  dRet = 0.0;

   printf(" Enter the temperature in Fahrenheit :");
   scanf("%f",&fValue);

   dRet = FhtoCs(fValue);
   
   printf(" Temperature in celsius is  %f ",dRet);

   return 0;
}


