
#include <stdio.h>

void Display(char ch)
{
   printf("Decimal \t %d\t",ch);
   printf("Ocatal\t %o\t",ch);
   printf("Hex\t %x\t",ch);
}

int main()
{
   char cValue ='\0';

   printf("Enter the character\n");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}