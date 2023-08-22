#include<stdio.h>

void PrintEven(int iNo)
{

   if(iNo<=0)
    {
      return ;
    }
  if ((iNo%2)==0)
  {
    printf("The number is even");

  }
  else
  {
    printf("the number is not even");
  }


    
}   
int main()
{
   int iValue = 0;
   
   

   printf("Enter number : \n");
   scanf("%d",&iValue);

   PrintEven(iValue);

   return 0;
}

