#include <stdio.h>

void Display(char ch)
{
   for(ch>='A'; ch<='Z';ch++)
   {
      printf("%c\t",ch);
   }
   for(ch <='z'; ch>='a';ch--)
   {
      printf("%c\t",ch);
   }
}

int main()
{
   char cValue ='\0';

   printf("Enter the character\n");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}