
#include <stdio.h>

void strlwrX(char *str)
{
  while( *str != '\0')
  {
   if((*str >= 'A') && (*str<= 'Z'))
   {
      *str = *str + 32;
   }
   str++;
  }
}

int main()
{
   char arr[20];
   int iRet =0;

   printf("Enter string\n");
   scanf("%[^'\n']s",arr);

   strlwrX(arr);

   printf("Modified  string is : %s\n",arr);

   return 0;
}