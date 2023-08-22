
#include <stdio.h>

int CountSmall(char *str)
{
   int iCnt = 0, iCnt1 =0;

   //filter
   while(*str != '\0')
   {
      if((*str >= 'a')&&(*str <= 'z'))
      {
         iCnt++;
      }
      else
      {
         iCnt1++;
      }
    str++;
   }
   return iCnt - iCnt1;
}


int main()
{
   char arr[20];
   int iRet =0;

   printf("Enter string\n");
   scanf("%[^'\n']s",arr);

   iRet = CountSmall(arr);

   printf("%d",iRet);

   return 0;
}