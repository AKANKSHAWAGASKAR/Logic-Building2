#include<stdio.h>

void Number(int iNo)
{  
     if(iNo<50)
     {
         printf("The given number is samll\n");
      }
      if(50<iNo<100)
      {
          printf("The given number is Medium\n");
      }
      else
      {
         printf("The given number is large\n");   
      }
     
}

int main()
{
   int iValue = 0;


   printf(" Enter number :");
   scanf("%d ",&iValue);

   Number(iValue);

   return 0;
}

