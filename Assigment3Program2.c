#include<stdio.h>

void DisplayFactor(int iNo)
{
  int i =0 ;
  /*if(iNo <= 0)
  {
    iNo = -iNo;
  }*/
  for(i = 2; i<=(iNo/2); i+=2)
  {
    if((iNo % i)==0)
    {
      printf("%d",i);
    }

  }
}
int main()
{
   int iValue = 0;
   
   

   printf("Enter number : \n");
   scanf("%d",&iValue);

   DisplayFactor(iValue);

   return 0;
}

