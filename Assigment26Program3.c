
#include <stdio.h>

void strToggleX(char *str)
{
  while( *str != '\0')
  {
   if((*str >= 'a') && (*str<= 'z'))
   {
      *str = *str - 32;
   }
   else if ((*str >= 'A') && (*str <= 'Z'))
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

   strToggleX(arr);

   printf("Modified  string is : %s\n",arr);

   return 0;
}