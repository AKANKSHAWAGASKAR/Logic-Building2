// pending
#include <stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;
   while( *str != '\0')
  {
      if( *str >='0')
      {
          printf("%d\n",str);
         //iCnt++;
      }
      str++;
  }
}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter string\n");
   scanf("%[^'\n']s",arr);

   DisplayDigit(arr);

  
   return 0;
}