#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j =0;

   for(i = iRow; i >=1; i--)
   {
      for(j = 1; j<= iCol; j++ )
      {
         if((i%2)!=0)
         {
            printf("%d\t",i);
         }
          
         
         else
         {
            printf("%d\t",i);
         }

      }
      printf("\n");
   }
   
}
int main()
{
   int iValue1 = 0, iValue2 =0;

   printf("Enter number of Rows\n");
   scanf("%d",&iValue1);

   printf("Enter number of columns\n");
   scanf("%d",&iValue2);

   Pattern(iValue1, iValue2);

   return 0;
}