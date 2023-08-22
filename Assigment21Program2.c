#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j =0, iNo= 0, iEven = 2, iOdd =1;

   for(i = 1; i <=iRow; i++)
   {
      for(j = 1; j<= iCol; j++)
      {
        // for(iNo = 2; iNo <=10;iNo++)
         
            if((i % 2)!=0)
            {
               iNo <=9;
               printf("%d\t",iEven);
               iEven= iEven +2;
            }
            else
            {
               printf("%d\t",iOdd);
               iOdd =iOdd+2;
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